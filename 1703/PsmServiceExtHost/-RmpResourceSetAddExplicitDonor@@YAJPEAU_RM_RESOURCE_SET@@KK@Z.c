/*
 * XREFs of ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180019420
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800018C0 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002B30 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C520 (-RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpResourceSetAddExplicitDonor(struct _RM_RESOURCE_SET *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // eax
  struct _RM_OBJECT_HEADER *v5; // rdi
  struct _RM_RESOURCE_SET *ForegroundSet; // rax
  int v7; // ebx
  struct _RM_OBJECT_HEADER *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v9 = 0LL;
  v4 = RmpActivityHostQueryByPidOrPsmInfo(*(struct _RM_SERVICE_GLOBALS **)(*(_QWORD *)(v2 + 24) + 208LL), a2, &v9);
  v5 = v9;
  if ( v4 < 0 )
  {
    v7 = 0;
  }
  else
  {
    ForegroundSet = RmpActivityHostGetForegroundSet(v9);
    if ( ForegroundSet || !*((_DWORD *)v5 + 14) && (ForegroundSet = RmpActivityHostGetSponsorSet(v5)) != 0LL )
    {
      v7 = RmpResourceSetAddRecipient((struct _RM_ACTIVITY_HOST ***)ForegroundSet, a1, 7);
      if ( v7 >= 0 )
        v7 = 0;
    }
    else
    {
      v7 = -2147220215;
    }
  }
  if ( v5 )
    RmpObjectRelease(v5);
  return (unsigned int)v7;
}
