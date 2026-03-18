/*
 * XREFs of ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800436C0
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800434C0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x1800520F4 (--_GCVisualTreeIterator@@QEAAPEAXI@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800556AC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800A0BEC (--_GCContentBounder@@QEAAPEAXI@Z.c)
 */

void __fastcall CDrawingContext::Uninitialize(CMILRefCountBase **this)
{
  unsigned int v2; // edx
  CMILRefCountBase *v3; // rsi
  CMILRefCountBase *v4; // rsi
  CMILRefCountBase *v5; // rbx
  __int64 (__fastcall *v6)(CMILRefCountBase *); // rsi
  CMILRefCountBase *v7; // rsi
  CMILRefCountBase *v8; // rsi
  CVisualTreeIterator *v9; // rcx
  CContentBounder *v10; // rcx
  COcclusionContext *v11; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  v3 = this[47];
  if ( v3 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v3 + 16LL))(this[47]);
    this[47] = 0LL;
  }
  v4 = this[351];
  if ( v4 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 16LL))(this[351]);
    this[351] = 0LL;
  }
  v5 = this[328];
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v5 + 8LL);
    if ( v6 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(this[328]);
    else
      v6(this[328]);
    this[328] = 0LL;
  }
  v7 = this[44];
  if ( v7 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v7 + 16LL))(this[44]);
    this[44] = 0LL;
  }
  v8 = this[45];
  if ( v8 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v8 + 16LL))(this[45]);
    this[45] = 0LL;
  }
  v9 = this[329];
  if ( v9 )
  {
    CVisualTreeIterator::`scalar deleting destructor'(v9, v2);
    this[329] = 0LL;
  }
  v10 = this[418];
  if ( v10 )
  {
    CContentBounder::`scalar deleting destructor'(v10, v2);
    this[418] = 0LL;
  }
  v11 = this[722];
  if ( v11 )
  {
    COcclusionContext::`scalar deleting destructor'(v11, v2);
    this[722] = 0LL;
  }
}
