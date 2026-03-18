/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0223A90
 * Callers:
 *     xxxSetClassIcon @ 0x1C0223AFC (xxxSetClassIcon.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 19) == a2 )
  {
    if ( (*((_BYTE *)a1 + 47) & 0x20) != 0 )
      DestroyWindowSmIcon(a1);
    if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL) )
      xxxRedrawTitle(a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64)a1);
  }
  return 1LL;
}
