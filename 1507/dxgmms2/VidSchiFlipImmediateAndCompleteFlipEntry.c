/*
 * XREFs of VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 * Callees:
 *     ?ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z @ 0x1C000F204 (-ReferenceDisplayingAllocation@VIDMM_GLOBAL@@QEAAXAEAU_VIDSCH_DISPLAYING_ALLOCATION@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00138A0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 */

_DWORD *__fastcall VidSchiFlipImmediateAndCompleteFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
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
  unsigned int v14; // r10d
  __int64 v15; // rbp
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // r8
  VIDMM_GLOBAL *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // r10d
  int v23; // r10d
  __int64 v24; // r9
  _DWORD *result; // rax

  v6 = 1144LL * a4;
  v7 = a2;
  v9 = a3;
  v10 = *((_QWORD *)a1 + a2 + 330);
  v11 = *(_QWORD *)(v10 + 8LL * a3 + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + v6 + 56) + 104LL);
  *(_DWORD *)(v11 + v6 + 1100) = 4;
  VidSchiExecuteMmIoFlip((__int64)a1, a2, a3, a4, a5);
  VidSchiUnreferenceDisplayingAllocations(v13, (struct _VIDSCH_PRESENT_INFO *)v10, *(_WORD *)(v10 + 14624));
  v14 = 0;
  *(_WORD *)(v10 + 14624) |= 1 << a3;
  *(_WORD *)(v10 + 14626) = *(_WORD *)(v11 + v6 + 1120);
  if ( *(_DWORD *)(v11 + v6 + 1120) )
  {
    v15 = v9 << 6;
    do
    {
      v16 = *(_QWORD *)(v11 + v6 + 1192);
      v17 = v10 + 24 * (v15 + v14);
      v18 = 56LL * v14 * *(_DWORD *)(v16 + 4);
      *(_QWORD *)(v17 + 2344) = *(_QWORD *)(v18 + v16 + 24);
      v19 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v18 + v16 + 16) + 96LL);
      *(_QWORD *)(v17 + 2352) = v12;
      *(_QWORD *)(v17 + 2336) = v19;
      v20 = *(unsigned __int16 *)(v10 + 14628);
      if ( (*(_DWORD *)(v18 + v16 + 68) & 0x800000) != 0 )
        v21 = v20 | (1 << a3);
      else
        v21 = v20 & ~(1 << a3);
      *(_WORD *)(v10 + 14628) = v21;
      VIDMM_GLOBAL::ReferenceDisplayingAllocation(v19, (struct _VIDSCH_DISPLAYING_ALLOCATION *)(v17 + 2336));
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v14 = v22 + 1;
    }
    while ( v14 < *(_DWORD *)(v11 + v6 + 1120) );
  }
  v23 = VidSchiCompleteFlipEntry(a1, a2, a3, a4, a4, 0, 0LL);
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 24LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v12 + 32) + 4LL))
                  + 8 * v7
                  + 520);
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + v7 + 647) + 8LL), -v23);
  result = (_DWORD *)*((_QWORD *)a1 + v7 + 647);
  *result += v23;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), -v23);
  *(_DWORD *)v24 += v23;
  return result;
}
