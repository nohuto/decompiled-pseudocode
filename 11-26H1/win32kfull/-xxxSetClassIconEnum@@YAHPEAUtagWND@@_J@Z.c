/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x140209D50
 * Callers:
 *     xxxSetClassIcon @ 0x140152AA8 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     DestroyWindowSmIcon @ 0x140094E54 (DestroyWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x14014DA14 (SendDwmIconChange.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20) != 0 )
      DestroyWindowSmIcon(a1, a2);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) )
      xxxRedrawTitle(a1, 12LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
  }
  return 1LL;
}
