/*
 * XREFs of ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x18006E994
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180073444 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18007EF48 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 */

void __fastcall CLivePreview::OnWindowTitleChange(CLivePreview *this, unsigned __int16 **a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *((_DWORD *)this + 86);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 40);
    while ( *(unsigned __int16 ***)(v4 + 48 * v3 + 8) != a2 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v2 )
        return;
    }
    CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v4 + 48 * v3), a2[2]);
  }
}
