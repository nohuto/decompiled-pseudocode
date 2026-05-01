/*
 * XREFs of ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800103D0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000919C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18000EAC0 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x180020060 (-IsUnlimitedCpu@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x180020084 (-IsCpuOpportunistic@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct ExecutionModel::ResourceSet *a3,
        struct ExecutionModel::ModernActivationResourceInfo *a4,
        struct _RM_ENFORCEMENT_SETTINGS *a5)
{
  int v5; // ebx
  struct _RM_ENFORCEMENT_SETTINGS *v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  int v12; // esi
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rax
  int ResourceSetInfo; // eax
  void *v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // r10d
  int v23; // esi
  int v24; // esi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _RM_ACTIVITY_HOST *v29; // r11
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // edx
  __int64 (__fastcall *v39)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **); // [rsp+20h] [rbp-48h]
  __int64 v40; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+70h] [rbp+8h]
  void *Block; // [rsp+80h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 356);
  v6 = a5;
  v41 = v5;
  *(_OWORD *)a5 = *((_OWORD *)a2 + 39);
  *((_OWORD *)v6 + 1) = *((_OWORD *)a2 + 40);
  *((_OWORD *)v6 + 2) = *((_OWORD *)a2 + 41);
  *((_OWORD *)v6 + 3) = *((_OWORD *)a2 + 42);
  *((_OWORD *)v6 + 4) = *((_OWORD *)a2 + 43);
  v8 = *((_QWORD *)a3 + 175);
  if ( !v8 || *(_DWORD *)(v8 + 40) == 1 )
  {
    if ( ExecutionModel::_ResourceSetInfo::IsFrozen((struct ExecutionModel::ResourceSet *)((char *)a3 + 1408)) )
    {
      if ( v34 )
      {
        if ( (*(_BYTE *)(v34 + 1434) & 4) != 0
          || (v35 = *(int *)(v34 + 1408), (unsigned int)v35 <= 0x27) && (v36 = 0x8800001000LL, _bittest64(&v36, v35)) )
        {
          *((_BYTE *)v29 + 782) = 39;
        }
      }
    }
    if ( v22 )
    {
      if ( v22 < 0x64 )
      {
LABEL_65:
        v26 = 0LL;
        goto LABEL_34;
      }
    }
    else if ( !(unsigned __int8)ExecutionModel::ResourceSetType::IsUnlimitedCpu(v33)
           && !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(v37 + 1408)) )
    {
      if ( (unsigned __int8)ExecutionModel::ResourceSetType::IsCpuOpportunistic(v38) )
        v22 = 1;
      goto LABEL_65;
    }
    *((_BYTE *)v6 + 76) |= 2u;
    goto LABEL_65;
  }
  v9 = *((_QWORD *)a3 + 226);
  v10 = (_QWORD *)*((_QWORD *)a4 + 3);
  v11 = 0x11000002000LL;
  v12 = 0;
  v13 = (_QWORD *)((char *)a4 + 24);
  v14 = 0LL;
  v40 = v9;
  while ( v10 != v13 )
  {
    v15 = v10[2];
    if ( v15 )
      v16 = v15 + 1368;
    else
      v16 = 0LL;
    if ( v16 != v9 )
    {
      v17 = 0;
      v18 = *(_QWORD *)(v15 + 1368);
      Block = 0LL;
      v39 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **))(v18 + 56);
      if ( v39 == ExecutionModel::ResourceSet::GetResourceSetInfo )
        ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                            (ExecutionModel::ResourceSet *)(v15 + 1368),
                            (struct ExecutionModel::_ResourceSetInfo **)&Block);
      else
        ResourceSetInfo = v39(
                            (ExecutionModel::ResourceSet *)(v15 + 1368),
                            (struct ExecutionModel::_ResourceSetInfo **)&Block);
      v20 = Block;
      if ( ResourceSetInfo >= 0 )
      {
        v21 = *(_QWORD *)(v15 + 200);
        if ( v21 )
        {
          v17 = 4 - (v21 < 0x64);
        }
        else if ( (*((_BYTE *)Block + 24) & 2) != 0
               || (v31 = *(int *)Block, (unsigned int)v31 <= 0x28) && _bittest64(&v11, v31) )
        {
          v17 = 1;
        }
        else if ( (unsigned __int8)ExecutionModel::ResourceSetType::IsUnlimitedCpu(v31) )
        {
          v17 = 4;
        }
        else if ( (unsigned __int8)ExecutionModel::ResourceSetType::IsCpuOpportunistic(v32) )
        {
          v17 = 2;
        }
      }
      if ( v20 )
        operator delete(v20);
      if ( v17 > v12 )
        v12 = v17;
      v9 = v40;
      v14 += *(_QWORD *)(v10[2] + 200LL);
    }
    v10 = (_QWORD *)*v10;
  }
  v22 = 100;
  v6 = a5;
  if ( v14 < 0x64 )
    v22 = v14;
  v23 = v12 - 1;
  if ( v23 )
  {
    v24 = v23 - 2;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        *((_BYTE *)a5 + 76) |= 2u;
      }
      else
      {
        *((_BYTE *)a5 + 76) &= ~2u;
        v22 = 1;
      }
    }
    else
    {
      *((_BYTE *)a5 + 76) &= ~2u;
    }
  }
  else
  {
    *((_BYTE *)a5 + 76) |= 2u;
    v22 = 0;
  }
  v25 = (_QWORD *)*v13;
  v26 = 0LL;
  while ( v25 != v13 )
  {
    v27 = v25[2];
    if ( v27 )
      v28 = v27 + 1368;
    else
      v28 = 0LL;
    if ( v28 != *((_QWORD *)a3 + 226) )
      v26 |= *(_QWORD *)(v27 + 1448);
    v25 = (_QWORD *)*v25;
  }
  v29 = a2;
  v5 = v41;
LABEL_34:
  *((_DWORD *)v6 + 18) = v22;
  if ( v26 != *((_QWORD *)v29 + 85) )
  {
    *((_BYTE *)v6 + 76) |= 4u;
    *((_QWORD *)v6 + 7) = v26;
  }
  v30 = *((_QWORD *)a3 + 175);
  if ( !v30 || *(_DWORD *)(v30 + 40) == 1 )
  {
    *((_DWORD *)v6 + 17) = v5;
    *((_BYTE *)v6 + 76) ^= (*((_BYTE *)v6 + 76) ^ *((_BYTE *)a3 + 1440)) & 1;
  }
}
