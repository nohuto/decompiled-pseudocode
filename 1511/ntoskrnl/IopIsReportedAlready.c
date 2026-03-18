/*
 * XREFs of IopIsReportedAlready @ 0x1405291E0
 * Callers:
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PnpIsDuplicateDevice @ 0x1406034E4 (PnpIsDuplicateDevice.c)
 */

char __fastcall IopIsReportedAlready(__int64 a1, __int64 a2, const UNICODE_STRING *a3, __int64 a4, _DWORD *a5)
{
  char *v5; // rdi
  void *v6; // r14
  void *v7; // rbx
  char v8; // si
  HANDLE v11; // rcx
  NTSTATUS RegistryValue; // ebx
  bool v14; // sf
  NTSTATUS v15; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD *v19; // [rsp+50h] [rbp-B0h] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  void *v21; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING String1; // [rsp+80h] [rbp-80h]
  WCHAR SourceString[256]; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  KeyHandle = 0LL;
  *a5 = 0;
  v8 = 0;
  v18 = 0;
  String1 = a3;
  v17 = 512;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              a2,
              5,
              (__int64)&v18,
              (__int64)SourceString,
              (__int64)&v17) < 0
    || v18 != 1
    || !v17
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
  RegistryValue = IopGetRegistryValue(Handle, L"BootConfig", 0, &v19);
  ZwClose(Handle);
  v14 = RegistryValue < 0;
  v7 = v19;
  if ( v14 || v19[1] != 8 || !v19[3] )
    goto LABEL_7;
  v5 = (char *)v19 + (unsigned int)v19[2];
  if ( a4 )
  {
    if ( v5 && (unsigned int)PnpIsDuplicateDevice(a4, (char *)v19 + (unsigned int)v19[2]) )
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
    || (v15 = IopGetRegistryValue(KeyHandle, L"DeviceReported", 0, &v21), v6 = v21, v15 < 0) )
  {
    if ( !*a5 )
      goto LABEL_16;
    v11 = KeyHandle;
    if ( KeyHandle )
    {
LABEL_15:
      *(_DWORD *)&DestinationString.Length = 1966108;
      DestinationString.Buffer = L"DeviceReported";
      Data = 1;
      v8 = 1;
      if ( ZwSetValueKey(v11, &DestinationString, 0, 4u, &Data, 4u) >= 0 )
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
      v11 = KeyHandle;
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
