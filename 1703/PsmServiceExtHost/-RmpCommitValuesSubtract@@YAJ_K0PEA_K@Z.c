/*
 * XREFs of ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180004C50
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18001003C (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180010B7C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18002AB64 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x18002D83C (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x180033E50 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesSubtract(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  if ( a1 == -1LL )
  {
    *a3 = -1LL;
  }
  else
  {
    if ( a1 < a2 )
    {
      result = 3221225621LL;
      *a3 = 0LL;
      return result;
    }
    *a3 = a1 - a2;
  }
  return 0LL;
}
