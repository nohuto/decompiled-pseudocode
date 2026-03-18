/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0075850
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromHdc(ULONGLONG a1)
{
  ULONGLONG v2; // rdx
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  int v6; // edx
  __int16 v7; // r8
  WCHAR *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  _QWORD *v12; // rcx
  _DWORD *v13; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h]
  PDEVICE_OBJECT v17; // [rsp+38h] [rbp-60h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h]
  _QWORD v19[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = W32UserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)v2;
  v16 = *(_QWORD *)(v2 + 16);
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
      v6 = *(_DWORD *)(v5 + 56);
      v7 = 1;
      if ( (v6 & 0x20001) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v20) )
      {
        v8 = *(WCHAR **)(v5 + 2600);
        v4 = *((_DWORD *)v8 + 68);
      }
      else
      {
        if ( (v6 & 0x20000) != 0 )
          goto LABEL_17;
        v9 = *(_QWORD *)(v5 + 2600);
        if ( !v9
          || (*(_DWORD *)(v9 + 160) & 0x4000000) == 0
          || (unsigned __int16)(gProtocolType - v7) > 0xFFFDu
          || !Object
          || (PVOID)PsGetCurrentProcess(65533LL) == gpepCSRSS
          || UserIsCurrentProcessDwm(v10) )
        {
          goto LABEL_17;
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2600) + 272LL);
        v8 = Dest;
      }
      RtlInitUnicodeString(&DestinationString, v8);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
LABEL_17:
      EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v5 + 64));
    }
  }
  v17 = 0LL;
  v18 = 0uLL;
  if ( DeviceObjectPointer < 0
    || (v17 = DeviceObject,
        ObfReferenceObject(DeviceObject),
        ObfDereferenceObject(FileObject),
        FileObject = 0LL,
        DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C011B218)(&v17),
        ObfDereferenceObject(DeviceObject),
        DeviceObject = 0LL,
        DeviceObjectPointer < 0) )
  {
    LODWORD(v18) = 0;
    *(_QWORD *)((char *)&v18 + 4) = 0LL;
    v4 = 0;
  }
  v11 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= W32UserProbeAddress )
    v11 = (_DWORD *)W32UserProbeAddress;
  *v11 = v18;
  v12 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  *v12 = *(_QWORD *)((char *)&v18 + 4);
  v13 = (_DWORD *)(a1 + 20);
  if ( a1 + 20 >= W32UserProbeAddress )
    v13 = (_DWORD *)W32UserProbeAddress;
  *v13 = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return (unsigned int)DeviceObjectPointer;
}
