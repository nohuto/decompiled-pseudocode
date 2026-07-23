/*
 * XREFs of VfDriverInitSuccess @ 0x1406FE22C
 * Callers:
 *     MmCallDllInitialize @ 0x1405447E0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
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
