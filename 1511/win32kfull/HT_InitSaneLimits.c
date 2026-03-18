/*
 * XREFs of HT_InitSaneLimits @ 0x1C01106D4
 * Callers:
 *     EnableHalftone @ 0x1C0110660 (EnableHalftone.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 HT_InitSaneLimits()
{
  int v0; // ebx
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+58h] [rbp-A8h]
  const wchar_t *v10; // [rsp+60h] [rbp-A0h]
  int *v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+70h] [rbp-90h]
  int *v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h]
  const wchar_t *v17; // [rsp+98h] [rbp-68h]
  unsigned int *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  _BYTE v25[32]; // [rsp+D8h] [rbp-28h] BYREF

  v0 = 0;
  v6 = 20000000;
  v5 = 0;
  v10 = L"DisableSaneLimits";
  v3 = 0;
  v11 = &v3;
  v12 = 4;
  v14 = 4;
  v13 = &v5;
  v17 = L"HTSurfaceSizeLimit";
  v18 = &v4;
  v19 = 4;
  v21 = 4;
  v20 = &v6;
  v4 = 0;
  v8 = 0LL;
  v9 = 32;
  v15 = 0LL;
  v16 = 32;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((__int64 (__fastcall *)(__int64, const wchar_t *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
             3LL,
             L"GRE_Initialize",
             &v8,
             0LL,
             0LL);
  if ( !(_DWORD)result )
  {
    result = v4;
    LOBYTE(v0) = v3 == 0;
    gdwMaxSurfaceSize = v4;
    gbCheckLimits = v0;
  }
  return result;
}
