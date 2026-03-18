/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x14046ABB8
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404CAE80 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpSendSessionNotification @ 0x1404CC658 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1404E7954 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1404EC00C (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x140667AFC (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v4; // rsi
  __int64 v5; // rbx
  int v6; // edx

  if ( !*(_DWORD *)(a1 + 440) || !*(_DWORD *)(a1 + 360) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 4));
    if ( *(_DWORD *)(a1 + 440) )
    {
      while ( *(_DWORD *)(a1 + 360) )
      {
        v5 = *(_QWORD *)(a1 + 408);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, v4) < 0 )
        {
          *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
          *(_DWORD *)(a1 + 440) = 0;
          *(_QWORD *)(a1 + 424) = 0LL;
          *(_DWORD *)(a1 + 464) = 3;
          EtwpSendSessionNotification(a1, 4LL, 3221225730LL);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag(v4, 0);
          if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          *(_QWORD *)(a1 + 408) = v5;
          break;
        }
        if ( (*(_DWORD *)(a1 + 832) & 1) != 0 && *((_WORD *)v4 + 27) == 3 )
          *(_OWORD *)(a1 + 448) = *(_OWORD *)(v4 + 56);
        --*(_DWORD *)(a1 + 440);
        *(_QWORD *)(a1 + 424) -= *((unsigned int *)v4 + 12);
        v6 = *(_DWORD *)(a1 + 440);
        if ( *(int *)(a1 + 16) < 0
          && *(_QWORD *)(a1 + 432) - *(_QWORD *)(a1 + 424) > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4)
                                                                                            * *(_DWORD *)(a1 + 252)) )
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        if ( !v6 )
          break;
      }
      if ( !*(_DWORD *)(a1 + 440) )
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
