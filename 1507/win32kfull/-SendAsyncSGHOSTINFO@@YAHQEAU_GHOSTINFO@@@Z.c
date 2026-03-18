/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0117814
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011776C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01F6F58 (_RegisterErrorReportingDialog.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C0117840 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rax

  v4 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
  return (int)DwmAsyncSignalGhost(v4) >= 0;
}
