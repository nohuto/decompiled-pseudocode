/*
 * XREFs of ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C009A4A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C002ACE4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0054DB8 (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // edi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = (__int64)DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (DeviceExtension[228] & 0x40000) != 0 && MinorFunction == 5 || (DeviceExtension[2] & 0x204000) == 0x200000LL )
  {
    v6 = -1073741808;
  }
  else
  {
    if ( DeviceExtension[80] == 3 && (DeviceExtension[155] & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 0);
    ACPIThermalReleaseCoolingInterfaces(v4);
    v6 = 0;
    *(_DWORD *)(v4 + 324) = *(_DWORD *)(v4 + 320);
    *(_DWORD *)(v4 + 320) = 1;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  v7 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x2Cu,
    (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
    (char)a2,
    IrpText,
    v6,
    v4,
    v9,
    v10);
  return v6;
}
