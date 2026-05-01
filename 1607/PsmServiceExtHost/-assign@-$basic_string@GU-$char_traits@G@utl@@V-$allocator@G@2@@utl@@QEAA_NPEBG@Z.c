/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000DAA0
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180010590 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     <none>
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v2; // r8

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *((_WORD *)a2 + v2) );
  }
  else
  {
    v2 = 0LL;
  }
  return utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           a1,
           a2,
           v2);
}
