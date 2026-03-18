/*
 * XREFs of WmipReferenceEntry @ 0x1404A9FE0
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1404A97C0 (WmipGenerateRegistrationNotification.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x1404A9D94 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1404A9E74 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1404AB6F4 (WmipSendEnableRequest.c)
 *     WmipLegacyEtwWorker @ 0x14055AC9C (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x14055C1CC (WmipQueueLegacyEtwWork.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x14057BF4C (WmipFindISinGEbyName.c)
 *     WmipInsertMofResource @ 0x140590794 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x140590814 (WmipFindMRByNames.c)
 *     WmipRegisterEtwProvider @ 0x1405BCEAC (WmipRegisterEtwProvider.c)
 *     WmipLegacyEtwCallback @ 0x1405C5E44 (WmipLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     WmipFindISInDSByGuid @ 0x1406E1D48 (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
