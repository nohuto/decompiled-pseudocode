/*
 * XREFs of DpiGetDriverVersion @ 0x1C00FCB60
 * Callers:
 *     DxgEnumHandleChildrenCB @ 0x1C015F820 (DxgEnumHandleChildrenCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverVersion(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL);
}
