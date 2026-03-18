/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0003380
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C00150E4 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 10);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = *(_QWORD *)(v1 + 104);
  if ( v3 && *((_QWORD *)a1 + 12) <= v3 )
  {
    if ( !*(_BYTE *)(v4 + 172) && !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 168), 0, 0) )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v6[3] = 281LL;
      v6[4] = 1792LL;
      v6[5] = *((_QWORD *)a1 + 12);
      v6[6] = *(_QWORD *)(v1 + 152);
      v6[7] = 0LL;
      WdLogEvent5_WdCriticalError(v6);
      JUMPOUT(0x1C000AC57LL);
    }
    v7 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v7 + 24) = *((_QWORD *)a1 + 12);
    WdLogEvent5_WdEvent(v7);
  }
  else
  {
    if ( *(_BYTE *)(v4 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 168), 0, 0) )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v5[3] = a1;
      v5[4] = *((_QWORD *)a1 + 12);
    }
    else
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v5[3] = a1;
      v5[4] = *((_QWORD *)a1 + 12);
      v5[5] = *(_QWORD *)(v1 + 152);
    }
    WdLogEvent5_WdEvent(v5);
    *(_QWORD *)(*((_QWORD *)a1 + 10) + 152LL) = *((_QWORD *)a1 + 12);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 1004LL) )
      VidSchUnwaitFlipQueue();
  }
}
