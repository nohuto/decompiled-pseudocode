/*
 * XREFs of NtMakePermanentObject @ 0x14054E59C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __stdcall NtMakePermanentObject(HANDLE Object)
{
  KPROCESSOR_MODE PreviousMode; // di
  signed __int64 v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // r14
  signed __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  PVOID v13; // [rsp+58h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    return -1073741727;
  result = ObReferenceObjectByHandle(Object, 0, 0LL, PreviousMode, &v13, &HandleInformation);
  v5 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)v13;
    --CurrentThread->KernelApcDisable;
    v8 = (signed __int64 *)(v7 - 4);
    v9 = KeAbPreAcquire((ULONG_PTR)(v7 - 4), 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7 - 8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7 - 4, v9, (ULONG_PTR)(v7 - 4));
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *((_BYTE *)v7 - 21) |= 0x10u;
    _m_prefetchw(v8);
    v11 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v11 - 16;
    if ( (v11 & 2) != 0 || (v12 = *v8, v12 != _InterlockedCompareExchange64(v8, v3, v11)) )
      ExfReleasePushLock(v7 - 4);
    KeAbPostRelease((ULONG_PTR)(v7 - 4));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(v13);
    return v5;
  }
  return result;
}
