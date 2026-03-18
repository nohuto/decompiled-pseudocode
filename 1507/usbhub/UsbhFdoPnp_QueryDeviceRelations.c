/*
 * XREFs of UsbhFdoPnp_QueryDeviceRelations @ 0x1C00190C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoPnp_QueryDeviceRelations(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // r8
  volatile signed __int32 *DeviceExtension; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10

  v2 = *(_QWORD *)(a2 + 184);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v2, a2);
  DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, v2, a2);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension, v2, a2);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL * ((unsigned int)_InterlockedDecrement(DeviceExtension + 220) & DeviceExtension[221]);
    *(_DWORD *)v6 = 1380209000;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = a2;
    *(_QWORD *)(v6 + 24) = 0LL;
  }
  v7 = *(_DWORD *)(v2 + 8);
  if ( !v7 )
    return UsbhQueryBusRelations(a1, a2, v2, a2);
  v9 = 1363431999;
  if ( v7 == 4 )
    v9 = 1363432052;
  Log((__int64)a1, 2, v9, a2, 0LL);
  return UsbhFdoChainIrp(v11, v10);
}
