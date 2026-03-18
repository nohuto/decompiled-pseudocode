/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C014857C
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0148218 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  __int64 v3; // rdi
  __int64 Prop; // r8
  unsigned int v5; // r10d
  __int64 v6; // r11

  v3 = *(unsigned __int16 *)(gpsi + 884LL);
  Prop = GetProp((__int64)a1, v3, 1LL);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || v6 != -1) )
    return (unsigned int)InternalSetProp((__int64)a1, v3, v6, 5);
  return v5;
}
