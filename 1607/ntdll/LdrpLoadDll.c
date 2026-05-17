/*
 * XREFs of LdrpLoadDll @ 0x1800153AC
 * Callers:
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D20E0 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6CF8 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpPreprocessDllName @ 0x180015890 (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, int a2, int a3, char a4, __int64 a5)
{
  int v9; // eax
  int v10; // r8d
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13[3]; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v15; // [rsp+58h] [rbp-A8h]
  __int16 v16; // [rsp+60h] [rbp-A0h] BYREF

  LdrpLogDllState(0LL, a1, 5288LL);
  v9 = 0;
  if ( (a3 & 4) != 0 )
    v9 = 8;
  if ( (a3 & 2) != 0 )
    v9 |= 0x40u;
  if ( (a3 & 0x800000) != 0 )
    v9 |= 0x80u;
  if ( (a3 & 0x1000) != 0 )
    v9 |= 0x100u;
  v12 = v9;
  v14 = 0x1000000;
  v15 = &v16;
  v16 = 0;
  v13[0] = LdrpPreprocessDllName(a1, &v14, 0LL, &v12);
  if ( v13[0] >= 0 )
  {
    v10 = v12;
    if ( !a4 )
      v10 = v12 | 1;
    LdrpLoadDllInternal((unsigned int)&v14, a2, v10, 4, 0LL, 0LL, a5, (__int64)v13);
  }
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v13[0];
}
