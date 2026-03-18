/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001F44 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078B3C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z @ 0x1C00BD548 (-AcquireLocksForStop@DXGADAPTER@@QEAAXH@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C011F4D4 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0017A90 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0017B0C (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z @ 0x1C0093ECC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJE@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00AD6D0 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149948 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C0149C3C (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149E34 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // bl
  DXGDODPRESENT *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  DXGDODPRESENT *v31; // rcx
  char v32; // [rsp+40h] [rbp+8h] BYREF

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
      v17 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
      *(_QWORD *)(v17 + 24) = 13468LL;
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v32, Current);
    DXGPROCESS::AcquireDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    v18 = *(_QWORD *)(a1 + 1984);
    if ( v18 && *(_QWORD *)(v18 + 384) )
      DXGPROCESS::FlushAllDevice(Current, (const struct DXGADAPTER *)a1);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 80));
    v19 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    if ( v19 && *(_DWORD *)(a1 + 160) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 176));
    ExReleasePushLockSharedEx(a1 + 80, 0LL);
    KeLeaveCriticalRegion();
    v24 = *(_QWORD *)(a1 + 1984);
    if ( v24 && *(_QWORD *)(v24 + 384) )
    {
      if ( *(_BYTE *)(v24 + 392) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
        *(_QWORD *)(v25 + 24) = 13520LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 1984), 0) < 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        *(_QWORD *)(v30 + 24) = 13522LL;
        WdLogEvent5_WdAssertion(v30);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 1984) + 392LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 1984) )
    {
      v31 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 1976) + 248LL);
      if ( v31 )
        DXGDODPRESENT::Flush(v31);
    }
    DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, (struct DXGADAPTER *)a1);
    DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v32);
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
    if ( !*(_QWORD *)(a1 + 1984) )
    {
      v10 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 1976) + 248LL);
      if ( v10 )
        DXGDODPRESENT::Flush(v10);
    }
LABEL_8:
    *(_DWORD *)(a1 + 136) = a2;
    return;
  }
  KeLeaveCriticalRegion();
}
