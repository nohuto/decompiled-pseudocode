/*
 * XREFs of LdrpLoadDll @ 0x18001539C
 * Callers:
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D21A0 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6DB8 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpPreprocessDllName @ 0x180015880 (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+44h] [rbp-BCh] BYREF
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
  *(_DWORD *)&v11.Length = 0x1000000;
  v11.Buffer = (wchar_t *)&v12;
  v12 = 0;
  LODWORD(v10) = LdrpPreprocessDllName(a1, &v11, 0LL, &v9);
  if ( (int)v10 >= 0 )
    LdrpLoadDllInternal(&v11, 0LL, 0LL, a5, (__int64)&v10);
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v10;
}
