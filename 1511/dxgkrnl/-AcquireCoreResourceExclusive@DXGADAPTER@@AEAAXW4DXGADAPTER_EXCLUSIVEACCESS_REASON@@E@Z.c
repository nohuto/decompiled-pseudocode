/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0079F0C
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003D18 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C007A10C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0124FD4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C0125154 (-AcquireLocksForStop@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0019564 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C00195E0 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C006A884 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00BF998 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C014D5C8 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C014DA64 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C014DE54 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // bl
  DXGDODPRESENT *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  DXGDODPRESENT *v22; // rcx
  char v23; // [rsp+40h] [rbp+8h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v11[3] = 275LL;
    v11[4] = 4LL;
    v11[5] = a1;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( a2 == 3 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 13834LL;
      WdLogEvent5_WdAssertion(v14);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v23, Current);
    DXGPROCESS::AcquireDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    v15 = *(_QWORD *)(a1 + 1992);
    if ( v15 && *(_QWORD *)(v15 + 408) )
      DXGPROCESS::FlushAllDevice(Current, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 80));
    v16 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    if ( v16 && *(_DWORD *)(a1 + 160) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 176));
    ExReleasePushLockSharedEx(a1 + 80, 0LL);
    KeLeaveCriticalRegion();
    v18 = *(_QWORD *)(a1 + 1992);
    if ( v18 && *(_QWORD *)(v18 + 408) )
    {
      if ( *(_BYTE *)(v18 + 416) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v19 + 24) = 13886LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 1992), 0) < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v21 + 24) = 13888LL;
        WdLogEvent5_WdAssertion(v21);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 1992) + 416LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 1992) )
    {
      v22 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 1984) + 320LL);
      if ( v22 )
        DXGDODPRESENT::Flush(v22);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v23);
    goto LABEL_8;
  }
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 80));
    v9 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    if ( v9 && *(_DWORD *)(a1 + 160) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 176));
    ExReleasePushLockSharedEx(a1 + 80, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_7;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
LABEL_7:
    if ( !*(_QWORD *)(a1 + 1992) )
    {
      v10 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 1984) + 320LL);
      if ( v10 )
        DXGDODPRESENT::Flush(v10);
    }
LABEL_8:
    *(_DWORD *)(a1 + 136) = a2;
    return;
  }
  KeLeaveCriticalRegion();
}
