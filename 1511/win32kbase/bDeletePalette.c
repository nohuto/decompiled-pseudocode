/*
 * XREFs of bDeletePalette @ 0x1C004B470
 * Callers:
 *     GdiThreadCallout @ 0x1C000AF20 (GdiThreadCallout.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C002360C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, int a2, int a3)
{
  unsigned int v6; // ebx
  PERESOURCE v8[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = ghsemPalette;
  EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a1);
  v6 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v9, a2, a3);
  if ( v9 )
    HmgDecrementShareReferenceCount(v9);
  SEMOBJ::vUnlock((SEMOBJ *)v8);
  return v6;
}
