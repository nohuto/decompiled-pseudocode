/*
 * XREFs of WmipEventNotification @ 0x140536DB8
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x140089280 (ExInterlockedRemoveHeadList.c)
 *     WmipUnreferenceRegEntry @ 0x1400C48D0 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x140537B40 (WmipProcessEvent.c)
 */

__int64 WmipEventNotification()
{
  PLIST_ENTRY v0; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int v2; // edx
  __int64 Flink; // rcx
  __int64 result; // rax

  do
  {
    v0 = ExInterlockedRemoveHeadList(&WmipNPEvent, &WmipNPNotificationSpinlock);
    Blink = v0[1].Blink;
    v2 = (int)Blink[2].Blink;
    LODWORD(Blink[2].Blink) = 0;
    HIDWORD(Blink->Blink) = 0;
    LODWORD(Blink->Blink) = v2;
    WmipProcessEvent(Blink);
    Flink = (__int64)v0[1].Flink;
    if ( Flink )
      WmipUnreferenceRegEntry(Flink);
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipEventWorkItems, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
