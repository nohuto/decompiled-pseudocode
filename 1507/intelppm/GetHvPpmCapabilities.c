/*
 * XREFs of GetHvPpmCapabilities @ 0x1C001BCC0
 * Callers:
 *     RegisterHvPepIdleStatesV2 @ 0x1C001C8B4 (RegisterHvPepIdleStatesV2.c)
 *     ProcLibGlobalInit @ 0x1C00220C0 (ProcLibGlobalInit.c)
 *     InitDriver @ 0x1C00225C4 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0018F60 (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall GetHvPpmCapabilities(bool *a1, bool *a2, bool *a3)
{
  bool v6; // bp
  bool v7; // si
  bool v8; // bl
  int RegistryDwordValueNoDefault; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  int v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+24h] [rbp-54h] BYREF
  _BYTE SystemInformation[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  RegistryDwordValueNoDefault = ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    v12 = v17;
    LOBYTE(RegistryDwordValueNoDefault) = v17 & 8;
    v6 = (v17 & 8) != 0;
    if ( (v17 & 0x400) != 0 )
    {
      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(v11, v10, (__int64)&v15);
      if ( RegistryDwordValueNoDefault < 0 || !v15 )
      {
        RegistryDwordValueNoDefault = HvlQueryActiveHypervisorProcessorCount(&v14);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = KeQueryActiveProcessorCountEx(0xFFFFu);
          v7 = RegistryDwordValueNoDefault == v14;
        }
      }
    }
    v8 = (v12 & 0x40000) != 0;
  }
  if ( a1 )
    *a1 = v6;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v8;
  return RegistryDwordValueNoDefault;
}
