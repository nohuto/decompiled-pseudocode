/*
 * XREFs of IsHwpNativeInterruptSupported @ 0x1C0001840
 * Callers:
 *     InitDriver @ 0x1C0024A18 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002A20 (GetCpuIdInfo.c)
 */

bool IsHwpNativeInterruptSupported()
{
  char v0; // bl
  unsigned int v2[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v3[4]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(0LL, v2);
  if ( v2[0] >= 6 )
  {
    GetCpuIdInfo(6LL, v3);
    return (v3[0] & 0x180) == 384;
  }
  return v0;
}
