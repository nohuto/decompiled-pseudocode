/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C01C2D7C
 * Callers:
 *     GreDrawStream @ 0x1C00433E0 (GreDrawStream.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax

  DEC_SHARE_REF_CNT(this);
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
