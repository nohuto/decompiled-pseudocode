/*
 * XREFs of DwmAsyncTextChange @ 0x1C0055C54
 * Callers:
 *     DefSetText @ 0x1C0054B90 (DefSetText.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncTextChange(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD v6[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset((char *)v6 + 2, 0, 0x32uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741833;
    *(_QWORD *)&v6[11] = a2;
    EtwUpdateEvent(a2);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
