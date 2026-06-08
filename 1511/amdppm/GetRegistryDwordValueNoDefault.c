/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C001BE2C
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C0012B54 (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0016CC0 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001741C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C00178CC (InitCpcStatesInternal.c)
 *     GetHvPpmCapabilities @ 0x1C001A0F0 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C001BE10 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001BEA0 (GetRegistryQwordValue.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FABC (PopulateEnergyEstimationModel.c)
 * Callees:
 *     memset @ 0x1C0006140 (memset.c)
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
