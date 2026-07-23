/*
 * XREFs of WmipReferenceEntry @ 0x140473870
 * Callers:
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x140473680 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1404D0C2C (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140537C90 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x1405384EC (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140551338 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1405513B8 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140575384 (WmipLegacyEtwWorker.c)
 *     WmipLegacyEtwCallback @ 0x140576238 (WmipLegacyEtwCallback.c)
 *     WmipRegisterEtwProvider @ 0x14057638C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x14057645C (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     WmipFindISInDSByGuid @ 0x14069F120 (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
