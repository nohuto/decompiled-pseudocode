/*
 * XREFs of ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x1800E1840
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x1800E154C (--1CDebugFrameCounter@@UEAA@XZ.c)
 */

CDebugFrameCounter *__fastcall CDebugFrameCounter::`vector deleting destructor'(CDebugFrameCounter *this, char a2)
{
  CDebugFrameCounter::~CDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDebugFrameCounter *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
