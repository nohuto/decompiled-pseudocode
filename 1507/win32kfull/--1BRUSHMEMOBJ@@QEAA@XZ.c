/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00058D4
 * Callers:
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C0005888 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     GreCreateDIBBrush @ 0x1C02B1998 (GreCreateDIBBrush.c)
 * Callees:
 *     <none>
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    DEC_SHARE_REF_CNT();
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**(_QWORD **)this, 0LL, 0LL);
    *(_QWORD *)this = 0LL;
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((char *)this + 16);
}
