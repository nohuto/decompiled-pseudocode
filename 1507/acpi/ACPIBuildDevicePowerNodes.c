/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C0021010
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000B980 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000CE60 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000D4F0 (ACPIBuildProcessDevicePhasePrx.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C003C388 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemovePowerNodes @ 0x1C003C4C4 (ACPIInitRemovePowerNodes.c)
 *     AMLIIsEqualHandle @ 0x1C00426FC (AMLIIsEqualHandle.c)
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
