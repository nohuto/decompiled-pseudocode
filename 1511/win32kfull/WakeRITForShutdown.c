/*
 * XREFs of WakeRITForShutdown @ 0x1C009FA60
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C00A0644 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS || !gpkeRITEvent )
    return 0LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(8LL);
  return 1LL;
}
