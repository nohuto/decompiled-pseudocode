/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180001820
 * Callers:
 *     ?TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@KPEA_NPEAUIResourceSet@2@@Z @ 0x180014280 (-TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU.c)
 * Callees:
 *     RmpValidateAndCaptureUserSid @ 0x180002AF4 (RmpValidateAndCaptureUserSid.c)
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011F90 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSetFromSponsorProcess(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        void *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  int v17; // eax
  union _RM_SID *v19; // [rsp+78h] [rbp-C0h] BYREF
  struct ExecutionModel::IResourceSet **v20; // [rsp+80h] [rbp-B8h]

  v20 = a13;
  if ( a10
    && a8 <= 8
    && (v17 = 277, _bittest(&v17, a8))
    && (RmpValidateAndCaptureUserSid(Src, (__int64)&v19), (*((_BYTE *)a2 + 358) & 1) != 0) )
  {
    return ExecutionModel::ResourceManager::AcquireResourceSetHelper(
             this,
             a2,
             a3,
             a4,
             a5,
             v19,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             v20);
  }
  else
  {
    return 2147942487LL;
  }
}
