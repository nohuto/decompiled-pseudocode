/*
 * XREFs of PpmIdleGuestComplete @ 0x140241D64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return (*(__int64 (__fastcall **)(__int64))(PpmPlatformStates + 32))(a1);
  return result;
}
