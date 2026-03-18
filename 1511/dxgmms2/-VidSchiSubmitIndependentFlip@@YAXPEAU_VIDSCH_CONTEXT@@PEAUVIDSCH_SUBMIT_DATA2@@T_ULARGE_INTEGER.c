/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001000
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0001498 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     Template_pqqpqqqxxqq @ 0x1C001FE8C (Template_pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  unsigned int *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v8; // rbp
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rax
  char v12; // dl
  char v13; // al
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  char v19; // cl
  char v20; // dl
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  bool v25; // r8
  unsigned int v26; // r9d
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r8d
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r9
  char v37; // [rsp+70h] [rbp-68h]
  int v38; // [rsp+74h] [rbp-64h]
  __int64 v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+88h] [rbp-50h]
  unsigned int *v41; // [rsp+E0h] [rbp+8h]
  unsigned int v42; // [rsp+E0h] [rbp+8h]
  int v43; // [rsp+E8h] [rbp+10h]
  DWORD LowPart; // [rsp+F0h] [rbp+18h]
  int v45; // [rsp+F8h] [rbp+20h]

  LowPart = a3.LowPart;
  v11 = *((unsigned int *)a2 + 29);
  v3 = (unsigned int *)((char *)a2 + 360);
  v4 = *((_QWORD *)a1 + 13);
  v5 = (unsigned int)v11;
  v38 = *((_DWORD *)a2 + 29);
  v8 = *(_QWORD *)(v4 + 32);
  v9 = *(_QWORD *)(v8 + 8 * v11 + 2592);
  v10 = !_BitScanForward((unsigned int *)&v11, (unsigned __int8)*((_DWORD *)a2 + 90));
  v12 = -1;
  if ( !v10 )
    v12 = v11;
  v13 = v12;
  if ( v12 == -1 )
    v13 = 0;
  v14 = (unsigned int)v13;
  v15 = 280 * v14;
  v37 = v13;
  v39 = v14;
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 && (v45 = *((_DWORD *)a2 + 36), v45 == *(_DWORD *)(v15 + v9 + 120)) )
  {
    v43 = *((_DWORD *)a2 + 37);
  }
  else
  {
    v43 = *((_DWORD *)a2 + 31);
    v45 = 0;
  }
  _InterlockedAdd((volatile signed __int32 *)(v4 + 4 * v5 + 1000), 1u);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL))
                  + 8 * v5
                  + 520);
  if ( (*(_DWORD *)a2 & 0x80u) == 0 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v5 + 5128) + 8LL), 1u);
  _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
  if ( *((_BYTE *)a2 + 348) )
    v41 = (unsigned int *)((char *)a2 + 376);
  else
    v41 = v3;
  if ( *(_DWORD *)(v15 + v9 + 156) == 1 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v33[3] = *((_QWORD *)a2 + 13);
    v33[4] = *((unsigned int *)a2 + 28);
    v33[5] = v43;
    v33[6] = *((_QWORD *)v41 + 2);
    v33[7] = (v41[13] >> 17) & 0x1F;
    WdLogEvent5_WdPresentTokenEvent(v33);
    *(_DWORD *)(v15 + v9 + 156) = 2;
    *(_DWORD *)(v15 + v9 + 168) = 0;
    v34 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 2664LL);
    *(_QWORD *)(v15 + v9 + 176) = v34;
    _InterlockedAdd((volatile signed __int32 *)(v34 + 40), 1u);
    v14 = v39;
  }
  ++*(_DWORD *)(v8 + 920);
  ++*(_DWORD *)(v4 + 1132);
  ++*(_DWORD *)(v8 + 924);
  ++*(_DWORD *)(v9 + 2332);
  ++*(_DWORD *)(v15 + v9 + 168);
  ++*(_DWORD *)(v9 + 2328);
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
    v17 = (unsigned __int8)*v3 | *((unsigned __int8 *)v3 + 1);
  else
    v17 = (1 << *(_DWORD *)(v8 + 124)) - 1;
  v10 = !_BitScanForward((unsigned int *)&v18, v17);
  v19 = -1;
  if ( !v10 )
    v19 = v18;
  while ( v17 )
  {
    ++*(_DWORD *)(280LL * v19 + *(_QWORD *)(v8 + 8 * v5 + 2592) + 164);
    v20 = -1;
    v17 &= ~(1 << v19);
    v10 = !_BitScanForward((unsigned int *)&v21, v17);
    if ( !v10 )
      v20 = v21;
    v19 = v20;
  }
  v40 = *(_QWORD *)(v9 + 8 * v14 + 24);
  v42 = *(_DWORD *)(v40 + 32);
  v22 = v40 + 1160LL * v42;
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v22 + 56));
  *(_QWORD *)(v22 + 1176) = *((_QWORD *)a2 + 12);
  v23 = *((_QWORD *)a2 + 13);
  *(_DWORD *)(v22 + 1164) |= 0x20u;
  *(_QWORD *)(v22 + 1184) = v23;
  *(_DWORD *)(v22 + 1164) ^= ((unsigned __int8)*(_DWORD *)(v22 + 1164) ^ (unsigned __int8)(*(_DWORD *)a2 >> 22)) & 0x10;
  v24 = *((_DWORD *)a2 + 36);
  if ( v24 != *(_DWORD *)(v15 + v9 + 124) )
  {
    *(_DWORD *)(v15 + v9 + 124) = v24;
    *(_DWORD *)(v22 + 1164) |= 0x40u;
  }
  *(_DWORD *)(v22 + 1096) = LowPart;
  *(_DWORD *)(v22 + 1100) = 1;
  *(_DWORD *)(v22 + 1104) = *((_DWORD *)a2 + 28);
  *(_QWORD *)(v22 + 576) = *((_QWORD *)a1 + 19);
  *(_BYTE *)(v22 + 1112) = (*(_DWORD *)a2 & 0x10) != 0;
  v25 = *(_DWORD *)(v8 + 2112) != 1 && (*(_DWORD *)(v8 + 2112) == 2 || (*(_DWORD *)a2 & 0x10000000) != 0);
  v26 = 0;
  *(_DWORD *)(v22 + 1164) ^= (*(_DWORD *)(v22 + 1164) ^ (*(_DWORD *)a2 >> 19)) & 1;
  v27 = *(_DWORD *)(v22 + 1164) ^ ((unsigned __int8)*(_DWORD *)(v22 + 1164) ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 2;
  *(_DWORD *)(v22 + 1164) = v27;
  v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 4;
  *(_DWORD *)(v22 + 1164) = v28;
  *(_DWORD *)(v22 + 1164) = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(*(_DWORD *)a2 >> 19)) & 8;
  *(_QWORD *)(v22 + 1192) = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v22 + 1200) = *((_QWORD *)a2 + 4);
  *(_DWORD *)(v22 + 1128) = *((_DWORD *)a2 + 35);
  *(_DWORD *)(v22 + 1124) = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)a2 + 35) )
  {
    do
    {
      v29 = 8LL * v26;
      v30 = *(_QWORD *)((char *)a2 + v29 + *((unsigned int *)a2 + 88));
      *(_QWORD *)(v29 + v22 + 56) = v30;
      ++*(_DWORD *)(v30 + 768);
      _InterlockedAdd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v3[16 * (unsigned __int64)(v26 * v3[1]) + 4]
                                                          + 96LL)
                                              + 16LL)
                                  + 8LL),
        1u);
      ++v26;
    }
    while ( v26 < *((_DWORD *)a2 + 35) );
  }
  v10 = *(_BYTE *)(v22 + 1112) == 0;
  *(_DWORD *)(v22 + 1168) = v45;
  if ( v10 )
  {
    if ( v43 )
    {
      *(_DWORD *)(v22 + 1108) = v43 - 1;
    }
    else
    {
      *(_DWORD *)(v22 + 1108) = 0;
      *(_DWORD *)(v22 + 1164) |= 0x80u;
      if ( v25 )
        *(_DWORD *)(v22 + 1164) |= 0x100u;
    }
  }
  else
  {
    *(_DWORD *)(v22 + 1108) = 0;
    if ( v25 )
      *(_DWORD *)(v22 + 1164) |= 0x180u;
  }
  memmove(*(void **)(v22 + 1208), v3, v3[3]);
  *(_DWORD *)(v22 + 1116) = *((_DWORD *)a2 + 34);
  *(_DWORD *)(v22 + 1120) = *((_DWORD *)a2 + 34);
  if ( (*(_DWORD *)a2 & 0x800) != 0 )
    *(_BYTE *)(v22 + 1113) = 1;
  *(_DWORD *)(v40 + 32) = ((_BYTE)v42 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 928));
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 2336));
  if ( bTracingEnabled )
  {
    v35 = *((_QWORD *)a2 + 22);
    if ( v35 )
    {
      v36 = *((_QWORD *)a1 + 7);
      if ( !v36 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
        LODWORD(v36) = (_DWORD)a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pqqpqqqxxqq(
          v35,
          v31,
          v32,
          v36,
          LowPart,
          v38,
          v35,
          v43,
          v37,
          *((_DWORD *)a2 + 46),
          *(_QWORD *)(v15 + v9 + 128),
          *(_QWORD *)(v15 + v9 + 136),
          *((_DWORD *)a2 + 28),
          BYTE1(*(_DWORD *)(v22 + 1164)) & 1);
    }
  }
  VidSchUnwaitFlipQueue(a1);
}
