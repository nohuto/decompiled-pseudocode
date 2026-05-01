/*
 * XREFs of RmpGetEstimationKeyFromPsmKey @ 0x18003ED9C
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180012590 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall RmpGetEstimationKeyFromPsmKey(wchar_t *Source, wchar_t *Destination)
{
  wchar_t *result; // rax
  int v5; // ecx
  __int64 v6; // r8

  wcsnlen(Source, 0xE8uLL);
  result = wcsncpy(Destination, Source, 0xE8uLL);
  v5 = -1;
  LODWORD(v6) = 0;
  if ( *Destination )
  {
    result = Destination;
    do
    {
      if ( *result == 92 )
      {
        *result = 47;
      }
      else if ( *result == 35 )
      {
        v5 = v6;
      }
      v6 = (unsigned int)(v6 + 1);
      result = &Destination[v6];
    }
    while ( *result );
    if ( v5 != -1 )
    {
      result = (wchar_t *)(unsigned int)(v5 + 1);
      Destination[(_QWORD)result] = 0;
    }
  }
  return result;
}
