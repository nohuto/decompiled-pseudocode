/*
 * XREFs of DwmAsyncMagnDestroy @ 0x1C025BF40
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     MagpDecomposeDesktop @ 0x1C00EFC48 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01F4CC0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnDestroy(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-68h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset((char *)v8 + 2, 0, 0x3AuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741919;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    EtwUpdateEvent(a2);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
