/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C0021828
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000BD60 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000BF10 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 * Callees:
 *     AMLIIsEqualHandle @ 0x1C00097AC (AMLIIsEqualHandle.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C718 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemovePowerNodes @ 0x1C003C854 (ACPIInitRemovePowerNodes.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v9; // r15d
  unsigned int v10; // edi
  PVOID PoolWithTag; // rax
  PVOID v13; // r12
  __int64 v14; // rbp

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    v9 = 2;
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, BugCheckParameter2, BugCheckParameter3, *v4);
    v10 -= 2;
  }
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v10, 0x50706341u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v10);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      *(_QWORD *)(BugCheckParameter2 + 8 * v6 + 352) = v13;
      v14 = *(_QWORD *)(a3 + 32);
      if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v14 + 40LL * v9 + 40)) >= 0 )
        KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v14 + 40LL * v9 + 40));
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v14 + 40LL * v9 + 40));
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
