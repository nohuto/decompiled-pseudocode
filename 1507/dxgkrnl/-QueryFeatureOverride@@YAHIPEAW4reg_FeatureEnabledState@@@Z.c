/*
 * XREFs of ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1C001C500
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z @ 0x1C001C378 (-EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, enum reg_FeatureEnabledState *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v6[14]; // [rsp+50h] [rbp-49h] BYREF
  char v7; // [rsp+C0h] [rbp+27h] BYREF

  *(_DWORD *)&String.Length = 0x200000;
  v4 = 0;
  String.Buffer = (wchar_t *)&v7;
  RtlIntegerToUnicodeString(a1, 0xAu, &String);
  memset(v6, 0, sizeof(v6));
  v6[2] = String.Buffer;
  LODWORD(v6[1]) = 292;
  v6[3] = &v4;
  LODWORD(v6[4]) = 0x4000000;
  v6[5] = 0LL;
  LODWORD(v6[6]) = 0;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
              v6,
              0LL,
              0LL) < 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *(_DWORD *)a2 = (v4 != 0) + 1;
  }
  return result;
}
