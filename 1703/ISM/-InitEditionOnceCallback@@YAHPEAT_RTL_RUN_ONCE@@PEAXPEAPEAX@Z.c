/*
 * XREFs of ?InitEditionOnceCallback@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180001690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitEditionOnceCallback(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ecx
  DWORD Type; // [rsp+30h] [rbp-18h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-14h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-10h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+20h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &gdwDeviceFamily, 0LL);
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, 1u, &hKey) )
  {
    if ( hKey )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"EnableMitInputProcessing", 0LL, &Type, Data, &cbData) && Type == 4 )
      {
        v3 = gdwMitConfig;
        if ( cbData == 4 )
          v3 = *(_DWORD *)Data;
        gdwMitConfig = v3;
      }
    }
  }
  return 1LL;
}
