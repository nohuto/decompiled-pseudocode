/*
 * XREFs of UsbhPdoPnp_QueryResourceRequirements @ 0x1C001BA10
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C004064C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0040714 (UsbhInstallMsOsExtendedProperties.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryResourceRequirements(PDEVICE_OBJECT Pdo, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int Status; // ebx
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  NTSTATUS v15; // eax

  v6 = PdoExt((__int64)Pdo, (__int64)Irp, a3, a4);
  v7 = v6;
  v6[353] |= 0x400u;
  v8 = (unsigned int)v6[353];
  v9 = (unsigned int)v6[700];
  LOBYTE(v10) = (v6[353] & 0x800) == 0;
  if ( ((unsigned __int8)v10 & ((v9 & 0x40) != 0)) != 0 )
  {
    v13 = PdoExt((__int64)Pdo, v8, v10, v9);
    UsbhInstallMsOs20RegistryProperties(v13 + 236, Pdo);
  }
  else if ( (((v6[353] & 0x820) == 0) & _bittest(v6 + 356, 0xAu)) != 0 )
  {
    v14 = PdoExt((__int64)Pdo, v8, v10, v9);
    UsbhInstallMsOsExtendedProperties(v14 + 236, Pdo);
  }
  if ( (v7[700] & 0x100) != 0 && (v7[353] & 0x800) == 0 )
  {
    v15 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*((_QWORD *)v7 + 355) + 4LL));
    if ( v15 < 0 )
      Log(*((_QWORD *)v7 + 147), 256, 1364349489, v15, 0LL);
  }
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
