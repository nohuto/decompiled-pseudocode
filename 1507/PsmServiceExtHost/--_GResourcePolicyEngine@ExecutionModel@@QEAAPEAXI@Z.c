/*
 * XREFs of ??_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z @ 0x180047040
 * Callers:
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800174E0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x1800208AC (-CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1ResourcePolicyEngine@ExecutionModel@@QEAA@XZ @ 0x180046F9C (--1ResourcePolicyEngine@ExecutionModel@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ExecutionModel::ResourcePolicyEngine::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  ExecutionModel::ResourcePolicyEngine::~ResourcePolicyEngine(this);
  operator delete(this);
  return this;
}
