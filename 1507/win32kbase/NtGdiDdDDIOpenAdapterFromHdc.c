/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C000F250
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromHdc(unsigned __int64 a1)
{
  struct _UNICODE_STRING *v2; // rdx
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  BOOL v8; // esi
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  _DWORD *v11; // rcx
  _QWORD *v12; // rcx
  int *v13; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-88h] BYREF
  __int64 v16; // [rsp+30h] [rbp-78h]
  PDEVICE_OBJECT v17; // [rsp+38h] [rbp-70h] BYREF
  __int128 v18; // [rsp+40h] [rbp-68h]
  _QWORD v19[11]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp+20h] BYREF

  v2 = (struct _UNICODE_STRING *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
  DestinationString = *v2;
  v16 = *(_QWORD *)&v2[1].Length;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v19, *(HDC *)&DestinationString.Length);
  if ( v19[0] )
  {
    v5 = *(_QWORD *)(v19[0] + 48LL);
    v20 = v5;
    if ( v5 )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 64), 11);
      if ( (*(_DWORD *)(v5 + 56) & 0x20001) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v20) )
      {
        v7 = *(_QWORD *)(v5 + 2600);
        v4 = *(_DWORD *)(v7 + 272);
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v7);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      }
      if ( !DeviceObject
        && dword_1C0102080
        && (*(_DWORD *)(v5 + 56) & 0x20000) == 0
        && (*(_DWORD *)(*(_QWORD *)(v5 + 2600) + 160LL) & 4) != 0 )
      {
        v8 = 0;
        CurrentProcess = PsGetCurrentProcess();
        ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
        if ( ProcessImageFileName )
          v8 = _stricmp(ProcessImageFileName, "rdvgm.exe") == 0;
        if ( v8 )
        {
          v4 = dword_1C01020D8;
          RtlInitUnicodeString(&DestinationString, &Dest);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        }
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 64), v6);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v5 + 64));
    }
  }
  v17 = 0LL;
  v18 = 0uLL;
  if ( DeviceObjectPointer < 0
    || (v17 = DeviceObject,
        ObfReferenceObject(DeviceObject),
        ObfDereferenceObject(FileObject),
        FileObject = 0LL,
        DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C01010B8)(&v17),
        ObfDereferenceObject(DeviceObject),
        DeviceObject = 0LL,
        DeviceObjectPointer < 0) )
  {
    LODWORD(v18) = 0;
    *(_QWORD *)((char *)&v18 + 4) = 0LL;
    v4 = 0;
  }
  v11 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= (unsigned __int64)W32UserProbeAddress )
    v11 = W32UserProbeAddress;
  *v11 = v18;
  v12 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= (unsigned __int64)W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  *v12 = *(_QWORD *)((char *)&v18 + 4);
  v13 = (int *)(a1 + 20);
  if ( a1 + 20 >= (unsigned __int64)W32UserProbeAddress )
    v13 = (int *)W32UserProbeAddress;
  *v13 = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return (unsigned int)DeviceObjectPointer;
}
