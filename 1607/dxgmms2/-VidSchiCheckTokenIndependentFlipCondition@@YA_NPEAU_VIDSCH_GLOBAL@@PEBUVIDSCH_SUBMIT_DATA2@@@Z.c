/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0020B6C
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00257C4 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  bool v5; // zf
  int v6; // eax
  __int64 v7; // r9
  char v8; // cl
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v13; // rax

  if ( (*((_BYTE *)a2 + 3) & 1) != 0 )
  {
    v4 = *((unsigned int *)a2 + 29);
    v5 = !_BitScanForward((unsigned int *)&v6, (unsigned __int8)*((_DWORD *)a2 + 106));
    v7 = *((_QWORD *)a1 + v4 + 371);
    v8 = -1;
    if ( !v5 )
      v8 = v6;
    v9 = v8;
    if ( v8 == -1 )
      v9 = 0;
    v10 = (unsigned int)v9;
    v11 = 272 * v10;
    if ( *(_DWORD *)(v7 + 272 * v10 + 128) == *((_DWORD *)a2 + 38) )
    {
      v10 = *((unsigned int *)a2 + 39);
      if ( *(_DWORD *)(v7 + v11 + 132) == (_DWORD)v10 )
      {
        v10 = *((_QWORD *)a2 + 20);
        if ( *(_QWORD *)(v7 + v11 + 136) == v10 )
        {
          v10 = *((_QWORD *)a2 + 21);
          if ( *(_QWORD *)(v7 + v11 + 144) == v10 )
            return 1;
        }
      }
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v10, v4);
    v13[3] = *((_QWORD *)a2 + 13);
    v13[4] = *((unsigned int *)a2 + 28);
    v13[5] = *((_QWORD *)a2 + 19);
    v13[6] = *((_QWORD *)a2 + 20);
    v13[7] = *((_QWORD *)a2 + 21);
    v3 = (__int64)v13;
  }
  else
  {
    v3 = WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    *(_QWORD *)(v3 + 24) = *((_QWORD *)a2 + 13);
    *(_QWORD *)(v3 + 32) = *((unsigned int *)a2 + 28);
  }
  WdLogEvent5_WdPresentTokenEvent(v3);
  return 0;
}
