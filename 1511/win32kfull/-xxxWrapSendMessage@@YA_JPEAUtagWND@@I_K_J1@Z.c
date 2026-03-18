/*
 * XREFs of ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0058830
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxWrapSendMessage(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 0, 1);
}
