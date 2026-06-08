/*
 * XREFs of InitializeEnumerationContext @ 0x1C00047C0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130E0 (ProcLibTraceControlCallback.c)
 *     GetPerfDomain @ 0x1C00190EC (GetPerfDomain.c)
 *     InitializeEnergyEstimation @ 0x1C001D2DC (InitializeEnergyEstimation.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D580 (InitializeEnergyEstimationForEfficiencyClass.c)
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
