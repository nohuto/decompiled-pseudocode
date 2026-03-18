/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C00132A0
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0008D50 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     Template_pqqpqqqxxq @ 0x1C001442C (Template_pqqpqqqxxq.c)
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  __int64 v3; // r11
  unsigned int *v4; // r15
  __int64 v6; // rbx
  __int64 v8; // r12
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rbp
  char v12; // dl
  __int64 v13; // rsi
  char v14; // al
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int *v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int v26; // eax
  char v27; // cl
  char v28; // dl
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  bool v35; // r8
  unsigned int v36; // r9d
  int v37; // ecx
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+70h] [rbp-68h]
  __int64 v42; // [rsp+80h] [rbp-58h]
  DWORD LowPart; // [rsp+F0h] [rbp+18h]
  int v45; // [rsp+F8h] [rbp+20h]

  LowPart = a3.LowPart;
  v3 = *((unsigned int *)a2 + 29);
  v4 = (unsigned int *)((char *)a2 + 360);
  v6 = *((_QWORD *)a1 + 13);
  v8 = v3;
  v9 = !_BitScanForward((unsigned int *)&v10, (unsigned __int8)*((_DWORD *)a2 + 90));
  v11 = *(_QWORD *)(v6 + 32);
  v12 = -1;
  v13 = *(_QWORD *)(v11 + 8 * v3 + 2640);
  if ( !v9 )
    v12 = v10;
  v14 = v12;
  if ( v12 == -1 )
    v14 = 0;
  v15 = v14;
  v16 = (unsigned int)v14;
  v17 = 280 * v16;
  v42 = v16;
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 && (v41 = *((_DWORD *)a2 + 36), v41 == *(_DWORD *)(v17 + v13 + 112)) )
  {
    v18 = *((_DWORD *)a2 + 37);
  }
  else
  {
    v18 = *((_DWORD *)a2 + 31);
    v41 = 0;
  }
  v45 = v18;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 4 * v3 + 872));
  v19 = *(unsigned int *)(*(_QWORD *)(v6 + 32) + 4LL);
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 24LL) + 8 * v19) + 8 * v3 + 520);
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v3 + 5176) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
  if ( bTracingEnabled )
  {
    v20 = *((_QWORD *)a2 + 22);
    if ( v20 )
    {
      v21 = *((_QWORD *)a1 + 7);
      if ( !v21 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
        LODWORD(v21) = (_DWORD)a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pqqpqqqxxq(
          v20,
          v19,
          v18,
          v21,
          LowPart,
          v3,
          v20,
          v18,
          v15,
          *((_DWORD *)a2 + 46),
          *(_QWORD *)(v17 + v13 + 120),
          *(_QWORD *)(v17 + v13 + 128),
          *((_DWORD *)a2 + 28));
    }
  }
  v22 = (unsigned int *)((char *)a2 + 376);
  if ( !*((_BYTE *)a2 + 348) )
    v22 = v4;
  if ( *(_DWORD *)(v17 + v13 + 148) == 1 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v20, v19);
    v23[3] = *((_QWORD *)a2 + 13);
    v23[4] = *((unsigned int *)a2 + 28);
    v23[5] = v45;
    v23[6] = *((_QWORD *)v22 + 2);
    v23[7] = (v22[13] >> 17) & 0x1F;
    WdLogEvent5_WdPresentTokenEvent(v23);
    *(_DWORD *)(v17 + v13 + 148) = 2;
    *(_DWORD *)(v17 + v13 + 160) = 0;
    v24 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 2664LL);
    *(_QWORD *)(v17 + v13 + 168) = v24;
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 40));
  }
  ++*(_DWORD *)(v11 + 912);
  ++*(_DWORD *)(v6 + 1004);
  ++*(_DWORD *)(v11 + 916);
  ++*(_DWORD *)(v13 + 2324);
  ++*(_DWORD *)(v17 + v13 + 160);
  ++*(_DWORD *)(v13 + 2320);
  if ( (*(_DWORD *)a2 & 0x8000000) != 0 )
    v25 = (unsigned __int8)*v4 | *((unsigned __int8 *)v4 + 1);
  else
    v25 = (1 << *(_DWORD *)(v11 + 124)) - 1;
  v9 = !_BitScanForward((unsigned int *)&v26, v25);
  v27 = -1;
  if ( !v9 )
    v27 = v26;
  while ( v25 )
  {
    ++*(_DWORD *)(280LL * v27 + *(_QWORD *)(v11 + 8 * v8 + 2640) + 156);
    v28 = -1;
    v25 &= ~(1 << v27);
    v9 = !_BitScanForward((unsigned int *)&v29, v25);
    if ( !v9 )
      v28 = v29;
    v27 = v28;
  }
  v30 = *(_QWORD *)(v13 + 8 * v42 + 16);
  v31 = *(unsigned int *)(v30 + 32);
  v32 = v30 + 1144 * v31;
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v32 + 56));
  *(_QWORD *)(v32 + 1160) = *((_QWORD *)a2 + 12);
  v33 = *((_QWORD *)a2 + 13);
  *(_DWORD *)(v32 + 1148) |= 0x20u;
  *(_QWORD *)(v32 + 1168) = v33;
  *(_DWORD *)(v32 + 1148) ^= ((unsigned __int8)*(_DWORD *)(v32 + 1148) ^ (unsigned __int8)(*(_DWORD *)a2 >> 23)) & 0x10;
  v34 = *((_DWORD *)a2 + 36);
  if ( v34 != *(_DWORD *)(v17 + v13 + 116) )
  {
    *(_DWORD *)(v17 + v13 + 116) = v34;
    *(_DWORD *)(v32 + 1148) |= 0x40u;
  }
  *(_DWORD *)(v32 + 1096) = LowPart;
  *(_DWORD *)(v32 + 1100) = 1;
  *(_DWORD *)(v32 + 1104) = *((_DWORD *)a2 + 28);
  *(_QWORD *)(v32 + 576) = *((_QWORD *)a1 + 19);
  *(_BYTE *)(v32 + 1112) = (*(_DWORD *)a2 & 0x20) != 0;
  v35 = *(_DWORD *)(v11 + 2160) != 1 && (*(_DWORD *)(v11 + 2160) == 2 || (*(_DWORD *)a2 & 0x20000000) != 0);
  v36 = 0;
  *(_DWORD *)(v32 + 1148) ^= (*(_DWORD *)(v32 + 1148) ^ (*(_DWORD *)a2 >> 20)) & 1;
  v37 = *(_DWORD *)(v32 + 1148) ^ ((unsigned __int8)*(_DWORD *)(v32 + 1148) ^ (unsigned __int8)(*(_DWORD *)a2 >> 20)) & 2;
  *(_DWORD *)(v32 + 1148) = v37;
  v38 = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)(*(_DWORD *)a2 >> 20)) & 4;
  *(_DWORD *)(v32 + 1148) = v38;
  *(_DWORD *)(v32 + 1148) = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(*(_DWORD *)a2 >> 20)) & 8;
  *(_QWORD *)(v32 + 1176) = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v32 + 1184) = *((_QWORD *)a2 + 4);
  *(_DWORD *)(v32 + 1124) = *((_DWORD *)a2 + 35);
  *(_DWORD *)(v32 + 1120) = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)a2 + 35) )
  {
    do
    {
      v39 = 8LL * v36;
      v40 = *(_QWORD *)((char *)a2 + v39 + *((unsigned int *)a2 + 88));
      *(_QWORD *)(v39 + v32 + 56) = v40;
      ++*(_DWORD *)(v40 + 768);
      _InterlockedAdd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v4[14 * v36 * v4[1] + 4] + 96LL) + 16LL) + 8LL),
        1u);
      ++v36;
    }
    while ( v36 < *((_DWORD *)a2 + 35) );
  }
  v9 = *(_BYTE *)(v32 + 1112) == 0;
  *(_DWORD *)(v32 + 1152) = v41;
  if ( v9 )
  {
    if ( v45 )
    {
      *(_DWORD *)(v32 + 1108) = v45 - 1;
    }
    else
    {
      *(_DWORD *)(v32 + 1108) = 0;
      *(_DWORD *)(v32 + 1148) |= 0x80u;
      if ( v35 )
        *(_DWORD *)(v32 + 1148) |= 0x100u;
    }
  }
  else
  {
    *(_DWORD *)(v32 + 1108) = 0;
    if ( v35 )
      *(_DWORD *)(v32 + 1148) |= 0x180u;
  }
  memmove(*(void **)(v32 + 1192), v4, v4[3]);
  *(_DWORD *)(v32 + 1116) = *((_DWORD *)a2 + 34);
  if ( (*(_DWORD *)a2 & 0x1000) != 0 )
    *(_BYTE *)(v32 + 1113) = 1;
  *(_DWORD *)(v30 + 32) = ((_BYTE)v31 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 920));
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 2328));
  VidSchUnwaitFlipQueue(a1);
}
