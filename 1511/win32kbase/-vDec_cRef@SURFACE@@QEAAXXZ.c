/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00A8A80
 * Callers:
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B2FAC (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     GreMakeBitmapNonStock @ 0x1C005DB10 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v3; // rcx
  __int16 v4; // ax

  HmgDecrementShareReferenceCount(this);
  if ( (*((_DWORD *)this + 40))-- == 1 )
  {
    v3 = *(_QWORD *)this;
    if ( (*(_QWORD *)this & 0x800000LL) != 0 )
    {
      v4 = *((_WORD *)this + 51);
      if ( (v4 & 0x400) != 0 )
      {
        *((_WORD *)this + 51) = v4 & 0xFBFF;
        GreMakeBitmapNonStock(v3);
      }
    }
    *((_QWORD *)this + 19) = 0LL;
  }
}
