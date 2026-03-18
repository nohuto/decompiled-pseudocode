/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x14015D160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
