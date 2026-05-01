/*
 * XREFs of ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016320
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180004978 (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800162F4 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableAddActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016438 (-RmpPsmAppFamilyTableAddActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_TYPE@@PEA_KKPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BE4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTI.c)
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001824C (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800182B4 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  struct _RM_PSM_HOST_INFO *v5; // rdi
  int v6; // eax
  PVOID v7; // rbx
  int v8; // esi
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v5 = a3;
  v6 = RmpActivityHostAllocateAndInitialize(a1, a2, 0LL, (char *)a3 + 544, *((_DWORD *)a3 + 133), &P);
  v7 = P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = 4LL;
    v10 = (char *)P + 64;
    do
    {
      *v10 = *(_OWORD *)v5;
      v10[1] = *((_OWORD *)v5 + 1);
      v10[2] = *((_OWORD *)v5 + 2);
      v10[3] = *((_OWORD *)v5 + 3);
      v10[4] = *((_OWORD *)v5 + 4);
      v10[5] = *((_OWORD *)v5 + 5);
      v10[6] = *((_OWORD *)v5 + 6);
      v10 += 8;
      v11 = *((_OWORD *)v5 + 7);
      v5 = (struct _RM_PSM_HOST_INFO *)((char *)v5 + 128);
      *(v10 - 1) = v11;
      --v9;
    }
    while ( v9 );
    *v10 = *(_OWORD *)v5;
    v10[1] = *((_OWORD *)v5 + 1);
    *((_QWORD *)v10 + 4) = *((_QWORD *)v5 + 4);
    v8 = RmpPsmAppFamilyTableAddActivityHost((struct _RM_ACTIVITY_HOST *)v7);
    if ( v8 >= 0 )
    {
      v8 = RmpSystemReferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v7, (void **)v7 + 91);
      if ( v8 >= 0 )
      {
        RmpActivityHostCompleteInitialization((struct _RM_ACTIVITY_HOST *)v7);
        *a4 = (struct _RM_ACTIVITY_HOST *)v7;
        v7 = 0LL;
        P = 0LL;
        v8 = 0;
      }
    }
  }
  if ( v7 )
  {
    RmpActivityHostCleanupTypeSpecificState((struct _RM_ACTIVITY_HOST *)v7);
    RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return (unsigned int)v8;
}
