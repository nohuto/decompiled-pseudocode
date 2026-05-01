/*
 * XREFs of ??1ResourcePolicyEngineHelper@ExecutionModel@@QEAA@XZ @ 0x18000B964
 * Callers:
 *     ?NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x1800101A0 (-NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngineHelper::~ResourcePolicyEngineHelper(
        ExecutionModel::ResourcePolicyEngineHelper *this)
{
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
}
