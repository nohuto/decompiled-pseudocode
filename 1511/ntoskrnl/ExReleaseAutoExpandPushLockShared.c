/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x1400C8A30
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140627FF0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140628474 (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x140628FF8 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140629E98 (MiProtectEnclavePages.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExfReleasePushLockSharedEx @ 0x1400C8BAC (ExfReleasePushLockSharedEx.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x14012CBD4 (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) == 17 )
    {
LABEL_7:
      if ( v4 < 0x80000000 )
        *(_DWORD *)(v3 + 12) = v4 + 0x100000;
      goto LABEL_9;
    }
    if ( (v4 & ExpAeSamplingPeriodMask) == 0 )
    {
      ExfReleasePushLockSharedEx(v3, &v8);
      if ( !v8 )
        goto LABEL_9;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 >= 0x80000000 )
        goto LABEL_9;
      v7 = v8 >> ExpAeCycleCountScaler;
      if ( v8 >> ExpAeCycleCountScaler > 0x1FF )
        LODWORD(v7) = 511;
      v4 = v7 + v6;
      goto LABEL_7;
    }
    ExfReleasePushLockSharedEx(v3, 0LL);
    v5 = *(_DWORD *)(v3 + 12);
    if ( v5 < 0x80000000 )
      *(_DWORD *)(v3 + 12) = v5 + 0x100000;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
    v3 = *(_QWORD *)(v3 + 8);
  }
LABEL_9:
  if ( (v2 & 2) == 0 )
    KeAbPostRelease(v3);
}
