/*
 * XREFs of TppRaiseInvalidParameter @ 0x1800FE5C4
 * Callers:
 *     TpAllocWait @ 0x18003A580 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18003A720 (TpAllocTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18003B9D0 (TppCleanupGroupMemberRelease.c)
 *     TpAllocWork @ 0x18003BBB0 (TpAllocWork.c)
 *     TppWorkpValidateWork @ 0x18003BCF0 (TppWorkpValidateWork.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x18003BE78 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003BF98 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x18003C170 (TppIopValidateIo.c)
 *     TppTimerpValidateTimer @ 0x18003C1C8 (TppTimerpValidateTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 *     TpPostWork @ 0x18003CEF0 (TpPostWork.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003EF9C (TppPoolpReferenceGlobalPool.c)
 *     TpReleaseCleanupGroupMembers @ 0x180063BA0 (TpReleaseCleanupGroupMembers.c)
 *     TpCallbackIndependent @ 0x180065190 (TpCallbackIndependent.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800652E0 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180065320 (TpAlpcRegisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18006558C (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x180065614 (TppAllocAlpcCompletion.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B870 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpSetPoolMaxThreads @ 0x180072D60 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180072DD0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180072E30 (TpAllocPool.c)
 *     TppCallbackMayRunLongProlog @ 0x180077728 (TppCallbackMayRunLongProlog.c)
 *     TpAllocIoCompletion @ 0x180079E70 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x18007A064 (TpBindFileToDirect.c)
 *     TpSimpleTryPost @ 0x18007A0F0 (TpSimpleTryPost.c)
 *     TpAllocCleanupGroup @ 0x180080D10 (TpAllocCleanupGroup.c)
 *     TpReleaseCleanupGroup @ 0x1800817B0 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180082FA0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180083370 (TpCallbackSendPendingAlpcMessage.c)
 *     TpReleasePool @ 0x1800839A0 (TpReleasePool.c)
 *     TpAllocJobNotification @ 0x180084520 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x180084708 (TppJobpValidateJob.c)
 *     TpDisassociateCallback @ 0x1800849C0 (TpDisassociateCallback.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180086010 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDereferenceGlobalPool @ 0x180086738 (TpDereferenceGlobalPool.c)
 *     TpSetPoolMinThreads @ 0x1800877B0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800882C0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180089A60 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x1800FE360 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1800FE390 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1800FE3D0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     TppReportExceptionFilter @ 0x1800FE644 (TppReportExceptionFilter.c)
 */

void TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(0x57u);
  RtlRaiseException(&ExceptionRecord);
}
