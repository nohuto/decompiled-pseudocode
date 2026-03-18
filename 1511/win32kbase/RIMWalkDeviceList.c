/*
 * XREFs of RIMWalkDeviceList @ 0x1C00C13A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMWalkDeviceList(void (__fastcall *a1)(struct _LIST_ENTRY *))
{
  struct _LIST_ENTRY *i; // rbx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimDevList.Flink; i != &gObRimDevList; i = i->Flink )
    a1(i - 1);
  RIMUnlockExclusive((__int64)&gObListLock);
}
