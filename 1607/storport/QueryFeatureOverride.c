/*
 * XREFs of QueryFeatureOverride @ 0x1C0033738
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x1C00336B4 (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, _DWORD *a2)
{
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v8[14]; // [rsp+60h] [rbp-49h] BYREF
  char v9; // [rsp+D0h] [rbp+27h] BYREF

  *(_DWORD *)&String.Length = 0x200000;
  v5 = 0;
  String.Buffer = (wchar_t *)&v9;
  RtlIntegerToUnicodeString(a1, 0xAu, &String);
  memset(v8, 0, sizeof(v8));
  v8[2] = String.Buffer;
  LODWORD(v8[1]) = 292;
  v8[3] = &v5;
  LODWORD(v8[4]) = 0x4000000;
  v8[5] = 0LL;
  LODWORD(v8[6]) = 0;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  if ( ((int (__fastcall *)(_QWORD, const wchar_t *, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
         0LL,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         v8,
         0LL,
         0LL) < 0 )
  {
    *a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *a2 = (v5 != 0) + 1;
  }
  return result;
}
