/*
 * XREFs of SetHungFlag @ 0x1C00448B4
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00ACA7C (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v5; // [rsp+20h] [rbp-18h]

  if ( (*((_BYTE *)a1 + 43) & 0x18) == 0 && *((_QWORD *)a1 + 11) == GetDesktopWindow(a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v5);
  return SetOrClrWF(1LL, a1, a2, 1LL);
}
