/*
 * XREFs of ??_ECChannel@@EEAAPEAXI@Z @ 0x1800FFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CChannel@@EEAA@XZ @ 0x1800FF988 (--1CChannel@@EEAA@XZ.c)
 */

CChannel *__fastcall CChannel::`vector deleting destructor'(CChannel *this, char a2)
{
  CChannel::~CChannel(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CChannel *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
