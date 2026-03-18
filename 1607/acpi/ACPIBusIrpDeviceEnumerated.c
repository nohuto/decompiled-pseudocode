/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1C0087EF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C00040B0 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00872CC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0087DB4 (ACPIQueryDeviceBiosName.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0088340 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0090384 (ACPIQueryCacheCoherencyAttribute.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r12
  __int64 *DeviceExtension; // rax
  char v6; // di
  const char *v7; // r14
  ULONG_PTR v8; // rbx
  int v9; // esi
  __int64 v11; // rcx
  char *v12; // rax
  const char *v13; // r8
  __int64 v14; // rcx
  char *IrpText; // rax
  const char *v16; // r8
  char v17; // r10
  const char *v18; // r11
  char *v19; // rax
  const char *v20; // r8
  const char *v21; // r10
  struct _UNICODE_STRING v22; // [rsp+60h] [rbp-68h] BYREF
  _DWORD Data[6]; // [rsp+70h] [rbp-58h] BYREF

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v6 = 0;
  v7 = (const char *)qword_1C0090C20;
  v8 = (ULONG_PTR)DeviceExtension;
  if ( DeviceExtension )
  {
    if ( (int)ACPIProcessPhysicalDeviceLocation(DeviceExtension, Data) >= 0 )
      IoSetDevicePropertyData(
        *(PDEVICE_OBJECT *)(v8 + 736),
        &DEVPKEY_Device_PhysicalDeviceLocation,
        0,
        0,
        0x1003u,
        0x14u,
        Data);
    if ( (*(_QWORD *)(v8 + 8) & 0x8000000000000LL) == 0 )
    {
      *(_QWORD *)&v22.Length = 0LL;
      v22.Buffer = 0LL;
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(v8 + 720), &v22) >= 0 )
      {
        if ( v22.Buffer )
        {
          IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v8 + 736),
            &DEVPKEY_Device_BiosDeviceName,
            0,
            0,
            0x12u,
            v22.Length + 2,
            v22.Buffer);
          ExFreePoolWithTag(v22.Buffer, 0x53706341u);
        }
      }
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 && (int)AcpiQueryPciDeviceChassisLabel(v8) < 0 )
    {
      IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), 0x19u);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Au,
        (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
        (char)Irp,
        IrpText,
        v17,
        v8,
        v18,
        v16);
    }
    if ( *(_QWORD *)(v8 + 744) == RootDeviceExtension )
    {
      v9 = ACPIQueryCacheCoherencyAttribute(v8);
      if ( v9 < 0 )
      {
        if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
          v14 = 0x400000000000LL;
        v19 = ACPIDebugGetIrpText(v14, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Bu,
          (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
          (char)Irp,
          v19,
          v9,
          v8,
          v21,
          v20);
      }
    }
    else
    {
      v9 = 0;
    }
    if ( (*(_BYTE *)(v8 + 8) & 0x50) != 0 )
      return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    v9 = -1073741823;
  }
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  if ( v8 )
  {
    v6 = v8;
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v8 + 560);
      v11 = 0x400000000000LL;
    }
  }
  v12 = ACPIDebugGetIrpText(v11, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Cu,
    (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
    (char)Irp,
    v12,
    v9,
    v6,
    v7,
    v13);
  return (unsigned int)v9;
}
