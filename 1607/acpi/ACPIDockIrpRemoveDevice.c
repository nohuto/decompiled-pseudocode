/*
 * XREFs of ACPIDockIrpRemoveDevice @ 0x1C0043390
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

__int64 __fastcall ACPIDockIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  unsigned __int8 MinorFunction; // r15
  unsigned int v6; // edi
  __int64 *v8; // rbp
  __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // r8
  int v12; // ecx
  KIRQL v13; // al
  char v14; // [rsp+88h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000002LL) == 0 )
  {
    v6 = 0;
    Irp->IoStatus.Status = 0;
LABEL_5:
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  if ( *(_DWORD *)(DeviceExtension + 320) == 4 )
  {
    Irp->IoStatus.Status = -1073741810;
    v6 = -1073741810;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) == 2 )
  {
    v8 = *(__int64 **)(DeviceExtension + 184);
    if ( *(_DWORD *)(DeviceExtension + 200) != 1 )
    {
      KdDisableDebugger();
      ACPIGet(v8, 1262699615, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v14, 0LL);
      KdEnableDebugger();
    }
  }
  *(_DWORD *)(DeviceExtension + 200) = 0;
  *(_DWORD *)(DeviceExtension + 320) = 4;
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  v9 = *(_QWORD *)(DeviceExtension + 8);
  v10 = (const char *)qword_1C002C340;
  v11 = (const char *)qword_1C002C340;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(DeviceExtension + 560);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(DeviceExtension + 568);
  }
  v12 = 26;
  if ( MinorFunction < 0x1Au )
    v12 = MinorFunction;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Au,
    (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
    (char)Irp,
    ACPIDispatchPnpTableNames[v12],
    0,
    DeviceExtension,
    v10,
    v11);
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  *(_QWORD *)(DeviceExtension + 728) = 0LL;
  *(_QWORD *)(DeviceExtension + 736) = 0LL;
  *(_QWORD *)(DeviceExtension + 720) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 8uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
