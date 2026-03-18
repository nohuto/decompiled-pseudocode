/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F73CC
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C01F7460 (xxxFrostCrashedWindow.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C025F628 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
  UserSessionSwitchLeaveCrit(v6, v5);
  LODWORD(v4) = (int)DwmSyncSignalGhost(v4) >= 0;
  EnterCrit(0LL, 1LL);
  return (unsigned int)v4;
}
