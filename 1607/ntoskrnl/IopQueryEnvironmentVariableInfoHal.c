/*
 * XREFs of IopQueryEnvironmentVariableInfoHal @ 0x140628FB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopQueryEnvironmentVariableInfoHal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return HalQueryEnvironmentVariableInfoEx(a3, a4, a5, a6);
}
