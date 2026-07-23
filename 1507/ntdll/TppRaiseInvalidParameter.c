/*
 * XREFs of TppRaiseInvalidParameter @ 0x1800F5C58
 * Callers:
 *     TpPostWork @ 0x1800276B0 (TpPostWork.c)
 *     TppCallbackMayRunLongProlog @ 0x18003BDF8 (TppCallbackMayRunLongProlog.c)
 *     TpAllocTimer @ 0x18003C6C0 (TpAllocTimer.c)
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 *     TppIopValidateIo @ 0x18003CD08 (TppIopValidateIo.c)
 *     TppWorkpValidateWork @ 0x18003CD60 (TppWorkpValidateWork.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     TpAllocWork @ 0x18003DBB0 (TpAllocWork.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180061F10 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180072F30 (TpCallbackSendPendingAlpcMessage.c)
 *     TpAllocCleanupGroup @ 0x1800738F0 (TpAllocCleanupGroup.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180073AF0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180074DE0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x1800751B0 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroup @ 0x180075E00 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180077940 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800786D0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180079380 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpAlpcUnregisterCompletionList @ 0x180079540 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180079580 (TpAlpcRegisterCompletionList.c)
 *     TpCallbackIndependent @ 0x180079650 (TpCallbackIndependent.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 *     TpAllocIoCompletion @ 0x18007B070 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007B264 (TppAllocAlpcCompletion.c)
 *     TpSetPoolMaxThreads @ 0x18007B690 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18007B700 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x18007B760 (TpAllocPool.c)
 *     TpAllocWait @ 0x18007CFD0 (TpAllocWait.c)
 *     TpBindFileToDirect @ 0x18007D710 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x18007D790 (TpDereferenceGlobalPool.c)
 *     TpSimpleTryPost @ 0x18007D880 (TpSimpleTryPost.c)
 *     TppJobpValidateJob @ 0x18007DA20 (TppJobpValidateJob.c)
 *     TpReleaseCleanupGroupMembers @ 0x18007DA80 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x1800F5970 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1800F59A0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1800F59E0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 *     TppReportExceptionFilter @ 0x1800F5CD8 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
