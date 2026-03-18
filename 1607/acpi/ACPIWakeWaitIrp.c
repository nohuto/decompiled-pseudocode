/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C0028850
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0013940 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C002892C (ACPIDispatchForwardOrFailPowerIrp.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C00289A4 (ACPIDeviceIrpWaitWakeRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddqss @ 0x1C0059130 (WPP_RECORDER_SF_qddqss.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 *v9; // r8
  unsigned int v10; // edi
  const char *v11; // rdx
  const char *v12; // rcx
  __int64 v13; // r10
  __int64 *v14; // rdx
  int v15; // r9d
  _BYTE v16[16]; // [rsp+60h] [rbp-18h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF
  char v18; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = (__int64)DeviceExtension;
  v6 = DeviceExtension[1];
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( (DeviceExtension[114] & 0x100000000LL) != 0 && !DeviceExtension[79] )
  {
    v11 = (const char *)qword_1C002C340;
    v12 = (const char *)qword_1C002C340;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)DeviceExtension[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v12 = (const char *)DeviceExtension[71];
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x1Au,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      (char)a2,
      (char)DeviceExtension,
      v11,
      v12);
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  }
  if ( (v6 & 0x102000000LL) != 0 && (v6 & 0x20) == 0 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _BYTE *, char *))(PciPmeInterface + 32))(
      DeviceExtension[92],
      &v17,
      v16,
      &v18);
    if ( v17 )
    {
      if ( (*(_QWORD *)(v5 + 8) & 0x800000000000000LL) == 0 )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)(v5 + 488) < (signed int)CurrentStackLocation->Parameters.Read.Length )
  {
    v13 = *(_QWORD *)(v5 + 8);
    v14 = qword_1C002C340;
    v9 = qword_1C002C340;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v14 = *(__int64 **)(v5 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v9 = *(__int64 **)(v5 + 568);
    }
    v15 = 27;
    goto LABEL_23;
  }
  LODWORD(v9) = *(_DWORD *)(v5 + 336);
  if ( *(_DWORD *)(v5 + 492) < (int)v9 )
  {
    v14 = qword_1C002C340;
    if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
      v14 = *(__int64 **)(v5 + 560);
    v15 = 28;
LABEL_23:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, (_DWORD)v9, v15);
    a2->IoStatus.Status = -1073741436;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
  CurrentStackLocation->Control |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 680));
  v10 = ACPIDeviceIrpWaitWakeRequest(a1, a2);
  if ( v10 == -1073741802 )
    return 259;
  else
    ACPIInternalDecrementIrpReferenceCount(v5);
  return v10;
}
