/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreGetBrushColor @ 0x1C00BD440 (GreGetBrushColor.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C002496C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCEF8 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = (unsigned int)a2;
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
  v4 = HmgShareLockCheck(v3, 16);
  *(_QWORD *)this = v4;
  if ( v4 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCount(*(unsigned int **)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
