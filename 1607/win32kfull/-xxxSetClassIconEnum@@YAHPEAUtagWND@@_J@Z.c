/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0224590
 * Callers:
 *     xxxSetClassIcon @ 0x1C0224654 (xxxSetClassIcon.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     DestroyWindowSmIcon @ 0x1C008E0D8 (DestroyWindowSmIcon.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 19) == a2 )
  {
    if ( (*((_BYTE *)a1 + 47) & 0x20) != 0 )
      DestroyWindowSmIcon((__int64)a1);
    if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL) )
      xxxRedrawTitle(a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
  }
  return 1LL;
}
