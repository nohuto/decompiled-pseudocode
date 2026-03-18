/*
 * XREFs of ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00455B0
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C002B470 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C00456F0 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00458B0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0045CD0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x1C0047BA0 (vConvertXformToMatrix.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00BD970 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIsZero(EFLOAT *this)
{
  return *(float *)this == 0.0;
}
