/*
 * XREFs of ZwAlpcCancelMessage @ 0x14017FE70
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404FFA1C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
