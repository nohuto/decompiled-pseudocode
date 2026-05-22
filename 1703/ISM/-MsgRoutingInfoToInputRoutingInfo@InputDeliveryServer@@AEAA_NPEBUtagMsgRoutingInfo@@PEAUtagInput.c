/*
 * XREFs of ?MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x1800690B8
 * Callers:
 *     ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180069110 (-PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x180069190 (-PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBUKeyboardEvent@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180019C08 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall InputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(
        InputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        struct tagInputRoutingInfo *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r9
  char *v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _QWORD *v9; // r9
  __int64 v10; // r10

  v3 = (_QWORD *)*((_QWORD *)this + 42);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    return 0;
  v5 = (char *)a3 + 8;
  while ( 1 )
  {
    v6 = (_OWORD *)v4[8];
    v7 = v6[2];
    v8 = v6[3];
    *(_OWORD *)a3 = v6[1];
    *((_OWORD *)a3 + 1) = v7;
    *((_OWORD *)a3 + 2) = v8;
    if ( operator==((__int64)v5, (__int64)a2) )
      break;
    v4 = (_QWORD *)*v9;
    if ( v4 == *(_QWORD **)(v10 + 336) )
      return 0;
  }
  return 1;
}
