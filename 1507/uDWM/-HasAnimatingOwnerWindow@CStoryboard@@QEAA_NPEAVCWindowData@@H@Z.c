/*
 * XREFs of ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x180091620
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800012D4 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000C59C (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

char __fastcall CStoryboard::HasAnimatingOwnerWindow(CStoryboard *this, struct CWindowData *a2)
{
  char v2; // bl
  struct CWindowData *v3; // rdi
  CDesktopManager *v4; // rsi
  HWND v5; // rdx

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    while ( 1 )
    {
      v5 = (HWND)*((_QWORD *)v3 + 5);
      if ( v5 )
      {
        if ( CAnimationScheduler::IsWindowCurrentlyAnimating(*((CAnimationScheduler **)v4 + 24), v5, 87, 0x10000000) )
          break;
      }
      v3 = (struct CWindowData *)*((_QWORD *)v3 + 63);
      if ( !v3 )
        return v2;
    }
    return 1;
  }
  return v2;
}
