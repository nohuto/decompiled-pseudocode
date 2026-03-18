/*
 * XREFs of UsbhPdoPnp_QueryResourceRequirements @ 0x1C000BA10
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0040318 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00403E0 (UsbhInstallMsOsExtendedProperties.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryResourceRequirements(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edx
  unsigned int Status; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v11; // eax

  v4 = PdoExt(Pdo);
  v5 = v4;
  *(_DWORD *)(v4 + 1412) |= 0x400u;
  v6 = *(_DWORD *)(v4 + 1412);
  if ( (v6 & 0x800) == 0 && (*(_DWORD *)(v4 + 2800) & 0x40) != 0 )
  {
    v9 = PdoExt(Pdo);
    UsbhInstallMsOs20RegistryProperties(v9 + 944, Pdo);
  }
  else if ( (((v6 & 0x820) == 0) & _bittest((const signed __int32 *)(v4 + 1424), 0xAu)) != 0 )
  {
    v10 = PdoExt(Pdo);
    UsbhInstallMsOsExtendedProperties(v10 + 944, Pdo);
  }
  if ( (*(_DWORD *)(v5 + 2800) & 0x100) != 0 && (*(_DWORD *)(v5 + 1412) & 0x800) == 0 )
  {
    v11 = IoSetDevicePropertyData(
            Pdo,
            &DEVPKEY_Device_ModelId,
            0,
            0,
            0xDu,
            0x10u,
            (PVOID)(*(_QWORD *)(v5 + 2840) + 4LL));
    if ( v11 < 0 )
      Log(*(_QWORD *)(v5 + 1176), 256, 1364349489, v11, 0LL);
  }
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
