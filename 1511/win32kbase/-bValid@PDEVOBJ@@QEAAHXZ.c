/*
 * XREFs of ?bValid@PDEVOBJ@@QEAAHXZ @ 0x1C0038FE0
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bValid(PDEVOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
