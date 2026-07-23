/*
 * XREFs of LdrpVerifyAlternateResourceModule @ 0x14014BB28
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F8494 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1400F88F4 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x1405434E0 (LdrResGetRCConfig.c)
 */

bool __fastcall LdrpVerifyAlternateResourceModule(void *a1, void *a2, const wchar_t *a3, __int16 a4)
{
  __int64 v6; // rdx
  __int64 RcConfig; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+18h]

  if ( !a3 )
    return 0;
  if ( (a4 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig((ULONGLONG)a1, 1) < 0 || (int)LdrResGetRCConfig((ULONGLONG)a2, 0) < 0 )
      return 0;
    RcConfig = v12;
    v8 = v11;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( !RcConfig )
      return 0;
    v8 = LdrpGetRcConfig(a2, v6, 0, 0);
    if ( !v8 )
      return 0;
  }
  v9 = *(_QWORD *)(RcConfig + 44) - *(_QWORD *)(v8 + 44);
  if ( !v9 )
    v9 = *(_QWORD *)(RcConfig + 52) - *(_QWORD *)(v8 + 52);
  return !v9 && !wcsicmp(a3, (const wchar_t *)(v8 + *(unsigned int *)(v8 + 116)));
}
