/*
 * XREFs of SeRegisterElamCertResources @ 0x140521C08
 * Callers:
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14074F500 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     LdrResSearchResource @ 0x140464D10 (LdrResSearchResource.c)
 *     SepParseElamCertResources @ 0x140521C94 (SepParseElamCertResources.c)
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
  v3 = 4096;
  if ( a3 )
    v3 = 4608;
  v5[2] = 0LL;
  v5[0] = L"MSELAMCERTINFOID";
  v5[1] = L"MICROSOFTELAMCERTIFICATEINFO";
  result = LdrResSearchResource(a1, v5, 3u, v3, (__int64)&v6, &v7, 0LL, 0LL);
  if ( (int)result >= 0 )
    return SepParseElamCertResources(v6, v7);
  return result;
}
