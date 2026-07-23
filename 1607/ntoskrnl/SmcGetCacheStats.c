/*
 * XREFs of SmcGetCacheStats @ 0x14069A4D0
 * Callers:
 *     SmcProcessStatsRequest @ 0x1406978C4 (SmcProcessStatsRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmKmFileInfoGetPath @ 0x1406980DC (SmKmFileInfoGetPath.c)
 *     SmcCacheDereference @ 0x140699FE8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14069A1EC (SmcCacheReference.c)
 */

__int64 __fastcall SmcGetCacheStats(__int64 a1, _DWORD *a2)
{
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rsi
  int Path; // edi
  unsigned int v7; // ecx
  signed __int64 *v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v10; // r14d
  __int64 v11; // rbp
  _DWORD *v12; // rsi
  __int64 v13; // r8

  memset(a2 + 2, 0, 0x460uLL);
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( v4.Count )
  {
    v7 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v7;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4.Count + 16);
    a2[5] = *(_DWORD *)(v4.Count + 8);
    a2[6] = *(_DWORD *)(v4.Count + 24);
    a2[25] = *(_DWORD *)(v4.Count + 32);
    a2[7] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4.Count + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (Path = SmKmFileInfoGetPath(v4.Count + 40, a2 + 26, 0x400u), Path >= 0) )
    {
      a2[24] = 0;
      v8 = (signed __int64 *)(Count + 160);
      CurrentThread = KeGetCurrentThread();
      v10 = 0;
      --CurrentThread->KernelApcDisable;
      v11 = KeAbPreAcquire(Count + 160, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 160), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(Count + 160), v11, Count + 160);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v12 = (_DWORD *)(Count + 168);
      v13 = 16LL;
      do
      {
        if ( *v12 != -1 )
        {
          a2[v10 + 8] = *v12;
          if ( (v12[1] & 3) == 0 )
            a2[24] |= 1 << v10;
          ++v10;
        }
        v12 += 6;
        --v13;
      }
      while ( v13 );
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KeLeaveCriticalRegion();
      a2[4] = v10;
      Path = 0;
    }
    SmcCacheDereference(a1, a2[1]);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return (unsigned int)Path;
}
