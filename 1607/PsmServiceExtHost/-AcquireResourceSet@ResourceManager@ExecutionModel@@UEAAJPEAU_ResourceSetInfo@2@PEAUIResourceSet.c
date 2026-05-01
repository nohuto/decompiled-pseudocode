/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x18002B810
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     RmpValidateAndCaptureUserSid @ 0x180015F50 (RmpValidateAndCaptureUserSid.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        void *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        bool *a10,
        struct ExecutionModel::IResourceSet *a11,
        struct ExecutionModel::IResourceSet **a12)
{
  __int64 result; // rax
  union _RM_SID *v15; // [rsp+70h] [rbp-B8h] BYREF
  struct ExecutionModel::IResourceSetCallback *v16; // [rsp+78h] [rbp-B0h]
  struct ExecutionModel::_ResourceSetInfo *v17; // [rsp+80h] [rbp-A8h]
  _BYTE v18[80]; // [rsp+90h] [rbp-98h] BYREF

  v15 = 0LL;
  v16 = a3;
  v17 = a2;
  RmpValidateAndCaptureUserSid(Src, a7, a8, v18, &v15);
  result = ExecutionModel::ResourceManager::AcquireResourceSetHelper(
             this,
             v17,
             v16,
             a4,
             a5,
             v15,
             a7,
             a8,
             a9,
             0,
             0LL,
             a10,
             a11,
             a12);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
