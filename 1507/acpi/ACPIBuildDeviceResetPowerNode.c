/*
 * XREFs of ACPIBuildDeviceResetPowerNode @ 0x1C0034684
 * Callers:
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B810 (ACPIBuildProcessDevicePhasePrr.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceResetPowerNode(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  __int64 v8; // rbp

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x50706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    *(_QWORD *)(BugCheckParameter2 + 392) = v7;
    v8 = *(_QWORD *)(a3 + 32);
    if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v8 + 40)) < 0 )
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v8 + 40));
    KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v8 + 40));
  }
  return 3221225626LL;
}
