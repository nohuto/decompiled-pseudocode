/*
 * XREFs of IopIsReportedAlready @ 0x1405556E8
 * Callers:
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpIsDuplicateDevice @ 0x14062D930 (PnpIsDuplicateDevice.c)
 */

char __fastcall IopIsReportedAlready(__int64 a1, __int64 a2, const UNICODE_STRING *a3, __int64 a4, _DWORD *a5)
{
  char *v5; // rdi
  void *v6; // r14
  void *v7; // rbx
  char v8; // si
  __int64 v11; // rdx
  HANDLE v13; // rcx
  NTSTATUS RegistryValue; // ebx
  bool v16; // sf
  NTSTATUS v17; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int Data; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING String1; // [rsp+80h] [rbp-80h]
  WCHAR SourceString[256]; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  *a5 = 0;
  v8 = 0;
  KeyHandle = 0LL;
  v19 = 0;
  String1 = a3;
  v11 = *(_QWORD *)(a1 + 8);
  v20 = 512;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v11,
              a2,
              5,
              (__int64)&v19,
              (__int64)SourceString,
              (__int64)&v20,
              0) < 0
    || v19 != 1
    || !v20
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
  {
    goto LABEL_10;
  }
  if ( (int)CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              0x14u,
              0,
              131097,
              0,
              (__int64)&Handle,
              0LL) < 0 )
    goto LABEL_7;
  RegistryValue = IopGetRegistryValue(Handle, L"BootConfig", 0, &v22);
  ZwClose(Handle);
  v16 = RegistryValue < 0;
  v7 = v22;
  if ( v16 || v22[1] != 8 || !v22[3] )
    goto LABEL_7;
  v5 = (char *)v22 + (unsigned int)v22[2];
  if ( a4 )
  {
    if ( v5 && (unsigned int)PnpIsDuplicateDevice(a4, (char *)v22 + (unsigned int)v22[2]) )
      *a5 = 1;
LABEL_7:
    if ( a4 )
      goto LABEL_10;
  }
  if ( !v5 )
    *a5 = 1;
LABEL_10:
  if ( (int)CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              0x13u,
              0,
              983103,
              0,
              (__int64)&KeyHandle,
              0LL) < 0
    || (v17 = IopGetRegistryValue(KeyHandle, L"DeviceReported", 0, &v23), v6 = v23, v17 < 0) )
  {
    if ( !*a5 )
      goto LABEL_16;
    v13 = KeyHandle;
    if ( KeyHandle )
    {
LABEL_15:
      *(_DWORD *)&DestinationString.Length = 1966108;
      DestinationString.Buffer = L"DeviceReported";
      Data = 1;
      v8 = 1;
      if ( ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u) >= 0 )
        goto LABEL_16;
      goto LABEL_23;
    }
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 8),
                0x13u,
                0,
                983103,
                1,
                (__int64)&KeyHandle,
                0LL) >= 0 )
    {
      v13 = KeyHandle;
      goto LABEL_15;
    }
  }
LABEL_23:
  v8 = 0;
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
