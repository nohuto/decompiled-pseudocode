/*
 * XREFs of FBadWindow @ 0x1C004490C
 * Callers:
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall FBadWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1
    || (*((_BYTE *)a1 + 55) & 0x18) != 0x10
    || (unsigned int)GetWindowCloakState(a1) && !(unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    return 1;
  }
  return v1;
}
