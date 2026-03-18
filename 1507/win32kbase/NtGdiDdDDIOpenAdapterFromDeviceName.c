/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C0082E30
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005A318 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(_QWORD *a1)
{
  _QWORD *v1; // r15
  __int128 v2; // xmm0
  NTSTATUS DeviceObjectPointer; // edi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  BOOL v8; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  _DWORD *v11; // rcx
  _QWORD *v12; // rcx
  int v13; // [rsp+20h] [rbp-288h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-280h] BYREF
  PDEVICE_OBJECT v15; // [rsp+30h] [rbp-278h] BYREF
  __int128 v16; // [rsp+38h] [rbp-270h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-260h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-258h] BYREF
  __int128 v19; // [rsp+60h] [rbp-248h]
  __int64 v20; // [rsp+70h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-228h] BYREF

  v1 = a1;
  memset(SourceString, 0, sizeof(SourceString));
  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  v2 = *(_OWORD *)a1;
  v19 = v2;
  v20 = a1[2];
  if ( (__int64)v2 + 512 > (unsigned __int64)W32UserProbeAddress || (__int64)v2 + 512 < (unsigned __int64)v2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW((char *)SourceString, 0x200uLL, (char *)v2) < 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *))qword_1C01013A0)(&DestinationString) < 0 )
    return 3221225485LL;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v15 = 0LL;
  v16 = 0uLL;
  v5 = 0;
  v13 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_22;
  v15 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C01010B8)(&v15);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_22;
  v5 = v16;
  v13 = v16;
  if ( dword_1C0102080 )
  {
    v8 = 0;
    CurrentProcess = PsGetCurrentProcess(v7, v6);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    if ( ProcessImageFileName )
      v8 = _stricmp(ProcessImageFileName, "rdvgm.exe") == 0;
    if ( v8 && *(_QWORD *)((char *)&v16 + 4) != qword_1C0102084 )
      DeviceObjectPointer = -1073741811;
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_22:
    *(_QWORD *)&v16 = 0LL;
    DWORD2(v16) = 0;
  }
  v11 = v1 + 1;
  if ( v1 + 1 >= W32UserProbeAddress )
    v11 = W32UserProbeAddress;
  *v11 = v16;
  v12 = (_QWORD *)((char *)v1 + 12);
  if ( (char *)v1 + 12 >= W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  *v12 = *(_QWORD *)((char *)&v16 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v5 )
    {
      v13 = v5;
      ((void (__fastcall *)(int *, _QWORD))qword_1C01010E0)(&v13, 0LL);
    }
  }
  return (unsigned int)DeviceObjectPointer;
}
