/*
 * XREFs of WPP_SF_qLLL @ 0x1C005D260
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     NdisMConfigMSIXTableEntry @ 0x1C0025200 (NdisMConfigMSIXTableEntry.c)
 *     NdisMMapIoSpace @ 0x1C00B23F0 (NdisMMapIoSpace.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qLLL(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4, 8LL, &v5, 4LL, va, 4LL, va1, 4LL, 0LL);
}
