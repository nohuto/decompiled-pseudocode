/*
 * XREFs of ??0ModernResourceEnforcer@@IEAA@XZ @ 0x18001CD70
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18001CC1C (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_WORD *)this + 140) = 2048;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 16));
  return this;
}
