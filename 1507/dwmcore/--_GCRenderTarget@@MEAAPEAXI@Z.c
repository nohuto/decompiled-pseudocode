/*
 * XREFs of ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x1800F9E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180058538 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CRenderTarget *__fastcall CRenderTarget::`scalar deleting destructor'(CRenderTarget *this, char a2)
{
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
