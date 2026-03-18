/*
 * XREFs of SeRegisterElamCertResources @ 0x1405908CC
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407BA5D4 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     LdrResSearchResource @ 0x14046391C (LdrResSearchResource.c)
 *     SepParseElamCertResources @ 0x140590958 (SepParseElamCertResources.c)
 */

__int64 __fastcall SeRegisterElamCertResources(ULONGLONG a1, __int64 a2, char a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  ULONGLONG v7; // [rsp+88h] [rbp+20h] BYREF

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
