/*
 * XREFs of WakeRITForShutdown @ 0x1C0132A80
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1, __int64 a2)
{
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS || !gpkeRITEvent )
    return 0LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(8u);
  return 1LL;
}
