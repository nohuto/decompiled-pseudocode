/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x18003C2DC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(void *a1, void *a2, const wchar_t *a3, __int16 a4)
{
  __int64 RcConfig; // rax
  __int64 v7; // rcx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig((__int64)a1, 0LL, v9, 4096, 1) < 0
      || (int)LdrResGetRCConfig((__int64)a2, 0LL, &v10, 4096, 0) < 0 )
    {
      return 0;
    }
    RcConfig = v10;
  }
  else
  {
    v9[0] = LdrpGetRcConfig(a1);
    if ( !v9[0] )
      return 0;
    RcConfig = LdrpGetRcConfig(a2);
    v10 = RcConfig;
    if ( !RcConfig )
      return 0;
  }
  v7 = *(_QWORD *)(v9[0] + 44) - *(_QWORD *)(RcConfig + 44);
  if ( !v7 )
    v7 = *(_QWORD *)(v9[0] + 52) - *(_QWORD *)(RcConfig + 52);
  return !v7 && !wcsicmp(a3, (const wchar_t *)(RcConfig + *(unsigned int *)(RcConfig + 116)));
}
