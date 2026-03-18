/*
 * XREFs of ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C012FAE4
 * Callers:
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0124FD4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 **v3; // rdi
  __int64 **i; // rbx

  if ( a2 == 1 )
  {
    v2 = a1 + 40;
    v3 = (__int64 **)(a1 + 120);
  }
  else
  {
    v2 = a1 + 24;
    v3 = (__int64 **)(a1 + 104);
  }
  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2, 0LL) )
  {
    *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
    for ( i = (__int64 **)*v3; i != v3 && i; i = (__int64 **)*i )
    {
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)i[10], 0) )
        goto LABEL_12;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(i + 11, 0LL) )
        goto LABEL_12;
      i[12] = (__int64 *)KeGetCurrentThread();
    }
    return 1;
  }
  else
  {
LABEL_12:
    KeLeaveCriticalRegion();
    return 0;
  }
}
