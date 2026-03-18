/*
 * XREFs of MiClearPteAccessed @ 0x1400E1EF0
 * Callers:
 *     MiSimpleAging @ 0x1400AC264 (MiSimpleAging.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140100DD4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140129C50 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCrcStillIntact @ 0x1401F94D4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiInsertWsle @ 0x1400E2090 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E2580 (MiRemoveEntryWsle.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 *a3, _DWORD *a4, __int64 a5, int a6)
{
  int v6; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0
    && ((v6 = 1, MiLockPageAtDpcInline(a2), (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1)
     && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
     || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  else
  {
    if ( a5 )
    {
      v12 = MI_READ_PTE_LOCK_FREE(a3);
      *a3 = v12 & 0xFFFFFFFFFFFFFFDFuLL;
      if ( (unsigned int)MiPteInShadowRange(a3, v12 & 0xFFFFFFFFFFFFFFDFuLL) )
        MiWritePteShadow(v14, v13);
      if ( v6 == 1 )
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = (*a4 >> 9) & 7;
      if ( a6 && v15 != 7 )
        MiLogPageAccess(a1, (__int64)a3);
      if ( !v15 )
      {
        MiRemoveEntryWsle(a1, a4);
        *(_QWORD *)a4 = *(_QWORD *)a4 & 0xFFFFFFFFFFFFF1FFuLL | 0x200;
        MiInsertWsle(a1, a4, 0LL);
        ++*(_QWORD *)(a1 + 40);
      }
      v16 = *(_QWORD *)a4;
      if ( (*(_QWORD *)a4 & 0x800000000000LL) != 0 )
        v17 = v16 | 0xFFFF000000000000uLL;
      else
        v17 = v16 & 0xFFFFFFFFFFFFLL;
      MiInsertTbFlushEntry(a5, v17 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    }
    else if ( v6 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 1LL;
  }
}
