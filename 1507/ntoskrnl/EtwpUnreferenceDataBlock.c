/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1404D5C00
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404CEEAC (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x1404D5934 (EtwpReceiveNotification.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x140555B84 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x140558144 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
