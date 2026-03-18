/*
 * XREFs of DwmAsyncSendWindowArrangingData @ 0x1C025FA4C
 * Callers:
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncSendWindowArrangingData(PVOID Object, int a2, __int64 a3, __int128 *a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  _BYTE v12[80]; // [rsp+20h] [rbp-88h] BYREF

  v9 = -1073741823;
  if ( Object )
  {
    memset(&v12[2], 0, 0x4EuLL);
    v10 = *a4;
    *(_DWORD *)v12 = 5242920;
    *(_WORD *)&v12[4] = 0x8000;
    *(_QWORD *)&v12[72] = a5;
    *(_DWORD *)&v12[40] = 1073741927;
    *(_DWORD *)&v12[44] = a2;
    *(_QWORD *)&v12[48] = a3;
    *(_OWORD *)&v12[56] = v10;
    EtwUpdateEvent(0LL);
    v9 = LpcRequestPort(Object, v12);
    ObfDereferenceObject(Object);
  }
  return v9;
}
