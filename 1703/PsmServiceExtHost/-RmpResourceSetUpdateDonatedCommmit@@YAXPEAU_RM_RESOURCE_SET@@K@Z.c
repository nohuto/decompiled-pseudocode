/*
 * XREFs of ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224
 * Callers:
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x1800170F8 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x18002DBA8 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180018CE8 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 */

void __fastcall RmpResourceSetUpdateDonatedCommmit(struct _RM_RESOURCE_SET *a1, char a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rsi
  bool v7; // zf
  BOOL v8; // r14d
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v2 = 0;
    v5 = 0LL;
    v6 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( *((_DWORD *)a1 + 20) )
    {
      v9 = *((_QWORD *)a1 + 9);
      v10 = *((unsigned int *)a1 + 20);
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)v9 + 88LL);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 40LL) + 1450LL) & 7) == 4 )
        {
          RmpCommitValuesAdd(v6, v11, &v13);
          v6 = v13;
        }
        else
        {
          RmpCommitValuesAdd(v5, v11, &v12);
          v5 = v12;
        }
        v9 += 8LL;
        --v10;
      }
      while ( v10 );
    }
    if ( v5 != *((_QWORD *)a1 + 7) || v6 != *((_QWORD *)a1 + 8) )
    {
      v7 = v5 == *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = v5;
      v8 = !v7;
      *((_QWORD *)a1 + 8) = v6;
      if ( (a2 & 2) != 0 )
        RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 5) + 1392LL));
      if ( v8 && (a2 & 4) != 0 && *((_DWORD *)a1 + 20) )
      {
        do
          RmpResourceSetUpdateElasticRecipient(*(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 9) + 8LL * v2++));
        while ( v2 < *((_DWORD *)a1 + 20) );
      }
    }
  }
}
