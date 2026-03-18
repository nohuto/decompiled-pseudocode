/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x14015C6A0
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x14061A9C8 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
