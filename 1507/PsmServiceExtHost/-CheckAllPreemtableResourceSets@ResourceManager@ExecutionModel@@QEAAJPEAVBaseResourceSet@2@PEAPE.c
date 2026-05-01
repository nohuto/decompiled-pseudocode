/*
 * XREFs of ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC
 * Callers:
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800378B4 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180009594 (-IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV-$CComPtr@VResourceSet@ExecutionMo.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?IsKillable@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18002EEE0 (-IsKillable@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 *     ?GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4Enum@Priority@2@XZ @ 0x180035FE8 (-GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA-AW4Enum@Priority@2@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CheckAllPreemtableResourceSets(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::BaseResourceSet *a2,
        struct ExecutionModel::ResourceSet **a3)
{
  ExecutionModel::ResourceSet *v3; // rbx
  ExecutionModel::ResourceManager *v5; // r9
  struct ExecutionModel::BaseResourceSet *v6; // rdx
  ExecutionModel::ModernActivationResourceInfo *v7; // rdi
  char **v8; // rcx
  char *i; // rax
  int v10; // eax
  ExecutionModel::ResourceSet *v11; // rdi
  unsigned int v12; // esi
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rsi
  __int64 (__fastcall *v14)(ExecutionModel::ResourceSet *); // rsi
  struct ExecutionModel::ResourceSet *v15; // rax
  __int64 (__fastcall *v16)(ExecutionModel::ResourceSet *); // rdi
  ExecutionModel::ResourceSet *v18; // [rsp+20h] [rbp-28h] BYREF
  char **v19; // [rsp+28h] [rbp-20h]
  char **v20; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+78h] [rbp+30h]
  ExecutionModel::ResourceSet *v24; // [rsp+88h] [rbp+40h] BYREF

  v22 = 0;
  v3 = 0LL;
  v5 = this;
  v24 = 0LL;
  if ( !*((_QWORD *)a2 + 23) || !*((_BYTE *)a2 + 12) )
    goto LABEL_12;
  if ( !ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v7 = *(ExecutionModel::ModernActivationResourceInfo **)(*((_QWORD *)v6 + 175) + 600LL);
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v18,
      (__int64)v6);
    if ( !(unsigned int)ExecutionModel::ModernActivationResourceInfo::IsApplied((__int64)v7, &v18)
      || (unsigned int)ExecutionModel::ModernActivationResourceInfo::GetPriority(v7) != *((_DWORD *)a2 + 340)
      || !(unsigned int)ExecutionModel::ModernActivationResourceInfo::IsKillable(v7) )
    {
      goto LABEL_11;
    }
    v6 = a2;
LABEL_10:
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v24, (__int64)v6);
    v3 = v24;
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v24 + 8LL))(v24);
LABEL_11:
    v5 = this;
    goto LABEL_12;
  }
  if ( *((_DWORD *)v6 + 366) )
    goto LABEL_10;
LABEL_12:
  v8 = (char **)((char *)a2 + 160);
  v20 = (char **)((char *)a2 + 160);
  for ( i = (char *)a2 + 160; ; i = *v19 )
  {
    if ( i == *v8 )
    {
      v15 = v3;
      v3 = 0LL;
      *a3 = v15;
      goto LABEL_29;
    }
    v18 = 0LL;
    v19 = (char **)(i + 8);
    v10 = ExecutionModel::ResourceManager::CheckAllPreemtableResourceSets(
            v5,
            *(struct ExecutionModel::BaseResourceSet **)(*((_QWORD *)i + 1) + 16LL),
            &v18);
    v11 = v18;
    v12 = v10;
    v22 = v10;
    if ( v10 < 0 )
      break;
    if ( v18 )
    {
      if ( !v3 || *((_DWORD *)v18 + 340) > *((_DWORD *)v3 + 340) )
      {
        ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v24, (__int64)v18);
        v3 = v24;
        (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v24 + 8LL))(v24);
        v11 = v18;
      }
      if ( v11 )
      {
        v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 16LL);
        if ( v13 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v11);
        else
          v13(v11);
      }
    }
    v8 = v20;
    v5 = this;
  }
  if ( !v18 )
    goto LABEL_30;
  v14 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 16LL);
  if ( v14 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v18);
  else
    v14(v18);
LABEL_29:
  v12 = v22;
LABEL_30:
  if ( v3 )
  {
    v16 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL);
    if ( v16 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v3);
    else
      v16(v3);
  }
  return v12;
}
