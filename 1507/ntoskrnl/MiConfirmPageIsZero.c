/*
 * XREFs of MiConfirmPageIsZero @ 0x1400E6230
 * Callers:
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiConfirmPageIsZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int16 *v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rsi
  unsigned int v25; // ebx
  char v26; // dl
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    v5 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v6 = MiMapPageInHyperSpaceWorker((v5 >> 63) + v5, 0LL, 0x80000000LL);
    v7 = (_QWORD *)v6;
    v8 = (_QWORD *)(v6 + 4088);
    do
    {
      if ( *v7 | *v8 )
        break;
      ++v7;
      --v8;
    }
    while ( v7 <= v8 );
    MiUnmapPageInHyperSpaceWorker(v6, 0x11u);
    if ( v7 <= v8 )
      return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( (v10 & 2) != 0 )
  {
    MiReverseSwizzleInvalidPte(v10, a2, a3, a4);
    v13 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    v10 = v14;
    v12 = *(_QWORD *)&v13[4 * ((unsigned __int16)v14 >> 12) + 2672];
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
  }
  v15 = MiTransferSoftwarePte(v10, v12, v11);
  v16 = v15;
  if ( (v17 & 8) != 0 )
    v16 = v15 | 8;
  v18 = *(_QWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v18 & 0x200000000000000LL) != 0 )
  {
    v20 = v18 & 0xFFFFFFFFFLL;
    v21 = 48 * v20 - 0x58000000000LL;
    v22 = MiMapPageInHyperSpaceWorker(v20, 0LL, 0x80000000LL);
    v23 = (v19 >> 3) & 0x1FF;
    *(_QWORD *)(v22 + 8 * v23) = v16;
    v24 = v22 + 8 * v23;
    if ( (unsigned __int64)(v24 + 0x90482413000LL) <= 0x7F8 )
      MiWritePteShadow(v24, v16);
    MiUnmapPageInHyperSpaceWorker(v24, 0x11u);
    v25 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
      while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
    }
    v26 = *(_BYTE *)(v21 + 34);
    if ( (v26 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v21 + 0x58000000000LL) / 48, v26 & 7, *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v27 = *(_QWORD *)(v21 + 24);
    v28 = (v27 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v21 + 24) = v27 ^ (v28 ^ v27) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v27 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v21, v28);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    *(_QWORD *)v19 = v16;
    if ( v19 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v19, v16);
  }
  return 1LL;
}
