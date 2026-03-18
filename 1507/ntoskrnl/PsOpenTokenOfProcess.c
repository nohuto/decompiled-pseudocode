/*
 * XREFs of PsOpenTokenOfProcess @ 0x140434A10
 * Callers:
 *     NtOpenProcessTokenEx @ 0x140434930 (NtOpenProcessTokenEx.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PsOpenTokenOfProcess(void *a1, ULONG_PTR *a2)
{
  NTSTATUS result; // eax
  _QWORD *v4; // rdi
  ULONG_PTR v5; // rbx
  __int64 v6; // r9
  PVOID v7; // rcx
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r9
  __int16 v12; // ax
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandleWithTag(
             a1,
             0x1000u,
             (POBJECT_TYPE)PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             0x65537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v4 = Object;
    v5 = ObFastReferenceObject((signed __int64 *)Object + 107);
    if ( !v5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = (unsigned __int64 *)((char *)Object + 728);
      v10 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v6);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9, v11);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v5 = ObFastReferenceObjectLocked(v4 + 107);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      v12 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v12;
      if ( !v12
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v7 = Object;
    *a2 = v5;
    ObfDereferenceObjectWithTag(v7, 0x65537350u);
    return 0;
  }
  return result;
}
