/*
 * XREFs of FBadWindow @ 0x1C00AB590
 * Callers:
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C012707C (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
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
