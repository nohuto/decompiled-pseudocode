/*
 * XREFs of IopSetEnvironmentVariableHal @ 0x14062913C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetEnvironmentVariableHal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  return HalSetEnvironmentVariableEx(a3, a4, a5);
}
