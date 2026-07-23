/*
 * XREFs of HvlSvmSetDeviceEnabled @ 0x1401BE4E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmSetDeviceEnabled(unsigned int a1, unsigned __int8 a2)
{
  unsigned __int16 v2; // ax
  _QWORD v4[4]; // [rsp+30h] [rbp-30h] BYREF

  v4[0] = a1 | 0x100000000LL;
  v4[2] = a2;
  v4[1] = 1LL;
  v2 = HvcallpExtendedFastHypercall(196779LL, v4, 24LL);
  return HvlpHvToNtStatus(v2);
}
