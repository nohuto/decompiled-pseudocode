/*
 * XREFs of GetHvPpmCapabilities @ 0x1C001BDC4
 * Callers:
 *     RegisterHvPepIdleStatesV2 @ 0x1C001C9C4 (RegisterHvPepIdleStatesV2.c)
 *     ProcLibGlobalInit @ 0x1C00230C0 (ProcLibGlobalInit.c)
 *     InitDriver @ 0x1C00235B8 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001630C (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall GetHvPpmCapabilities(bool *a1, bool *a2, bool *a3)
{
  bool v6; // bp
  bool v7; // si
  bool v8; // bl
  int RegistryDwordValueNoDefault; // eax
  int v10; // edi
  int v12; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+24h] [rbp-54h] BYREF
  _BYTE SystemInformation[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  RegistryDwordValueNoDefault = ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    v10 = v15;
    LOBYTE(RegistryDwordValueNoDefault) = v15 & 8;
    v6 = (v15 & 8) != 0;
    if ( (v15 & 0x400) != 0 )
    {
      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                                      (__int64)L"LegacyHvAlgorithm",
                                      (__int64)&v13);
      if ( RegistryDwordValueNoDefault < 0 || !v13 )
      {
        RegistryDwordValueNoDefault = HvlQueryActiveHypervisorProcessorCount(&v12);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = KeQueryActiveProcessorCountEx(0xFFFFu);
          v7 = RegistryDwordValueNoDefault == v12;
        }
      }
    }
    v8 = (v10 & 0x20000) != 0;
  }
  if ( a1 )
    *a1 = v6;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v8;
  return RegistryDwordValueNoDefault;
}
