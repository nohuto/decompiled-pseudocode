/*
 * XREFs of MiSwapStackPageNoDpc @ 0x14011FF4C
 * Callers:
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r9
  ULONG_PTR v8; // r12
  __int64 v9; // rbx
  signed __int64 PteShadow; // rax
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  unsigned int v13; // ebp
  char v14; // cl

  v6 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (__int64)(v6 << 25) >> 16;
  v8 = (a2 + 0x58000000000LL) / 48;
  v9 = (a3 + 0x58000000000LL) / 48;
  PteShadow = *(_QWORD *)v6;
  if ( v6 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
  v11 = PteShadow & 0xFFFFFFFFFFFFFFDFuLL;
  if ( PteShadow != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v6,
                      PteShadow & 0xFFFFFFFFFFFFFFDFuLL,
                      PteShadow) )
    return 0LL;
  KeFlushSingleTb(v7, 0, 2);
  v13 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
  }
  MiCopyPfnEntry(a3, a2);
  MiCopyPage((a3 + 0x58000000000LL) / 48, v8, a1, 4);
  if ( v11 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)v6,
                v11 ^ (v11 ^ (v9 << 12)) & 0xFFFFFFFFF000LL | 0x20,
                v11) )
  {
    *(_QWORD *)(a3 + 16) = MiMakeDemandZeroPte(4LL);
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  result = 1LL;
  *(_BYTE *)(a2 + 34) = v14;
  return result;
}
