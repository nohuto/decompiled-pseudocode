/*
 * XREFs of DpiGetDriverVersion @ 0x1C00E64D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverVersion(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL);
}
