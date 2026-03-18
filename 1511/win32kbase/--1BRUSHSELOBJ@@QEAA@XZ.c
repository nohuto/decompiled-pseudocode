/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4
 * Callers:
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0035A5C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCount(*(_DWORD **)this);
  }
}
