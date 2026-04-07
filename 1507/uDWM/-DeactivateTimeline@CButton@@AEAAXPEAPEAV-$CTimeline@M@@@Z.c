/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180019DF0
 * Callers:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180003A28 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001AA58 (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 */

void __fastcall CButton::DeactivateTimeline(struct CVisual *a1, __int64 *a2)
{
  __int64 v4; // rcx
  char v5; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(a1, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(a1);
    v4 = *a2;
    if ( *a2 )
    {
      --*(_DWORD *)(v4 + 8);
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( !*(_DWORD *)(v4 + 8) )
        v5 = 1;
      *a2 = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
  }
}
