/*
 * XREFs of ACPICMLidPowerStateCallBack @ 0x1C0037350
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 */

void __fastcall ACPICMLidPowerStateCallBack(volatile signed __int64 *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _BYTE OutputBuffer[28]; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v5; // [rsp+4Ch] [rbp-ECh]

  if ( !(_DWORD)Argument1 && ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u) >= 0 )
  {
    if ( v5 <= 1 )
      _InterlockedOr64(CallbackContext, 0x1000000000000000uLL);
    else
      _InterlockedAnd64(CallbackContext, 0xEFFFFFFFFFFFFFFFuLL);
  }
}
