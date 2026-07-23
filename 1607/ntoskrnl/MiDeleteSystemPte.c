/*
 * XREFs of MiDeleteSystemPte @ 0x1401234B4
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140123278 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSystemPte @ 0x1401234B4 (MiDeleteSystemPte.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiDeleteSystemPte @ 0x1401234B4 (MiDeleteSystemPte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteSystemPte(ULONG_PTR a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // rdi
  unsigned __int64 v7; // rax
  BOOL v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  v7 = MI_READ_PTE_LOCK_FREE(a1);
  v21[0] = v7;
  if ( v7 )
  {
    while ( (v7 & 1) == 0 )
    {
      if ( (v7 & 0x800) == 0 )
      {
        MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, v7, 1LL);
        *(_QWORD *)a1 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(a1, v10) )
          MiWritePteShadow(v11, 0LL);
        goto LABEL_9;
      }
      v9 = MiTryDeleteTransitionPte(a1);
      if ( v9 != 1 )
      {
        if ( v9 == 3 )
          ++a3[1];
LABEL_9:
        ++a3[3];
        v8 = 1;
        goto LABEL_13;
      }
      v7 = MI_READ_PTE_LOCK_FREE(a1);
      v21[0] = v7;
      if ( !v7 )
        goto LABEL_13;
    }
    v12 = MI_GET_PAGE_FRAME_FROM_PTE(v21);
    MiDeleteValidSystemPage((_QWORD *)a1, 0, (__int64)a3);
    MiInsertTbFlushEntry(a2, (__int64)(a1 << 25) >> 16, 1LL, 0);
    v13 = 48 * v12;
    v4 = a4;
    v8 = v13 - 0x58000000000LL != qword_1403276C0;
  }
LABEL_13:
  if ( a1 >= (((unsigned __int64)qword_1403268F0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a1 < (((unsigned __int64)qword_1403268E8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v8 = 0;
  }
  if ( v8 )
    ++*a3;
  v14 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 0xFFFFF68000000000uLL;
  if ( v14 != 0xFFFFF6FB7DBEDF68uLL )
  {
    v21[0] = MI_READ_PTE_LOCK_FREE(v14);
    v16 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(v21) + 24);
    result = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v16 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      v18 = ((v14 << 25) - (v17 << 25)) >> 16;
      do
      {
        result = MI_READ_PTE_LOCK_FREE(v18);
        if ( result && (result & 1) == 0 )
          break;
        v18 += 8LL;
      }
      while ( (v18 & v20) != 0 );
      if ( (v18 & v20) == 0 )
      {
        result = MiDeleteSystemPte(v14, v19, a3, v4);
        *v4 = 1;
      }
    }
  }
  return result;
}
