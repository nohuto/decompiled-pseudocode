/*
 * XREFs of StorPortAdapterPowerControl @ 0x1C002E2E0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall StorPortAdapterPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 result; // rax

  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 10) )
  {
    result = RaCallMiniportAdapterControl(a1 + 296);
    *a7 = MEMORY[0];
  }
  else
  {
    *a7 = 0LL;
    return 3221225659LL;
  }
  return result;
}
