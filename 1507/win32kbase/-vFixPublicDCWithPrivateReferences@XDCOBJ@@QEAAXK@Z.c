/*
 * XREFs of ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00BF684
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vFixPublicDCWithPrivateReferences(DC **this, unsigned int a2)
{
  DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL, *this, a2, 0LL, 0LL, 0LL, 0);
  XDCOBJ::bCleanDC(this, 0);
}
