/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x14048EE4C
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x14040C788 (EtwpRundownNotifications.c)
 *     EtwpDeleteRegistrationObject @ 0x14040D8A0 (EtwpDeleteRegistrationObject.c)
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x14048EBE8 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpQueueReply @ 0x140495948 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404B7390 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
