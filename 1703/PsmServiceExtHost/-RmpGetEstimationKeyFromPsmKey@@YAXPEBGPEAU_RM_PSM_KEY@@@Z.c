/*
 * XREFs of ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x18002ABE4
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000DD0C (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpGetEstimationKeyFromPsmKey(wchar_t *Source, wchar_t *Destination)
{
  int v4; // edi
  __int64 v5; // rcx
  wchar_t *v6; // rax

  memset_0(Destination, 0, 0x1D0uLL);
  wcsncpy_s(Destination, 0xE8uLL, Source, 0xE8uLL);
  v4 = -1;
  LODWORD(v5) = 0;
  if ( *Destination )
  {
    v6 = Destination;
    do
    {
      if ( *v6 == 92 )
      {
        *v6 = 47;
      }
      else if ( *v6 == 35 )
      {
        v4 = v5;
      }
      v5 = (unsigned int)(v5 + 1);
      v6 = &Destination[v5];
    }
    while ( *v6 );
  }
  wcsnlen(Source, 0xE8uLL);
  if ( v4 != -1 )
    memset_0(&Destination[v4 + 1], 0, (unsigned int)(2 * (232 - (v4 + 1))));
}
