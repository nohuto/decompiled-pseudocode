/*
 * XREFs of ??_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z @ 0x18004CA94
 * Callers:
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800193B0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x180024EE4 (-CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??1ResourcePolicyEngine@ExecutionModel@@QEAA@XZ @ 0x18004C9F0 (--1ResourcePolicyEngine@ExecutionModel@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ExecutionModel::ResourcePolicyEngine::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  ExecutionModel::ResourcePolicyEngine::~ResourcePolicyEngine(this);
  operator delete(this);
  return this;
}
