/*
 * XREFs of ??_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z @ 0x1800469AC
 * Callers:
 *     ?Release@ResourcePolicyStore@ExecutionModel@@UEAAKXZ @ 0x18001C970 (-Release@ResourcePolicyStore@ExecutionModel@@UEAAKXZ.c)
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x18002245C (-CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1ResourcePolicyStore@ExecutionModel@@QEAA@XZ @ 0x1800468C0 (--1ResourcePolicyStore@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourcePolicyStore *__fastcall ExecutionModel::ResourcePolicyStore::`scalar deleting destructor'(
        ExecutionModel::ResourcePolicyStore *this)
{
  ExecutionModel::ResourcePolicyStore::~ResourcePolicyStore(this);
  operator delete(this);
  return this;
}
