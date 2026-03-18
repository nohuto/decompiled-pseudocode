/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1404CE5F0
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x140438E14 (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x1404CDF90 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1404CE40C (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x1404CFF08 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
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
