/*
 * XREFs of ndisQueryBusInterface @ 0x1C00AB5C4
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C009D18C (ndisInitializeConfiguration.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisQueryBusInterface(__int64 a1)
{
  _DEVICE_OBJECT *v2; // r14
  PIRP Irp; // rax
  _IRP *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v6; // r15d
  _QWORD v8[7]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v10[9]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v11[8]; // [rsp+108h] [rbp+0h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  memset(v8, 0, sizeof(v8));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x16u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1);
  v2 = *(_DEVICE_OBJECT **)(a1 + 3896);
  Irp = IoAllocateIrp(v2->StackSize + 1, 0);
  v4 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = v2;
    Irp->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_BUS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v11;
    CurrentStackLocation[-1].Parameters.Create.Options = 65600;
    v6 = IoSynchronousCallDriver(v2, Irp);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *(_QWORD *)(a1 + 3744) = v11[6];
      *(_QWORD *)(a1 + 3752) = v11[7];
      *(_QWORD *)(a1 + 3760) = v11[1];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = v2;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_MSIX_TABLE_CONFIG_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v10;
    CurrentStackLocation[-1].Parameters.Create.Options = 65608;
    if ( (int)IoSynchronousCallDriver(v2, v4) < 0 )
    {
      *(_QWORD *)(a1 + 4336) = 0LL;
      *(_QWORD *)(a1 + 4344) = 0LL;
      *(_QWORD *)(a1 + 4352) = 0LL;
      *(_QWORD *)(a1 + 4360) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 4336) = v10[1];
      *(_QWORD *)(a1 + 4344) = v10[4];
      *(_QWORD *)(a1 + 4352) = v10[5];
      *(_QWORD *)(a1 + 4360) = v10[6];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = v2;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_PCI_VIRTUALIZATION_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v9;
    CurrentStackLocation[-1].Parameters.Create.Options = 65616;
    if ( (int)IoSynchronousCallDriver(v2, v4) >= 0 )
    {
      *(_QWORD *)(a1 + 4880) = v9[1];
      *(_QWORD *)(a1 + 4840) = v9[4];
      *(_QWORD *)(a1 + 4848) = v9[5];
      *(_QWORD *)(a1 + 4856) = v9[8];
      *(_QWORD *)(a1 + 4864) = v9[6];
      *(_QWORD *)(a1 + 4872) = v9[9];
    }
    else
    {
      *(_QWORD *)(a1 + 4880) = 0LL;
      *(_QWORD *)(a1 + 4840) = 0LL;
      *(_QWORD *)(a1 + 4848) = 0LL;
      *(_QWORD *)(a1 + 4856) = 0LL;
      *(_QWORD *)(a1 + 4864) = 0LL;
      *(_QWORD *)(a1 + 4872) = 0LL;
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = v2;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_VPCI_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65592;
    if ( (int)IoSynchronousCallDriver(v2, v4) >= 0 )
    {
      *(_QWORD *)(a1 + 4928) = v8[1];
      *(_QWORD *)(a1 + 4904) = v8[3];
      *(_QWORD *)(a1 + 4912) = v8[4];
      *(_QWORD *)(a1 + 4920) = v8[5];
      *(_DWORD *)(a1 + 4936) = v8[6];
    }
    else
    {
      *(_QWORD *)(a1 + 4928) = 0LL;
      *(_QWORD *)(a1 + 4904) = 0LL;
      *(_QWORD *)(a1 + 4912) = 0LL;
      *(_QWORD *)(a1 + 4920) = 0LL;
      *(_DWORD *)(a1 + 4936) = 0;
    }
    IoFreeIrp(v4);
  }
  else
  {
    v6 = -1073741670;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x17u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1);
  return (unsigned int)v6;
}
