/*
 * XREFs of MiClearPteAccessed @ 0x1400ADE80
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiSimpleAging @ 0x1401271B8 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 *a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  int v11; // r12d
  __int64 PteShadow; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx

  v6 = 0;
  v11 = 0;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
    goto LABEL_14;
  v11 = 1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_QWORD *)(a2 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
    || (*(_BYTE *)(a1 + 216) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  else
  {
LABEL_14:
    if ( a5 )
    {
      PteShadow = *a3;
      v14 = (unsigned __int64)(a3 + 0x12090482600LL);
      if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(a3, *a3);
      v15 = PteShadow & 0xFFFFFFFFFFFFFFDFuLL;
      *a3 = v15;
      if ( v14 <= 0x7F8 )
        MiWritePteShadow(a3, v15);
      if ( v11 == 1 )
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 = (*(_DWORD *)a4 >> 9) & 7;
      if ( a6 && v16 != 7 )
        MiLogPageAccess(a1, (unsigned __int64)a3, (__int64)a3);
      if ( !v16 )
      {
        MiRemoveEntryWsle(*(_QWORD *)(a1 + 184), a4);
        *a4 = *a4 & 0xFFFFFFFFFFFFF1FFuLL | 0x200;
        MiInsertWsle(v17, a4, 0);
        ++*(_QWORD *)(a1 + 40);
      }
      v18 = *a4;
      if ( (*a4 & 0x800000000000LL) != 0 )
        v19 = v18 | 0xFFFF000000000000uLL;
      else
        v19 = v18 & 0xFFFFFFFFFFFFLL;
      MiInsertTbFlushEntry(a5, v19 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
    }
    else if ( v11 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 1LL;
  }
}
