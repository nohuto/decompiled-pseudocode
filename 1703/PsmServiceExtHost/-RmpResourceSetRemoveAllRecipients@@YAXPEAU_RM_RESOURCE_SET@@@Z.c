/*
 * XREFs of ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017518
 * Callers:
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x1800170F8 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017310 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 */

void __fastcall RmpResourceSetRemoveAllRecipients(struct _RM_RESOURCE_SET *a1)
{
  while ( *((_DWORD *)a1 + 20) )
    RmpResourceSetRemoveRecipient(a1, **((struct _RM_RESOURCE_SET ***)a1 + 9), 0x48u);
}
