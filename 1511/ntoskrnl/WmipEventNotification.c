/*
 * XREFs of WmipEventNotification @ 0x14049CDF8
 * Callers:
 *     <none>
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14001AFF0 (WmipUnreferenceRegEntry.c)
 *     ExInterlockedRemoveHeadList @ 0x1400D6BB0 (ExInterlockedRemoveHeadList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x1403D1CFC (WmipProcessEvent.c)
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
    WmipProcessEvent(Blink, 0LL, 1);
    Flink = (__int64)v0[1].Flink;
    if ( Flink )
      WmipUnreferenceRegEntry(Flink);
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipEventWorkItems, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
