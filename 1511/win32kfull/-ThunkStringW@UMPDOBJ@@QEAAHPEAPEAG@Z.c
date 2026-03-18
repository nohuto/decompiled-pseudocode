/*
 * XREFs of ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C0146F1C
 * Callers:
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C0145FE0 (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0146210 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C029FF60 (-UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::ThunkStringW(UMPDOBJ *this, unsigned __int16 **a2)
{
  __int64 v2; // rax

  if ( !*a2 )
    return 1LL;
  v2 = -1LL;
  do
    ++v2;
  while ( (*a2)[v2] );
  return UMPDOBJ::ThunkMemBlock(this, (const void **)a2, 2 * (int)v2 + 2);
}
