/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0001460
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFlushQueuePacket @ 0x1C0017668 (VidSchiFlushQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012658 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00126B4 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0012B68 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(__int64 a1)
{
  __int64 v1; // rbp
  const struct VIDSCH_SUBMIT_DATA2 *v2; // rdi
  union _ULARGE_INTEGER v3; // rbx
  bool v4; // si
  struct _VIDSCH_GLOBAL *v5; // r12
  __int64 v6; // r13
  bool v7; // zf
  int v8; // eax
  __int64 v9; // r14
  char v10; // r8
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = (const struct VIDSCH_SUBMIT_DATA2 *)(a1 + 256);
  v3 = *(union _ULARGE_INTEGER *)(a1 + 96);
  v4 = 0;
  v5 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v1 + 104) + 32LL);
  if ( (*(_DWORD *)(a1 + 256) & 0x2000000) == 0 )
    goto LABEL_2;
  v6 = *(unsigned int *)(a1 + 372);
  v7 = !_BitScanForward((unsigned int *)&v8, (unsigned __int8)*(_DWORD *)(a1 + 616));
  v9 = *((_QWORD *)v5 + v6 + 330);
  v10 = -1;
  if ( !v7 )
    v10 = v8;
  v11 = v10;
  if ( v10 == -1 )
    v11 = 0;
  v12 = (unsigned int)v11;
  v13 = 280 * v12;
  v14 = v12;
  if ( *(_QWORD *)(280 * v12 + v9 + 176) == 280 * v12 + v9 + 176 )
  {
    if ( *(_DWORD *)(v13 + v9 + 148) != 1 || !VidSchiCheckTokenIndependentFlipCondition(v5, v2) )
      goto LABEL_2;
    if ( !*(_BYTE *)(v13 + v9 + 145) )
    {
      *(_BYTE *)(v13 + v9 + 145) = 1;
      v4 = 1;
LABEL_2:
      VidSchiProcessPresentHistoryToken((struct _VIDSCH_CONTEXT *)v1, v2, v3, v4);
      return;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition(v5, v6, v14) )
      goto LABEL_2;
  }
  VidSchiPostponePresentHistoryToken((struct _VIDSCH_CONTEXT *)v1, v2, v3);
}
