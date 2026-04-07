/*
 * XREFs of ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800415D4
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x18002C334 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180041684 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180045DBC (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18008606C (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180086284 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 */

void __fastcall CDesktopManager::HandleThreadMessage(int a1, HWND a2, unsigned int a3)
{
  HWND LastActivePopup; // rbx
  CDesktopManager *v4; // rcx
  HWND Ancestor; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+20h] BYREF

  LastActivePopup = a2;
  if ( a1 != 1027 )
  {
    switch ( a1 )
    {
      case 1029:
        v6 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::ActivateLivePreview((struct LivePreviewRequest *)LastActivePopup);
        break;
      case 1031:
        CContactManager::HandleFlickFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
          a2 != 0LL,
          a3);
        return;
      case 1032:
        CContactManager::HandleKeystateFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
          a2 != 0LL,
          a3);
        return;
      case 1033:
        v6 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance);
        break;
      case 1025:
        v6 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v4 = CDesktopManager::s_pDesktopManagerInstance;
        *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392) = (_DWORD)LastActivePopup != 0;
        CWindowList::UpdateShellWindowFrameColorization(*((CWindowList **)v4 + 165));
        break;
      default:
        return;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
    return;
  }
  if ( !IsWindowEnabled(a2) )
  {
    Ancestor = GetAncestor(LastActivePopup, 3u);
    LastActivePopup = GetLastActivePopup(Ancestor);
  }
  SwitchToThisWindow(LastActivePopup, 1);
}
