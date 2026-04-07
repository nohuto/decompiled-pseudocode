/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001B958
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x18001C3E8 (--1CButton@@MEAA@XZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180075EAC (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
 */

void __fastcall CButton::DeactivateTimeline(struct CVisual *this, __int64 *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(this, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v4 = *a2;
    if ( *a2 )
    {
      v5 = (*(_DWORD *)(v4 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *a2 = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
