/*
 * XREFs of QueryFeatureOverride @ 0x1800F6EF4
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x1800F67D4 (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x18000D730 (RtlQueryRegistryValuesEx.c)
 *     RtlIntegerToUnicodeString @ 0x180021780 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-69h] BYREF
  UNICODE_STRING v5; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v6[14]; // [rsp+50h] [rbp-49h] BYREF
  char v7; // [rsp+C0h] [rbp+27h] BYREF

  *(_DWORD *)&v5.Length = 0x200000;
  v4 = 0;
  v5.Buffer = (unsigned __int16 *)&v7;
  RtlIntegerToUnicodeString(a1, 0xAu, &v5);
  memset(v6, 0, sizeof(v6));
  v6[2] = v5.Buffer;
  LODWORD(v6[1]) = 292;
  v6[3] = &v4;
  LODWORD(v6[4]) = 0x4000000;
  v6[5] = 0LL;
  LODWORD(v6[6]) = 0;
  if ( (int)RtlQueryRegistryValuesEx(
              0,
              (int)L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
              (int)v6,
              0,
              0LL) < 0 )
  {
    *a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *a2 = (v4 != 0) + 1;
  }
  return result;
}
