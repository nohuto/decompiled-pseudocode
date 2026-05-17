/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x18003C2DC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(
        unsigned __int64 a1,
        unsigned __int64 a2,
        const wchar_t *a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 RcConfig; // rax
  __int64 v8; // rcx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig(a1, 0LL, v10, 4096, 1) < 0 || (int)LdrResGetRCConfig(a2, 0LL, &v11, 4096, 0) < 0 )
      return 0;
    RcConfig = v11;
  }
  else
  {
    LOBYTE(a4) = 1;
    v10[0] = LdrpGetRcConfig(a1, a2, 0LL, a4);
    if ( !v10[0] )
      return 0;
    RcConfig = LdrpGetRcConfig(a2, v6, 0LL, 0LL);
    v11 = RcConfig;
    if ( !RcConfig )
      return 0;
  }
  v8 = *(_QWORD *)(v10[0] + 44) - *(_QWORD *)(RcConfig + 44);
  if ( !v8 )
    v8 = *(_QWORD *)(v10[0] + 52) - *(_QWORD *)(RcConfig + 52);
  return !v8 && !wcsicmp(a3, (const wchar_t *)(RcConfig + *(unsigned int *)(RcConfig + 116)));
}
