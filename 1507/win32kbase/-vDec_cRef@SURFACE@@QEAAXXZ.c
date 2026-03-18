/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003A8E0
 * Callers:
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00AF20C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     GreMakeBitmapNonStock @ 0x1C006A000 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax

  HmgDecrementShareReferenceCount(this);
  if ( (*((_DWORD *)this + 40))-- == 1 )
  {
    if ( (*(_QWORD *)this & 0x800000LL) != 0 )
    {
      v3 = *((_WORD *)this + 51);
      if ( (v3 & 0x400) != 0 )
      {
        *((_WORD *)this + 51) = v3 & 0xFBFF;
        GreMakeBitmapNonStock();
      }
    }
    *((_QWORD *)this + 19) = 0LL;
  }
}
