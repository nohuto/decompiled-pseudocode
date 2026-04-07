/*
 * XREFs of ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008B1A4
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18003F33C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18008B27C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023E90 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023EDC (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18003F1D8 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::PlaceVisuals(CPenBarrelKeyVisual *this)
{
  unsigned int v2; // r8d
  CContactManager *v3; // rcx
  unsigned int v4; // edx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 38), *((_DWORD *)this + 71) - *((_DWORD *)this + 78) / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 38), *((_DWORD *)this + 72) - *((_DWORD *)this + 79) / 2);
  v2 = *((_DWORD *)this + 73);
  v6.x = *((_DWORD *)this + 71);
  v3 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  v4 = *((_DWORD *)this + 70);
  v6.y = *((_DWORD *)this + 72) + *((_DWORD *)this + 80) + *((_DWORD *)this + 79) / 2;
  CContactManager::PostKeystateFeedbackUpdate(v3, v4, v2, &v6, (v2 & 0x1F) != 0);
  return 0LL;
}
