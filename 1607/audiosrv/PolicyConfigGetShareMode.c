/*
 * XREFs of PolicyConfigGetShareMode @ 0x1800702E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PolicyConfigGetShareMode()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 72LL))(g_PolicyConfig);
}
