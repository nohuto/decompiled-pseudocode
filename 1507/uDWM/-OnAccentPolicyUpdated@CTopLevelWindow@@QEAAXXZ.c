/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180025244
 * Callers:
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B220 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180069564 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 93);
  if ( !v1 || (v2 = 1, (*(_BYTE *)(v1 + 552) & 1) == 0) || (*(_BYTE *)(v1 + 556) & 1) != 0 )
    v2 = 0;
  CTopLevelWindow::UpdateAccent(this, v2);
}
