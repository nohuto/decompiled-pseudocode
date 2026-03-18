/*
 * XREFs of FBadWindow @ 0x1C008CA1C
 * Callers:
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C008B38C (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall FBadWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1
    || (*((_BYTE *)a1 + 55) & 0x18) != 0x10
    || (unsigned int)GetWindowCloakState((__int64)a1) && !(unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    return 1;
  }
  return v1;
}
