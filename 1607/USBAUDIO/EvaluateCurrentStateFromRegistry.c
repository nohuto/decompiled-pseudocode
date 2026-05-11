/*
 * XREFs of EvaluateCurrentStateFromRegistry @ 0x1C0001870
 * Callers:
 *     EvaluateFeature @ 0x1C0001A68 (EvaluateFeature.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008380 (memset.c)
 */

_BOOL8 __fastcall EvaluateCurrentStateFromRegistry(int a1, int a2, int a3, char a4, _BYTE *a5)
{
  BOOL v7; // esi
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  PVOID SystemRoutineAddress; // rax
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v18[22]; // [rsp+70h] [rbp-90h] BYREF
  char v19; // [rsp+120h] [rbp+20h] BYREF
  char v20; // [rsp+140h] [rbp+40h] BYREF

  v14 = 0;
  v13 = 0;
  v7 = a3 != 1;
  *a5 = a4;
  v8 = 0x80000000;
  memset(v18, 0, 0xA8uLL);
  *(_DWORD *)&String.Length = 0x200000;
  *(_DWORD *)&DestinationString.Length = 2883584;
  String.Buffer = (PWSTR)&v19;
  DestinationString.Buffer = (PWSTR)&v20;
  RtlIntegerToUnicodeString(__ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF, 0xAu, &String);
  memset(v18, 0, 0xA8uLL);
  v9 = 0;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    v18[2] = DestinationString.Buffer;
    v18[3] = &v13;
    v9 = 1;
    LODWORD(v18[1]) = 292;
    LODWORD(v18[4]) = 0x4000000;
    v18[5] = 0LL;
    LODWORD(v18[6]) = 0;
  }
  v10 = 7LL * v9;
  v18[v10 + 2] = String.Buffer;
  v18[v10 + 3] = &v14;
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
    if ( a2 && v13 <= 0xFF )
      v8 = v13;
    if ( (v14 != 0) != -1 )
      v7 = v14 != 0;
    if ( v8 != 0x80000000 )
      *a5 = v8;
  }
  return v7;
}
