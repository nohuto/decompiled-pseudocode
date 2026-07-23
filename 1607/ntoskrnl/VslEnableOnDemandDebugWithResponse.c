/*
 * XREFs of VslEnableOnDemandDebugWithResponse @ 0x140620818
 * Callers:
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1406821CC (PsIumEnableOnDemandDebugWithResponse.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __fastcall VslEnableOnDemandDebugWithResponse(__int64 a1, const void *a2, unsigned int a3)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  _BYTE v7[88]; // [rsp+38h] [rbp-70h] BYREF

  result = -1073741790;
  if ( a3 <= 0x50 )
  {
    v5 = *(_QWORD *)(a1 + 720);
    v6 = a3;
    memmove(v7, a2, a3);
    return VslpEnterIumSecureMode(1, 16LL, 0LL, (__int64)v4);
  }
  return result;
}
