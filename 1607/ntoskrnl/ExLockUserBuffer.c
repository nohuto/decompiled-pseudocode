/*
 * XREFs of ExLockUserBuffer @ 0x140499420
 * Callers:
 *     ExpGetLookasideInformation @ 0x14022C4EC (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1404990F4 (ExGetSessionPoolTagInformation.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     KdSystemDebugControl @ 0x14064E858 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x140657244 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406622EC (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB034 (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1406AB42C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1406AB498 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1406AB504 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1406AB570 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0E44 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2440 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B41DC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B44B0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4A14 (NtQueryDriverEntryOrder.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     ExUnlockUserBuffer @ 0x140086998 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x140086AE0 (MmSizeOfMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
