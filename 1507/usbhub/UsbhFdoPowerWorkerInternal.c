/*
 * XREFs of UsbhFdoPowerWorkerInternal @ 0x1C0024820
 * Callers:
 *     UsbhFdoPower @ 0x1C00247F0 (UsbhFdoPower.c)
 *     UsbhFdoPowerWorker @ 0x1C0045B20 (UsbhFdoPowerWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorkerInternal(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *DeviceExtension; // rax
  __int64 CurrentStackLocation; // r9
  char v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  PDEVICE_OBJECT *v14; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, 0LL, a4);
  DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a1, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a1, a4);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v8 = -1;
  v9 = *(unsigned __int8 *)(CurrentStackLocation + 1);
  if ( (_BYTE)v9 )
  {
    if ( (unsigned __int8)(v9 - 2) <= 1u )
    {
      v8 = *(_BYTE *)(CurrentStackLocation + 24);
      if ( *(_DWORD *)(CurrentStackLocation + 16) == 1 )
        v8 |= 0x80u;
    }
  }
  else
  {
    v8 = *(_BYTE *)(CurrentStackLocation + 8);
  }
  v10 = ((unsigned __int8)_InterlockedExchangeAdd(DeviceExtension + 321, 1u) + 1) & 0xF;
  *((_BYTE *)DeviceExtension + v10 + 1288) = v9;
  *((_BYTE *)DeviceExtension + v10 + 1304) = v8;
  *((_DWORD *)DeviceExtension + 4) = (unsigned __int8)v9;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v9 = (__int64)a1->DeviceExtension;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v11 = 1349477478;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = a2;
    }
  }
  v12 = *(_BYTE *)(CurrentStackLocation + 1);
  if ( v12 < 4u )
    return off_1C005A228[2 * v12](a1, a2);
  v14 = (PDEVICE_OBJECT *)FdoExt((__int64)a1, v9, (__int64)a1, CurrentStackLocation);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v14[151], a2);
}
