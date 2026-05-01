/*
 * XREFs of ??0HostResourceInfo@ExecutionModel@@QEAA@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@1@@Z @ 0x1800141C4
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001874C (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800140B4 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePo.c)
 */

ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResourceInfo::HostResourceInfo(
        ExecutionModel::HostResourceInfo *this,
        int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct ExecutionModel::ResourcePolicyEngine *a5)
{
  *(_QWORD *)this = &ExecutionModel::HostResourceInfo::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = (char *)this + 64;
  *((_QWORD *)this + 7) = (char *)this + 64;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  ExecutionModel::HostResourceInfo::Initialize(this, a2, a3, a4, (struct IUnknown *)a5);
  return this;
}
