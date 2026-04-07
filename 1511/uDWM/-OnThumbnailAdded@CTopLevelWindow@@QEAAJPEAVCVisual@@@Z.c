/*
 * XREFs of ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180041108
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002D7A8 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180040CA8 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007FB70 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailAdded(CTopLevelWindow *this, struct CVisual *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  int v5; // eax

  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 69) + 32LL), a2, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x61Du);
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 69) + 72LL) == (*((_QWORD *)this + 62) != 0LL) + 1 )
  {
    v5 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 93));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x625u);
  }
  return v4;
}
