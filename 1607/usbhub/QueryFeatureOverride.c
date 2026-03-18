/*
 * XREFs of QueryFeatureOverride @ 0x1C004AE68
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x1C004AD7C (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG Value, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  int v9; // eax
  __int64 v10; // rcx
  PVOID SystemRoutineAddress; // rax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v18[22]; // [rsp+70h] [rbp-90h] BYREF
  char v19; // [rsp+120h] [rbp+20h] BYREF
  char v20; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0;
  *a3 = 0;
  *a4 = 0x80000000;
  v13 = 0;
  v14 = 0;
  memset(v18, 0, 0xA8uLL);
  *(_DWORD *)&String.Length = 0x200000;
  String.Buffer = (wchar_t *)&v19;
  *(_DWORD *)&DestinationString.Length = 2883584;
  DestinationString.Buffer = (wchar_t *)&v20;
  RtlIntegerToUnicodeString(Value, 0xAu, &String);
  memset(v18, 0, 0xA8uLL);
  v9 = 0;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    v18[2] = DestinationString.Buffer;
    v18[3] = &v14;
    v9 = 1;
    LODWORD(v18[1]) = 292;
    LODWORD(v18[4]) = 0x4000000;
    v18[5] = 0LL;
    LODWORD(v18[6]) = 0;
  }
  v10 = 7LL * v9;
  v18[v10 + 2] = String.Buffer;
  v18[v10 + 3] = &v13;
  LODWORD(v18[v10 + 1]) = 292;
  LODWORD(v18[v10 + 4]) = 0x4000000;
  v18[v10 + 5] = 0LL;
  LODWORD(v18[v10 + 6]) = 0;
  RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  if ( ((int (__fastcall *)(_QWORD, const wchar_t *, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
         0LL,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         v18,
         0LL,
         0LL) >= 0 )
  {
    *a3 = (v13 != 0) + 1;
    if ( a2 && v14 <= 0xFF )
      *a4 = v14;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v4;
}
