/*
 * XREFs of EtwpReceiveNotification @ 0x1404CE40C
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x1404CE5F0 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, _DWORD *a3)
{
  signed __int64 v3; // rbx
  int v7; // ebp
  unsigned __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 **v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r14
  bool v17; // r12
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  __int64 v20; // rtt
  signed __int32 v21; // edi
  __int64 *v23; // rcx
  signed __int64 v24; // rax
  __int64 v25; // rtt

  v3 = 0LL;
  v7 = 0;
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[9];
  if ( !v8 || (v8 & 1) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (__int64 *)(v8 + 8);
    v11 = KeAbPreAcquire(v8 + 8, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 8), v11, v8 + 8);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = (__int64 **)(v8 + 16);
    if ( *v13 == (__int64 *)v13 )
    {
      _m_prefetchw(v10);
      v24 = *v10;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v3 = v24 - 16;
      if ( (v24 & 2) != 0 || (v25 = *v10, v25 != _InterlockedCompareExchange64(v10, v3, v24)) )
        ExfReleasePushLock((_QWORD *)(v8 + 8));
      KeAbPostRelease(v8 + 8);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)-2147483622;
    }
    else
    {
      v14 = *v13;
      v15 = **v13;
      if ( (__int64 **)(*v13)[1] != v13 || *(__int64 **)(v15 + 8) != v14 )
        __fastfail(3u);
      *v13 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v13;
      v16 = v14[2];
      if ( *(_DWORD *)(v16 + 4) > a2 )
      {
        v23 = *v13;
        *v14 = (__int64)*v13;
        v14[1] = (__int64)v13;
        if ( (__int64 **)v23[1] != v13 )
          __fastfail(3u);
        v23[1] = (__int64)v14;
        v7 = -1073741789;
        *v13 = v14;
      }
      v17 = *v13 != (__int64 *)v13;
      *a3 = *(_DWORD *)(v16 + 4);
      _m_prefetchw(v10);
      v18 = *v10;
      v19 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0 || (v20 = *v10, v20 != _InterlockedCompareExchange64(v10, v19, v18)) )
        ExfReleasePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v7 >= 0 )
      {
        v21 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
        memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
        *((_DWORD *)a1 + 5) = v21;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)v14 + 24);
        if ( *(_BYTE *)(v16 + 12) == 1 )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)v14 + 25);
        EtwpUnreferenceDataBlock(v16);
        EtwpReleaseQueueEntry(v14);
        if ( v17 )
          return 261;
      }
    }
  }
  return (unsigned int)v7;
}
