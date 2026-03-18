/*
 * XREFs of DwmAsyncNotifyWindowNormalRectChange @ 0x140347194
 * Callers:
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140290E10 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DwmAsyncNotifyWindowNormalRectChange(PVOID Object, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm6
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-88h] BYREF
  __int16 v9; // [rsp+24h] [rbp-84h]
  int v10; // [rsp+48h] [rbp-60h]
  __int64 v11; // [rsp+4Ch] [rbp-5Ch]
  __int128 v12; // [rsp+54h] [rbp-54h]

  v3 = *a3;
  v6 = -1073741823;
  if ( Object )
  {
    memset_0(&v8, 0, 0x44uLL);
    v8 = 4456476;
    v9 = 0x8000;
    v10 = 1073741946;
    v11 = a2;
    v12 = v3;
    v6 = LpcRequestPort(Object, &v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
