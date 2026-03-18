/*
 * XREFs of ?IsUsedForAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAA_NXZ @ 0x18007A4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDWMSwapChain::IsUsedForAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 45) != 0LL;
}
