/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x140490D9C
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404920CC (EtwpRealtimeDeliverBuffer.c)
 *     EtwpSendSessionNotification @ 0x140494084 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14052B808 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14052E400 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1406A9AF0 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v4; // rsi
  __int64 v5; // rbx
  int v6; // edx

  if ( !*(_DWORD *)(a1 + 424) || !*(_DWORD *)(a1 + 344) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 4));
    if ( *(_DWORD *)(a1 + 424) )
    {
      while ( *(_DWORD *)(a1 + 344) )
      {
        v5 = *(_QWORD *)(a1 + 392);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, v4) < 0 )
        {
          *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
          *(_DWORD *)(a1 + 424) = 0;
          *(_QWORD *)(a1 + 408) = 0LL;
          *(_DWORD *)(a1 + 448) = 3;
          EtwpSendSessionNotification(a1, 4LL);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag(v4, 0);
          if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          *(_QWORD *)(a1 + 392) = v5;
          break;
        }
        if ( (*(_DWORD *)(a1 + 816) & 1) != 0 && *((_WORD *)v4 + 27) == 3 )
          *(_OWORD *)(a1 + 432) = *(_OWORD *)(v4 + 56);
        --*(_DWORD *)(a1 + 424);
        *(_QWORD *)(a1 + 408) -= *((unsigned int *)v4 + 12);
        v6 = *(_DWORD *)(a1 + 424);
        if ( *(int *)(a1 + 16) < 0
          && *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408) > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4)
                                                                                            * *(_DWORD *)(a1 + 236)) )
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        if ( !v6 )
          break;
      }
      if ( !*(_DWORD *)(a1 + 424) )
        goto LABEL_18;
    }
    else
    {
LABEL_18:
      EtwpRealtimeZeroTruncateLogfile(a1);
    }
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
