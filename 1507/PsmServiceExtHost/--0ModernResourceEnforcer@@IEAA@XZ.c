/*
 * XREFs of ??0ModernResourceEnforcer@@IEAA@XZ @ 0x18002083C
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE3@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18002069C (-CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTER.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  ModernResourceEnforcer *result; // rax

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable'{for `IModernResourceEnforcer'};
  *((_QWORD *)this + 1) = &ModernResourceEnforcer::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
  *((_DWORD *)this + 4) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 26) = (char *)this + 208;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_WORD *)this + 120) = 2048;
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  return result;
}
