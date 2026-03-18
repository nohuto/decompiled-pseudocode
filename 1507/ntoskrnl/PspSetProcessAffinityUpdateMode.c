/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x14058B36C
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406C085C (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  int v2; // r8d
  int v3; // edx
  _KPROCESS *Process; // rsi
  signed __int32 DirectoryTableBase; // r8d
  signed __int32 v7; // eax
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int16 v11; // cx
  __int16 v12; // ax
  volatile signed __int64 *p_Lock; // rdi
  __int64 v15; // rax
  ULONG_PTR v16; // r8
  unsigned __int64 *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int16 v20; // ax
  signed __int32 v21[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a2;
  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v2 & 2) != 0 )
    v3 = 0x40000;
  if ( (v2 & 1) != 0 )
    v3 |= 0x80000u;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v7 = DirectoryTableBase;
  while ( 1 )
  {
    if ( (v7 & 0xC0000) == v3 )
    {
LABEL_9:
      if ( v3 == 0x40000 )
      {
        --*(_WORD *)(a1 + 484);
        p_Lock = (volatile signed __int64 *)&Process[1].Header.Lock;
        _InterlockedOr(v21, 0);
        if ( (*(_QWORD *)&Process[1].Header.Lock & 1) != 0 )
        {
          v15 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, 0x40000LL);
          v16 = (ULONG_PTR)&Process[1];
          v17 = (unsigned __int64 *)&Process[1];
          v18 = v15;
          ExfAcquirePushLockExclusiveEx(v17, v15, v16, v19);
          if ( v18 )
            *(_BYTE *)(v18 + 26) |= 1u;
          ExfReleasePushLockExclusive(p_Lock);
          if ( v18 )
            KeAbPostRelease((ULONG_PTR)p_Lock);
        }
        v20 = *(_WORD *)(a1 + 484) + 1;
        *(_WORD *)(a1 + 484) = v20;
        if ( v20 )
          return 0LL;
      }
      else
      {
        if ( (v3 & 0x80000) == 0 || !KeDynamicPartitioningSupported )
          return 0LL;
        --*(_WORD *)(a1 + 484);
        v9 = KeAbPreAcquire((ULONG_PTR)&PspAffinityUpdateLock, 0LL, 0LL, 0x40000LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&PspAffinityUpdateLock, v9, (ULONG_PTR)&PspAffinityUpdateLock, v10);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        v11 = 0;
        if ( PspLastUpdateAffinityMask[0] )
        {
          while ( !*(_QWORD *)&PspLastUpdateAffinityMask[4 * v11 + 4] )
          {
            if ( ++v11 >= (unsigned int)PspLastUpdateAffinityMask[0] )
              goto LABEL_19;
          }
          PspUpdateSingleProcessAffinity(a1, Process, PspLastUpdateAffinityMask);
        }
LABEL_19:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspAffinityUpdateLock);
        KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
        v12 = *(_WORD *)(a1 + 484) + 1;
        *(_WORD *)(a1 + 484) = v12;
        if ( v12 )
          return 0LL;
      }
      if ( *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
        KiCheckForKernelApcDelivery();
      return 0LL;
    }
    if ( (DirectoryTableBase & 0x40000) != 0 )
      return 3221225473LL;
    v7 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
           v3 | DirectoryTableBase & 0xFFF3FFFF,
           DirectoryTableBase);
    v8 = DirectoryTableBase == v7;
    DirectoryTableBase = v7;
    if ( v8 )
      goto LABEL_9;
  }
}
