/*
 * XREFs of PiDmObjectAcquireExclusiveLock @ 0x1404E04DC
 * Callers:
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404394C0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043A8B8 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PiDmListAddObject @ 0x1404DF9D4 (PiDmListAddObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     PiDmListAddList @ 0x14058C898 (PiDmListAddList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListRemoveList @ 0x140680530 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140680838 (PiDmListRemoveObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PiDmObjectAcquireExclusiveLock(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL, a4);
  v8 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (ULONG_PTR)a1, v7);
  if ( v8 )
  {
    result = *(_QWORD *)(v8 + 32);
    *(_BYTE *)(v8 + 26) |= 1u;
  }
  return result;
}
