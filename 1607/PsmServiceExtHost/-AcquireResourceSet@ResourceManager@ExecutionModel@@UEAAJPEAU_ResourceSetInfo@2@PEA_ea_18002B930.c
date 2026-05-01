/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEBU_GUID@@PEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x18002B930
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
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
  unsigned __int16 *v11; // rax
  OLECHAR sz[40]; // [rsp+70h] [rbp-98h] BYREF

  memset_0(sz, 0, 0x4EuLL);
  if ( rguid && StringFromGUID2(rguid, sz, 39) )
    v11 = sz;
  else
    v11 = 0LL;
  return ExecutionModel::ResourceManager::AcquireResourceSetHelper(
           this,
           a2,
           a3,
           0LL,
           v11,
           0LL,
           0,
           0,
           0xFFFFFFFFFFFFFFFFuLL,
           0,
           0LL,
           a5,
           a6,
           a7);
}
