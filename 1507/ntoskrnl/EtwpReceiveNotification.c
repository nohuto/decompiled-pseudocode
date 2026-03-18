/*
 * XREFs of EtwpReceiveNotification @ 0x1404D5934
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, _DWORD *a3)
{
  int v6; // esi
  _KPROCESS *Process; // r9
  unsigned __int64 v8; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 **v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbp
  bool v19; // r15
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  signed __int32 v25; // ebx
  __int64 *v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = Process[1].ActiveProcessors.Bitmap[9];
  if ( !v8 || (v8 & 1) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (__int64 *)(v8 + 8);
    v11 = KeAbPreAcquire(v8 + 8, 0LL, 0LL, (__int64)Process);
    v14 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 8), v11, v8 + 8, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = (__int64 **)(v8 + 16);
    if ( *v15 == (__int64 *)v15 )
    {
      _m_prefetchw(v10);
      v28 = *v10;
      v29 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v29 = 0LL;
      if ( (v28 & 2) != 0 || (v30 = *v10, v30 != _InterlockedCompareExchange64(v10, v29, v28)) )
        ExfReleasePushLock((_QWORD *)(v8 + 8), v12);
      KeAbPostRelease(v8 + 8);
      v31 = KeGetCurrentThread();
      v32 = v31->KernelApcDisable + 1;
      v31->KernelApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
        && !v31->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)-2147483622;
    }
    else
    {
      v16 = *v15;
      v17 = **v15;
      if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
        __fastfail(3u);
      *v15 = (__int64 *)v17;
      *(_QWORD *)(v17 + 8) = v15;
      v18 = v16[2];
      if ( *(_DWORD *)(v18 + 4) > a2 )
      {
        v27 = *v15;
        *v16 = (__int64)*v15;
        v16[1] = (__int64)v15;
        if ( (__int64 **)v27[1] != v15 )
          __fastfail(3u);
        v27[1] = (__int64)v16;
        v6 = -1073741789;
        *v15 = v16;
      }
      v19 = *v15 != (__int64 *)v15;
      *a3 = *(_DWORD *)(v18 + 4);
      _m_prefetchw(v10);
      v20 = *v10;
      v21 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v21 = 0LL;
      if ( (v20 & 2) != 0 || (v22 = *v10, v22 != _InterlockedCompareExchange64(v10, v21, v20)) )
        ExfReleasePushLock(v10, v12);
      KeAbPostRelease((ULONG_PTR)v10);
      v23 = KeGetCurrentThread();
      v24 = v23->KernelApcDisable + 1;
      v23->KernelApcDisable = v24;
      if ( !v24
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
        && !v23->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v6 >= 0 )
      {
        v25 = _InterlockedIncrement((volatile signed __int32 *)(v18 + 20));
        memmove(a1, (const void *)v18, *(unsigned int *)(v18 + 4));
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 5) = v25;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)v16 + 24);
        if ( *(_BYTE *)(v18 + 12) )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)v16 + 25);
        EtwpUnreferenceDataBlock(v18);
        EtwpReleaseQueueEntry(v16);
        if ( v19 )
          return 261;
      }
    }
  }
  return (unsigned int)v6;
}
