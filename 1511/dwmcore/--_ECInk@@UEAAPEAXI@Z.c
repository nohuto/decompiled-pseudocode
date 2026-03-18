/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x180113460
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CInk@@UEAA@XZ @ 0x180112D44 (--1CInk@@UEAA@XZ.c)
 */

void **__fastcall CInk::`vector deleting destructor'(void **this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
