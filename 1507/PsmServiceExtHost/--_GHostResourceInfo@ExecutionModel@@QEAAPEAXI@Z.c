/*
 * XREFs of ??_GHostResourceInfo@ExecutionModel@@QEAAPEAXI@Z @ 0x18002EC70
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001874C (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180014258 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResourceInfo::`scalar deleting destructor'(
        ExecutionModel::HostResourceInfo *this)
{
  ExecutionModel::HostResourceInfo::~HostResourceInfo(this);
  operator delete(this);
  return this;
}
