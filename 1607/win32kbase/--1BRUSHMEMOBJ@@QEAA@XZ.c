/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005B8D8
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 *     hCreateSolidBrushInternal @ 0x1C005B810 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C0155DCC (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCount((unsigned int *)v2);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this, 0LL, 0);
    *this = 0LL;
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(this + 2);
}
