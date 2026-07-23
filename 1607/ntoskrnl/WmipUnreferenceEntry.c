/*
 * XREFs of WmipUnreferenceEntry @ 0x1404E8014
 * Callers:
 *     WmipAddProviderIdToPIList @ 0x140473790 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x1404B1DAC (WmipDeleteMethod.c)
 *     WmipSendEnableRequest @ 0x1404D0C2C (WmipSendEnableRequest.c)
 *     WmipQueryAllData @ 0x1404E7C28 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14052B10C (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     WmipDSCleanup @ 0x140532730 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532884 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRemoveDS @ 0x140533338 (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537BD0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x140537C90 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140537E28 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x1405383F8 (WmipMangleInstanceName.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140575384 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwCallback @ 0x140575590 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     WmipUpdateAddGuid @ 0x14069F3D0 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14069F7F8 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
