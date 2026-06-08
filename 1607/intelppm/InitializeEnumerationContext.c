/*
 * XREFs of InitializeEnumerationContext @ 0x1C00015A4
 * Callers:
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 *     ProcLibTraceControlCallback @ 0x1C0017DF0 (ProcLibTraceControlCallback.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002312C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00233D8 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}
