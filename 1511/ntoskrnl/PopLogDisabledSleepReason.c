/*
 * XREFs of PopLogDisabledSleepReason @ 0x140457DDC
 * Callers:
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140458028 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 */

void PopLogDisabledSleepReason()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rax
  SIZE_T v3; // rsi
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  __int64 v6; // r8
  _DWORD *v7; // r10

  v0 = 0;
  v1 = 0;
  ExAcquireFastMutex(&PopDisableSleepMutex);
  PopRemoveReasonRecordByReasonCode(13LL);
  v2 = PopDisableSleepList;
  if ( (__int64 *)PopDisableSleepList != &PopDisableSleepList )
  {
    do
    {
      v0 |= *(_DWORD *)(v2 + 20);
      ++v1;
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &PopDisableSleepList );
    if ( v0 )
    {
      v3 = 8LL * v1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x66756263u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = PopDisableSleepList;
        v7 = PoolWithTag;
        while ( (__int64 *)v6 != &PopDisableSleepList )
        {
          *v7 = *(_DWORD *)(v6 + 16);
          v7 += 2;
          *(v7 - 1) = *(_DWORD *)(v6 + 20);
          v6 = *(_QWORD *)v6;
        }
        PopLogSleepDisabled(13LL, v0, PoolWithTag, v3);
        ExFreePoolWithTag(v5, 0x66756263u);
      }
    }
  }
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
}
