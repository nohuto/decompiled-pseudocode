/*
 * XREFs of ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800020C0 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180004C50 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x180018468 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180019420 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x18002D6D8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 */

__int64 __fastcall RmpResourceSetEstablishSponsorship(struct _RM_RESOURCE_SET *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r9d
  struct _RM_RESOURCE_SET *v6; // r11
  int v7; // r10d
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // r10d
  __int64 v13; // rcx
  int v14; // r10d

  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v6 = a1;
  v7 = *(_BYTE *)(v3 + 1450) & 7;
  if ( ((*(_BYTE *)(v3 + 1450) & 7) != 0 || a2) && ((unsigned int)(v7 - 2) > 2 || v7 == 3 || *(_QWORD *)(v3 + 1808)) )
  {
    if ( v7 != 4 )
    {
      v9 = *(_QWORD *)(v3 + 1824);
      if ( v9 && (v13 = *(_QWORD *)(v9 + 1384)) != 0 )
        v10 = *(_QWORD *)(v13 + 88);
      else
        v10 = 0LL;
      RmpCommitValuesSubtract(*(_QWORD *)(v3 + 1432), v10, (unsigned __int64 *)v6 + 11);
    }
    if ( a2 )
    {
      return (unsigned int)RmpResourceSetAddExplicitDonor(v6, a2, a3);
    }
    else
    {
      v11 = v7 - 1;
      if ( v11 )
      {
        v14 = v11 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
            return (unsigned int)-805306367;
          return (unsigned int)RmpResourceSetAddPpleDonors(v6);
        }
        else
        {
          return (unsigned int)RmpResourceSetAddForegroundDonor(v6, a2);
        }
      }
      else
      {
        return (unsigned int)RmpResourceSetCheckAddPpleRecipient(v6);
      }
    }
  }
  return v4;
}
