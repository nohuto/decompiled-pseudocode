/*
 * XREFs of MiGetPhysicalAddress @ 0x1401042C0
 * Callers:
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 *     MmMapErrataPage @ 0x140784E48 (MmMapErrataPage.c)
 * Callees:
 *     MiSetNonPagedPoolNoSteal @ 0x140125534 (MiSetNonPagedPoolNoSteal.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int16 v11; // bx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-60h]
  unsigned __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]

  *a3 = 0;
  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0 )
  {
    v6 = *(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v6 & 0x81) == 0x81 )
    {
      *a3 = 1;
      v7 = ((v6 >> 12) & 0xFFFFFFFFFLL) + ((a1 >> 12) & 0x1FF);
LABEL_15:
      v14 = v7 << 12;
      result = 1LL;
      LODWORD(v14) = (a1 & 0xFFF) + v14;
      *a2 = v14;
      return result;
    }
  }
  v8 = 3;
  v15 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(*(&v15 + (unsigned int)--v8));
    v14 = v9;
    if ( (v9 & 1) == 0 )
      return 0LL;
  }
  while ( v8 );
  if ( (v9 & 0x80u) != 0LL )
  {
    v7 = ((a1 >> 12) & 0x1FF) + (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFLL);
    goto LABEL_14;
  }
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = MI_READ_PTE_LOCK_FREE(v10);
  v11 = v14;
  if ( (v14 & 1) != 0 )
  {
    if ( a1 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      MiSetNonPagedPoolNoSteal(v10);
      v12 = MI_READ_PTE_LOCK_FREE(v10);
      v11 = v12;
      v14 = v12;
    }
    v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v14);
    if ( (v11 & 0x800) == 0 )
      goto LABEL_15;
LABEL_14:
    *a3 = 1;
    goto LABEL_15;
  }
  return 0LL;
}
