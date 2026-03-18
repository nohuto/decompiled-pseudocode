/*
 * XREFs of ExLockUserBuffer @ 0x1404AC538
 * Callers:
 *     ExpGetLookasideInformation @ 0x140213404 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1404AC20C (ExGetSessionPoolTagInformation.c)
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406213A0 (MmGetSessionMappedViewInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x14066AD94 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14066AE00 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14066AE6C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14066AED8 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14066E12C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14066F738 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140670A9C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140671040 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406714EC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406717BC (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140671D18 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x1400FE044 (MmSizeOfMdl.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v9; // rsi
  SIZE_T v10; // rax
  struct _MDL *PoolWithQuotaTag; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  *P = 0LL;
  *a6 = 0LL;
  v9 = a2;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x6F666E49u);
  v12 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag->Next = 0LL;
    PoolWithQuotaTag->Size = 8 * ((((a1 & 0xFFF) + v9 + 4095) >> 12) + 6);
    PoolWithQuotaTag->MdlFlags = 0;
    PoolWithQuotaTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    PoolWithQuotaTag->ByteOffset = a1 & 0xFFF;
    PoolWithQuotaTag->ByteCount = v9;
    MmProbeAndLockPages(PoolWithQuotaTag, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
