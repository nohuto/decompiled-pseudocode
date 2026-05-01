/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180013C90
 * Callers:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180013970 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        bool *a10,
        struct ExecutionModel::IResourceSet *a11,
        struct ExecutionModel::IResourceSet **a12)
{
  ULONG v16; // eax
  union _RM_SID *v17; // rcx
  _BYTE v19[80]; // [rsp+80h] [rbp-A8h] BYREF

  if ( a5 )
  {
    if ( !a8 )
    {
      v17 = 0LL;
      return ExecutionModel::ResourceManager::AcquireResourceSetHelper(
               this,
               a2,
               a3,
               a4,
               a5,
               v17,
               a7,
               a8,
               a9,
               0,
               a10,
               a11,
               a12);
    }
    if ( ((a8 - 2) & 0xFFFFFFF9) == 0 && a8 != 6 )
    {
      if ( Sid )
      {
        memset_0(v19, 0, 0x44uLL);
        v16 = RtlLengthSid(Sid);
        memcpy_0(v19, Sid, v16);
        v17 = (union _RM_SID *)v19;
      }
      else
      {
        if ( !*((_BYTE *)RmSvcGlobals + 2072) )
          __fastfail(0x8000FFFF);
        v17 = (union _RM_SID *)((char *)RmSvcGlobals + 2004);
      }
      return ExecutionModel::ResourceManager::AcquireResourceSetHelper(
               this,
               a2,
               a3,
               a4,
               a5,
               v17,
               a7,
               a8,
               a9,
               0,
               a10,
               a11,
               a12);
    }
  }
  return 2147942487LL;
}
