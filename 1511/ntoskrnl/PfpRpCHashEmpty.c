/*
 * XREFs of PfpRpCHashEmpty @ 0x14054D2A8
 * Callers:
 *     PfpRpControlRequestReset @ 0x14054D258 (PfpRpControlRequestReset.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v4; // r10d
  unsigned int v6; // eax
  unsigned int v7; // r9d
  volatile signed __int64 *v8; // rdi
  void *v9; // rbp
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
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 128));
  v9 = *(void **)a2;
  PfLockExclusiveAcquire(a3);
  *(_OWORD *)a2 = v10;
  *(_QWORD *)(a2 + 16) = v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
