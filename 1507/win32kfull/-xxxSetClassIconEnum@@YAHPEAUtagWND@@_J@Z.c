/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0150050
 * Callers:
 *     xxxSetClassIcon @ 0x1C0154854 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C007E14C (SendDwmIconChange.c)
 *     DestroyWindowSmIcon @ 0x1C0086174 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  _QWORD *v4; // rcx

  if ( *((_QWORD *)a1 + 19) == a2 )
  {
    if ( (*((_BYTE *)a1 + 47) & 0x20) != 0 )
      DestroyWindowSmIcon(a1);
    if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL) )
      xxxRedrawTitle(v4, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64)a1);
  }
  return 1LL;
}
