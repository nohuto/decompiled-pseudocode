/*
 * XREFs of xxxSendMessageFF @ 0x1402CE2E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageEx @ 0x1401B82D0 (xxxSendMessageEx.c)
 */

__int64 __fastcall xxxSendMessageFF(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *Address)
{
  if ( Address )
    return xxxSendMessageEx((struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4, Address);
  else
    return xxxSendTransformableMessageTimeout(
             (struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL,
             a2,
             a3,
             a4,
             0,
             0,
             0LL,
             0,
             1);
}
