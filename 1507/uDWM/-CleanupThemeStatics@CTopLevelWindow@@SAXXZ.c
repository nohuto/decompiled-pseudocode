/*
 * XREFs of ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180045738
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003FC64 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045838 (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void CTopLevelWindow::CleanupThemeStatics(void)
{
  __int64 i; // rbx
  void *v1; // rdi
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rbp

  if ( CTopLevelWindow::s_pbsNonClientAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsNonClientAtlas);
    CTopLevelWindow::s_pbsNonClientAtlas = 0LL;
  }
  if ( CTopLevelWindow::s_pbsTouchAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsTouchAtlas);
    CTopLevelWindow::s_pbsTouchAtlas = 0LL;
  }
  if ( CTopLevelWindow::s_pbsPenAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsPenAtlas);
    CTopLevelWindow::s_pbsPenAtlas = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < dword_1800BC688; i = (unsigned int)(i + 1) )
  {
    v1 = *(void **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * i);
    if ( v1 )
    {
      CTopLevelWindow::WindowFrame::~WindowFrame(*(CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames
                                                                                  + 8 * i));
      v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v2 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
      else
        v2(WPF::g_pProcessHeap, v1);
    }
    *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * i) = 0LL;
  }
  dword_1800BC688 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u);
}
