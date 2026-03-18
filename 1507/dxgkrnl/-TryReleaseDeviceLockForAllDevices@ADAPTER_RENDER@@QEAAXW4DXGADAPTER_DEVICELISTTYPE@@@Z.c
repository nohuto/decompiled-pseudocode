/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01294FC
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0127D28 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 **v3; // rsi
  __int64 *i; // rbx

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
  if ( *(struct _KTHREAD **)(v2 + 8) == KeGetCurrentThread()
    || DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    for ( i = *v3;
          i != (__int64 *)v3 && i && (*((_DWORD *)i + 18) || ExIsResourceAcquiredExclusiveLite((PERESOURCE)i[10]));
          i = (__int64 *)*i )
    {
      ExReleaseResourceLite((PERESOURCE)i[10]);
      KeLeaveCriticalRegion();
      if ( (struct _KTHREAD *)i[12] != KeGetCurrentThread() )
        break;
      i[12] = 0LL;
      ExReleasePushLockExclusiveEx(i + 11, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( *(struct _KTHREAD **)(v2 + 8) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
