/*
 * XREFs of ACPIBuildDeviceResetPowerNode @ 0x1C0043B48
 * Callers:
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000F270 (ACPIBuildProcessDevicePhasePrr.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0025DA4 (WPP_RECORDER_SF_sqss.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C0045D98 (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildDeviceResetPowerNode(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi
  __int64 v8; // rbp
  __int64 v10; // r8
  const char *v11; // rcx
  const char *v12; // r10
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x50706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    BugCheckParameter2[50] = v7;
    v8 = *(_QWORD *)(a3 + 32);
    if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v8 + 40)) < 0 )
    {
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, 0, BugCheckParameter2[1], 15);
      KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v8 + 40));
    }
    v10 = BugCheckParameter2[1];
    v11 = (const char *)qword_1C002C340;
    v12 = (const char *)qword_1C002C340;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)BugCheckParameter2[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (const char *)BugCheckParameter2[71];
    }
    WPP_RECORDER_SF_sqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xAu,
      0x10u,
      BugCheckParameter4,
      *(const char **)(v8 + 40),
      (char)BugCheckParameter2,
      v11,
      v12);
    KeBugCheckEx(0xA5u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v8 + 40));
  }
  return 3221225626LL;
}
