/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x180056D78
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x180056F50 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(
        unsigned __int64 a1,
        unsigned __int64 a2,
        const wchar_t *a3,
        __int16 a4)
{
  __int64 v6; // rdx
  _DWORD *RcConfig; // rbx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v11; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig(a1, 0, (unsigned int)&v12, 4096, 1) < 0
      || (int)LdrResGetRCConfig(a2, 0, (unsigned int)&v11, 4096, 0) < 0 )
    {
      return 0;
    }
    RcConfig = v12;
    v8 = v11;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1, a2, 0, 1);
    if ( !RcConfig )
      return 0;
    v8 = LdrpGetRcConfig(a2, v6, 0, 0);
    if ( !v8 )
      return 0;
  }
  v9 = *(_QWORD *)(RcConfig + 11) - *(_QWORD *)(v8 + 11);
  if ( !v9 )
    v9 = *(_QWORD *)(RcConfig + 13) - *(_QWORD *)(v8 + 13);
  return !v9 && !wcsicmp(a3, (const wchar_t *)((char *)v8 + (unsigned int)v8[29]));
}
