/*
 * XREFs of ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18002E1F4
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002E3D4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18001F840 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18002DFF8 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCGraphIterator@@QEAAPEAXI@Z @ 0x180031464 (--_GCGraphIterator@@QEAAPEAXI@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18005050C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDrawingContext::Uninitialize(CGraphIterator **this)
{
  unsigned int v2; // edx
  CGraphIterator *v3; // rsi
  CGraphIterator *v4; // rsi
  CGraphIterator *v5; // rsi
  CGraphIterator *v6; // rsi
  CGraphIterator *v7; // rsi
  CGraphIterator *v8; // rcx
  CContentBounder *v9; // rcx
  COcclusionContext *v10; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  v3 = this[47];
  if ( v3 )
  {
    (*(void (__fastcall **)(CGraphIterator *))(*(_QWORD *)v3 + 16LL))(this[47]);
    this[47] = 0LL;
  }
  v4 = this[347];
  if ( v4 )
  {
    (*(void (__fastcall **)(CGraphIterator *))(*(_QWORD *)v4 + 16LL))(this[347]);
    this[347] = 0LL;
  }
  v5 = this[328];
  if ( v5 )
  {
    (*(void (__fastcall **)(CGraphIterator *))(*(_QWORD *)v5 + 8LL))(this[328]);
    this[328] = 0LL;
  }
  v6 = this[44];
  if ( v6 )
  {
    (*(void (__fastcall **)(CGraphIterator *))(*(_QWORD *)v6 + 16LL))(this[44]);
    this[44] = 0LL;
  }
  v7 = this[45];
  if ( v7 )
  {
    (*(void (__fastcall **)(CGraphIterator *))(*(_QWORD *)v7 + 16LL))(this[45]);
    this[45] = 0LL;
  }
  v8 = this[329];
  if ( v8 )
  {
    CGraphIterator::`scalar deleting destructor'(v8, v2);
    this[329] = 0LL;
  }
  v9 = this[414];
  if ( v9 )
  {
    CContentBounder::`scalar deleting destructor'(v9, v2);
    this[414] = 0LL;
  }
  v10 = this[718];
  if ( v10 )
  {
    COcclusionContext::`scalar deleting destructor'(v10, v2);
    this[718] = 0LL;
  }
}
