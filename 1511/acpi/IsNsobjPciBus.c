/*
 * XREFs of IsNsobjPciBus @ 0x1C0067064
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0066C90 (ACPIBusIrpStartDeviceWorker.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C006EF24 (IsPciBus.c)
 *     ACPIInternalIsPci @ 0x1C00730E0 (ACPIInternalIsPci.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007AF40 (ACPIFilterIrpStopDevice.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1C007C230 (IsPciBusExtension.c)
 * Callees:
 *     AMLIGetNSObjectContext @ 0x1C0004354 (AMLIGetNSObjectContext.c)
 *     IsPciBusAsync @ 0x1C0008BB0 (IsPciBusAsync.c)
 */

char __fastcall IsNsobjPciBus(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-10h]
  char v7; // [rsp+68h] [rbp+10h] BYREF

  v2 = (__int64 *)AMLIGetNSObjectContext(a1);
  if ( v2 )
  {
    v3 = *v2;
    if ( (v3 & 0x2000000) != 0 )
      return 1;
    if ( (v3 & 0x100000000LL) != 0 )
      return 0;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = -1073741275;
  v7 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (__int64)AmlisuppCompletePassive, (__int64)&Event, &v7) != 259 )
    return v7;
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v7;
  if ( v6 < 0 )
    return 0;
  return result;
}
