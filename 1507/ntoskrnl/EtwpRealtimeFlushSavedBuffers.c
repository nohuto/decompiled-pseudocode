/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x1404A264C
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404A224C (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140560DB0 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140564418 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1406EAE28 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  PVOID PoolWithTag; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // edx

  if ( !*(_DWORD *)(a1 + 440) || !*(_DWORD *)(a1 + 360) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = (__int64)PoolWithTag;
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
          EtwpSendSessionNotification(a1, 4u, 0xC0000102);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag((PVOID)v4, 0);
          if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          *(_QWORD *)(a1 + 408) = v5;
          break;
        }
        if ( (*(_DWORD *)(a1 + 832) & 1) != 0 && *(_WORD *)(v4 + 54) == 3 )
          *(_OWORD *)(a1 + 448) = *(_OWORD *)(v4 + 56);
        --*(_DWORD *)(a1 + 440);
        *(_QWORD *)(a1 + 424) -= *(unsigned int *)(v4 + 48);
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
    ExFreePoolWithTag((PVOID)v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
