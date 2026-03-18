/*
 * XREFs of ZwLoadKey3 @ 0x14015D4C0
 * Callers:
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey3(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
