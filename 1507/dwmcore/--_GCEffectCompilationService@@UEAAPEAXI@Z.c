/*
 * XREFs of ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x1800E97B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1800E96C0 (--1CEffectCompilationService@@UEAA@XZ.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::`scalar deleting destructor'(
        CEffectCompilationService *this,
        char a2)
{
  CEffectCompilationService::~CEffectCompilationService(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CEffectCompilationService *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
