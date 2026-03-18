/*
 * XREFs of ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C01CA910
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 */

void __fastcall ClearWFBeingActivated(HWND a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)ValidateHwnd(a1);
  if ( v1 )
    SetOrClrWF(0, v1, 0x210u, 1);
}
