/*
 * XREFs of SeRegisterElamCertResources @ 0x14054FB7C
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1406ABB78 (ExpQueryElamCertInfo.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14079890C (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 *     SepParseElamCertResources @ 0x14054FC08 (SepParseElamCertResources.c)
 */

__int64 __fastcall SeRegisterElamCertResources(ULONGLONG a1, __int64 a2, char a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v3 = 4112;
  if ( a3 )
    v3 = 4624;
  v5[2] = 0LL;
  v5[0] = L"MSELAMCERTINFOID";
  v5[1] = L"MICROSOFTELAMCERTIFICATEINFO";
  result = LdrResSearchResource(a1, v5, 3u, v3, (__int64)&v6, &v7, 0LL, 0LL);
  if ( (int)result >= 0 )
    return SepParseElamCertResources(v6, v7);
  return result;
}
