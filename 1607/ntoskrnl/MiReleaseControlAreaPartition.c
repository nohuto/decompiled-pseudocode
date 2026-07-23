/*
 * XREFs of MiReleaseControlAreaPartition @ 0x1400279F0
 * Callers:
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaPartition(__int64 *a1, __int64 a2)
{
  int *v2; // r8
  unsigned __int16 v3; // ax
  int *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r14
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned int v15; // ecx
  __int64 *v16; // rcx
  __int64 v17; // rcx

  v2 = MiSystemPartition;
  v3 = *((_WORD *)a1 + 30) & 0x3FF;
  if ( v3 == 1023 )
    v6 = MiSystemPartition;
  else
    v6 = *(int **)(qword_140327038 + 8LL * v3);
  result = *(unsigned __int16 *)(a2 + 1444);
  if ( (_WORD)result != 1023 )
  {
    result = (unsigned __int16)result;
    v2 = *(int **)(qword_140327038 + 8LL * (unsigned __int16)result);
  }
  if ( v6 != v2 )
  {
    v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v10 = *a1;
    --CurrentThread->SpecialApcDisable;
    v11 = (volatile signed __int64 *)(v10 + 40);
    v12 = KeAbPreAcquire(v10 + 40);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(v10 + 40, v12, v10 + 40);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = *((_DWORD *)a1 + 15);
    if ( v15 >> 10 != 0x3FFFFF )
    {
      *((_DWORD *)a1 + 15) = v15 & 0x3FF | (((v15 >> 10) - 1) << 10);
      if ( !(((v15 >> 10) - 1) << 10) )
      {
        v8 = *(unsigned int *)(v10 + 8);
        if ( (a1[7] & 0x40000000) != 0 )
        {
          v8 = 0LL;
          v16 = a1 + 16;
          if ( a1 != (__int64 *)-128LL )
          {
            do
            {
              if ( !(unsigned int)MiSubsectionUsingExtents(v16, v13) )
                v8 += *(unsigned int *)(v17 + 44);
              v16 = *(__int64 **)(v17 + 16);
            }
            while ( v16 );
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v8 )
      return MiReturnSubsectionCharges(v8);
  }
  return result;
}
