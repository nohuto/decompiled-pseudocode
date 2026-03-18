/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x1C00285EC
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0013050 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0 (ACPIBuildProcessDevicePhasePrw.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0025DA4 (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C0045D98 (WPP_RECORDER_SF_sLqss.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F96C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemovePowerNodes @ 0x1C004FAA8 (ACPIInitRemovePowerNodes.c)
 *     AMLIIsEqualHandle @ 0x1C005977C (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r13
  unsigned int v8; // r14d
  unsigned int v9; // esi
  PVOID PoolWithTag; // rax
  PVOID v12; // r15
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rdx
  const char *v16; // rax
  const char *v17; // r10
  __int64 v18; // r8
  __int64 *v19; // r8
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v8 = 0;
  v9 = *v4;
  if ( !a4 )
  {
    if ( v9 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *v4);
    v8 = 2;
    v9 -= 2;
  }
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v9, 0x50706341u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 56LL * v9);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      BugCheckParameter2[v6 + 45] = v12;
      v13 = 5LL * v8;
      v14 = *(_QWORD *)(a3 + 32);
      if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v14 + 8 * v13 + 40)) >= 0 )
      {
        v16 = (const char *)qword_1C002C340;
        v17 = (const char *)qword_1C002C340;
        if ( BugCheckParameter2 )
        {
          v18 = BugCheckParameter2[1];
          LOBYTE(v5) = (_BYTE)BugCheckParameter2;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v16 = (const char *)BugCheckParameter2[70];
            if ( (v18 & 0x400000000000LL) != 0 )
              v17 = (const char *)BugCheckParameter2[71];
          }
        }
        WPP_RECORDER_SF_sqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0xEu,
          BugCheckParameter4,
          *(const char **)(v14 + 8 * v13 + 40),
          v5,
          v16,
          v17);
        KeBugCheckEx(0xA5u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v14 + 8 * v13 + 40));
      }
      v19 = qword_1C002C340;
      if ( BugCheckParameter2 )
      {
        v15 = BugCheckParameter2[1];
        if ( (v15 & 0x200000000000LL) != 0 && (v15 & 0x400000000000LL) != 0 )
          v19 = (__int64 *)BugCheckParameter2[71];
      }
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v15, (_DWORD)v19, 13);
      KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v14 + 8 * v13 + 40));
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
