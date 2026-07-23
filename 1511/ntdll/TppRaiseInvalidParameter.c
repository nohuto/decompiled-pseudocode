/*
 * XREFs of TppRaiseInvalidParameter @ 0x1800F5658
 * Callers:
 *     TpReleaseCleanupGroupMembers @ 0x180003FB0 (TpReleaseCleanupGroupMembers.c)
 *     TpSetPoolMaxThreads @ 0x180004B00 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180004B70 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180004BD0 (TpAllocPool.c)
 *     TpAllocWait @ 0x180009600 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18000A620 (TpAllocTimer.c)
 *     TppWorkpValidateWork @ 0x18000A8EC (TppWorkpValidateWork.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     TppTimerQueueExpiration @ 0x18000AC60 (TppTimerQueueExpiration.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     TpAllocWork @ 0x18000CDC0 (TpAllocWork.c)
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 *     TpPostWork @ 0x18002E720 (TpPostWork.c)
 *     TpCallbackIndependent @ 0x18006BAA0 (TpCallbackIndependent.c)
 *     TpAlpcUnregisterCompletionList @ 0x18006BC00 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x18006BC40 (TpAlpcRegisterCompletionList.c)
 *     TppAlpcpValidateAlpc @ 0x18006BEAC (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006F1E0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TppCallbackMayRunLongProlog @ 0x180072898 (TppCallbackMayRunLongProlog.c)
 *     TpSimpleTryPost @ 0x1800776B0 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x1800779E4 (TpBindFileToDirect.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18007C1E0 (TpCallbackSendPendingAlpcMessage.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 *     TpAllocCleanupGroup @ 0x18007F830 (TpAllocCleanupGroup.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18007F900 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180080200 (TpCallbackUnloadDllOnCompletion.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x180081848 (TppJobpValidateJob.c)
 *     TpDisassociateCallback @ 0x180081C90 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroup @ 0x180082210 (TpReleaseCleanupGroup.c)
 *     TpDereferenceGlobalPool @ 0x180082298 (TpDereferenceGlobalPool.c)
 *     TpSetPoolMinThreads @ 0x1800839D0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x180084710 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180085750 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x1800F5370 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1800F53A0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1800F53E0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     TppReportExceptionFilter @ 0x1800F56D8 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
