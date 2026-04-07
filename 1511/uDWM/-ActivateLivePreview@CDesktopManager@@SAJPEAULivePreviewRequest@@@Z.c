/*
 * XREFs of ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180039C64
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180039324 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039DEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::ActivateLivePreview(struct LivePreviewRequest *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebp
  bool v6; // [rsp+30h] [rbp-18h]

  LOBYTE(a2) = *(_DWORD *)a1 != 0;
  v6 = *((_DWORD *)a1 + 8) != 0;
  v3 = CLivePreview::Activate(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170),
         a2,
         *((_QWORD *)a1 + 1),
         *((_QWORD *)a1 + 2),
         *((_DWORD *)a1 + 6),
         *((_DWORD *)a1 + 7),
         v6,
         (char *)a1 + 36);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x897u);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct LivePreviewRequest *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1);
  return v4;
}
