/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C00CEE00
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00D4150 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DmmSetViewState @ 0x1C00C4878 (DmmSetViewState.c)
 *     DpiAppendNumberToString @ 0x1C00CF150 (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C00CF250 (DpiGdoSetupGdiParameters.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00CF8C0 (WdmlibIoCreateDeviceSecure.c)
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
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  char **v21; // rdx
  PDEVICE_OBJECT v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  _QWORD *v26; // rax
  void *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  PVOID *v30; // rax
  char v31; // [rsp+58h] [rbp-19h]
  char v32; // [rsp+59h] [rbp-18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-11h] BYREF
  PRKMUTEX Mutex; // [rsp+68h] [rbp-9h]
  struct _UNICODE_STRING DeviceName; // [rsp+70h] [rbp-1h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp+Fh] BYREF
  char v39; // [rsp+F0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v6 = a2;
  LODWORD(v7) = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168));
  Mutex = (PRKMUTEX)(v3 + 2232);
  KeWaitForSingleObject((PVOID)(v3 + 2232), Executive, 0, 0, 0LL);
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
      v31 = 0;
      v32 = 0;
      v39 = 0;
      LODWORD(v7) = DpiAppendNumberToString(L"\\Device\\Video", v9, &DeviceName);
      if ( (int)v7 < 0 )
        goto LABEL_33;
      v11 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xD0u,
              &DeviceName,
              0x23u,
              0x100u,
              0,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v7 = v11;
      if ( v11 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v26[3] = DpiGdoCreateGdiObjects;
        v27 = IoCreateDevice;
      }
      else
      {
        LODWORD(v7) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *a3 + 1, &SymbolicLinkName);
        if ( (int)v7 < 0 )
          goto LABEL_33;
        v13 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        v7 = v13;
        if ( v13 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v26[3] = DpiGdoCreateGdiObjects;
          v27 = IoCreateSymbolicLink;
        }
        else
        {
          v31 = 1;
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
              v28 = WdLogNewEntry5_WdError(v15);
              *(_QWORD *)(v28 + 24) = v8;
              WdLogEvent5_WdError(v28);
            }
          }
          else if ( v6 == 1 )
          {
            DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2544), 1);
            DmmSetViewState(*(DXGADAPTER **)(v3 + 2544), *((_DWORD *)DeviceExtension + 39), 1);
            DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2544), 1);
          }
          v16 = IoRegisterDeviceInterface(
                  *(PDEVICE_OBJECT *)(v3 + 152),
                  &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                  0LL,
                  (PUNICODE_STRING)(DeviceExtension + 168));
          v7 = v16;
          if ( v16 < 0 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v26[3] = DpiGdoCreateGdiObjects;
            v27 = IoRegisterDeviceInterface;
          }
          else
          {
            v39 = 1;
            LODWORD(v7) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, v8);
            if ( (int)v7 < 0 )
              goto LABEL_32;
            v18 = *(_QWORD *)(v3 + 2544);
            *((_DWORD *)DeviceExtension + 50) = -1;
            *((_QWORD *)DeviceExtension + 23) = v18;
            v19 = DMgrWriteDeviceCountToRegistry();
            v7 = v19;
            if ( v19 < 0 )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdError(v20);
              v26[3] = DpiGdoCreateGdiObjects;
              v27 = RtlWriteRegistryValue;
            }
            else
            {
              v21 = *(char ***)(v3 + 2224);
              *(_QWORD *)DeviceExtension = v3 + 2216;
              *((_QWORD *)DeviceExtension + 1) = v21;
              if ( *v21 != (char *)(v3 + 2216) )
                __fastfail(3u);
              *v21 = DeviceExtension;
              *(_QWORD *)(v3 + 2224) = DeviceExtension;
              v22 = DeviceObject;
              ++*(_DWORD *)(v3 + 2288);
              v32 = 1;
              v22->Flags |= 4u;
              DeviceObject->Flags &= ~0x80u;
              v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 168), 1u);
              v7 = v23;
              if ( v23 >= 0 )
              {
                v4 = 1;
                goto LABEL_15;
              }
              v26 = (_QWORD *)WdLogNewEntry5_WdError(v24);
              v26[3] = DpiGdoCreateGdiObjects;
              v27 = IoSetDeviceInterfaceState;
            }
          }
        }
      }
      v26[4] = v27;
      v26[5] = v7;
      WdLogEvent5_WdError(v26);
LABEL_15:
      if ( (int)v7 < 0 )
      {
        if ( v4 == 1 && DeviceExtension )
          IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 168), 0);
        if ( v39 == 1 )
LABEL_32:
          RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 168));
LABEL_33:
        DMgrWriteDeviceCountToRegistry();
        if ( v31 == 1 )
          IoDeleteSymbolicLink(&SymbolicLinkName);
        v4 = 0;
        if ( DeviceObject )
        {
          IoDeleteDevice(DeviceObject);
          DeviceObject = 0LL;
        }
        if ( v32 == 1 )
        {
          v29 = *(_QWORD **)DeviceExtension;
          v30 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
          if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v30 != DeviceExtension )
            __fastfail(3u);
          *v30 = v29;
          v29[1] = v30;
          --*(_DWORD *)(v3 + 2288);
        }
        goto LABEL_17;
      }
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
      break;
    }
  }
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v7;
}
