/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x14053F90C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 v1; // r9
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rax
  __int64 **v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 *v10; // rsi
  __int64 v11; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  struct _KTHREAD *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rsi
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax

  v2 = (unsigned __int64 *)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v2 )
  {
    v3 = v2[3];
    if ( v3 )
    {
      (*(void (__fastcall **)(unsigned __int64))(v3 + 32))(v3);
      v2[3] = 0LL;
    }
    v4 = (__int64 **)(v2 + 1);
    if ( *v4 != (__int64 *)v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire((ULONG_PTR)v2, 0LL, 0LL, v1);
      v9 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
        ExfAcquirePushLockExclusiveEx(v2, v6, (ULONG_PTR)v2, v8);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      while ( *v4 != (__int64 *)v4 )
      {
        v10 = *v4;
        v11 = **v4;
        if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v11 + 8) != v10 )
          __fastfail(3u);
        *v4 = (__int64 *)v11;
        *(_QWORD *)(v11 + 8) = v4;
        _m_prefetchw(v2);
        v12 = *v2;
        v13 = *v2 - 16;
        if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v13 = 0LL;
        if ( (v12 & 2) != 0
          || (v14 = *v2, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v13, v12)) )
        {
          ExfReleasePushLock(v2, v7);
        }
        KeAbPostRelease((ULONG_PTR)v2);
        v15 = KeGetCurrentThread();
        v16 = v15->KernelApcDisable + 1;
        v15->KernelApcDisable = v16;
        if ( !v16
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
          && !v15->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ((void (__fastcall *)(__int64 *))v10[4])(v10);
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v19 = KeAbPreAcquire((ULONG_PTR)v2, 0LL, 0LL, v18);
        v21 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
          ExfAcquirePushLockExclusiveEx(v2, v19, (ULONG_PTR)v2, v20);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
      }
      _m_prefetchw(v2);
      v22 = *v2;
      v23 = *v2 - 16;
      if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v23 = 0LL;
      if ( (v22 & 2) != 0 || (v24 = *v2, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v23, v22)) )
        ExfReleasePushLock(v2, v7);
      KeAbPostRelease((ULONG_PTR)v2);
      v25 = KeGetCurrentThread();
      v26 = v25->KernelApcDisable + 1;
      v25->KernelApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    ExFreePoolWithTag(v2, 0x63665346u);
  }
}
