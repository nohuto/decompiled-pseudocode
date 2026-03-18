/*
 * XREFs of SetHungFlag @ 0x1C012635C
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0113A60 (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int16 __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  if ( (*((_BYTE *)a1 + 43) & 0x18) == 0 && *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu);
  return SetOrClrWF(1, a1, a2, 1);
}
