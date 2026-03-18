/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C00775C0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0077838 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(_QWORD *a1)
{
  _QWORD *v1; // r15
  __int128 v2; // xmm0
  NTSTATUS DeviceObjectPointer; // edi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  const char *ProcessImageFileName; // r14
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-288h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-280h] BYREF
  PDEVICE_OBJECT v18; // [rsp+30h] [rbp-278h] BYREF
  __int128 v19; // [rsp+38h] [rbp-270h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-260h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-258h] BYREF
  __int128 v22; // [rsp+60h] [rbp-248h]
  __int64 v23; // [rsp+70h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-228h] BYREF

  v1 = a1;
  memset(SourceString, 0, sizeof(SourceString));
  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  v2 = *(_OWORD *)a1;
  v22 = v2;
  v23 = a1[2];
  if ( (__int64)v2 + 512 > (unsigned __int64)W32UserProbeAddress || (__int64)v2 + 512 < (unsigned __int64)v2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW(SourceString, 0x200uLL, (const unsigned __int16 *)v2) < 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *))qword_1C01041C0)(&DestinationString) < 0 )
    return 3221225485LL;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v18 = 0LL;
  v19 = 0uLL;
  v5 = 0;
  v16 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_33;
  v18 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C0103ED8)(&v18);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_33;
  v5 = v19;
  v16 = v19;
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  v11 = (unsigned __int16)gProtocolType;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( Object )
    {
      LOWORD(v11) = gProtocolType - 1;
      if ( (PVOID)PsGetCurrentProcess(v11, v9) != gpepCSRSS
        && !UserIsCurrentProcessDwm(v15, v14)
        && ProcessImageFileName
        && _stricmp(ProcessImageFileName, "rdpshell.exe")
        && _stricmp(ProcessImageFileName, "rdpclip.exe")
        && *(_QWORD *)((char *)&v19 + 4) != qword_1C0104874 )
      {
        DeviceObjectPointer = -1073741811;
      }
    }
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_33:
    *(_QWORD *)&v19 = 0LL;
    DWORD2(v19) = 0;
  }
  v12 = v1 + 1;
  if ( v1 + 1 >= W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  *v12 = v19;
  v13 = (_QWORD *)((char *)v1 + 12);
  if ( (char *)v1 + 12 >= W32UserProbeAddress )
    v13 = W32UserProbeAddress;
  *v13 = *(_QWORD *)((char *)&v19 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v5 )
    {
      v16 = v5;
      ((void (__fastcall *)(int *, _QWORD))qword_1C0103F00)(&v16, 0LL);
    }
  }
  return (unsigned int)DeviceObjectPointer;
}
