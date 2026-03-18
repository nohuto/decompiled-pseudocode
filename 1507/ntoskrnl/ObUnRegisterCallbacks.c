/*
 * XREFs of ObUnRegisterCallbacks @ 0x1406ACB58
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  __int64 v1; // r9
  unsigned int i; // ebp
  char *v4; // rbx
  unsigned __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rcx
  char **v13; // rax
  signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v4 = (char *)RegistrationHandle + 64 * (unsigned __int64)i + 32;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 7, 1LL, 0LL);
    if ( v5 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v4 + 7, v5);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (unsigned __int64 *)(*((_QWORD *)v4 + 4) + 184LL);
    v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, v1);
    v11 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = *(_QWORD *)v4;
    v13 = (char **)*((_QWORD *)v4 + 1);
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v13 != v4 )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    v14 = (signed __int64 *)(*((_QWORD *)v4 + 4) + 184LL);
    _m_prefetchw(v14);
    v15 = *v14;
    v16 = *v14 - 16;
    if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0 || (v17 = *v14, v17 != _InterlockedCompareExchange64(v14, v16, v15)) )
      ExfReleasePushLock(v14, v9);
    KeAbPostRelease((ULONG_PTR)v14);
    v18 = KeGetCurrentThread();
    v19 = v18->SpecialApcDisable + 1;
    v18->SpecialApcDisable = v19;
    if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
