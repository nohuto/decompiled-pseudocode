/*
 * XREFs of WPP_SF_qZq @ 0x1C0050180
 * Callers:
 *     ndisIMCheckDeviceInstance @ 0x1C00CCE50 (ndisIMCheckDeviceInstance.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, ...)
{
  int v4; // eax
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v7 = a3;
  if ( a4 )
    v4 = *a4;
  else
    v4 = 8;
  if ( a4 )
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v5 = L"NULL";
  v6 = L"\b";
  if ( a4 )
    v6 = a4;
  ndisWppFastTraceMessage(
    &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids,
    0x29u,
    &v7,
    8LL,
    v6,
    2LL,
    v5,
    v4,
    va,
    8LL,
    0LL);
}
