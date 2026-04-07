/*
 * XREFs of ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18001AB40
 * Callers:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18001A8FC (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180021570 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039DEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180043C90 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CTimelineBase::JumpToFinalValue(CTimelineBase *this)
{
  __int64 v1; // rsi
  __int64 v3; // xmm0_8

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((double *)this + 3) < 0.0 )
    v3 = *((_QWORD *)this + 4);
  else
    v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v3;
  *((_BYTE *)this + 72) = 1;
}
