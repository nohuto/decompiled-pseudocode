/*
 * XREFs of ObUnRegisterCallbacks @ 0x140666EB0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // ebp
  struct _EX_RUNDOWN_REF *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // r14
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v9; // rax
  __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  __int64 v13; // rtt

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF *)((char *)RegistrationHandle + 64 * (unsigned __int64)i + 32);
    ExWaitForRundownProtectionRelease(v3 + 7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = (unsigned __int64 *)(v3[4].Count + 184);
    v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
    if ( v7 )
      v7[26] |= 1u;
    Count = v3->Count;
    v9 = (struct _EX_RUNDOWN_REF **)v3[1].Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || *v9 != v3 )
      __fastfail(3u);
    *v9 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v9;
    v10 = (__int64 *)(v3[4].Count + 184);
    _m_prefetchw(v10);
    v11 = *v10;
    v12 = *v10 - 16;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (v11 & 2) != 0 || (v13 = *v10, v13 != _InterlockedCompareExchange64(v10, v12, v11)) )
      ExfReleasePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
