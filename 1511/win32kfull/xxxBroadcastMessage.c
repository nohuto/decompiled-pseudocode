/*
 * XREFs of xxxBroadcastMessage @ 0x1C0112B88
 * Callers:
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastMessage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7)
{
  return xxxBroadcastMessageEx(0LL, a2, a3, a4, a5, a6, a7, 0);
}
