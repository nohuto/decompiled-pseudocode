/*
 * XREFs of ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600
 * Callers:
 *     PsmRetrieveHostMemoryLimit @ 0x1800090F0 (PsmRetrieveHostMemoryLimit.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180035B50 (-GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003E3A0 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x1800407D0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     ?IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180009594 (-IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV-$CComPtr@VResourceSet@ExecutionMo.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetMemoryEstimate@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18002E4AC (-GetMemoryEstimate@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
        ExecutionModel::ModernActivationResourceInfo *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  ExecutionModel::ModernActivationResourceInfo *v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  ExecutionModel::ModernActivationResourceInfo *v13; // rbx
  char *v14; // rbx
  char *v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rcx
  __int64 v22; // rsi
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r14
  char v27; // al
  __int64 v28; // r14
  __int64 v29; // rax
  ExecutionModel::ResourceSet *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  ExecutionModel::ResourceSet *v34; // rsi
  ExecutionModel::ModernActivationResourceInfo *v35; // rax
  int v36; // r8d
  __int64 v37; // r11
  char v38; // r10
  __int64 v39; // rcx
  char v40; // al
  unsigned __int64 MemoryEstimate; // rax
  ExecutionModel::ResourceSet *v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+20h] [rbp-58h]
  ExecutionModel::ResourceSet *v45; // [rsp+28h] [rbp-50h] BYREF

  v6 = *(ExecutionModel::ModernActivationResourceInfo **)this;
  v7 = 0LL;
  v8 = 0LL;
  v44 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  while ( v6 != this )
  {
    v19 = *((_QWORD *)v6 + 2);
    v20 = *(_BYTE *)(v19 + 1912);
    if ( (v20 & 0x20) != 0 )
      goto LABEL_23;
    if ( *(_DWORD *)(v19 + 1352) == 1 )
    {
      *(_BYTE *)(v19 + 1912) = v20 | 0x20;
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 1800);
      if ( !v21 )
        goto LABEL_23;
      v30 = (ExecutionModel::ResourceSet *)(v21 - 1368);
      if ( v21 == 1368 )
      {
LABEL_49:
        v9 = v44;
        goto LABEL_23;
      }
      if ( *((_DWORD *)v30 + 338) == 2
        && *((_BYTE *)v30 + 12)
        && (v31 = *(_QWORD *)v30,
            v45 = (ExecutionModel::ResourceSet *)(v21 - 1368),
            (*(void (__fastcall **)(__int64))(v31 + 8))(v21 - 1368),
            (unsigned int)ExecutionModel::ModernActivationResourceInfo::IsApplied((__int64)this, &v45)) )
      {
        v32 = *((_QWORD *)v6 + 2);
        v33 = *(_QWORD *)(v32 + 1456) - *(_QWORD *)(v32 + 1840);
        if ( v33 > *((_QWORD *)v30 + 182) - *((_QWORD *)v30 + 230) )
        {
          v34 = (ExecutionModel::ResourceSet *)*((_QWORD *)v6 + 2);
        }
        else
        {
          v34 = v30;
          v33 = *((_QWORD *)v30 + 182) - *((_QWORD *)v30 + 230);
        }
        *(_BYTE *)(v32 + 1912) |= 0x20u;
        *((_BYTE *)v30 + 1912) |= 0x20u;
        v35 = v6;
        v36 = (*(unsigned __int8 *)(*((_QWORD *)v6 + 2) + 1912LL) >> 6) & 1;
        while ( v35 != this )
        {
          v37 = *((_QWORD *)v35 + 2);
          v38 = *(_BYTE *)(v37 + 1912);
          if ( (v38 & 0x40) != 0 )
            v36 = 1;
          if ( (v38 & 0x20) == 0
            && *(_DWORD *)(v37 + 1352) != 1
            && *(_QWORD *)(v37 + 1800) == *(_QWORD *)(*((_QWORD *)v6 + 2) + 1800LL) )
          {
            if ( *(_QWORD *)(v37 + 1456) - *(_QWORD *)(v37 + 1840) > v33 )
            {
              v33 = *(_QWORD *)(v37 + 1456) - *(_QWORD *)(v37 + 1840);
              v34 = (ExecutionModel::ResourceSet *)*((_QWORD *)v35 + 2);
            }
            *(_BYTE *)(v37 + 1912) = v38 | 0x20;
          }
          v35 = *(ExecutionModel::ModernActivationResourceInfo **)v35;
        }
        if ( v36 )
          goto LABEL_49;
        v7 += *((_QWORD *)v34 + 230);
        v8 += *((_QWORD *)v34 + 182);
        MemoryEstimate = ExecutionModel::ResourceSet::GetMemoryEstimate(v34);
        v10 += *((_QWORD *)v34 + 218);
        v9 = MemoryEstimate + v44;
        v11 += *((_QWORD *)v34 + 181);
        v44 += MemoryEstimate;
      }
      else
      {
        v39 = *((_QWORD *)v6 + 2);
        v9 = v44;
        v40 = *(_BYTE *)(v39 + 1912);
        if ( (v40 & 0x40) == 0 )
          *(_BYTE *)(v39 + 1912) = v40 | 0x20;
      }
    }
LABEL_23:
    v6 = *(ExecutionModel::ModernActivationResourceInfo **)v6;
  }
  v13 = *(ExecutionModel::ModernActivationResourceInfo **)this;
  while ( v13 != this )
  {
    v22 = *((_QWORD *)v13 + 2);
    v23 = *(_BYTE *)(v22 + 1912);
    if ( (v23 & 0x20) != 0 )
    {
      *(_BYTE *)(v22 + 1912) = v23 & 0xDF;
      v13 = *(ExecutionModel::ModernActivationResourceInfo **)v13;
    }
    else
    {
      if ( (v23 & 0x40) == 0 || *(_QWORD *)(v22 + 1800) )
      {
        v7 += *(_QWORD *)(v22 + 1840);
        v8 += *(_QWORD *)(v22 + 1456);
        RtlEnterCriticalSection(&RmpGlobalLock);
        if ( *(_QWORD *)(v22 + 1880) == v22 + 1880 )
          v24 = *(_QWORD *)(v22 + 224);
        else
          v24 = *(_QWORD *)(v22 + 1456);
        RtlLeaveCriticalSection(&RmpGlobalLock);
        v25 = *((_QWORD *)v13 + 2);
        v9 += v24;
        v10 += *(_QWORD *)(v25 + 1744);
        v11 += *(_QWORD *)(v25 + 1448);
      }
      v13 = *(ExecutionModel::ModernActivationResourceInfo **)v13;
    }
  }
  v14 = (char *)*((_QWORD *)this + 3);
  v15 = (char *)this + 24;
  v16 = v9;
  while ( v14 != v15 )
  {
    v26 = *((_QWORD *)v14 + 2);
    v27 = *(_BYTE *)(v26 + 1912);
    if ( (v27 & 0x20) != 0 )
    {
      *(_BYTE *)(v26 + 1912) = v27 & 0xDF;
      v14 = *(char **)v14;
    }
    else
    {
      v7 += *(_QWORD *)(v26 + 1840);
      v8 += *(_QWORD *)(v26 + 1456);
      RtlEnterCriticalSection(&RmpGlobalLock);
      if ( *(_QWORD *)(v26 + 1880) == v26 + 1880 )
        v28 = *(_QWORD *)(v26 + 224);
      else
        v28 = *(_QWORD *)(v26 + 1456);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      v29 = *((_QWORD *)v14 + 2);
      v16 += v28;
      v14 = *(char **)v14;
      v10 += *(_QWORD *)(v29 + 1744);
      v11 += *(_QWORD *)(v29 + 1448);
    }
  }
  v17 = v16;
  v18 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v18 != (_QWORD *)((char *)this + 48) )
  {
    v42 = (ExecutionModel::ResourceSet *)v18[2];
    v7 += *((_QWORD *)v42 + 230);
    v8 += *((_QWORD *)v42 + 182);
    v17 += ExecutionModel::ResourceSet::GetMemoryEstimate(v42);
    v43 = v18[2];
    v18 = (_QWORD *)*v18;
    v10 += *(_QWORD *)(v43 + 1744);
    v11 += *(_QWORD *)(v43 + 1448);
  }
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v17;
  if ( a4 )
    *a4 = v8;
  if ( a5 )
    *a5 = v10;
  if ( a6 )
    *a6 = v11;
}
