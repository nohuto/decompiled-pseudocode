/*
 * XREFs of PpmIdleGuestPreExecute @ 0x1401F3D48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestPreExecute(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return (*(__int64 (**)(void))(PpmPlatformStates + 24))();
}
