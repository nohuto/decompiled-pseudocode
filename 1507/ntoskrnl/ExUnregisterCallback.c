/*
 * XREFs of ExUnregisterCallback @ 0x14013169C
 * Callers:
 *     IopCleanupNotifications @ 0x14011C4BC (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405B8714 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140674E14 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x140698E58 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x1406D07E4 (SeUnregisterImageVerificationCallback.c)
 *     VerifierExUnregisterCallback @ 0x140741C2C (VerifierExUnregisterCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x1407E91A4 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  volatile signed __int32 *v1; // rbp
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (volatile signed __int32 *)*((_QWORD *)CallbackRegistration + 2);
  v3 = v1 + 2;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v1 + 2);
    }
    else if ( _interlockedbittestandset64(v3, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v1 + 2);
    }
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&ExpCallbackEvent);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v1 + 2, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    __writecr8(CurrentIrql);
    KeWaitForSingleObject(&ExpCallbackEvent, Executive, 0, 0, 0LL);
  }
  v5 = *(_QWORD **)CallbackRegistration;
  v6 = (PVOID *)*((_QWORD *)CallbackRegistration + 1);
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration || *v6 != CallbackRegistration )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v1 + 2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
}
