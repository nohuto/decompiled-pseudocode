/*
 * XREFs of ExUnregisterCallback @ 0x1400F4408
 * Callers:
 *     IopCleanupNotifications @ 0x1400D0F40 (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x140530BBC (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x140546F70 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1405FA9F0 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x14061A80C (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14064D3AC (SeUnregisterImageVerificationCallback.c)
 *     VerifierExUnregisterCallback @ 0x1406C0438 (VerifierExUnregisterCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x14076FF8C (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x1407725A0 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rdx
  PVOID *v5; // rax

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&ExpCallbackEvent);
    KeReleaseSpinLock(v1 + 1, v3);
    KeWaitForSingleObject(&ExpCallbackEvent, Executive, 0, 0, 0LL);
  }
  v4 = *(_QWORD **)CallbackRegistration;
  v5 = (PVOID *)*((_QWORD *)CallbackRegistration + 1);
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration || *v5 != CallbackRegistration )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  KeReleaseSpinLock(v1 + 1, v3);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
