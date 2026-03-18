/*
 * XREFs of IsNsobjPciBus @ 0x1C0069A1C
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0068820 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIInternalIsPci @ 0x1C0068A8C (ACPIInternalIsPci.c)
 *     IsPciBus @ 0x1C0069364 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     ACPIBusIrpStopDevice @ 0x1C00797B0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007AD60 (ACPIFilterIrpStopDevice.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1C007C050 (IsPciBusExtension.c)
 * Callees:
 *     AMLIGetNSObjectContext @ 0x1C00044FC (AMLIGetNSObjectContext.c)
 *     IsPciBusAsync @ 0x1C0008EF4 (IsPciBusAsync.c)
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
