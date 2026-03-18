/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreGetBrushColor @ 0x1C00BD440 (GreGetBrushColor.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0024954 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCount(*(unsigned int **)this);
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
}
