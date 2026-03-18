/*
 * XREFs of VfDriverInitSuccess @ 0x1407324D4
 * Callers:
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x1407B8F6C (PnpInitializeBootStartDriver.c)
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
