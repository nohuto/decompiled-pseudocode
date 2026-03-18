/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C009F9A0
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008620 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FBB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0144E2C (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0144FE0 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001D6C8 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C001D71C (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00912FC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00CECE4 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01733B4 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C0173A30 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0173B00 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // bl
  DXGDODPRESENT *v10; // rcx
  _QWORD *v11; // rax
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  DXGDODPRESENT *v24; // rcx
  char v25; // [rsp+40h] [rbp+8h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
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
    CurrentProcess = PsGetCurrentProcess(v7);
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v13);
    if ( !ProcessDxgProcess )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v16 + 24) = 3508LL;
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK(
      (DXGPROCESSDEVICEITERATIONLOCK *)&v25,
      ProcessDxgProcess);
    DXGPROCESS::AcquireDeviceLockForAllDevices(ProcessDxgProcess, (struct DXGADAPTER *)a1);
    v17 = *(_QWORD *)(a1 + 2136);
    if ( v17 && *(_QWORD *)(v17 + 384) )
      DXGPROCESS::FlushAllDevice(ProcessDxgProcess, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v18 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( v18 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    v20 = *(_QWORD *)(a1 + 2136);
    if ( v20 && *(_QWORD *)(v20 + 384) )
    {
      if ( *(_BYTE *)(v20 + 392) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v21 + 24) = 3560LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 2136), 0, 0LL) < 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v23 + 24) = 3562LL;
        WdLogEvent5_WdAssertion(v23);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2136) + 392LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 2136) )
    {
      v24 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2128) + 256LL);
      if ( v24 )
        DXGDODPRESENT::Flush(v24);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(ProcessDxgProcess, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v25);
    goto LABEL_8;
  }
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 96));
    v9 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 1u);
    if ( v9 && *(_DWORD *)(a1 + 176) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 192));
    ExReleasePushLockSharedEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_7;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 144), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
LABEL_7:
    if ( !*(_QWORD *)(a1 + 2136) )
    {
      v10 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2128) + 256LL);
      if ( v10 )
        DXGDODPRESENT::Flush(v10);
    }
LABEL_8:
    *(_DWORD *)(a1 + 152) = a2;
    return;
  }
  KeLeaveCriticalRegion();
}
