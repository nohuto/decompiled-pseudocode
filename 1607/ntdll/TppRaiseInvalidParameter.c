/*
 * XREFs of TppRaiseInvalidParameter @ 0x1800FE5C4
 * Callers:
 *     TpAllocWait @ 0x18003A570 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18003A710 (TpAllocTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18003B9C0 (TppCleanupGroupMemberRelease.c)
 *     TpAllocWork @ 0x18003BBA0 (TpAllocWork.c)
 *     TppWorkpValidateWork @ 0x18003BCE0 (TppWorkpValidateWork.c)
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x18003BE68 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003BF88 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x18003C160 (TppIopValidateIo.c)
 *     TppTimerpValidateTimer @ 0x18003C1B8 (TppTimerpValidateTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C870 (TppTimerQueueExpiration.c)
 *     TpPostWork @ 0x18003CEE0 (TpPostWork.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF8C (TppPoolpReferenceGlobalPool.c)
 *     TpReleaseCleanupGroupMembers @ 0x180063B90 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackIndependent @ 0x180065180 (TpCallbackIndependent.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800652D0 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180065310 (TpAlpcRegisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18006557C (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B860 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpSetPoolMaxThreads @ 0x180072D50 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180072DC0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180072E20 (TpAllocPool.c)
 *     TppCallbackMayRunLongProlog @ 0x180077718 (TppCallbackMayRunLongProlog.c)
 *     TpAllocIoCompletion @ 0x180079E60 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x18007A054 (TpBindFileToDirect.c)
 *     TpSimpleTryPost @ 0x18007A0E0 (TpSimpleTryPost.c)
 *     TpAllocCleanupGroup @ 0x180080D00 (TpAllocCleanupGroup.c)
 *     TpReleaseCleanupGroup @ 0x1800817A0 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180082F90 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180083360 (TpCallbackSendPendingAlpcMessage.c)
 *     TpReleasePool @ 0x180083990 (TpReleasePool.c)
 *     TpAllocJobNotification @ 0x180084510 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x1800846F8 (TppJobpValidateJob.c)
 *     TpDisassociateCallback @ 0x1800849B0 (TpDisassociateCallback.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180086000 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x180086728 (TpDereferenceGlobalPool.c)
 *     TpSetPoolMinThreads @ 0x1800877A0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800882B0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180089A50 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x1800FE360 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1800FE390 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1800FE3D0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     TppReportExceptionFilter @ 0x1800FE644 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
