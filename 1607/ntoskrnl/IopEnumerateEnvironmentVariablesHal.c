/*
 * XREFs of IopEnumerateEnvironmentVariablesHal @ 0x140628598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesHal(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return HalEnumerateEnvironmentVariablesEx(a3, a4, a5);
}
