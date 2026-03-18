/*
 * XREFs of WmipReferenceEntry @ 0x1404749A0
 * Callers:
 *     WmipFindGEByGuid @ 0x1404746D0 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1404747B0 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1404EEB64 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140537750 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140537FAC (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140550DF8 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x140550E78 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140574E44 (WmipLegacyEtwWorker.c)
 *     WmipLegacyEtwCallback @ 0x140575CF8 (WmipLegacyEtwCallback.c)
 *     WmipRegisterEtwProvider @ 0x140575E4C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140575F1C (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     WmipFindISInDSByGuid @ 0x14069EFE8 (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x14069F36C (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
