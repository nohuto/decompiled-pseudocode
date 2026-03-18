/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0070EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00319F0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromHdc(unsigned __int64 a1)
{
  struct _UNICODE_STRING *v2; // rdx
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  WCHAR *v9; // rdx
  _DWORD *v10; // rcx
  _QWORD *v11; // rcx
  _DWORD *v12; // rcx
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  const char *ProcessImageFileName; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  int v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+2Ch] [rbp-5Ch]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]
  PDEVICE_OBJECT v25; // [rsp+48h] [rbp-40h] BYREF
  __int128 v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+98h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (struct _UNICODE_STRING *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
  DestinationString = *v2;
  v24 = *(_QWORD *)&v2[1].Length;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v21 = 0;
  v22 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v20, *(HDC *)&DestinationString.Length);
  if ( v20 )
  {
    v5 = *(_QWORD *)(v20 + 48);
    v27 = v5;
    if ( !v5 )
    {
LABEL_10:
      XDCOBJ::vUnlockFast((XDCOBJ *)&v20);
      goto LABEL_11;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 64), 11);
    v8 = *(unsigned int *)(v5 + 56);
    if ( (*(_DWORD *)(v5 + 56) & 0x20001) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v27) )
    {
      v9 = *(WCHAR **)(v5 + 2600);
      v4 = *((_DWORD *)v9 + 68);
    }
    else
    {
      if ( (v8 & 0x20000) != 0 )
        goto LABEL_9;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 2600) + 160LL) & 0x4000000) == 0 )
        goto LABEL_9;
      CurrentProcess = PsGetCurrentProcess(v6, v8);
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
      v17 = (unsigned __int16)gProtocolType;
      if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
        goto LABEL_9;
      if ( !Object )
        goto LABEL_9;
      LOWORD(v17) = gProtocolType - 1;
      if ( (PVOID)PsGetCurrentProcess(v17, v15) == gpepCSRSS
        || UserIsCurrentProcessDwm(v19, v18)
        || !ProcessImageFileName
        || !_stricmp(ProcessImageFileName, "rdpshell.exe")
        || !_stricmp(ProcessImageFileName, "rdpclip.exe") )
      {
        goto LABEL_9;
      }
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2600) + 272LL);
      v9 = Dest;
    }
    RtlInitUnicodeString(&DestinationString, v9);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
LABEL_9:
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 64), v7);
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v5 + 64));
    goto LABEL_10;
  }
LABEL_11:
  v25 = 0LL;
  v26 = 0uLL;
  if ( DeviceObjectPointer < 0
    || (v25 = DeviceObject,
        ObfReferenceObject(DeviceObject),
        ObfDereferenceObject(FileObject),
        FileObject = 0LL,
        DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C0103ED8)(&v25),
        ObfDereferenceObject(DeviceObject),
        DeviceObject = 0LL,
        DeviceObjectPointer < 0) )
  {
    LODWORD(v26) = 0;
    *(_QWORD *)((char *)&v26 + 4) = 0LL;
    v4 = 0;
  }
  v10 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= (unsigned __int64)W32UserProbeAddress )
    v10 = W32UserProbeAddress;
  *v10 = v26;
  v11 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= (unsigned __int64)W32UserProbeAddress )
    v11 = W32UserProbeAddress;
  *v11 = *(_QWORD *)((char *)&v26 + 4);
  v12 = (_DWORD *)(a1 + 20);
  if ( a1 + 20 >= (unsigned __int64)W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  *v12 = v4;
  return (unsigned int)DeviceObjectPointer;
}
