/*
 * XREFs of ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x180010840
 * Callers:
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18002D520 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeftButton(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 304) & 4) != 0) != a2 )
  {
    *((_BYTE *)this + 304) ^= (*((_BYTE *)this + 304) ^ (4 * a2)) & 4;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
