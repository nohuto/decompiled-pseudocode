/*
 * XREFs of ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180041684
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800415D4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ActivateLivePreview(struct LivePreviewRequest *a1)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CLivePreview::Activate(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168),
         *(_DWORD *)a1 != 0,
         *((HWND *)a1 + 1),
         *((HWND *)a1 + 2),
         *((_DWORD *)a1 + 6),
         *((_DWORD *)a1 + 7),
         *((_DWORD *)a1 + 8) != 0,
         (struct tagRECT *)((char *)a1 + 36));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x8D6u);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct LivePreviewRequest *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1);
  return v3;
}
