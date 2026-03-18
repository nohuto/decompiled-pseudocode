/*
 * XREFs of ??_ECBspNode@@UEAAPEAXI@Z @ 0x1801666F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x180166660 (--1CBspNode@@UEAA@XZ.c)
 */

void **__fastcall CBspNode::`vector deleting destructor'(void **this, char a2)
{
  CBspNode::~CBspNode(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
