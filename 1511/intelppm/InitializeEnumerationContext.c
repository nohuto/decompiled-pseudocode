/*
 * XREFs of InitializeEnumerationContext @ 0x1C00016E0
 * Callers:
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00221F4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0022464 (RetrieveEfficiencyClassInformation.c)
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
