/*
 * XREFs of PopNotifyTelemetryOsState @ 0x140566B94
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400EFF88 (TraceLoggingProviderEnabled.c)
 *     PopTransitionTelemetryOsState @ 0x1405825E0 (PopTransitionTelemetryOsState.c)
 */

BOOLEAN __fastcall PopNotifyTelemetryOsState(__int64 a1, int a2, __int64 a3, char a4, char a5)
{
  BOOLEAN result; // al
  int v8; // r10d
  int v9; // r11d
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx

  result = TraceLoggingProviderEnabled(&pCallbackContext, a2, 0x800000000000uLL);
  v10 = 0;
  if ( result )
  {
    if ( (unsigned int)(v8 - 4) <= 2 )
    {
      v12 = 2LL;
      LOBYTE(v10) = v8 == 5;
      v11 = (unsigned int)(v10 + 1);
    }
    else
    {
      result = v8 - 2;
      if ( (unsigned int)(v8 - 2) > 1 )
        return result;
      v11 = 4LL;
      v12 = 4 - (unsigned int)(a5 != 0);
      if ( v9 == 5 || v8 == 3 )
      {
        if ( (a4 & 8) != 0 )
        {
          v11 = 3LL;
        }
        else
        {
          v11 = 5LL;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v11 = 8LL;
        }
      }
    }
    return PopTransitionTelemetryOsState(v12, v11);
  }
  return result;
}
