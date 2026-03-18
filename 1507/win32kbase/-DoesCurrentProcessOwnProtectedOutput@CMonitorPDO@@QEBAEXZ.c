/*
 * XREFs of ?DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@@QEBAEXZ @ 0x1C0068440
 * Callers:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00681F0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(HANDLE *this)
{
  return PsGetCurrentProcessId() == this[7];
}
