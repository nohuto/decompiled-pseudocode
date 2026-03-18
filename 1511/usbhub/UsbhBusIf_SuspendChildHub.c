/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C000B930
 * Callers:
 *     <none>
 * Callees:
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000D644 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C001C3B0 (UsbhSetPdoIdleReady.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rax

  v2 = PdoExt(DeviceObject);
  v3 = *(_QWORD *)(v2 + 1176);
  FdoExt(v3);
  if ( (*(_DWORD *)(v2 + 1412) & 4) == 0 )
    return 3221225473LL;
  v4 = UsbhLatchPdo(v3, *(unsigned __int16 *)(v2 + 1420), 0LL, 1213425986LL);
  if ( !v4 )
    return 3221225635LL;
  v5 = PdoExt(DeviceObject);
  v6 = UsbhSyncSuspendPdoPort(v5 + 944, DeviceObject, 0LL);
  if ( v6 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, (POWER_STATE)3);
    v7 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, DeviceObject, v7 + 1912);
  }
  UsbhUnlatchPdo(v3, v4, 0LL, 1213425986LL);
  return (unsigned int)v6;
}
