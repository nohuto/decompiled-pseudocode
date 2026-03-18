/*
 * XREFs of HUBFDO_QueryHubErrataFlags @ 0x1C0065B94
 * Callers:
 *     HUBHSM_QueryingForHubHackFlags @ 0x1C0007000 (HUBHSM_QueryingForHubHackFlags.c)
 * Callees:
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C00273A8 (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C0069958 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006A900 (HUBREG_QueryHubErrataFlags.c)
 */

__int64 __fastcall HUBFDO_QueryHubErrataFlags(__int64 a1)
{
  char *v2; // rbx
  char *v3; // r9
  char *v4; // r8
  char *v5; // rdx
  int v6; // ebx
  int HubErrataFlags; // ecx
  __int64 result; // rax
  char v9[8]; // [rsp+40h] [rbp-28h] BYREF
  char v10[8]; // [rsp+48h] [rbp-20h] BYREF
  char v11[8]; // [rsp+50h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 200) )
  {
    v6 = a1 + 2376;
    HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 2376), v11, v9, v10);
    HUBREG_QueryUsbHardwareVerifierValue(
      v6,
      (unsigned int)v11,
      (unsigned int)v9,
      (unsigned int)v10,
      (__int64)&g_HwVerifierHubName,
      *(_QWORD *)(a1 + 2440),
      a1 + 2512);
    v3 = v10;
    v4 = v9;
    v5 = v11;
  }
  else
  {
    v2 = (char *)(a1 + 130);
    HUBREG_QueryUsbHardwareVerifierValue(
      a1 + 2376,
      a1 + 120,
      a1 + 125,
      a1 + 130,
      (__int64)&g_HwVerifierHubName,
      *(_QWORD *)(a1 + 2440),
      a1 + 2512);
    v3 = v2;
    v4 = (char *)(a1 + 125);
    v5 = (char *)(a1 + 120);
  }
  HubErrataFlags = HUBREG_QueryHubErrataFlags(a1, v5, v4, v3);
  result = 2045LL;
  if ( HubErrataFlags >= 0 )
    return 2053LL;
  return result;
}
