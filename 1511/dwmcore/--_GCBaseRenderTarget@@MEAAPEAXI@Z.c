/*
 * XREFs of ??_GCBaseRenderTarget@@MEAAPEAXI@Z @ 0x18014ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CBaseRenderTarget *__fastcall CBaseRenderTarget::`scalar deleting destructor'(CBaseRenderTarget *this, char a2)
{
  *(_QWORD *)this = &CBaseRenderTarget::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
