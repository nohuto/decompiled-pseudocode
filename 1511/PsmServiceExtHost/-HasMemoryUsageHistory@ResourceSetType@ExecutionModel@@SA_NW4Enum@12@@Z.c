/*
 * XREFs of ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x18003CE10
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180012590 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

char __fastcall ExecutionModel::ResourceSetType::HasMemoryUsageHistory(int a1)
{
  _DWORD *v1; // rdx
  int v2; // r8d
  _OWORD v4[2]; // [rsp+0h] [rbp-48h] BYREF
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]

  v1 = v4;
  v4[0] = _mm_load_si128((const __m128i *)&_xmm);
  v5 = 40;
  v2 = 0;
  v4[1] = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 10;
  v7 = 25;
  while ( a1 != *v1 )
  {
    ++v2;
    ++v1;
    if ( (unsigned __int64)v2 >= 0xB )
      return 1;
  }
  return 0;
}
