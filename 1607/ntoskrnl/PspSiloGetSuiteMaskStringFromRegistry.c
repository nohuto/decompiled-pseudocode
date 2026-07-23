/*
 * XREFs of PspSiloGetSuiteMaskStringFromRegistry @ 0x14067EDB8
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x14067EE3C (PspSiloInitializeSuiteMask.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PspSiloGetSuiteMaskStringFromRegistry(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v4[15]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0uLL;
  memset(v4, 0, 0x70uLL);
  LODWORD(v4[1]) = 308;
  LODWORD(v4[4]) = 117440512;
  v4[2] = L"ProductSuite";
  v4[3] = &v3;
  result = RtlpQueryRegistryValues(2LL, L"ProductOptions", (__int64)v4, 0LL);
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
