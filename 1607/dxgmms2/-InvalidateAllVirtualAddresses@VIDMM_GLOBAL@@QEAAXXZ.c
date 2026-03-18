/*
 * XREFs of ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008954C
 * Callers:
 *     VidMmInvalidateAllVirtualAddresses @ 0x1C001D560 (VidMmInvalidateAllVirtualAddresses.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllVirtualAddresses(VIDMM_GLOBAL *this)
{
  _DWORD v2[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(v2, 0, 0x58uLL);
  v2[0] = 127;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v2);
}
