/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C0027808
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C00145BC (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BA60 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C0014650 (ACPIReleaseHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00278EC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  int v0; // edx
  KIRQL v1; // di
  __int64 **v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rax
  IRP **v5; // rbx
  int v6; // edx
  IRP *v7; // rcx

  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (__int64 **)((char *)AcpiInformation + 48);
  if ( *v2 == (__int64 *)v2 )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      3,
      18,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids);
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
  }
  else
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
    v5 = (IRP **)(v3 - 2);
    *((_QWORD *)AcpiInformation + 9) = v5;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v5 + 5);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      19,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      (char)v5,
      (char)*v5);
    if ( *((_WORD *)v5 + 4) == 1 )
    {
      v7 = *v5;
      v7->IoStatus.Status = 0;
      IofCompleteRequest(v7, 0);
    }
    else if ( *((_WORD *)v5 + 4) == 2 )
    {
      ((void (__fastcall *)(IRP **))*v5)(v5);
    }
  }
}
