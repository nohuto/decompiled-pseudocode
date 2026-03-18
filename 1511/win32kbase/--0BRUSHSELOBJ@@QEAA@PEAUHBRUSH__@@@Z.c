/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8
 * Callers:
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C0035A3C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v3; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = HmgShareLockCheck((int)a2, 16);
  *(_QWORD *)this = v3;
  if ( v3 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCount(*(_DWORD **)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
