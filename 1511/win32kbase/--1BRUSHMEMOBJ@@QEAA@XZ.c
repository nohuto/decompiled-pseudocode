/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005D180
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C005CFD0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C005D0C0 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C013A910 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCount(v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**this, 0);
    *this = 0LL;
  }
}
