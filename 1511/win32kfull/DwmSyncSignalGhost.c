/*
 * XREFs of DwmSyncSignalGhost @ 0x1C025F628
 * Callers:
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F73CC (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmSyncSignalGhost(PVOID Object, __int128 *a2)
{
  int v4; // ebx
  int v5; // ecx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  int v9; // edx
  __int128 v10; // xmm1
  _BYTE v12[688]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v5 = 0;
    if ( gbInVideoPnpCallout )
      v5 = -1073741823;
    v4 = v5;
    if ( v5 >= 0 )
    {
      memset(&v12[2], 0, 0x2AEuLL);
      v6 = *a2;
      v7 = a2[1];
      *(_WORD *)&v12[4] = 0x8000;
      v8 = *((_DWORD *)a2 + 8);
      *(_OWORD *)&v12[44] = v6;
      *(_DWORD *)&v12[76] = v8;
      *(_OWORD *)&v12[60] = v7;
      *(_DWORD *)v12 = 5242920;
      *(_DWORD *)&v12[40] = 1073741876;
      v4 = LpcRequestWaitReplyPort(Object, v12, v12);
      if ( v4 >= 0 )
      {
        v9 = *(_DWORD *)&v12[76];
        v10 = *(_OWORD *)&v12[60];
        *a2 = *(_OWORD *)&v12[44];
        a2[1] = v10;
        *((_DWORD *)a2 + 8) = v9;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
