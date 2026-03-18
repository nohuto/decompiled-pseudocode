/*
 * XREFs of PiUEventFreeEventEntry @ 0x1403EF4F8
 * Callers:
 *     PiUEventDereferenceEventEntry @ 0x1403EF49C (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeEventEntry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x59706E50u);
  v3 = (void *)a1[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x59706E50u);
  v4 = (void *)a1[6];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
