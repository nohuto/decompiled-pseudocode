/*
 * XREFs of SmcGetCacheStats @ 0x1406DB60C
 * Callers:
 *     SmcProcessStatsRequest @ 0x1406DA95C (SmcProcessStatsRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmcCacheDereference @ 0x1406DAF84 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x1406DB1DC (SmcCacheReference.c)
 *     SmKmFileInfoGetPath @ 0x1406DCB64 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmcGetCacheStats(__int64 a1, _DWORD *a2)
{
  struct _EX_RUNDOWN_REF v4; // rax
  struct _EX_RUNDOWN_REF v5; // r9
  unsigned __int64 Count; // rsi
  int Path; // edi
  unsigned int v8; // ecx
  signed __int64 *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r14d
  __int64 v12; // rbp
  _DWORD *v13; // rsi
  __int64 v14; // r8
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  memset(a2 + 2, 0, 0x460uLL);
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( v4.Count )
  {
    v8 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v8;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4.Count + 16);
    a2[5] = *(_DWORD *)(v4.Count + 8);
    a2[6] = *(_DWORD *)(v4.Count + 24);
    a2[25] = *(_DWORD *)(v4.Count + 32);
    a2[7] = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4.Count + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (Path = SmKmFileInfoGetPath(v4.Count + 40, a2 + 26, 1024LL), Path >= 0) )
    {
      a2[24] = 0;
      v9 = (signed __int64 *)(Count + 160);
      CurrentThread = KeGetCurrentThread();
      v11 = 0;
      --CurrentThread->KernelApcDisable;
      v12 = KeAbPreAcquire(Count + 160, 0LL, 0LL, v5.Count);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 160), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(Count + 160), v12, Count + 160, 17LL);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v13 = (_DWORD *)(Count + 168);
      v14 = 16LL;
      do
      {
        if ( *v13 != -1 )
        {
          a2[v11 + 8] = *v13;
          if ( (v13[1] & 3) == 0 )
            a2[24] |= 1 << v11;
          ++v11;
        }
        v13 += 6;
        --v14;
      }
      while ( v14 );
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      v15 = KeGetCurrentThread();
      v16 = v15->KernelApcDisable + 1;
      v15->KernelApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
        && !v15->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      a2[4] = v11;
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
