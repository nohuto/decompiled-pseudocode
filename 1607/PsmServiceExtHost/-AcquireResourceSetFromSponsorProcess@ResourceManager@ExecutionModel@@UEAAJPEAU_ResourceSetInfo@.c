/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x18002BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800104E4 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@.c)
 *     RmpValidateAndCaptureUserSid @ 0x180015F50 (RmpValidateAndCaptureUserSid.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSetFromSponsorProcess(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        void *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  __int64 result; // rax
  union _RM_SID *v16; // [rsp+70h] [rbp-B8h] BYREF
  struct ExecutionModel::IResourceSetCallback *v17; // [rsp+78h] [rbp-B0h]
  struct ExecutionModel::_ResourceSetInfo *v18; // [rsp+80h] [rbp-A8h]
  _BYTE v19[80]; // [rsp+90h] [rbp-98h] BYREF

  v16 = 0LL;
  v17 = a3;
  v18 = a2;
  RmpValidateAndCaptureUserSid(Src, a7, a8, v19, &v16);
  result = ExecutionModel::ResourceManager::AcquireResourceSetFromSponsorProcess(
             this,
             v18,
             v17,
             a4,
             a5,
             v16,
             a7,
             a8,
             a9,
             a10,
             0LL,
             a11,
             a12,
             a13);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
