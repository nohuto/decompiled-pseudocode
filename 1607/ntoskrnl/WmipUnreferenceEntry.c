/*
 * XREFs of WmipUnreferenceEntry @ 0x140505084
 * Callers:
 *     WmipAddProviderIdToPIList @ 0x1404748C0 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x1404CC380 (WmipDeleteMethod.c)
 *     WmipSendEnableRequest @ 0x1404EEB64 (WmipSendEnableRequest.c)
 *     WmipQueryAllData @ 0x140504C98 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14052A4BC (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     WmipDSCleanup @ 0x1405321F0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRemoveDS @ 0x140532DF8 (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140537074 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537690 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x140537750 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405378E8 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140537B40 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x140537EB8 (WmipMangleInstanceName.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x140550C40 (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140574E44 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwCallback @ 0x140575050 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     WmipUpdateAddGuid @ 0x14069F298 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x14069F36C (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14069F6C0 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
