/*
 * XREFs of ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180011EF0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800028AC (-IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x1800028D0 (-IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA?AW4CpuCategory@2@PEAVResourceSet@2@@Z @ 0x180005000 (-GetCpuCategory@ModernActivationResourceInfo@ExecutionModel@@SA-AW4CpuCategory@2@PEAVResourceSet.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010910 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct ExecutionModel::ResourceSet *a3,
        struct ExecutionModel::ModernActivationResourceInfo *a4,
        struct _RM_ENFORCEMENT_SETTINGS *Block)
{
  int v5; // r11d
  struct _RM_ENFORCEMENT_SETTINGS *v7; // rbp
  unsigned int IsCpuOpportunistic; // r13d
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  int v11; // edi
  char *v12; // rbx
  char *v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // ebx
  __int64 (__fastcall *v17)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **); // r12
  int ResourceSetInfo; // eax
  struct _RM_ENFORCEMENT_SETTINGS *v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edi
  int CpuCategory; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned int v30; // r10d
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // r10d
  int v35; // [rsp+50h] [rbp+8h]

  v5 = *((_DWORD *)a3 + 356);
  v7 = Block;
  IsCpuOpportunistic = *((_DWORD *)a3 + 50);
  *(_OWORD *)Block = *((_OWORD *)a2 + 39);
  v35 = v5;
  *((_OWORD *)v7 + 1) = *((_OWORD *)a2 + 40);
  *((_OWORD *)v7 + 2) = *((_OWORD *)a2 + 41);
  *((_OWORD *)v7 + 3) = *((_OWORD *)a2 + 42);
  *((_QWORD *)v7 + 8) = *((_QWORD *)a2 + 86);
  v9 = *((_QWORD *)a3 + 175);
  if ( !v9 || *(_DWORD *)(v9 + 40) == 1 )
  {
    if ( ExecutionModel::_ResourceSetInfo::IsFrozen((struct ExecutionModel::ResourceSet *)((char *)a3 + 1408)) )
    {
      if ( v29 )
      {
        if ( (*(_BYTE *)(v29 + 1434) & 4) != 0
          || (v31 = *(int *)(v29 + 1408), (unsigned int)v31 <= 0x27) && (v32 = 0x8800001000LL, _bittest64(&v32, v31)) )
        {
          *(_BYTE *)(v28 + 774) = 39;
        }
      }
    }
    if ( IsCpuOpportunistic )
    {
      if ( IsCpuOpportunistic < 0x64 )
        goto LABEL_20;
    }
    else if ( !ExecutionModel::ResourceSetType::IsUnlimitedCpu(v30)
           && !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(v33 + 1408)) )
    {
      IsCpuOpportunistic = ExecutionModel::ResourceSetType::IsCpuOpportunistic(v34);
      goto LABEL_20;
    }
LABEL_29:
    *((_BYTE *)v7 + 64) |= 2u;
    goto LABEL_20;
  }
  v10 = 0LL;
  v11 = 0;
  if ( a4 )
  {
    v12 = (char *)*((_QWORD *)a4 + 3);
    v13 = (char *)a4 + 24;
    v14 = *((_QWORD *)a3 + 225);
    while ( v12 != v13 )
    {
      v23 = *((_QWORD *)v12 + 2);
      if ( v23 )
        v24 = v23 + 1368;
      else
        v24 = 0LL;
      if ( v24 != v14 )
      {
        CpuCategory = ExecutionModel::ModernActivationResourceInfo::GetCpuCategory(v23);
        if ( CpuCategory > v11 )
          v11 = CpuCategory;
        v10 += *(_QWORD *)(*((_QWORD *)v12 + 2) + 200LL);
      }
      v12 = *(char **)v12;
    }
    if ( v10 >= 0x64 )
      LODWORD(v10) = 100;
  }
  v15 = *((_QWORD *)a3 + 171);
  v16 = 0;
  Block = 0LL;
  v17 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **))(v15 + 56);
  if ( v17 == ExecutionModel::ResourceSet::GetResourceSetInfo )
    ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                        (struct ExecutionModel::ResourceSet *)((char *)a3 + 1368),
                        &Block);
  else
    ResourceSetInfo = v17((struct ExecutionModel::ResourceSet *)((char *)a3 + 1368), &Block);
  v19 = Block;
  if ( ResourceSetInfo >= 0 )
  {
    v20 = *((_QWORD *)a3 + 25);
    if ( v20 )
    {
      v16 = 4 - (v20 < 0x64);
    }
    else if ( ExecutionModel::_ResourceSetInfo::IsFrozen(Block) )
    {
      v16 = 1;
    }
    else if ( ExecutionModel::ResourceSetType::IsUnlimitedCpu(*(unsigned int *)v19) )
    {
      v16 = 4;
    }
    else if ( ExecutionModel::ResourceSetType::IsCpuOpportunistic(v27) )
    {
      v16 = 2;
    }
  }
  if ( v19 )
    operator delete(v19);
  if ( v11 <= v16 )
    v11 = v16;
  v21 = v35;
  if ( v11 != 3 )
  {
    v25 = v11 - 1;
    if ( !v25 )
    {
      *((_BYTE *)v7 + 64) |= 2u;
      IsCpuOpportunistic = 0;
      goto LABEL_20;
    }
    if ( v25 != 3 )
    {
      *((_BYTE *)v7 + 64) &= ~2u;
      IsCpuOpportunistic = 1;
      goto LABEL_20;
    }
    goto LABEL_29;
  }
  *((_BYTE *)v7 + 64) &= ~2u;
  if ( *((_QWORD *)a3 + 25) + (unsigned __int64)(unsigned int)v10 >= 0x64 )
    IsCpuOpportunistic = 100;
  else
    IsCpuOpportunistic = v10 + *((_DWORD *)a3 + 50);
LABEL_20:
  *((_DWORD *)v7 + 15) = IsCpuOpportunistic;
  v22 = *((_QWORD *)a3 + 175);
  if ( !v22 || *(_DWORD *)(v22 + 40) == 1 )
  {
    *((_DWORD *)v7 + 14) = v21;
    *((_BYTE *)v7 + 64) ^= (*((_BYTE *)v7 + 64) ^ *((_BYTE *)a3 + 1440)) & 1;
  }
}
