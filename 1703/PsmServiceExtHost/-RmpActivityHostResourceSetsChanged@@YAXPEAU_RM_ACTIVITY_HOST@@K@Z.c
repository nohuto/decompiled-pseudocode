/*
 * XREFs of ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800025B8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000F300 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x180010020 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180012010 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180012100 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800121E0 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 */

void __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  unsigned __int16 v4; // bp
  __int16 v5; // r11
  struct _RM_ACTIVITY_HOST *v6; // rdi
  ExecutionModel::ResourceSet *v7; // rdi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r15d
  __int64 FirstResourceSet; // r14
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax

  v4 = 102;
  if ( (a2 & 1) != 0 )
  {
    v5 = 102;
    v6 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 77);
    if ( v6 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 616) )
    {
      v7 = (struct _RM_ACTIVITY_HOST *)((char *)v6 - 1368);
      while ( v7 )
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(v7) )
        {
          v8 = ((__int64 (*)(void))RmpPolicyDigestCompute)();
          v5 = RmpPolicyDigestMerge(v9, v8);
        }
        v10 = *((_QWORD *)v7 + 171);
        v11 = 3LL * *((int *)v7 + 350);
        v12 = *((_QWORD *)v7 + 174);
        v7 = 0LL;
        if ( v10 != v12 + 8 * (v11 + 77) )
          v7 = (ExecutionModel::ResourceSet *)(v10 - 1368);
      }
    }
    *((_WORD *)a1 + 332) = v5;
  }
  if ( (a2 & 2) != 0 )
  {
    v13 = (*((unsigned __int16 *)a1 + 333) >> 7) & 1;
    FirstResourceSet = RmpActivityHostGetFirstResourceSet(a1, 1LL);
    while ( FirstResourceSet )
    {
      if ( *(_DWORD *)(FirstResourceSet + 1352) == 2 || (*(_BYTE *)(FirstResourceSet + 1404) & 0x10) != 0 )
      {
        v15 = RmpPolicyDigestCompute(FirstResourceSet);
        v4 = RmpPolicyDigestMerge(v4, v15);
      }
      v16 = *(_QWORD *)(FirstResourceSet + 1368);
      v17 = 3LL * *(int *)(FirstResourceSet + 1400);
      v18 = *(_QWORD *)(FirstResourceSet + 1392);
      FirstResourceSet = 0LL;
      if ( v16 != v18 + 8 * (v17 + 77) )
        FirstResourceSet = v16 - 1368;
    }
    *((_WORD *)a1 + 333) = v4;
    v19 = *((_QWORD *)a1 + 6);
    if ( v13 )
    {
      if ( (v4 & 0x80u) == 0 )
        --*(_DWORD *)(v19 + 196);
    }
    else if ( (v4 & 0x80u) != 0 )
    {
      ++*(_DWORD *)(v19 + 196);
    }
  }
  RmpActivityHostUpdateImportance(a1, a2);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 139);
  if ( ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 508LL) & 4) != 0
     || (*((_BYTE *)a1 + 664) & 4) != 0 && (*((_BYTE *)a1 + 666) & 4) != 0)
    && (*((_BYTE *)a1 + 666) & 0x30) != 0 )
  {
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 6) + 88LL));
  }
  if ( (a2 & 2) != 0 )
  {
    v20 = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 96) = 0LL;
    v21 = *(_QWORD *)(v20 + 1528);
    v22 = *(_DWORD *)(v21 + 240);
    if ( (v22 & 3) == 0 )
    {
      *(_DWORD *)(v21 + 240) = v22 | 1;
      TpPostWork(*(_QWORD *)(v21 + 224));
    }
  }
}
