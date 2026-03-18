/*
 * XREFs of VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0002288 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C00031E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     ?ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z @ 0x1C0014AB4 (-ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z.c)
 */

_DWORD *__fastcall VidSchiFlipImmediateAndCompleteFlipEntry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdi
  struct _VIDSCH_GLOBAL *v13; // rcx
  unsigned int v14; // r11d
  __int64 v15; // rbp
  __int64 v16; // r10
  __int64 v17; // r8
  struct _VIDSCH_DISPLAYING_ALLOCATION *v18; // rdx
  unsigned __int64 v19; // r9
  VIDMM_GLOBAL *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // r11d
  int v24; // r10d
  __int64 v25; // r9
  _DWORD *result; // rax

  v6 = 1160LL * a4;
  v7 = a2;
  v9 = a3;
  v10 = *(_QWORD *)(a1 + 8LL * a2 + 2592);
  v11 = *(_QWORD *)(v10 + 8LL * a3 + 24);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + v6 + 56) + 104LL);
  *(_DWORD *)(v11 + v6 + 1100) = 4;
  VidSchiExecuteMmIoFlip(a1, a2, a3, a4, a5);
  VidSchiUnreferenceDisplayingAllocations(v13, (struct _VIDSCH_PRESENT_INFO *)v10, *(_WORD *)(v10 + 14632));
  v14 = 0;
  *(_WORD *)(v10 + 14632) |= 1 << a3;
  *(_WORD *)(v10 + 14634) = *(_WORD *)(v11 + v6 + 1124);
  if ( *(_DWORD *)(v11 + v6 + 1124) )
  {
    v15 = v9 << 6;
    do
    {
      v16 = *(_QWORD *)(v11 + v6 + 1208);
      v17 = 3 * (v15 + v14);
      v18 = (struct _VIDSCH_DISPLAYING_ALLOCATION *)(v10 + 2344 + 24 * (v15 + v14));
      v19 = (unsigned __int64)(v14 * *(_DWORD *)(v16 + 4)) << 6;
      *(_QWORD *)(v10 + 8 * v17 + 2352) = *(_QWORD *)(v19 + v16 + 24);
      v20 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v19 + v16 + 16) + 96LL);
      *(_QWORD *)v18 = v20;
      *(_QWORD *)(v10 + 8 * v17 + 2360) = v12;
      v21 = *(unsigned __int16 *)(v10 + 14636);
      if ( (*(_DWORD *)(v19 + v16 + 68) & 0x800000) != 0 )
        v22 = v21 | (1 << a3);
      else
        v22 = v21 & ~(1 << a3);
      *(_WORD *)(v10 + 14636) = v22;
      VIDMM_GLOBAL::ReferenceDisplayingAllocation(v20, v18);
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v14 = v23 + 1;
    }
    while ( v14 < *(_DWORD *)(v11 + v6 + 1124) );
  }
  v24 = VidSchiCompleteFlipEntry(a1, a2, a3, a4, a4, 0, 0LL);
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 24LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v12 + 32) + 4LL))
                  + 8 * v7
                  + 520);
  _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8 * v7 + 5128) + 8LL), -v24);
  result = *(_DWORD **)(a1 + 8 * v7 + 5128);
  *result += v24;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 8), -v24);
  *(_DWORD *)v25 += v24;
  return result;
}
