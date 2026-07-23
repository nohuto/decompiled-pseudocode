/*
 * XREFs of PerfLogExecutiveResourceAcquire @ 0x140227E70
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14022D8CC (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     EtwpGetTrackingLockSlotForThread @ 0x140227D40 (EtwpGetTrackingLockSlotForThread.c)
 */

signed __int64 __fastcall PerfLogExecutiveResourceAcquire(int a1, __int64 a2, unsigned int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int16 Group; // r15
  unsigned __int64 v9; // rdi
  unsigned __int8 GroupIndex; // r12
  signed __int64 result; // rax
  signed __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  Group = CurrentPrcb->Group;
  v9 = __rdtsc();
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v14) = Group;
  HIWORD(v14) = GroupIndex;
  result = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  v12 = result;
  if ( result )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    result = 4294967263LL;
    if ( ((a1 - 65569) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 65585) & 0xFFFFFFDF) != 0 )
        return result;
      if ( *(_DWORD *)(v12 + 32) )
      {
        if ( *(_DWORD *)(v12 + 36) >= a3 )
        {
LABEL_16:
          *(_DWORD *)(v12 + 32) = 1;
          return result;
        }
LABEL_15:
        *(_DWORD *)(v12 + 36) = a3;
        goto LABEL_16;
      }
      *(_QWORD *)(v12 + 8) = 2LL;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 32);
      *(_QWORD *)(v12 + 8) = v9;
      if ( v13 != 4 )
      {
        *(_QWORD *)v12 = 0LL;
        goto LABEL_14;
      }
      if ( *(_WORD *)(v12 + 24) == Group && *(_BYTE *)(v12 + 26) == GroupIndex )
      {
        *(_QWORD *)v12 = v9 - *(_QWORD *)v12;
        goto LABEL_14;
      }
    }
    *(_QWORD *)v12 = 1LL;
LABEL_14:
    result = v14;
    *(_DWORD *)(v12 + 24) = v14;
    *(_DWORD *)(v12 + 44) = a4;
    goto LABEL_15;
  }
  return result;
}
