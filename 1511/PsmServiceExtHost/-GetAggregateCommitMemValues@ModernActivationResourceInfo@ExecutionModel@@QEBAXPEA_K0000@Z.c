/*
 * XREFs of ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180018AF0 (PsmRetrieveHostMemoryLimit.c)
 *     RmpActivityHostComputeCommitThresholds @ 0x1800204F8 (RmpActivityHostComputeCommitThresholds.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180043840 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x1800457A0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     ?GetMemoryEstimate@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180035D70 (-GetMemoryEstimate@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSet@2@@Z @ 0x180036724 (-IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSe.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
        ExecutionModel::ModernActivationResourceInfo *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  ExecutionModel::ModernActivationResourceInfo *v11; // rbx
  unsigned __int64 v12; // r15
  ExecutionModel::ModernActivationResourceInfo *i; // rbx
  char *v14; // rbx
  char *v15; // rdi
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rbp
  char v24; // al
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rdx
  unsigned __int64 v31; // r10
  ExecutionModel::ResourceSet *v32; // rcx
  ExecutionModel::ModernActivationResourceInfo *v33; // rax
  int v34; // r9d
  __int64 v35; // r8
  char v36; // r11
  ExecutionModel::ResourceSet *v37; // [rsp+20h] [rbp-58h]
  unsigned __int64 v38; // [rsp+80h] [rbp+8h]

  v6 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v38 = 0LL;
  v11 = *(ExecutionModel::ModernActivationResourceInfo **)this;
  v12 = 0LL;
  while ( v11 != this )
  {
    v20 = *((_QWORD *)v11 + 2);
    v21 = *(_BYTE *)(v20 + 1920);
    if ( (v21 & 0x20) != 0 )
      goto LABEL_26;
    if ( *(_DWORD *)(v20 + 1352) == 1 )
    {
      *(_BYTE *)(v20 + 1920) = v21 | 0x20;
      goto LABEL_26;
    }
    v22 = *(_QWORD *)(v20 + 1808);
    if ( v22 )
    {
      v27 = v22 - 1368;
      if ( v22 != 1368 )
      {
        if ( !ExecutionModel::ModernActivationResourceInfo::IsResourceSetValidPredecessor(
                this,
                (struct ExecutionModel::ResourceSet *)(v22 - 1368)) )
        {
          v28 = *((_QWORD *)v11 + 2);
          v29 = *(_BYTE *)(v28 + 1920);
          if ( (v29 & 0x40) == 0 )
            *(_BYTE *)(v28 + 1920) = v29 | 0x20;
LABEL_40:
          v9 = v38;
          goto LABEL_26;
        }
        v30 = *((_QWORD *)v11 + 2);
        v31 = *(_QWORD *)(v30 + 1464) - *(_QWORD *)(v30 + 1848);
        if ( v31 <= *(_QWORD *)(v27 + 1464) - *(_QWORD *)(v27 + 1848) )
        {
          v32 = (ExecutionModel::ResourceSet *)v27;
          v31 = *(_QWORD *)(v27 + 1464) - *(_QWORD *)(v27 + 1848);
          v37 = (ExecutionModel::ResourceSet *)v27;
        }
        else
        {
          v32 = (ExecutionModel::ResourceSet *)*((_QWORD *)v11 + 2);
          v37 = v32;
        }
        *(_BYTE *)(v30 + 1920) |= 0x20u;
        *(_BYTE *)(v27 + 1920) |= 0x20u;
        v33 = v11;
        v34 = (*(unsigned __int8 *)(*((_QWORD *)v11 + 2) + 1920LL) >> 6) & 1;
        while ( v33 != this )
        {
          v35 = *((_QWORD *)v33 + 2);
          v36 = *(_BYTE *)(v35 + 1920);
          if ( (v36 & 0x40) != 0 )
            v34 = 1;
          if ( (v36 & 0x20) != 0
            || *(_DWORD *)(v35 + 1352) == 1
            || *(_QWORD *)(v35 + 1808) != *(_QWORD *)(*((_QWORD *)v11 + 2) + 1808LL) )
          {
            v32 = v37;
          }
          else
          {
            if ( *(_QWORD *)(v35 + 1464) - *(_QWORD *)(v35 + 1848) <= v31 )
            {
              v32 = v37;
            }
            else
            {
              v31 = *(_QWORD *)(v35 + 1464) - *(_QWORD *)(v35 + 1848);
              v32 = (ExecutionModel::ResourceSet *)*((_QWORD *)v33 + 2);
              v37 = v32;
            }
            *(_BYTE *)(v35 + 1920) = v36 | 0x20;
          }
          v33 = *(ExecutionModel::ModernActivationResourceInfo **)v33;
        }
        if ( v34 )
          goto LABEL_40;
        v6 += *((_QWORD *)v32 + 231);
        v10 += *((_QWORD *)v32 + 183);
        v9 = ExecutionModel::ResourceSet::GetMemoryEstimate(v32) + v38;
        v38 = v9;
        v12 += *((_QWORD *)v37 + 219);
        v7 += *((_QWORD *)v37 + 182);
      }
    }
LABEL_26:
    v11 = *(ExecutionModel::ModernActivationResourceInfo **)v11;
  }
  for ( i = *(ExecutionModel::ModernActivationResourceInfo **)this;
        i != this;
        i = *(ExecutionModel::ModernActivationResourceInfo **)i )
  {
    v23 = *((_QWORD *)i + 2);
    v24 = *(_BYTE *)(v23 + 1920);
    if ( (v24 & 0x20) != 0 )
    {
      *(_BYTE *)(v23 + 1920) = v24 & 0xDF;
    }
    else if ( (v24 & 0x40) == 0 || *(_QWORD *)(v23 + 1808) )
    {
      v6 += *(_QWORD *)(v23 + 1848);
      v10 += *(_QWORD *)(v23 + 1464);
      RtlEnterCriticalSection(&RmpGlobalLock);
      if ( *(_QWORD *)(v23 + 1888) == v23 + 1888 )
        v25 = *(_QWORD *)(v23 + 224);
      else
        v25 = *(_QWORD *)(v23 + 1464);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      v26 = *((_QWORD *)i + 2);
      v9 = v25 + v38;
      v38 += v25;
      v12 += *(_QWORD *)(v26 + 1752);
      v7 += *(_QWORD *)(v26 + 1456);
    }
  }
  v14 = (char *)*((_QWORD *)this + 3);
  v15 = (char *)this + 24;
  while ( v14 != v15 )
  {
    v16 = *((_QWORD *)v14 + 2);
    v17 = *(_BYTE *)(v16 + 1920);
    if ( (v17 & 0x20) != 0 )
    {
      *(_BYTE *)(v16 + 1920) = v17 & 0xDF;
    }
    else
    {
      v6 += *(_QWORD *)(v16 + 1848);
      v10 += *(_QWORD *)(v16 + 1464);
      RtlEnterCriticalSection(&RmpGlobalLock);
      if ( *(_QWORD *)(v16 + 1888) == v16 + 1888 )
        v18 = *(_QWORD *)(v16 + 224);
      else
        v18 = *(_QWORD *)(v16 + 1464);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      v19 = *((_QWORD *)v14 + 2);
      v9 = v18 + v38;
      v38 += v18;
      v12 += *(_QWORD *)(v19 + 1752);
      v7 += *(_QWORD *)(v19 + 1456);
    }
    v14 = *(char **)v14;
  }
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v9;
  if ( a4 )
    *a4 = v10;
  if ( a5 )
    *a5 = v12;
  if ( a6 )
    *a6 = v7;
}
