/*
 * XREFs of ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800618E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x180061990 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::`vector deleting destructor'(CAsyncFlushResponse *this, char a2)
{
  CAsyncFlushResponse::~CAsyncFlushResponse(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAsyncFlushResponse *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
