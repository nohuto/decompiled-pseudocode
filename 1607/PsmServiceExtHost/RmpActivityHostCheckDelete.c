/*
 * XREFs of RmpActivityHostCheckDelete @ 0x180017F40
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 * Callees:
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 */

void __fastcall RmpActivityHostCheckDelete(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // r8d
  unsigned int i; // edx

  if ( *((int *)a1 + 5) >= 0 )
  {
    v2 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( ((1 << i) & 3) != 0 )
        v2 += *((_DWORD *)a1 + 6 * (int)i + 158);
    }
    if ( !v2 )
    {
      RmpActivityHostCheckQueueWork((__int64)a1);
      if ( (*((_BYTE *)a1 + 816) & 3) == 0 && (*((_BYTE *)a1 + 1124) & 1) == 0 )
        RmpActivityHostDelete(a1);
    }
  }
}
