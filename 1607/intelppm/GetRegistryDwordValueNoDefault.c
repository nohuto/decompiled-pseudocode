/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0013204
 * Callers:
 *     IsIntelPccDriverPresent @ 0x1C0003D70 (IsIntelPccDriverPresent.c)
 *     GetRegistryDwordValue @ 0x1C00131E8 (GetRegistryDwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C001D18C (GetHvPpmCapabilities.c)
 *     PopulateEnergyEstimationModel @ 0x1C002513C (PopulateEnergyEstimationModel.c)
 * Callees:
 *     memset @ 0x1C0002DC0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
