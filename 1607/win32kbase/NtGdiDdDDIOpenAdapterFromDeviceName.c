/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C005D660
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005FC70 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(ULONGLONG a1)
{
  ULONGLONG v2; // rcx
  __int128 v3; // xmm0
  NTSTATUS DeviceObjectPointer; // edi
  int v6; // esi
  _DWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-270h] BYREF
  PFILE_OBJECT FileObject; // [rsp+30h] [rbp-268h] BYREF
  PDEVICE_OBJECT v12; // [rsp+38h] [rbp-260h]
  __int128 v13; // [rsp+40h] [rbp-258h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  __int128 v15; // [rsp+60h] [rbp-238h]
  __int64 v16; // [rsp+70h] [rbp-228h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-218h] BYREF

  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  v3 = *(_OWORD *)v2;
  v15 = v3;
  v16 = *(_QWORD *)(v2 + 16);
  if ( (__int64)v3 + 512 > W32UserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)W32UserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW(SourceString, 0x200uLL, (const unsigned __int16 *)v3) < 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)_guard_dispatch_icall_fptr() < 0 )
    return 3221225485LL;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v12 = 0LL;
  v13 = 0uLL;
  v6 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_32;
  v12 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = _guard_dispatch_icall_fptr();
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_32;
  v6 = v13;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && Object
    && (PVOID)PsGetCurrentProcess(65533LL) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v9)
    && MEMORY[0xFFFFF78000000264] == 3
    && (MEMORY[0xFFFFF780000002D0] & 0x110) == 0x10
    && *(_QWORD *)((char *)&v13 + 4) != qword_1C011BC74 )
  {
    DeviceObjectPointer = -1073741811;
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_32:
    LODWORD(v13) = 0;
    *(_QWORD *)((char *)&v13 + 4) = 0LL;
  }
  v7 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= W32UserProbeAddress )
    v7 = (_DWORD *)W32UserProbeAddress;
  *v7 = v13;
  v8 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= W32UserProbeAddress )
    v8 = (_QWORD *)W32UserProbeAddress;
  *v8 = *(_QWORD *)((char *)&v13 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v6 )
      _guard_dispatch_icall_fptr();
  }
  return (unsigned int)DeviceObjectPointer;
}
