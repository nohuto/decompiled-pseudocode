/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013A50
 * Callers:
 *     VidSchiProcessFlipPendingContextList @ 0x1C0018954 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C001B530 (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C001B160 (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 44) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 44) &= ~0x10u;
    return (unsigned __int8)VidSchiUnwaitContext(a1, 16773LL);
  }
  return v1;
}
