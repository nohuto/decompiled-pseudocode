/*
 * XREFs of GetHvPpmCapabilities @ 0x1C001CD80
 * Callers:
 *     RegisterHvIdleStates @ 0x1C001CE60 (RegisterHvIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001E168 (GetRegistryDwordValueNoDefault.c)
 */

int __fastcall GetHvPpmCapabilities(bool *a1, bool *a2)
{
  bool v4; // di
  bool v5; // bl
  int result; // eax
  __int64 v7; // r9
  int v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+24h] [rbp-34h] BYREF
  _BYTE SystemInformation[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  result = ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL);
  if ( result >= 0 )
  {
    v4 = (v11 & 8) != 0;
    if ( (v11 & 0x400) != 0 )
    {
      result = GetRegistryDwordValueNoDefault(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                 L"LegacyHvAlgorithm",
                 &v8,
                 v7);
      if ( result < 0 || !v8 )
      {
        result = HvlQueryActiveHypervisorProcessorCount(&v9);
        if ( result >= 0 )
        {
          result = KeQueryActiveProcessorCountEx(0xFFFFu);
          v5 = result == v9;
        }
      }
    }
  }
  if ( a1 )
    *a1 = v4;
  if ( a2 )
    *a2 = v5;
  return result;
}
