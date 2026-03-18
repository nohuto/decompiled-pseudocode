/*
 * XREFs of ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00F8A10
 * Callers:
 *     <none>
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C00F8498 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall __noreturn CoreMessagingK::ReceiveHost::NotifyInvalid(
        struct IMessageCallReceiveHost *a1,
        struct MsgCallState *a2)
{
  CoreMessagingK::Runtime::BugCheck(8, *(int *)a2, *((unsigned int *)a2 + 1));
}
