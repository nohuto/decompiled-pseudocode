/*
 * XREFs of DwmAsyncSignalGhost @ 0x1C01482EC
 * Callers:
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01482C0 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncSignalGhost(PVOID Object, __int128 *a2)
{
  unsigned int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  _BYTE v9[80]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset(&v9[2], 0, 0x4EuLL);
    v5 = *a2;
    v6 = a2[1];
    *(_WORD *)&v9[4] = 0x8000;
    v7 = *((_DWORD *)a2 + 8);
    *(_OWORD *)&v9[44] = v5;
    *(_DWORD *)&v9[76] = v7;
    *(_OWORD *)&v9[60] = v6;
    *(_DWORD *)v9 = 5242920;
    *(_DWORD *)&v9[40] = 1073741876;
    v4 = LpcRequestPort(Object, v9);
    ObfDereferenceObject(Object);
  }
  return v4;
}
