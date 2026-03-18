/*
 * XREFs of WmipUnreferenceEntry @ 0x1403D3420
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1403D1930 (WmipGenerateRegistrationNotification.c)
 *     WmipDSCleanup @ 0x1403D1BEC (WmipDSCleanup.c)
 *     WmipProcessEvent @ 0x1403D1CFC (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1403D2308 (WmipSendEnableDisableRequest.c)
 *     WmipQueryAllData @ 0x1403D3044 (WmipQueryAllData.c)
 *     WmipAddProviderIdToPIList @ 0x1403D38FC (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x14048C524 (WmipDeleteMethod.c)
 *     WmipRemoveDS @ 0x1404B31E4 (WmipRemoveDS.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404C1BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipLegacyEtwWorker @ 0x1404C4D60 (WmipLegacyEtwWorker.c)
 *     WmipSendEnableRequest @ 0x1404C9764 (WmipSendEnableRequest.c)
 *     WmipQuerySetExecuteSI @ 0x1405014A4 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14050220C (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1405022CC (WmipMangleInstanceName.c)
 *     WmipEnableCollectionForNewGuid @ 0x140506FE4 (WmipEnableCollectionForNewGuid.c)
 *     WmipAddMofResource @ 0x1405234A4 (WmipAddMofResource.c)
 *     WmipProcessLegacyEtwCallback @ 0x14054EB74 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x14065DB8C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 *     WmipUpdateAddGuid @ 0x14065F59C (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x14065F670 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14065F9C4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  void (__fastcall *v7)(volatile signed __int64 *); // rax
  void **v8; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    *((_DWORD *)a2 + 4) |= 0x20000000u;
    v6 = *a2;
    if ( *a2 && (a2[2] & 0x10000000) != 0 )
    {
      v8 = (void **)*((_QWORD *)a2 + 1);
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || *v8 != a2 )
        __fastfail(3u);
      *v8 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v8;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v7 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v7 )
      v7(a2);
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
