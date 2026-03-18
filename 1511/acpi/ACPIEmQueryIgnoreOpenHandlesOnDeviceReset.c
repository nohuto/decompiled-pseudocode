/*
 * XREFs of ACPIEmQueryIgnoreOpenHandlesOnDeviceReset @ 0x1C0040EC0
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0065160 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007AE10 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     ACPIComputeDeviceIdMutiStringLength @ 0x1C0001588 (ACPIComputeDeviceIdMutiStringLength.c)
 */

__int64 __fastcall ACPIEmQueryIgnoreOpenHandlesOnDeviceReset(unsigned int a1, _WORD *a2)
{
  __int64 v2; // r10
  _QWORD *v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  _QWORD v6[4]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp+18h] BYREF

  v6[0] = a2;
  v6[2] = a1;
  v5 = 24;
  v6[1] = 2 * ACPIComputeDeviceIdMutiStringLength(a2);
  v4 = v6;
  v7 = &v4;
  return EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_HANDLES_ON_DEVICE_RESET, &v7, 1LL, v2);
}
