/*
 * XREFs of GetHvPpmCapabilities @ 0x1C001A0D0
 * Callers:
 *     RegisterHvIdleStates @ 0x1C001A1F0 (RegisterHvIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     memset @ 0x1C00062C0 (memset.c)
 */

char __fastcall GetHvPpmCapabilities(bool *a1, bool *a2)
{
  bool v4; // di
  bool v5; // bl
  int RegistryValues; // eax
  int v8; // [rsp+30h] [rbp-69h] BYREF
  int v9; // [rsp+34h] [rbp-65h] BYREF
  _QWORD v10[14]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE SystemInformation[8]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+1Fh]

  v4 = 0;
  v5 = 0;
  RegistryValues = ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL);
  if ( RegistryValues >= 0 )
  {
    LOBYTE(RegistryValues) = v12 & 8;
    v4 = (v12 & 8) != 0;
    if ( (v12 & 0x400) != 0 )
    {
      memset(v10, 0, sizeof(v10));
      v10[2] = L"LegacyHvAlgorithm";
      LODWORD(v10[1]) = 292;
      v10[3] = &v9;
      LODWORD(v10[4]) = 0x4000000;
      RegistryValues = RtlQueryRegistryValuesEx(
                         0LL,
                         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                         v10,
                         0LL,
                         0LL);
      if ( RegistryValues < 0 || !v9 )
      {
        RegistryValues = HvlQueryActiveHypervisorProcessorCount(&v8);
        if ( RegistryValues >= 0 )
        {
          RegistryValues = KeQueryActiveProcessorCountEx(0xFFFFu);
          v5 = RegistryValues == v8;
        }
      }
    }
  }
  if ( a1 )
    *a1 = v4;
  if ( a2 )
    *a2 = v5;
  return RegistryValues;
}
