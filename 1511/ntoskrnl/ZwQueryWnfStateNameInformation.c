/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x140152FC0
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x1404A45AC (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
