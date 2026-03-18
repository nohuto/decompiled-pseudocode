/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1404CE650
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140438E14 (EtwpRundownNotifications.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x1404CE40C (EtwpReceiveNotification.c)
 *     EtwpQueueReply @ 0x1404CFE80 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404CFFE4 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
