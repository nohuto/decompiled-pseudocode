/*
 * XREFs of ??_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z @ 0x18004C3CC
 * Callers:
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x180024A64 (-CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z.c)
 *     ?Release@ResourcePolicyStore@ExecutionModel@@UEAAKXZ @ 0x180026570 (-Release@ResourcePolicyStore@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??1ResourcePolicyStore@ExecutionModel@@QEAA@XZ @ 0x18004C2E0 (--1ResourcePolicyStore@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourcePolicyStore *__fastcall ExecutionModel::ResourcePolicyStore::`scalar deleting destructor'(
        ExecutionModel::ResourcePolicyStore *this)
{
  ExecutionModel::ResourcePolicyStore::~ResourcePolicyStore(this);
  operator delete(this);
  return this;
}
