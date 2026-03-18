/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C00BC2C0
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C001E494 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersive(__int64 a1)
{
  return (*(_BYTE *)(PsGetCurrentProcessWin32Process(a1) + 768) & 0x30) == 16;
}
