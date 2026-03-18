/*
 * XREFs of ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C00F8498
 * Callers:
 *     ?CoreMsgInitialize@@YAJXZ @ 0x1C005261C (-CoreMsgInitialize@@YAJXZ.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C0052694 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00F832C (-CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z @ 0x1C00F86C0 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z.c)
 *     ?NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C00F87B0 (-NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C00F87D0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C00F8900 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00F8A10 (-NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z.c)
 *     ?NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00F8A30 (-NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessagingK::Runtime::BugCheck(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x174u, a1, a2, a3, 0LL);
}
