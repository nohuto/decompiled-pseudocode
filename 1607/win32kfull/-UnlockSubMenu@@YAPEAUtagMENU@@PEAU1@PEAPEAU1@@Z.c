/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C006AF48
 * Callers:
 *     MNFreeItem @ 0x1C006AEF4 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C0233EC4 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 */

struct tagMENU *__fastcall UnlockSubMenu(struct tagMENU *a1, struct tagMENU **a2)
{
  if ( !*a2 )
    return 0LL;
  RemoveParentMenu(a1, a2);
  return (struct tagMENU *)HMAssignmentUnlock(a2);
}
