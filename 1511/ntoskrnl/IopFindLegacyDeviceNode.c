/*
 * XREFs of IopFindLegacyDeviceNode @ 0x140604424
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     IopDestroyDeviceNode @ 0x140455E40 (IopDestroyDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x1404E9B10 (PipAllocateDeviceNode.c)
 */

__int64 __fastcall IopFindLegacyDeviceNode(struct _DRIVER_OBJECT *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  PVOID v11; // rsi
  PDEVICE_OBJECT v12; // rsi
  PDEVICE_OBJECT v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v8 = -1073741823;
  if ( !a2 )
  {
    v9 = (_QWORD *)IopLegacyDeviceNode;
    P = (PVOID)IopLegacyDeviceNode;
    if ( IopLegacyDeviceNode )
    {
      do
      {
        if ( (struct _DRIVER_OBJECT *)v9[54] == a1 )
          break;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
      P = v9;
      if ( v9 )
      {
        *a4 = v9[4];
        goto LABEL_14;
      }
    }
    v8 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
    if ( (v8 & 0x80000000) != 0 )
      return v8;
    v12 = DeviceObject;
    v13 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v8 = PipAllocateDeviceNode((__int64)v13, &P);
    if ( v8 != -1073740946 )
    {
      v14 = P;
      if ( P )
      {
        v12->DriverObject = a1;
        PipSetDevNodeFlags((__int64)v14, 131073);
        PipSetDevNodeState((__int64)v14, 770);
        v15 = IopLegacyDeviceNode;
        v14[54] = a1;
        *v14 = v15;
        if ( v15 )
          *(_QWORD *)(v15 + 8) = v14;
        IopLegacyDeviceNode = (__int64)v14;
        *a4 = v12;
        *a3 = v14;
        return v8;
      }
    }
    IoDeleteDevice(v12);
    return (unsigned int)-1073741670;
  }
  v9 = *(_QWORD **)(*(_QWORD *)(a2 + 312) + 40LL);
  P = v9;
  if ( v9 )
  {
    *a4 = a2;
LABEL_14:
    *a3 = v9;
    return 0;
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x1000) == 0 )
  {
    v10 = PipAllocateDeviceNode(a2, &P);
    v11 = P;
    v8 = v10;
    if ( P )
    {
      if ( v10 != -1073740946 )
      {
        PipSetDevNodeFlags((__int64)P, 0x20000);
        *a4 = a2;
        *a3 = v11;
        return 0;
      }
      IopDestroyDeviceNode((char *)P);
      return v8;
    }
    return (unsigned int)-1073741670;
  }
  return v8;
}
