/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C011F4D4
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078B3C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0127D28 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C012944C (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  bool v9; // bl
  bool v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 80, 0LL) )
  {
    *((_QWORD *)this + 11) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 248);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 248), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 0);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 248);
        if ( !v3 )
          goto LABEL_12;
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
        {
          v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
          *(_QWORD *)(v8 + 24) = 2935LL;
          WdLogEvent5_WdAssertion(v8);
        }
        v9 = *(_QWORD *)(v3 + 904) != 0LL;
        v10 = (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 248) + 400LL) + 8LL)
                                                        + 1032LL))(*(_QWORD *)(*((_QWORD *)this + 248) + 408LL)) != 0;
        if ( v9 || v10 )
        {
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
        }
        else
        {
LABEL_12:
          v11 = *((_QWORD *)this + 248) + 24LL;
          *((_DWORD *)this + 30) = 1;
          *(_QWORD *)(v11 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v11, 0LL);
          KeLeaveCriticalRegion();
          v12 = *((_QWORD *)this + 248);
          *(_QWORD *)(v12 + 48) = 0LL;
          ExReleasePushLockExclusiveEx(v12 + 40, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
    if ( *((_DWORD *)this + 30) != 1 )
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
    *((_QWORD *)this + 11) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
  }
  KeLeaveCriticalRegion();
}
