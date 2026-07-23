/*
 * XREFs of LdrpLoadDll @ 0x1800207D8
 * Callers:
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800BDE90 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800C5A58 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180020EEC (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v7; // ecx
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10[3]; // [rsp+44h] [rbp-BCh] BYREF
  _UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v12; // [rsp+60h] [rbp-A0h] BYREF

  LdrpLogDllState(0LL, a1, 5288LL);
  v7 = 0;
  if ( (a3 & 4) != 0 )
    v7 = 8;
  if ( (a3 & 2) != 0 )
    v7 |= 0x40u;
  if ( (a3 & 0x800000) != 0 )
    v7 |= 0x80u;
  if ( (a3 & 0x1000) != 0 )
    v7 |= 0x100u;
  v9 = v7;
  v11.Buffer = (unsigned __int16 *)&v12;
  *(_DWORD *)&v11.Length = 0x1000000;
  v12 = 0;
  v10[0] = LdrpPreprocessDllName(a1, &v11, 0LL, &v9);
  if ( v10[0] >= 0 )
    LdrpLoadDllInternal(&v11, 0LL, 0LL, a5, (__int64)v10);
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v10[0];
}
