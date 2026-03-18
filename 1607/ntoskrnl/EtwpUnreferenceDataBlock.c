/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x14048E3BC
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14040AED0 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRundownNotifications @ 0x14040D8C8 (EtwpRundownNotifications.c)
 *     EtwpDeleteRegistrationObject @ 0x14040E9E0 (EtwpDeleteRegistrationObject.c)
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x14048E158 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpQueueReply @ 0x140494EB8 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404D38F0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
