/*
 * XREFs of PfpRpCHashEmpty @ 0x140577FD8
 * Callers:
 *     PfpRpControlRequestReset @ 0x140577F88 (PfpRpControlRequestReset.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  int v4; // r10d
  unsigned int v6; // eax
  unsigned int v7; // r9d
  volatile signed __int64 *v8; // rdi
  void *v9; // rsi
  __int128 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v4 = 1 << *(_DWORD *)(a2 + 8);
  v6 = v4;
  v7 = -1;
  if ( v4 )
  {
    do
    {
      ++v7;
      v6 >>= 1;
    }
    while ( v6 );
  }
  if ( ((v4 - 1) & v4) != 0 )
    ++v7;
  LODWORD(v11) = 0;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = v7;
  v8 = (volatile signed __int64 *)(a1 + 128);
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)(a1 + 128));
  v9 = *(void **)a2;
  FsRtlAcquirePushLockExclusive(a3);
  *(_OWORD *)a2 = v10;
  *(_QWORD *)(a2 + 16) = v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
