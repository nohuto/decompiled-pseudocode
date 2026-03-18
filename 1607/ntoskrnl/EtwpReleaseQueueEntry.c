/*
 * XREFs of EtwpReleaseQueueEntry @ 0x14048E35C
 * Callers:
 *     EtwpRundownNotifications @ 0x14040D8C8 (EtwpRundownNotifications.c)
 *     EtwpDeleteRegistrationObject @ 0x14040E9E0 (EtwpDeleteRegistrationObject.c)
 *     EtwpReceiveNotification @ 0x14048E158 (EtwpReceiveNotification.c)
 *     EtwpQueueNotification @ 0x140490BB0 (EtwpQueueNotification.c)
 *     EtwpSendReplyDataBlock @ 0x140494F40 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x140468620 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(char *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(*((PVOID *)P + 4));
    v4 = *((_QWORD *)P + 5);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, *((_QWORD *)P + 3));
  }
  _m_prefetchw(P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
