/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0124FD4
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A10C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0079F0C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C012DEF4 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C012FAE4 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // bl
  bool v7; // al
  __int64 v8; // rcx
  __int64 v9; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 80, 0LL) )
  {
    *((_QWORD *)this + 11) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 249);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 249), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 0);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 249);
        if ( !v3 )
          goto LABEL_12;
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
        {
          v5 = WdLogNewEntry5_WdAssertion(v4);
          *(_QWORD *)(v5 + 24) = 3072LL;
          WdLogEvent5_WdAssertion(v5);
        }
        v6 = *(_QWORD *)(v3 + 976) != 0LL;
        v7 = (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 249) + 424LL) + 8LL)
                                                       + 1040LL))(*(_QWORD *)(*((_QWORD *)this + 249) + 432LL)) != 0;
        if ( v6 || v7 )
        {
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
        }
        else
        {
LABEL_12:
          v8 = *((_QWORD *)this + 249) + 24LL;
          *((_DWORD *)this + 30) = 1;
          *(_QWORD *)(v8 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v8, 0LL);
          KeLeaveCriticalRegion();
          v9 = *((_QWORD *)this + 249);
          *(_QWORD *)(v9 + 48) = 0LL;
          ExReleasePushLockExclusiveEx(v9 + 40, 0LL);
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
