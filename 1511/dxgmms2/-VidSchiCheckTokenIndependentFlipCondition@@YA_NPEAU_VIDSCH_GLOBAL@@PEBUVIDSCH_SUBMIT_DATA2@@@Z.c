/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C000163C
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0021DD0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2,
        __int64 a3)
{
  bool v4; // zf
  unsigned int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rax

  if ( (*((_BYTE *)a2 + 3) & 1) != 0 )
  {
    v4 = !_BitScanForward(&v5, (unsigned __int8)*((_DWORD *)a2 + 90));
    v6 = *((_QWORD *)a1 + *((unsigned int *)a2 + 29) + 324);
    v7 = 0xFFFFFFFFLL;
    if ( !v4 )
      v7 = v5;
    v8 = v7;
    if ( (_BYTE)v7 == 0xFF )
      v8 = 0;
    v9 = (unsigned int)v8;
    v10 = 280 * v9;
    if ( *(_DWORD *)(v6 + 280 * v9 + 128) == *((_DWORD *)a2 + 38) )
    {
      v9 = *((unsigned int *)a2 + 39);
      if ( *(_DWORD *)(v6 + v10 + 132) == (_DWORD)v9 )
      {
        v9 = *((_QWORD *)a2 + 20);
        if ( *(_QWORD *)(v6 + v10 + 136) == v9 )
        {
          v9 = *((_QWORD *)a2 + 21);
          if ( *(_QWORD *)(v6 + v10 + 144) == v9 )
            return 1;
        }
      }
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v9, v7, v10, v6);
    v13[3] = *((_QWORD *)a2 + 13);
    v13[4] = *((unsigned int *)a2 + 28);
    v13[5] = *((_QWORD *)a2 + 19);
    v13[6] = *((_QWORD *)a2 + 20);
    v13[7] = *((_QWORD *)a2 + 21);
    v12 = (__int64)v13;
  }
  else
  {
    v12 = WdLogNewEntry5_WdPresentTokenEvent(a1, a2, a3, a1);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)a2 + 13);
    *(_QWORD *)(v12 + 32) = *((unsigned int *)a2 + 28);
  }
  WdLogEvent5_WdPresentTokenEvent(v12);
  return 0;
}
