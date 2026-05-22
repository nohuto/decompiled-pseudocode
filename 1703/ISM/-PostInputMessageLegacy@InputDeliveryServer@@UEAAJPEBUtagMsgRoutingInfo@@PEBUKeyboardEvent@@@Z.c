/*
 * XREFs of ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x180069190
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x1800690B8 (-MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInput.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::PostInputMessageLegacy(
        InputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        const struct KeyboardEvent *a3)
{
  unsigned int v6; // r11d
  _BYTE v8[48]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( !*((_BYTE *)this + 60)
    || InputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(this, a2, (struct tagInputRoutingInfo *)v8) )
  {
    return (*(unsigned int (__fastcall **)(InputDeliveryServer *, _BYTE *, const struct KeyboardEvent *))(*(_QWORD *)this + 24LL))(
             this,
             v8,
             a3);
  }
  return v6;
}
