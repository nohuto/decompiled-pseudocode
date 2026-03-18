/*
 * XREFs of DwmAsyncChildMoveSize @ 0x1C006CA30
 * Callers:
 *     DwmChildRectChange @ 0x1C006C824 (DwmChildRectChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncChildMoveSize(PVOID Object, __int64 a2, __int128 *a3, __int128 *a4, __int128 *a5, int a6)
{
  unsigned int v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _DWORD v15[28]; // [rsp+20h] [rbp-69h] BYREF

  v10 = -1073741823;
  if ( Object )
  {
    memset((char *)v15 + 2, 0, 0x66uLL);
    v11 = *a3;
    v12 = *a4;
    LOWORD(v15[1]) = 0x8000;
    *(_OWORD *)&v15[13] = v11;
    v15[0] = 6815808;
    v13 = *a5;
    v15[10] = 1073741845;
    *(_QWORD *)&v15[11] = a2;
    *(_OWORD *)&v15[21] = v13;
    v15[25] = a6;
    *(_OWORD *)&v15[17] = v12;
    EtwUpdateEvent(a2);
    v10 = LpcRequestPort(Object, v15);
    ObfDereferenceObject(Object);
  }
  return v10;
}
