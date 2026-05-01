/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEBU_GUID@@PEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x18003B490
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011F90 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        GUID *rguid,
        bool *a5,
        struct ExecutionModel::IResourceSet *a6,
        struct ExecutionModel::IResourceSet **a7)
{
  bool v11; // zf
  unsigned __int16 *p_sz; // rax
  OLECHAR sz; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v15[78]; // [rsp+72h] [rbp-A6h] BYREF

  sz = 0;
  memset_0(v15, 0, 0x4CuLL);
  if ( !rguid || (v11 = StringFromGUID2(rguid, &sz, 39) == 0, p_sz = &sz, v11) )
    p_sz = 0LL;
  return ExecutionModel::ResourceManager::AcquireResourceSetHelper(
           this,
           a2,
           a3,
           0LL,
           p_sz,
           0LL,
           0,
           0,
           0xFFFFFFFFFFFFFFFFuLL,
           0,
           a5,
           a6,
           a7);
}
