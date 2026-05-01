/*
 * XREFs of ?IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSet@2@@Z @ 0x180009958
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180009594 (-IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV-$CComPtr@VResourceSet@ExecutionMo.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

bool __fastcall ExecutionModel::ModernActivationResourceInfo::IsResourceSetValidPredecessor(
        ExecutionModel::ModernActivationResourceInfo *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 v3; // rax
  bool result; // al
  ExecutionModel::ResourceSet *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( *((_DWORD *)a2 + 338) == 2 )
  {
    if ( *((_BYTE *)a2 + 12) )
    {
      v3 = *(_QWORD *)a2;
      v5 = a2;
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(v3 + 8))(a2);
      if ( (unsigned int)ExecutionModel::ModernActivationResourceInfo::IsApplied((__int64)this, &v5) )
        return 1;
    }
  }
  return result;
}
