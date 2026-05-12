/*
 * XREFs of RaidUnitSavePowerCycleCount @ 0x1C0011EC8
 * Callers:
 *     RaidDeleteUnit @ 0x1C0011E4C (RaidDeleteUnit.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C002DB30 (RaidUnitSavePowerCycleCountWorker.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1C0053944 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall RaidUnitSavePowerCycleCount(__int64 a1)
{
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"PowerCycleCount");
  return PortRegistryWriteDeviceKey(
           *(_QWORD *)(a1 + 8),
           (unsigned int)&DestinationString,
           (unsigned int)&v3,
           4,
           a1 + 2512,
           4);
}
