/*
 * XREFs of DwmAsyncShellWindowChange @ 0x1C0149F90
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncShellWindowChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset((char *)v8 + 2, 0, 0x3AuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741837;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
