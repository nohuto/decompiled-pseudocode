/*
 * XREFs of VfDriverInitSuccess @ 0x1406B262C
 * Callers:
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140751FAC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
