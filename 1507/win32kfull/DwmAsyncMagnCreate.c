/*
 * XREFs of DwmAsyncMagnCreate @ 0x1C025EF34
 * Callers:
 *     MagpComposeDesktop @ 0x1C014A07C (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01FDB8C (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnCreate(PVOID Object, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  unsigned int v9; // ebx
  _BYTE v11[64]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  v9 = -1073741823;
  if ( Object )
  {
    memset(&v11[2], 0, 0x3EuLL);
    *(_DWORD *)v11 = 4194328;
    *(_WORD *)&v11[4] = 0x8000;
    *(_DWORD *)&v11[40] = 1073741918;
    *(_QWORD *)&v11[44] = a2;
    LOBYTE(v4) = a4 == 0;
    *(_QWORD *)&v11[52] = a3;
    *(_DWORD *)&v11[60] = v4;
    EtwUpdateEvent(a2);
    v9 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
