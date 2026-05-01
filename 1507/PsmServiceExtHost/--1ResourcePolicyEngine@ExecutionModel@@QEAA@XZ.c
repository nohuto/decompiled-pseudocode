/*
 * XREFs of ??1ResourcePolicyEngine@ExecutionModel@@QEAA@XZ @ 0x180046F9C
 * Callers:
 *     ??_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z @ 0x180047040 (--_GResourcePolicyEngine@ExecutionModel@@QEAAPEAXI@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngine::~ResourcePolicyEngine(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  ULONG_PTR SpinCount; // rsi
  HANDLE LockSemaphore; // rdi

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ExecutionModel::ResourcePolicyEngine::`vftable'{for `ExecutionModel::IResourcePolicyEngine'};
  *(_QWORD *)&this->LockCount = &ExecutionModel::ResourcePolicyEngine::`vftable'{for `IModernResourceEnforcerCallback'};
  DebugInfo = this[2].DebugInfo;
  if ( DebugInfo )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(this[2].DebugInfo);
  DeleteCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  if ( SpinCount )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(this->SpinCount);
  LockSemaphore = this->LockSemaphore;
  if ( LockSemaphore )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
}
