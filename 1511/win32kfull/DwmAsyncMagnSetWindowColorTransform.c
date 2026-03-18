/*
 * XREFs of DwmAsyncMagnSetWindowColorTransform @ 0x1C025EB24
 * Callers:
 *     MagpComposeDesktop @ 0x1C00D22B4 (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01FE00C (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowColorTransform(PVOID Object, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _BYTE v17[160]; // [rsp+20h] [rbp-89h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(&v17[2], 0, 0x9EuLL);
    v9 = *a4;
    v10 = a4[1];
    *(_WORD *)&v17[4] = 0x8000;
    v11 = *((_DWORD *)a4 + 24);
    *(_OWORD *)&v17[60] = v9;
    *(_DWORD *)v17 = 10485880;
    v12 = a4[2];
    *(_DWORD *)&v17[40] = 1073741920;
    *(_OWORD *)&v17[76] = v10;
    *(_QWORD *)&v17[44] = a2;
    v13 = a4[3];
    *(_QWORD *)&v17[52] = a3;
    *(_OWORD *)&v17[92] = v12;
    *(_DWORD *)&v17[156] = v11;
    v14 = a4[4];
    *(_OWORD *)&v17[108] = v13;
    v15 = a4[5];
    *(_OWORD *)&v17[124] = v14;
    *(_OWORD *)&v17[140] = v15;
    EtwUpdateEvent(a2);
    v8 = LpcRequestPort(Object, v17);
    ObfDereferenceObject(Object);
  }
  return v8;
}
