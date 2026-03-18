/*
 * XREFs of DwmAsyncNotifySpriteDPIChange @ 0x1C0062E38
 * Callers:
 *     GreDwmNotifySpriteDPIChange @ 0x1C0062D14 (GreDwmNotifySpriteDPIChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifySpriteDPIChange(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  int v9; // eax
  _BYTE v11[80]; // [rsp+20h] [rbp-78h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(&v11[2], 0, 0x4EuLL);
    v7 = *a3;
    v8 = *((_QWORD *)a3 + 2);
    *(_WORD *)&v11[4] = 0x8000;
    v9 = *((_DWORD *)a3 + 6);
    *(_OWORD *)&v11[52] = v7;
    *(_DWORD *)&v11[76] = v9;
    *(_DWORD *)v11 = 5242920;
    *(_DWORD *)&v11[40] = 1073741907;
    *(_QWORD *)&v11[44] = a2;
    *(_QWORD *)&v11[68] = v8;
    v6 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v6;
}
