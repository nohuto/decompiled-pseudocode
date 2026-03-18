/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0009524
 * Callers:
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C00094D8 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B0C10 (GreCreateDIBBrush.c)
 * Callees:
 *     <none>
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**(_QWORD **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
}
