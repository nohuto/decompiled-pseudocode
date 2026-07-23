/*
 * XREFs of MiComputeNodeMemory @ 0x14057B258
 * Callers:
 *     MiUpdatePartitionMemory @ 0x1401F22AC (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int *v2; // r13
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned __int64 *v5; // rbx
  unsigned __int8 *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-58h]
  _QWORD v15[4]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(unsigned int **)(a1 + 64);
  v3 = 0;
  v14 = (__int64)CurrentThread;
  v4 = *v2;
  if ( KeNumberNodes )
  {
    v5 = (unsigned __int64 *)(*(_QWORD *)(a1 + 48) + 2144LL);
    do
    {
      memset(v15, 0, sizeof(v15));
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned __int8 *)&v2[4 * v4 + 4] + 1;
        v7 = v4;
        v8 = v2 + 6;
        do
        {
          if ( *(v6 - 1) == v3 )
            v15[*v6] += *v8;
          v8 += 2;
          v6 += 2;
          --v7;
        }
        while ( v7 );
      }
      v9 = 0LL;
      --CurrentThread->SpecialApcDisable;
      v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v10, (ULONG_PTR)v5);
      if ( v11 )
        v11[26] |= 1u;
      if ( MmNumberOfChannels )
      {
        v12 = v15;
        v13 = (unsigned int)MmNumberOfChannels;
        do
        {
          v9 += *v12;
          *(_QWORD *)((char *)v12 + (char *)v5 - (char *)&v16 - 88) = *v12;
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      *(v5 - 11) = v9;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe(v14);
      v5 += 273;
      CurrentThread = (struct _KTHREAD *)v14;
      ++v3;
    }
    while ( v3 < (unsigned __int16)KeNumberNodes );
  }
}
