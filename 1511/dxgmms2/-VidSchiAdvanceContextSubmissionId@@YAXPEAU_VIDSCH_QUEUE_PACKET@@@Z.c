/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EBAC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v4 = (_QWORD *)*((_QWORD *)a1 + 10);
  v6 = v4[13];
  v7 = *(_QWORD *)(v4[12] + 24LL);
  v8 = v4[19];
  if ( v8 && *((_QWORD *)a1 + 12) <= v8 )
  {
    if ( !*(_BYTE *)(v6 + 172)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0)
      && (*(_BYTE *)(v7 + 2468) & 1) == 0 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v7, a3, a4);
      v9[3] = 281LL;
      v9[4] = 1792LL;
      v9[5] = *((_QWORD *)a1 + 12);
      v9[6] = v4[19];
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
    v10 = WdLogNewEntry5_WdEvent(v6, v7);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 12);
    WdLogEvent5_WdEvent(v10);
  }
  else
  {
    if ( *(_BYTE *)(v6 + 172)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0)
      || (*(_BYTE *)(v7 + 2468) & 1) != 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v7);
      v11[3] = a1;
      v11[4] = *((_QWORD *)a1 + 12);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v7);
      v11[3] = a1;
      v11[4] = *((_QWORD *)a1 + 12);
      v11[5] = v4[19];
    }
    WdLogEvent5_WdEvent(v11);
    *(_QWORD *)(*((_QWORD *)a1 + 10) + 152LL) = *((_QWORD *)a1 + 12);
    v12 = *((_QWORD *)a1 + 10);
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 104) + 1132LL) )
      VidSchUnwaitFlipQueue(v12);
  }
}
