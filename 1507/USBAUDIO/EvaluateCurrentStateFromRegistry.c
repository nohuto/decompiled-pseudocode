/*
 * XREFs of EvaluateCurrentStateFromRegistry @ 0x1C0001880
 * Callers:
 *     EvaluateCurrentState @ 0x1C00019B4 (EvaluateCurrentState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008240 (memset.c)
 */

__int64 __fastcall EvaluateCurrentStateFromRegistry(int a1, int a2, volatile signed __int32 *a3)
{
  unsigned int v3; // edi
  BOOL v5; // ebx
  PVOID SystemRoutineAddress; // rax
  int v8; // [rsp+30h] [rbp-89h] BYREF
  _UNICODE_STRING String; // [rsp+38h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v11[14]; // [rsp+60h] [rbp-59h] BYREF
  char v12; // [rsp+D0h] [rbp+17h] BYREF

  v3 = 0;
  *(_DWORD *)&String.Length = 0x200000;
  v8 = 0;
  String.Buffer = (PWSTR)&v12;
  v5 = a2 != 1;
  RtlIntegerToUnicodeString(__ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF, 0xAu, &String);
  memset(v11, 0, sizeof(v11));
  v11[2] = String.Buffer;
  LODWORD(v11[1]) = 292;
  v11[3] = &v8;
  LODWORD(v11[4]) = 0x4000000;
  v11[5] = 0LL;
  LODWORD(v11[6]) = 0;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  if ( ((int (__fastcall *)(_QWORD, const wchar_t *, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
         0LL,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         v11,
         0LL,
         0LL) >= 0
    && (v8 != 0) != -1 )
  {
    v5 = v8 != 0;
  }
  _InterlockedCompareExchange(a3, v5 + 1, 0);
  LOBYTE(v3) = *a3 != 1;
  return v3;
}
