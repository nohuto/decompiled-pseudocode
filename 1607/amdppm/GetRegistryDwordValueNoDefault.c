/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C001E168
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C0012E34 (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C00184B8 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0018C6C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 *     GetHvPpmCapabilities @ 0x1C001CD80 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C001E14C (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001E1DC (GetRegistryQwordValue.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FBB4 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     memset @ 0x1C0006B40 (memset.c)
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
