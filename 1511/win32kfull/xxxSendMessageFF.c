/*
 * XREFs of xxxSendMessageFF @ 0x1C0150ED0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageFF(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  if ( a5 )
    return xxxSendMessageEx((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, a5);
  else
    return xxxSendTransformableMessageTimeout((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
