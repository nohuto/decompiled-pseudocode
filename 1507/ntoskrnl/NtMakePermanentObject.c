/*
 * XREFs of NtMakePermanentObject @ 0x140564674
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtMakePermanentObject(HANDLE Object)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  __int64 v4; // r9
  NTSTATUS v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbp
  signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  signed __int64 v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  PVOID v18; // [rsp+58h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    return -1073741727;
  result = ObReferenceObjectByHandle(Object, 0, 0LL, PreviousMode, &v18, &HandleInformation);
  v5 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)v18;
    --CurrentThread->KernelApcDisable;
    v8 = (signed __int64 *)(v7 - 4);
    v9 = KeAbPreAcquire((ULONG_PTR)(v7 - 4), 0LL, 0LL, v4);
    v12 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7 - 8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7 - 4, v9, (ULONG_PTR)(v7 - 4), v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *((_BYTE *)v7 - 21) |= 0x10u;
    _m_prefetchw(v8);
    v13 = *v8;
    v14 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v8, v15 != _InterlockedCompareExchange64(v8, v14, v13)) )
      ExfReleasePushLock(v7 - 4, v10);
    KeAbPostRelease((ULONG_PTR)(v7 - 4));
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(v18);
    return v5;
  }
  return result;
}
