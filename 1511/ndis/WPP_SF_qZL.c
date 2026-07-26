/*
 * XREFs of WPP_SF_qZL @ 0x1C004B5F0
 * Callers:
 *     NdisQueryAdapterInstanceName @ 0x1C0055E60 (NdisQueryAdapterInstanceName.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A70D0 (NdisRegisterProtocolDriver.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00C71C0 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, __int64 *a4, ...)
{
  __int64 v4; // r8
  const wchar_t *v5; // rax
  __int64 v6; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = a3;
  if ( a4 && a4[1] )
    v4 = *(unsigned __int16 *)a4;
  else
    v4 = 10LL;
  if ( !a4 || (v5 = (const wchar_t *)a4[1]) == 0LL )
    v5 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00276B0;
  ndisWppFastTraceMessage(a2, a1, &v6, 8LL, a4, 2LL, v5, v4, va, 4LL, 0LL);
}
