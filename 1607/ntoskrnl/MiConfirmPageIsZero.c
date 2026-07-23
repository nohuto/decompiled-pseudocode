/*
 * XREFs of MiConfirmPageIsZero @ 0x14001D510
 * Callers:
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiConfirmPageIsZero(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int PageFileReservationOffset; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  char v19; // r11
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( (a2 & 2) != 0 )
    goto LABEL_10;
  v3 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
  v5 = (_QWORD *)v3;
  v6 = (_QWORD *)(v3 + 4088);
  do
  {
    if ( *v5 | *v6 )
      break;
    ++v5;
    --v6;
  }
  while ( v5 <= v6 );
  LOBYTE(v4) = 17;
  MiUnmapPageInHyperSpaceWorker(v3, v4, 0x80000000LL);
  if ( v5 <= v6 )
    return 0LL;
LABEL_10:
  v8 = *(_QWORD *)(a1 + 16);
  if ( (v8 & 2) != 0 )
  {
    PageFileReservationOffset = MiGetPageFileReservationOffset(a1 + 16);
    v15 = MiPartitionIdToPointer(
            ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF,
            v13,
            PageFileReservationOffset,
            v14);
    v9 = 2LL;
    v11 = *(_QWORD *)(v15 + 8LL * ((unsigned __int16)v8 >> 12) + 6304);
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
  }
  v16 = MiTransferSoftwarePte(v8, v11, v10, v9);
  v18 = v16;
  if ( (v19 & 8) != 0 )
    v18 = v16 | 8;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v20 & 0x200000000000000LL) != 0 )
  {
    v24 = v20 & 0xFFFFFFFFFLL;
    v25 = 48 * v24 - 0x58000000000LL;
    v26 = MiMapPageInHyperSpaceWorker(v24, 0LL, 0x80000000LL);
    v27 = (v21 >> 3) & 0x1FF;
    *(_QWORD *)(v26 + 8LL * (unsigned int)v27) = v18;
    if ( (unsigned int)MiPteInShadowRange(v26 + 8LL * (unsigned int)v27, v28) )
      MiWritePteShadow(v30, v18);
    LOBYTE(v29) = 17;
    MiUnmapPageInHyperSpaceWorker(v31, v29, 0x80000000LL);
    MiLockNestedPageAtDpcInline(v25);
    MiDecrementShareCount(v25);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *(_QWORD *)v21 = v18;
    if ( (unsigned int)MiPteInShadowRange(v22, v17) )
    {
      MiWritePteShadow(v23, v18);
      return 1LL;
    }
  }
  return 1LL;
}
