/*
 * XREFs of MiComputeNodeMemory @ 0x140546CC0
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void MiComputeNodeMemory()
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v1; // r13
  unsigned int v2; // r14d
  __int64 v3; // r15
  unsigned __int64 *v4; // rbx
  unsigned __int8 *v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // r8
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-58h]
  _QWORD v14[4]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = qword_1402FFD78;
  v2 = 0;
  v13 = (__int64)CurrentThread;
  v3 = *(unsigned int *)qword_1402FFD78;
  if ( KeNumberNodes )
  {
    v4 = (unsigned __int64 *)(qword_1402FFD68 + 1304);
    do
    {
      memset(v14, 0, sizeof(v14));
      if ( (_DWORD)v3 )
      {
        v5 = (unsigned __int8 *)(16 * (v3 + 1) + 1 + v1);
        v6 = v3;
        v7 = (_QWORD *)(v1 + 24);
        do
        {
          if ( *(v5 - 1) == v2 )
            v14[*v5] += *v7;
          v7 += 2;
          v5 += 2;
          --v6;
        }
        while ( v6 );
      }
      v8 = 0LL;
      --CurrentThread->SpecialApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, v9, (ULONG_PTR)v4);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      if ( MmNumberOfChannels )
      {
        v11 = v14;
        v12 = (unsigned int)MmNumberOfChannels;
        do
        {
          v8 += *v11;
          *(_QWORD *)((char *)v11 + (char *)v4 - (char *)&v15 - 88) = *v11;
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      *(v4 - 11) = v8;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease((ULONG_PTR)v4);
      KiLeaveGuardedRegionUnsafe(v13);
      v4 += 167;
      CurrentThread = (struct _KTHREAD *)v13;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
}
