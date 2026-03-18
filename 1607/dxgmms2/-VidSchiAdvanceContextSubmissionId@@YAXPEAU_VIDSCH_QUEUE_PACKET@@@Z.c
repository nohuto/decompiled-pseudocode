/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0020870
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx

  v4 = (_QWORD *)*((_QWORD *)a1 + 11);
  v6 = v4[13];
  v7 = *(_QWORD *)(v4[12] + 24LL);
  v8 = v4[19];
  if ( v8 && *((_QWORD *)a1 + 13) <= v8 )
  {
    if ( !*(_BYTE *)(v6 + 164)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 160), 0, 0)
      && (*(_BYTE *)(v7 + 2828) & 1) == 0 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3, a4);
      v9[3] = 281LL;
      v9[4] = 1792LL;
      v9[5] = *((_QWORD *)a1 + 13);
      v9[6] = v4[19];
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
    v10 = WdLogNewEntry5_WdEvent(v6, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 13);
    WdLogEvent5_WdEvent(v10);
  }
  else
  {
    if ( *(_BYTE *)(v6 + 164)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 160), 0, 0)
      || (*(_BYTE *)(v7 + 2828) & 1) != 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2, a3, a4);
      v11[3] = a1;
      v11[4] = *((_QWORD *)a1 + 13);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2, a3, a4);
      v11[3] = a1;
      v11[4] = *((_QWORD *)a1 + 13);
      v11[5] = v4[19];
    }
    WdLogEvent5_WdEvent(v11);
    *(_QWORD *)(*((_QWORD *)a1 + 11) + 152LL) = *((_QWORD *)a1 + 13);
    v14 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
    if ( *(_DWORD *)(v14 + 1128) )
      VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v7, v14, v12, v13);
  }
}
