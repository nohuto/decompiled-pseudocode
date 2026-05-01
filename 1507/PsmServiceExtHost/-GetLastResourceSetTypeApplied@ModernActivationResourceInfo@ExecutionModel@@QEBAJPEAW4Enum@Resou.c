/*
 * XREFs of ?GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@ResourceSetType@2@@Z @ 0x18003E7FC
 * Callers:
 *     ?GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@ResourceSetType@2@@Z @ 0x18003EC30 (-GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@Resourc.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::GetLastResourceSetTypeApplied(
        ExecutionModel::ModernActivationResourceInfo *this,
        enum ExecutionModel::ResourceSetType::Enum *a2)
{
  int v2; // esi
  ExecutionModel::ResourceSet *v4; // rbx
  char *v5; // r14
  __int64 v6; // rsi
  void **v7; // rdi
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rdi
  void *Block; // [rsp+48h] [rbp+10h] BYREF
  ExecutionModel::ResourceSet *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  Block = 0LL;
  if ( a2 )
  {
    *(_DWORD *)a2 = -1;
    if ( *((ExecutionModel::ModernActivationResourceInfo **)this + 3) != (ExecutionModel::ModernActivationResourceInfo *)((char *)this + 24) )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v11,
        *(_QWORD *)(*((_QWORD *)this + 4) + 16LL));
      v4 = v11;
      v5 = (char *)v11 + 1368;
      v6 = *((_QWORD *)v11 + 171);
      v7 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
      v2 = (*(__int64 (__fastcall **)(char *, void **))(v6 + 56))(v5, v7);
      if ( v2 >= 0 )
        *(_DWORD *)a2 = *(_DWORD *)Block;
      v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v4 + 16LL);
      if ( v8 == ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v4);
      else
        v8(v4);
      if ( Block )
        operator delete(Block);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v2;
}
