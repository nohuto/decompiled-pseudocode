/*
 * XREFs of ExUnregisterCallback @ 0x140131758
 * Callers:
 *     IopCleanupNotifications @ 0x1401302A4 (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x140578064 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x14057C124 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140624484 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x14064FA40 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14068C9B8 (SeUnregisterImageVerificationCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407BA6CC (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x1407BD3C4 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
