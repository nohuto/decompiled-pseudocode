/*
 * XREFs of ??_GCBaseClipStack@@UEAAPEAXI@Z @ 0x18010B140
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A2600 (--1CBaseClipStack@@UEAA@XZ.c)
 */

CBaseClipStack *__fastcall CBaseClipStack::`scalar deleting destructor'(CBaseClipStack *this, char a2)
{
  CBaseClipStack::~CBaseClipStack(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseClipStack *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
