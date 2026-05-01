/*
 * XREFs of ??0ResourcePolicyEngine@ExecutionModel@@IEAA@XZ @ 0x180025308
 * Callers:
 *     ?CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@PEAUIResourcePolicyStore@1@PEAUIRMExecServicesProvider@1@PEAPEAUIResourcePolicyEngine@1@@Z @ 0x180024EE4 (-CreatePolicyEngine@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@1@.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall ExecutionModel::ResourcePolicyEngine::ResourcePolicyEngine(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ExecutionModel::ResourcePolicyEngine::`vftable'{for `ExecutionModel::IResourcePolicyEngine'};
  *(_QWORD *)&this->LockCount = &ExecutionModel::ResourcePolicyEngine::`vftable'{for `IModernResourceEnforcerCallback'};
  LODWORD(this->OwningThread) = 0;
  this->LockSemaphore = 0LL;
  this->SpinCount = 0LL;
  InitializeCriticalSectionEx(this + 1, 0, 0);
  this[2].DebugInfo = 0LL;
  result = this;
  *(_QWORD *)&this[2].LockCount = 0LL;
  LODWORD(this[2].OwningThread) = 5000;
  return result;
}
