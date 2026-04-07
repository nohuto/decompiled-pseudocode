/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046DC8
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046E00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F33C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180087D60 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this)
{
  __int64 v2; // rcx
  char v3; // al

  if ( *((_QWORD *)this + 45) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(this, &UdwmDirectTouchDownAnimation_End);
    v2 = *((_QWORD *)this + 45);
    if ( v2 )
    {
      --*(_DWORD *)(v2 + 8);
      v3 = CDesktopManager::s_fTimelineDirty;
      if ( !*(_DWORD *)(v2 + 8) )
        v3 = 1;
      *((_QWORD *)this + 45) = 0LL;
      CDesktopManager::s_fTimelineDirty = v3;
    }
  }
}
