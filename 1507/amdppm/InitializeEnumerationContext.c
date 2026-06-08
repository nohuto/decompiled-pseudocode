/*
 * XREFs of InitializeEnumerationContext @ 0x1C0004B80
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130D0 (ProcLibTraceControlCallback.c)
 *     GetPerfDomain @ 0x1C00190CC (GetPerfDomain.c)
 *     InitializeEnergyEstimation @ 0x1C001D270 (InitializeEnergyEstimation.c)
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
