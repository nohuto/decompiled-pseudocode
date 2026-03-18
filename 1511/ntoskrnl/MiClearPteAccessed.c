/*
 * XREFs of MiClearPteAccessed @ 0x1400B72A0
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiSimpleAging @ 0x1400EB918 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 *a3, _DWORD *a4, __int64 a5, int a6)
{
  int v6; // r14d
  unsigned __int64 v12; // rbx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0
    && ((v6 = 1, MiLockPageAtDpcInline(a2, a2, (__int64)a3), (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1)
     && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
     || (*(_BYTE *)(a1 + 216) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  else
  {
    if ( a5 )
    {
      v12 = MI_READ_PTE_LOCK_FREE(a3) & 0xFFFFFFFFFFFFFFDFuLL;
      *a3 = v12;
      if ( (unsigned int)MiPteInShadowRange(a3) )
        MiWritePteShadow(a3, v12);
      if ( v6 == 1 )
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = (*a4 >> 9) & 7;
      if ( a6 && v13 != 7 )
        MiLogPageAccess(a1, (__int64)a3);
      if ( !v13 )
      {
        MiRemoveEntryWsle(*(_QWORD *)(a1 + 184), a4);
        *(_QWORD *)a4 = *(_QWORD *)a4 & 0xFFFFFFFFFFFFF1FFuLL | 0x200;
        MiInsertWsle(v14, a4, 0LL);
        ++*(_QWORD *)(a1 + 40);
      }
      v15 = *(_QWORD *)a4;
      if ( (*(_QWORD *)a4 & 0x800000000000LL) != 0 )
        v16 = v15 | 0xFFFF000000000000uLL;
      else
        v16 = v15 & 0xFFFFFFFFFFFFLL;
      MiInsertTbFlushEntry(a5, v16 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    }
    else if ( v6 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 1LL;
  }
}
