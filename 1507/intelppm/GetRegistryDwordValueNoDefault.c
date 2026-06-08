/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0018F60
 * Callers:
 *     GetHvPpmCapabilities @ 0x1C001BCC0 (GetHvPpmCapabilities.c)
 * Callees:
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF

  memset(v5, 0, 0x70uLL);
  v5[2] = L"LegacyHvAlgorithm";
  LODWORD(v5[1]) = 292;
  v5[3] = a3;
  LODWORD(v5[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(
           0LL,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
           v5,
           0LL,
           0LL);
}
