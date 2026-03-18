/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01482C0
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0148218 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01EE5E8 (_RegisterErrorReportingDialog.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C01482EC (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rax

  v4 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
  return (int)DwmAsyncSignalGhost(v4) >= 0;
}
