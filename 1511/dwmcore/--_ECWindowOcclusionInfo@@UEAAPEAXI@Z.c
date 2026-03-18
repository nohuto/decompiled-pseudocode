/*
 * XREFs of ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x1800ABBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CWindowOcclusionInfo *__fastcall CWindowOcclusionInfo::`vector deleting destructor'(
        CWindowOcclusionInfo *this,
        char a2)
{
  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowOcclusionInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
