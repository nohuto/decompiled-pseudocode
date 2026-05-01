/*
 * XREFs of ??0HostResourceInfo@ExecutionModel@@QEAA@PEAVApplicationPackageInfo@1@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@1@@Z @ 0x180013748
 * Callers:
 *     ?CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@PEAPEAUIUnknown@@@Z @ 0x180007854 (-CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelAc.c)
 * Callees:
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x180013544 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActi.c)
 */

ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResourceInfo::HostResourceInfo(
        ExecutionModel::HostResourceInfo *this,
        struct IUnknown *a2,
        const struct _AppModelActivationId *a3,
        struct IUnknown *a4)
{
  *(_QWORD *)this = &ExecutionModel::HostResourceInfo::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 7) = (char *)this + 72;
  *((_QWORD *)this + 8) = (char *)this + 72;
  *((_WORD *)this + 36) = 0;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  ExecutionModel::HostResourceInfo::Initialize(this, a2, a3, a4);
  return this;
}
