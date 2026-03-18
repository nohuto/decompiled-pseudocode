/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0144E2C
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FBB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C009F9A0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0145F50 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C0149A58 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 96, 0LL) )
  {
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 267);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 267), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 0);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 267);
        if ( !v3 )
          goto LABEL_14;
        if ( !DXGADAPTER::IsDxgmms2(this) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
          {
            v5 = WdLogNewEntry5_WdAssertion(v4);
            *(_QWORD *)(v5 + 24) = 3242LL;
            WdLogEvent5_WdAssertion(v5);
          }
          if ( *(_QWORD *)(v3 + 904) )
            goto LABEL_13;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 400LL) + 8LL)
                                                       + 1056LL))(*(_QWORD *)(*((_QWORD *)this + 267) + 408LL))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 267) + 376LL) + 8LL)
                                                       + 824LL))(*(_QWORD *)(*((_QWORD *)this + 267) + 384LL)) )
        {
LABEL_13:
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
        }
        else
        {
LABEL_14:
          v6 = *((_QWORD *)this + 267) + 24LL;
          *((_DWORD *)this + 34) = 1;
          *(_QWORD *)(v6 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v6, 0LL);
          KeLeaveCriticalRegion();
          v7 = *((_QWORD *)this + 267);
          *(_QWORD *)(v7 + 48) = 0LL;
          ExReleasePushLockExclusiveEx(v7 + 40, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
    if ( *((_DWORD *)this + 34) != 1 )
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
  KeLeaveCriticalRegion();
}
