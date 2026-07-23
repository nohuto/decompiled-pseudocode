/*
 * XREFs of NtMakePermanentObject @ 0x140547440
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
  _BYTE *v9; // rax
  _BYTE *v10; // rsi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    return -1073741727;
  result = ObReferenceObjectByHandle(Object, 0, 0LL, PreviousMode, &v16, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)v16;
    --CurrentThread->KernelApcDisable;
    v8 = (signed __int64 *)(v7 - 4);
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v7 - 4), 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7 - 8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7 - 4, v9, (ULONG_PTR)(v7 - 4));
    if ( v10 )
      v10[26] |= 1u;
    *((_BYTE *)v7 - 21) |= 0x10u;
    _m_prefetchw(v8);
    v11 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v11 - 16;
    if ( (v11 & 2) != 0 || (v12 = *v8, v12 != _InterlockedCompareExchange64(v8, v3, v11)) )
      ExfReleasePushLock(v7 - 4);
    KeAbPostRelease((ULONG_PTR)(v7 - 4));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
    ObfDereferenceObject(v16);
    return v5;
  }
  return result;
}
