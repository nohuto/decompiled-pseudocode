/*
 * XREFs of ?QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z @ 0x1C0021610
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x1C00213A8 (-EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG Value, int a2, enum reg_FeatureEnabledState *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[22]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+110h] [rbp+10h] BYREF
  char v18; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0;
  *(_DWORD *)a3 = 0;
  *a4 = 0x80000000;
  v12 = 0;
  v13 = 0;
  memset(v16, 0, 0xA8uLL);
  *(_DWORD *)&String.Length = 0x200000;
  String.Buffer = (wchar_t *)&v17;
  *(_DWORD *)&DestinationString.Length = 2883584;
  DestinationString.Buffer = (wchar_t *)&v18;
  RtlIntegerToUnicodeString(Value, 0xAu, &String);
  memset(v16, 0, 0xA8uLL);
  v9 = 0;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    v16[2] = DestinationString.Buffer;
    v16[3] = &v13;
    v9 = 1;
    LODWORD(v16[1]) = 292;
    LODWORD(v16[4]) = 0x4000000;
    v16[5] = 0LL;
    LODWORD(v16[6]) = 0;
  }
  v10 = 7LL * v9;
  v16[v10 + 2] = String.Buffer;
  v16[v10 + 3] = &v12;
  LODWORD(v16[v10 + 1]) = 292;
  LODWORD(v16[v10 + 4]) = 0x4000000;
  v16[v10 + 5] = 0LL;
  LODWORD(v16[v10 + 6]) = 0;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
              v16,
              0LL,
              0LL) >= 0 )
  {
    *(_DWORD *)a3 = (v12 != 0) + 1;
    if ( a2 && v13 <= 0xFF )
      *a4 = v13;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v4;
}
