/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0117AC8
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011776C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 Prop; // r8
  unsigned int v5; // r10d
  __int64 v6; // r11

  v2 = *(unsigned __int16 *)(gpsi + 884LL);
  Prop = GetProp((__int64)a1, v2, 1LL);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || v6 != -1) )
    return (unsigned int)InternalSetProp(v3, v2, v6, 5);
  return v5;
}
