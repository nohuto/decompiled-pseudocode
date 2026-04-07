/*
 * XREFs of ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x1800459C4
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800449A8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045ACC (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  for ( i = 0LL; (unsigned int)i < dword_1800BE698; i = (unsigned int)(i + 1) )
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
  dword_1800BE698 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u);
}
