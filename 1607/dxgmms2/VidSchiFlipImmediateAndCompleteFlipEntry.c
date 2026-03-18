/*
 * XREFs of VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C0002D90 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001152C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 */

_DWORD *__fastcall VidSchiFlipImmediateAndCompleteFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rbp
  struct _VIDSCH_GLOBAL *v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  int v21; // r10d
  __int64 v22; // r9
  _DWORD *result; // rax
  __int64 v24; // [rsp+80h] [rbp+8h]

  v7 = 1224LL * a4;
  v8 = a2;
  v10 = a3;
  v11 = *((_QWORD *)a1 + a2 + 371);
  v12 = *(_QWORD *)(v11 + 8LL * a3 + 24);
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + v12 + 56) + 104LL);
  *(_DWORD *)(v7 + v12 + 1100) = 4;
  VidSchiExecuteMmIoFlip(a1, a2, a3, a4, a5);
  VidSchiUnreferenceDisplayingAllocations(v13, (struct _VIDSCH_PRESENT_INFO *)v11, *(_WORD *)(v11 + 18736));
  v14 = 0;
  *(_WORD *)(v11 + 18736) |= 1 << a3;
  *(_WORD *)(v11 + 18738) = *(_WORD *)(v7 + v12 + 1124);
  if ( *(_DWORD *)(v7 + v12 + 1124) )
  {
    v15 = v10 << 6;
    do
    {
      v16 = 32 * (v15 + v14);
      *(_QWORD *)(v16 + v11 + 2352) = *(_QWORD *)(*(_QWORD *)(v7 + v12 + 1208)
                                                + *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 4LL)
                                                * ((8 * *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                                                + 48LL * v14 * *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 4LL)
                                                + 24);
      v17 = *(_QWORD *)(v7 + v12 + 1208);
      *(_QWORD *)(v16 + v11 + 2360) = *(_QWORD *)(*(_QWORD *)(v17
                                                            + *(_DWORD *)(v17 + 4)
                                                            * ((8 * *(_DWORD *)(v17 + 8) + 167) & 0xFFFFFFF8)
                                                            + 48 * (v14 * *(_DWORD *)(v17 + 4) + 1LL))
                                                + 96LL);
      v18 = *(unsigned __int16 *)(v11 + 18740);
      if ( *(_BYTE *)(*(_QWORD *)(v7 + v12 + 1208)
                    + *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 4LL)
                    * ((8 * *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                    + 48LL * v14 * *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 4LL)
                    + 56) )
        v19 = v18 | (1 << a3);
      else
        v19 = v18 & ~(1 << a3);
      *(_WORD *)(v11 + 18740) = v19;
      *(_WORD *)(v16 + v11 + 2376) = *(_WORD *)(*(_QWORD *)(v7 + v12 + 1208)
                                              + *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 4LL)
                                              * ((8 * *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                                              + 48LL * v14 * *(_DWORD *)(*(_QWORD *)(v7 + v12 + 1208) + 4LL)
                                              + 32);
      v20 = *(_QWORD *)(v7 + v12 + 1208);
      *(_QWORD *)(32 * (v15 + v14 + 74) + v11) = *(_QWORD *)(v20
                                                           + *(_DWORD *)(v20 + 4)
                                                           * ((8 * *(_DWORD *)(v20 + 8) + 167) & 0xFFFFFFF8)
                                                           + 48LL * v14 * *(_DWORD *)(v20 + 4)
                                                           + 40);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v16 + v11 + 2360) + 16LL) + 8LL));
      ++v14;
    }
    while ( v14 < *(_DWORD *)(v7 + v12 + 1124) );
  }
  v21 = VidSchiCompleteFlipEntry((__int64)a1, a2, a3, a4, a4, 0, 0LL);
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 40) + 24LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v24 + 32) + 4LL))
                  + 8 * v8
                  + 520);
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + v8 + 688) + 8LL), -v21);
  result = (_DWORD *)*((_QWORD *)a1 + v8 + 688);
  *result += v21;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), -v21);
  *(_DWORD *)v22 += v21;
  return result;
}
