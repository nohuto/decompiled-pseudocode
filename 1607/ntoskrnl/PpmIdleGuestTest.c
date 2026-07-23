/*
 * XREFs of PpmIdleGuestTest @ 0x14020D798
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestTest(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(PpmPlatformStates + 16))(a1, 0LL);
}
