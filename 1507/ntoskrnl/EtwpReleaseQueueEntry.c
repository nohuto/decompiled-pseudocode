/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1404D5B54
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1404CEEAC (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x1404D5430 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1404D5934 (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x140555A80 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(char *P, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  _QWORD *v6; // rsi
  char v7; // al

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(*((PVOID *)P + 4));
    v4 = *((_QWORD *)P + 5);
    if ( v4 )
    {
      v5 = *((_QWORD *)P + 5) & 7LL;
      v6 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8uLL);
      v7 = 1;
      if ( (_DWORD)v5 == 5 )
      {
        v7 = 5;
        LODWORD(v5) = 0;
      }
      PspChargeJobWakeCounter(v6, 0LL, v5, -1LL, v7, 0LL, *((_QWORD *)P + 3));
      ObDereferenceObjectDeferDeleteWithTag(v6, 0x6B577350u);
    }
  }
  _m_prefetchw(P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
