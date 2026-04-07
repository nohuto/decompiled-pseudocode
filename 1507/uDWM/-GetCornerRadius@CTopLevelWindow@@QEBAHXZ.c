/*
 * XREFs of ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x180075874
 * Callers:
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18006B388 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180006620 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCornerRadius(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  struct CTopLevelWindow::WindowFrame *v3; // rax

  v1 = *((_QWORD *)this + 93);
  v2 = 0;
  if ( *(int *)(v1 + 100) >= 0 )
  {
    v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(*((_DWORD *)this + 152), 1, (*(_BYTE *)(v1 + 555) & 0x20) != 0);
    if ( v3 )
      return *((unsigned int *)v3 + 293);
  }
  return v2;
}
