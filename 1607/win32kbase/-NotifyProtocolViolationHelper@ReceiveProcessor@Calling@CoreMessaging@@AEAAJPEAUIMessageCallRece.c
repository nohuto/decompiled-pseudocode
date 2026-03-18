/*
 * XREFs of ?NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00F9658
 * Callers:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C00F9680 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::NotifyProtocolViolationHelper(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        struct MsgCallState *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(struct IMessageCallReceiveHost *, struct MsgCallState *))(*(_QWORD *)a2 + 32LL))(
             a2,
             a3);
  if ( (int)result >= 0 )
    return 2276591628LL;
  return result;
}
