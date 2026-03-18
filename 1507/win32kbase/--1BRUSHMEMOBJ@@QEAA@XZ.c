/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000C498
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C000C2C0 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C000C3D0 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C0138488 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0138530 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCount(v2);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(this + 2);
}
