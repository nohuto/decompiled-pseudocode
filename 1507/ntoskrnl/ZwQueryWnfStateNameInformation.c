/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x140181930
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x1404090C4 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
