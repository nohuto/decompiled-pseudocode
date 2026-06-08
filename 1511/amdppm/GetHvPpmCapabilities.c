/*
 * XREFs of GetHvPpmCapabilities @ 0x1C001A0F0
 * Callers:
 *     RegisterHvIdleStates @ 0x1C001A1D0 (RegisterHvIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C001F2FC (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001BE2C (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall GetHvPpmCapabilities(bool *a1, bool *a2)
{
  bool v4; // di
  bool v5; // bl
  int RegistryDwordValueNoDefault; // eax
  __int64 v7; // r9
  int v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+24h] [rbp-34h] BYREF
  _BYTE SystemInformation[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  RegistryDwordValueNoDefault = ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    LOBYTE(RegistryDwordValueNoDefault) = v12 & 8;
    v4 = (v12 & 8) != 0;
    if ( (v12 & 0x400) != 0 )
    {
      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                                      L"LegacyHvAlgorithm",
                                      &v10,
                                      v7);
      if ( RegistryDwordValueNoDefault < 0 || !v10 )
      {
        RegistryDwordValueNoDefault = HvlQueryActiveHypervisorProcessorCount(&v9);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = KeQueryActiveProcessorCountEx(0xFFFFu);
          v5 = RegistryDwordValueNoDefault == v9;
        }
      }
    }
  }
  if ( a1 )
    *a1 = v4;
  if ( a2 )
    *a2 = v5;
  return RegistryDwordValueNoDefault;
}
