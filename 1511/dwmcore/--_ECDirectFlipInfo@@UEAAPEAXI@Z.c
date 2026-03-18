/*
 * XREFs of ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180108E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800AC220 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`vector deleting destructor'(CDirectFlipInfo *this, char a2)
{
  *(_QWORD *)this = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDirectFlipInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
