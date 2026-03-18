/*
 * XREFs of ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00C0584
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vFixPublicDCWithPrivateReferences(DC **this)
{
  DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL);
  XDCOBJ::bCleanDC(this, 0);
}
