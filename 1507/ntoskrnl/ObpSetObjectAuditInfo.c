/*
 * XREFs of ObpSetObjectAuditInfo @ 0x1406AC044
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x140486820 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, void *a2)
{
  _QWORD *v5; // rdi
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax
  void *v8; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  unsigned __int64 v23; // rtt
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax

  if ( !RtlValidSecurityDescriptor(a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    v5 = (_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F]);
  else
    v5 = 0LL;
  if ( v5 && !*v5 )
  {
    v6 = RtlLengthSecurityDescriptor(a2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x4941624Fu);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, a2, v6);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (unsigned __int64 *)(a1 + 16);
    v12 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, v11);
    v15 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( *v5 )
    {
      _m_prefetchw(v10);
      v16 = *v10;
      v17 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v17 = 0LL;
      if ( (v16 & 2) != 0
        || (v18 = *v10, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v17, v16)) )
      {
        ExfReleasePushLock(v10, v13);
      }
      KeAbPostRelease((ULONG_PTR)v10);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *v5 = v8;
      _m_prefetchw(v10);
      v21 = *v10;
      v22 = *v10 - 16;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0
        || (v23 = *v10, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v22, v21)) )
      {
        ExfReleasePushLock(v10, v13);
      }
      KeAbPostRelease((ULONG_PTR)v10);
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return 0LL;
}
