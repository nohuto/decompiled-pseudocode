/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x14008B5C0
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x14065E818 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14065F6F8 (MiProtectEnclavePages.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockSharedEx @ 0x14008B744 (ExfReleasePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1401338E0 (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExReleaseAutoExpandPushLockShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 result; // rax
  unsigned int v6; // esi
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v3 + 12));
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 >= 0x80000000 && (*(_DWORD *)(v3 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v4 < (unsigned int)ExpAeCycleCountThreshold
        || (v4 & 0xF0000) >= 0xF0000
        || KeGetCurrentIrql() >= 2u )
      {
        v4 = (v4 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v3 + 12) = v4;
      }
      else
      {
        ExpTryExpandAutoExpandPushLock(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( result == 17 )
    {
LABEL_6:
      if ( v4 < 0x80000000 )
        *(_DWORD *)(v3 + 12) = v4 + 0x100000;
      goto LABEL_8;
    }
    if ( (v4 & ExpAeSamplingPeriodMask) == 0 )
    {
      result = ExfReleasePushLockSharedEx(v3, &v7);
      if ( !v7 )
        goto LABEL_8;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 >= 0x80000000 )
        goto LABEL_8;
      result = v7 >> ExpAeCycleCountScaler;
      if ( v7 >> ExpAeCycleCountScaler > 0x1FF )
        result = 511LL;
      v4 = result + v6;
      goto LABEL_6;
    }
    ExfReleasePushLockSharedEx(v3, 0LL);
    result = *(unsigned int *)(v3 + 12);
    if ( (unsigned int)result < 0x80000000 )
    {
      result = (unsigned int)(result + 0x100000);
      *(_DWORD *)(v3 + 12) = result;
    }
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( result != 17 )
      result = ExfReleasePushLockShared(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
    v3 = *(_QWORD *)(v3 + 8);
  }
LABEL_8:
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(v3);
  return result;
}
