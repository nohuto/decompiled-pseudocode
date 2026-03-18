/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C00ECAA8
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00EC0D8 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DmmSetViewState @ 0x1C00C4E68 (DmmSetViewState.c)
 *     DpiAppendNumberToString @ 0x1C00ECDF0 (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00ECEE4 (DpiGdoSetupGdiParameters.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00ED690 (WdmlibIoCreateDeviceSecure.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, ULONG *a3)
{
  __int64 v3; // rsi
  char v4; // r13
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r14d
  ULONG v9; // edx
  char *DeviceExtension; // rdi
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rax
  int v17; // eax
  char **v18; // rdx
  PDEVICE_OBJECT v19; // rax
  NTSTATUS v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  PVOID *v25; // rax
  BOOLEAN v26; // [rsp+30h] [rbp-41h]
  char v27; // [rsp+58h] [rbp-19h]
  char v28; // [rsp+59h] [rbp-18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-11h] BYREF
  PRKMUTEX Mutex; // [rsp+68h] [rbp-9h]
  struct _UNICODE_STRING DeviceName; // [rsp+70h] [rbp-1h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp+Fh] BYREF
  char v35; // [rsp+F0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v6 = a2;
  LODWORD(v7) = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168));
  Mutex = (PRKMUTEX)(v3 + 3376);
  KeWaitForSingleObject((PVOID)(v3 + 3376), Executive, 0, 0, 0LL);
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = *a3;
      DeviceName.Length = 0;
      *(_QWORD *)&DeviceName.MaximumLength = 0LL;
      *(_DWORD *)((char *)&DeviceName.Buffer + 2) = 0;
      DeviceExtension = 0LL;
      HIWORD(DeviceName.Buffer) = 0;
      *(_QWORD *)&SymbolicLinkName.MaximumLength = 0LL;
      *(_DWORD *)((char *)&SymbolicLinkName.Buffer + 2) = 0;
      HIWORD(SymbolicLinkName.Buffer) = 0;
      DeviceObject = 0LL;
      SymbolicLinkName.Length = 0;
      v27 = 0;
      v28 = 0;
      v35 = 0;
      LODWORD(v7) = DpiAppendNumberToString(L"\\Device\\Video", v9, &DeviceName);
      if ( (int)v7 < 0 )
        goto LABEL_28;
      v11 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xD0u,
              &DeviceName,
              0x23u,
              0x100u,
              v26,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v7 = v11;
      if ( v11 < 0 )
        goto LABEL_22;
      LODWORD(v7) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *a3 + 1, &SymbolicLinkName);
      if ( (int)v7 < 0 )
        goto LABEL_28;
      v13 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      v7 = v13;
      if ( v13 < 0 )
        goto LABEL_22;
      v27 = 1;
      DeviceExtension = (char *)DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 6;
      *((_QWORD *)DeviceExtension + 3) = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = a1;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
      *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 15) = DpiGdoDispatchIoctl;
      *((_DWORD *)DeviceExtension + 38) = *a3;
      *((_DWORD *)DeviceExtension + 39) = v8;
      if ( v8 )
      {
        if ( v8 >= 0x10 )
        {
          v23 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v23 + 24) = v8;
          WdLogEvent5_WdError(v23);
        }
      }
      else if ( v6 == 1 )
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 3688), 1);
        DmmSetViewState(*(DXGADAPTER **)(v3 + 3688), *((_DWORD *)DeviceExtension + 39), 1);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 3688), 1);
      }
      v15 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
              0LL,
              (PUNICODE_STRING)(DeviceExtension + 168));
      v7 = v15;
      if ( v15 < 0 )
        goto LABEL_22;
      v35 = 1;
      LODWORD(v7) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, v8);
      if ( (int)v7 < 0 )
        goto LABEL_27;
      v16 = *(_QWORD *)(v3 + 3688);
      *((_DWORD *)DeviceExtension + 50) = -1;
      *((_QWORD *)DeviceExtension + 23) = v16;
      v17 = DMgrWriteDeviceCountToRegistry();
      v7 = v17;
      if ( v17 < 0 )
        goto LABEL_22;
      v18 = *(char ***)(v3 + 3368);
      if ( *v18 != (char *)(v3 + 3360) )
        __fastfail(3u);
      *((_QWORD *)DeviceExtension + 1) = v18;
      *(_QWORD *)DeviceExtension = v3 + 3360;
      *v18 = DeviceExtension;
      *(_QWORD *)(v3 + 3368) = DeviceExtension;
      v19 = DeviceObject;
      ++*(_DWORD *)(v3 + 3432);
      v28 = 1;
      v19->Flags |= 4u;
      DeviceObject->Flags &= ~0x80u;
      v20 = IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 168), 1u);
      v7 = v20;
      if ( v20 < 0 )
      {
LABEL_22:
        v22 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v22 + 24) = v7;
        WdLogEvent5_WdError(v22);
      }
      else
      {
        v4 = 1;
      }
      if ( (int)v7 < 0 )
        break;
      v4 = 0;
LABEL_17:
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v7 >= 0 )
      {
        v6 = a2;
        ++v8;
        ++a3;
        if ( v8 < a2 )
          continue;
      }
      goto LABEL_19;
    }
    if ( v4 == 1 && DeviceExtension )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 168), 0);
    if ( v35 == 1 )
LABEL_27:
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 168));
LABEL_28:
    DMgrWriteDeviceCountToRegistry();
    if ( v27 == 1 )
      IoDeleteSymbolicLink(&SymbolicLinkName);
    v4 = 0;
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( v28 == 1 )
    {
      v24 = *(_QWORD **)DeviceExtension;
      v25 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v25 != DeviceExtension )
        __fastfail(3u);
      *v25 = v24;
      v24[1] = v25;
      --*(_DWORD *)(v3 + 3432);
    }
    goto LABEL_17;
  }
LABEL_19:
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v7;
}
