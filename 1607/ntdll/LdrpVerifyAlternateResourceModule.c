/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x18003BA94
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003A820 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x180098360 (_wcsicmp.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned int *v7; // rax
  __int64 v8; // rcx
  unsigned int *RcConfig; // [rsp+30h] [rbp-18h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig(a1, 0LL, &RcConfig, 4096, 1) < 0 || (int)LdrResGetRCConfig(a2, 0LL, &v11, 4096, 0) < 0 )
      return 0;
    v7 = v11;
  }
  else
  {
    LOBYTE(a4) = 1;
    RcConfig = (unsigned int *)LdrpGetRcConfig(a1, a2, 0LL, a4);
    if ( !RcConfig )
      return 0;
    v7 = (unsigned int *)LdrpGetRcConfig(a2, v6, 0LL, 0LL);
    v11 = v7;
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(RcConfig + 11) - *(_QWORD *)(v7 + 11);
  if ( !v8 )
    v8 = *(_QWORD *)(RcConfig + 13) - *(_QWORD *)(v7 + 13);
  return !v8 && !wcsicmp(a3, (const wchar_t *)((char *)v7 + v7[29]));
}
