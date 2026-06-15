/*
 * XREFs of PdcInitializeETW @ 0x180031594
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x1800315E0 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     McGenEventRegister @ 0x18003123C (McGenEventRegister.c)
 *     TraceLoggingRegisterEx @ 0x180034328 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall PdcInitializeETW(__int64 a1, __int64 a2)
{
  TLG_STATUS result; // eax
  TLG_PENABLECALLBACK v3; // rdx
  PVOID v4; // r8

  result = _InterlockedIncrement(&g_RegistrationCount);
  if ( result == 1 )
  {
    McGenEventRegister(
      (__int64)&PDC_EVENT_PROVIDER,
      a2,
      (__int64)&PDC_EVENT_PROVIDER_Context,
      &Microsoft_Windows_PDCHandle);
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1800CA0C0, v3, v4);
  }
  return result;
}
