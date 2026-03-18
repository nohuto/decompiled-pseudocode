/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C001DEA0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019FA4 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C001A924 (UsbhSyncSuspendPdoPort.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhSetPdoIdleReady @ 0x1C00201FC (UsbhSetPdoIdleReady.c)
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
  __int64 v15; // r9
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rax

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  v6 = *((_QWORD *)v5 + 147);
  FdoExt(v6, v7, v8, v9);
  if ( (v5[353] & 4) == 0 )
    return 3221225473LL;
  v11 = UsbhLatchPdo(v6, *((_WORD *)v5 + 710), 0LL, 0x48536942u);
  if ( !v11 )
    return 3221225635LL;
  v14 = PdoExt((__int64)DeviceObject, v10, v12, v13);
  v16 = UsbhSyncSuspendPdoPort((__int64)(v14 + 236), (__int64)DeviceObject, 0LL, v15);
  if ( v16 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, (POWER_STATE)3);
    v20 = FdoExt(v6, v17, v18, v19);
    UsbhSetPdoIdleReady(v6, DeviceObject, v20 + 478);
  }
  UsbhUnlatchPdo(v6, v11, 0LL, 1213425986LL);
  return (unsigned int)v16;
}
