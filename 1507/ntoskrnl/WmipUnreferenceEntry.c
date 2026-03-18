/*
 * XREFs of WmipUnreferenceEntry @ 0x1404D2094
 * Callers:
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipGenerateRegistrationNotification @ 0x1404A97C0 (WmipGenerateRegistrationNotification.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipAddProviderIdToPIList @ 0x1404A9F84 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x1404AB6F4 (WmipSendEnableRequest.c)
 *     WmipQueryAllData @ 0x1404D1CC0 (WmipQueryAllData.c)
 *     WmipRemoveDS @ 0x140546110 (WmipRemoveDS.c)
 *     WmipDSCleanup @ 0x14055653C (WmipDSCleanup.c)
 *     WmipDeleteMethod @ 0x140556C0C (WmipDeleteMethod.c)
 *     WmipLegacyEtwWorker @ 0x14055AC9C (WmipLegacyEtwWorker.c)
 *     WmipQuerySetExecuteSI @ 0x14057AD90 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14057BD98 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x14057BE58 (WmipMangleInstanceName.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 *     WmipAddMofResource @ 0x1405905DC (WmipAddMofResource.c)
 *     WmipProcessLegacyEtwCallback @ 0x1405C6978 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     WmipUpdateAddGuid @ 0x1406E1E44 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1406E226C (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
