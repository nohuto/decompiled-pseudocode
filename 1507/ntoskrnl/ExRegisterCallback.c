/*
 * XREFs of ExRegisterCallback @ 0x140158AE8
 * Callers:
 *     KeRegisterProcessorChangeCallback @ 0x1405B8714 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x1405C2454 (IoRegisterBootDriverCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x1405C2874 (SeRegisterImageVerificationCallback.c)
 *     VerifierExRegisterCallback @ 0x140741BEC (VerifierExRegisterCallback.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  struct _CALLBACK_OBJECT *PoolWithTag; // rax
  struct _CALLBACK_OBJECT *v7; // rbx
  char v8; // bp
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r14
  PCALLBACK_OBJECT *v11; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  PoolWithTag = (struct _CALLBACK_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65524243u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = 0;
    *((_QWORD *)PoolWithTag + 3) = CallbackFunction;
    v8 = 0;
    *((_QWORD *)PoolWithTag + 4) = CallbackContext;
    v9 = (volatile signed __int32 *)((char *)CallbackObject + 8);
    *((_QWORD *)PoolWithTag + 2) = CallbackObject;
    *((_BYTE *)PoolWithTag + 44) = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((char *)CallbackObject + 8);
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)CallbackObject + 2);
    }
    if ( *((_BYTE *)CallbackObject + 32)
      || *((PCALLBACK_OBJECT *)CallbackObject + 2) == (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
    {
      v8 = 1;
      v11 = (PCALLBACK_OBJECT *)*((_QWORD *)CallbackObject + 3);
      *(_QWORD *)v7 = (char *)CallbackObject + 16;
      *((_QWORD *)v7 + 1) = v11;
      if ( *v11 != (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
        __fastfail(3u);
      *v11 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((char *)CallbackObject + 8, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    __writecr8(CurrentIrql);
    if ( !v8 )
    {
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
      return 0LL;
    }
    return v7;
  }
  else
  {
    ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
    return 0LL;
  }
}
