/*
 * XREFs of WPP_SF_qZL @ 0x1C004FF8C
 * Callers:
 *     NdisQueryAdapterInstanceName @ 0x1C005A670 (NdisQueryAdapterInstanceName.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A1E20 (NdisRegisterProtocolDriver.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00CCAA0 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisRegisterProtocol @ 0x1C00CF100 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, unsigned __int16 *a4, ...)
{
  int v6; // eax
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rcx
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v9 = a3;
  if ( a4 )
    v6 = *a4;
  else
    v6 = 8;
  if ( a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  v8 = L"\b";
  if ( a4 )
    v8 = a4;
  ndisWppFastTraceMessage(a2, a1, &v9, 8LL, v8, 2LL, v7, v6, va, 4LL, 0LL);
}
