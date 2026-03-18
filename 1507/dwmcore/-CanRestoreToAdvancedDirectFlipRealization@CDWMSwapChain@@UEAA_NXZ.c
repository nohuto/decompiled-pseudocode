/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CDWMSwapChain@@UEAA_NXZ @ 0x18013BB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::CanRestoreToAdvancedDirectFlipRealization(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 48) != *((_QWORD *)this + 47);
}
