/*
 * XREFs of ExRegisterCallback @ 0x14012577C
 * Callers:
 *     KeRegisterProcessorChangeCallback @ 0x140530BBC (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x140546F70 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x14054B03C (IoRegisterBootDriverCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x14054B3C4 (SeRegisterImageVerificationCallback.c)
 *     VerifierExRegisterCallback @ 0x1406C03F8 (VerifierExRegisterCallback.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x14076FF8C (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  struct _CALLBACK_OBJECT *PoolWithTag; // rax
  struct _CALLBACK_OBJECT *v7; // rbx
  char v8; // si
  KIRQL v9; // al
  PCALLBACK_OBJECT *v10; // rdx

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  PoolWithTag = (struct _CALLBACK_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65524243u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = 0;
    *((_QWORD *)PoolWithTag + 4) = CallbackContext;
    v8 = 0;
    *((_QWORD *)PoolWithTag + 2) = CallbackObject;
    *((_QWORD *)PoolWithTag + 3) = CallbackFunction;
    *((_BYTE *)PoolWithTag + 44) = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
    if ( *((_BYTE *)CallbackObject + 32)
      || *((PCALLBACK_OBJECT *)CallbackObject + 2) == (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
    {
      v8 = 1;
      v10 = (PCALLBACK_OBJECT *)*((_QWORD *)CallbackObject + 3);
      *(_QWORD *)v7 = (char *)CallbackObject + 16;
      *((_QWORD *)v7 + 1) = v10;
      if ( *v10 != (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
        __fastfail(3u);
      *v10 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)CallbackObject + 1, v9);
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
