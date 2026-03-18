/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C001F100
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncSuspendPdoPort @ 0x1C000ABE8 (UsbhSyncSuspendPdoPort.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C00179CC (UsbhSet_Pdo_Dx.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhSetPdoIdleReady @ 0x1C001FA4C (UsbhSetPdoIdleReady.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  v6 = *((_QWORD *)v5 + 147);
  FdoExt(v6, v7, v8, v9);
  if ( (v5[353] & 4) == 0 )
    return 3221225473LL;
  v11 = UsbhLatchPdo(v6, *((_WORD *)v5 + 710), 0LL, 0x48536942u);
  if ( !v11 )
    return 3221225635LL;
  v14 = PdoExt((__int64)DeviceObject, v10, v12, v13);
  v15 = UsbhSyncSuspendPdoPort((__int64)(v14 + 236), (__int64)DeviceObject, 0);
  if ( v15 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, 3LL, v16, v17);
    v21 = FdoExt(v6, v18, v19, v20);
    UsbhSetPdoIdleReady(v6, DeviceObject, v21 + 478);
  }
  UsbhUnlatchPdo(v6, v11, 0LL, 0x48536942u);
  return (unsigned int)v15;
}
