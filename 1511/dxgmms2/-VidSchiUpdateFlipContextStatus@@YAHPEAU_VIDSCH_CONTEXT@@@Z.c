/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0002428
 * Callers:
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C00023C8 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0002458 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000E0EC (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 44) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 44) &= ~0x10u;
    return (unsigned __int8)VidSchiUnwaitContext(a1, 17148LL);
  }
  return v1;
}
