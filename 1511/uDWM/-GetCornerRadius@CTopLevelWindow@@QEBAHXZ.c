/*
 * XREFs of ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x18007D8B0
 * Callers:
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180073728 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003A8B0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
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
    v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(*((_DWORD *)this + 152), 1, (*(_BYTE *)(v1 + 571) & 0x20) != 0);
    if ( v3 )
      return *((unsigned int *)v3 + 469);
  }
  return v2;
}
