/*
 * XREFs of GetRegistryDwordValue @ 0x1C0016238
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C001E5AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F0DC (InitPerfFeedbackInternal.c)
 *     ProcLibGlobalInit @ 0x1C00220C0 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0022FC4 (PopulateEnergyEstimationParameters.c)
 * Callees:
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+B8h] [rbp+10h] BYREF

  v8 = 0;
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 32;
  LODWORD(v7[4]) = 4;
  LODWORD(v7[6]) = 4;
  v7[2] = a2;
  v7[3] = a3;
  v7[5] = &v8;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
