/*
 * XREFs of WmipReferenceEntry @ 0x1403D39DC
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1403D1930 (WmipGenerateRegistrationNotification.c)
 *     WmipSendEnableDisableRequest @ 0x1403D2308 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x1403D370C (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1403D37EC (WmipPrepareForWnodeAD.c)
 *     WmipLegacyEtwWorker @ 0x1404C4D60 (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x1404C5A20 (WmipQueueLegacyEtwWork.c)
 *     WmipSendEnableRequest @ 0x1404C9764 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1405023C0 (WmipFindISinGEbyName.c)
 *     WmipInsertMofResource @ 0x14052365C (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1405236DC (WmipFindMRByNames.c)
 *     WmipRegisterEtwProvider @ 0x1405463AC (WmipRegisterEtwProvider.c)
 *     WmipLegacyEtwCallback @ 0x14054DFB4 (WmipLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x14065DB8C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 *     WmipFindISInDSByGuid @ 0x14065F4A0 (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x14065F670 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
