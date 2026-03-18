/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C00724A4
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNFreeItem @ 0x1C0072450 (MNFreeItem.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C023C524 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 */

struct tagMENU *__fastcall UnlockSubMenu(struct tagMENU *a1, struct tagMENU **a2)
{
  if ( !*a2 )
    return 0LL;
  RemoveParentMenu(a1, a2);
  return (struct tagMENU *)HMAssignmentUnlock(a2);
}
