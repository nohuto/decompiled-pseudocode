/*
 * XREFs of ZwFilterBootOption @ 0x140180A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
