/*
 * XREFs of HvlQueryDetailInfo @ 0x140620274
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorInterface @ 0x14014B500 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HviGetEnlightenmentInformation @ 0x140231CC8 (HviGetEnlightenmentInformation.c)
 *     HviGetHardwareFeatures @ 0x140231D08 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140231D6C (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorVersion @ 0x140231DAC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140231DEC (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlQueryDetailInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v10[7]; // [rsp+30h] [rbp-88h] BYREF

  if ( a2 == 112 )
  {
    memset(v10, 0, sizeof(v10));
    HviGetHypervisorVendorAndMaxFunction(v10);
    HviGetHypervisorInterface(&v10[1]);
    HviGetHypervisorVersion(&v10[2]);
    HviGetHypervisorFeatures(&v10[3]);
    HviGetHardwareFeatures((__int64)&v10[4], v7, v8, v9);
    HviGetEnlightenmentInformation(&v10[5]);
    HviGetImplementationLimits(&v10[6]);
    result = 0LL;
    *a1 = v10[0];
    a1[1] = v10[1];
    a1[2] = v10[2];
    a1[3] = v10[3];
    a1[4] = v10[4];
    a1[5] = v10[5];
    a1[6] = v10[6];
    *a4 = 112;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
