/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00116C4
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0004730 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0011664 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00116F0 (VidSchiProcessFlipPendingContextList.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx

  v4 = 0;
  if ( (*((_DWORD *)a1 + 44) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 44) &= ~0x10u;
    return VidSchiUnwaitContext((__int64)a1, 0x48CFu, a3, a4);
  }
  return v4;
}
