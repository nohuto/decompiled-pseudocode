/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x140153140
 * Callers:
 *     VfZwRemoveIoCompletionEx @ 0x1406D3FD4 (VfZwRemoveIoCompletionEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRemoveIoCompletionEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
