/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CDWMSwapChain@@UEAA_NXZ @ 0x18017C820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::CanRestoreToAdvancedDirectFlipRealization(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 46) != *((_QWORD *)this + 45);
}
