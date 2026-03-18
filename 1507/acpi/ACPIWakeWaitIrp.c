/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C0021580
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0004FB0 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AE8C (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C00216C4 (ACPIDispatchForwardOrFailPowerIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rax
  __int64 v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF
  char v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v5 = (__int64)DeviceExtension;
  if ( (*DeviceExtension & 0x10000LL) == 0 || (DeviceExtension[113] & 0x100000000LL) != 0 && !DeviceExtension[78] )
    return ACPIDispatchForwardOrFailPowerIrp(BugCheckParameter3, Irp);
  if ( (*DeviceExtension & 0x102000000LL) != 0 && (*DeviceExtension & 0x20) == 0 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _BYTE *, char *))(PciPmeInterface + 32))(
      DeviceExtension[91],
      &v11,
      v10,
      &v12);
    if ( v11 )
    {
      if ( (*(_QWORD *)v5 & 0x800000000000000LL) == 0 )
        return ACPIDispatchForwardOrFailPowerIrp(BugCheckParameter3, Irp);
    }
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)(v5 + 480) < (signed int)CurrentStackLocation->Parameters.Read.Length
    || *(_DWORD *)(v5 + 484) < *(_DWORD *)(v5 + 328) )
  {
    Irp->IoStatus.Status = -1073741436;
    IofCompleteRequest(Irp, 0);
    return 3221225860LL;
  }
  else
  {
    CurrentStackLocation->Control |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 672));
    v8 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
    v9 = ACPIDeviceInitializePowerRequest(
           v8,
           (POWER_STATE)Irp->Tail.Overlay.CurrentStackLocation->Parameters.WaitWake.PowerState,
           (_SLIST_ENTRY *)ACPIDeviceIrpCompleteRequest,
           (__int64)Irp,
           0,
           2,
           2u);
    if ( v9 == -1073741802 )
      return 259;
    else
      ACPIInternalDecrementIrpReferenceCount(v5);
    return v9;
  }
}
