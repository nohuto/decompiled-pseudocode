/*
 * XREFs of RIMWalkDeviceList @ 0x1C00CDBE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMWalkDeviceList(void (__fastcall *a1)(__int64 *))
{
  __int64 *i; // rbx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
    a1(i - 2);
  RIMUnlockExclusive((__int64)&gObListLock);
}
