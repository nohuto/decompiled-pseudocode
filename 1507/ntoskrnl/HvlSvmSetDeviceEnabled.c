/*
 * XREFs of HvlSvmSetDeviceEnabled @ 0x1401EB788
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmSetDeviceEnabled(unsigned int a1, unsigned __int8 a2)
{
  unsigned __int16 v2; // ax
  _QWORD v4[4]; // [rsp+28h] [rbp-28h] BYREF

  v4[0] = a1 | 0x100000000LL;
  v4[2] = a2;
  v4[1] = 1LL;
  v2 = HvlpExtendedFastHypercall(196779LL, v4, 24LL);
  switch ( v2 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return v2 | 0xC0350000;
}
