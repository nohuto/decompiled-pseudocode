/*
 * XREFs of ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006AF74
 * Callers:
 *     MNFreeItem @ 0x1C006AEF4 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 * Callees:
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

void __fastcall FreeItemString(struct tagMENU *a1, struct tagITEM *a2)
{
  if ( *((_QWORD *)a2 + 5) )
    DesktopFree(*((_QWORD *)a1 + 3));
  *((_QWORD *)a2 + 5) = 0LL;
}
