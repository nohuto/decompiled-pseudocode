/*
 * XREFs of FsRtlInsertPerFileContextInternal @ 0x1401E3B44
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1401E3B3C (FsRtlInsertPerFileContext.c)
 *     FsRtlInsertReservedPerFileContext @ 0x1401E3EAC (FsRtlInsertReservedPerFileContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlInsertPerFileContextInternal(volatile signed __int64 *a1, _QWORD *a2, char a3, __int64 a4)
{
  __int64 *v8; // rbx
  __int64 *PoolWithTag; // rax
  _QWORD *v10; // rax
  signed __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax

  if ( !a1 )
    return 3221225488LL;
  v8 = (__int64 *)_InterlockedCompareExchange64(a1, 0LL, 0LL);
  if ( !v8 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x63665346u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0LL;
    v10 = PoolWithTag + 1;
    v10[1] = v10;
    *v10 = v10;
    v8[3] = 0LL;
    v11 = _InterlockedCompareExchange64(a1, (signed __int64)v8, 0LL);
    if ( v11 )
    {
      ExFreePoolWithTag(v8, 0x63665346u);
      v8 = (__int64 *)v11;
    }
  }
  if ( a3 )
  {
    v8[3] = (__int64)a2;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
    v16 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v13, (ULONG_PTR)v8, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    v17 = v8[1];
    *a2 = v17;
    a2[1] = v8 + 1;
    if ( *(__int64 **)(v17 + 8) != v8 + 1 )
      __fastfail(3u);
    *(_QWORD *)(v17 + 8) = a2;
    v8[1] = (__int64)a2;
    _m_prefetchw(v8);
    v18 = *v8;
    v19 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    if ( (v18 & 2) != 0 || (v20 = *v8, v20 != _InterlockedCompareExchange64(v8, v19, v18)) )
      ExfReleasePushLock(v8, v14);
    KeAbPostRelease((ULONG_PTR)v8);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
