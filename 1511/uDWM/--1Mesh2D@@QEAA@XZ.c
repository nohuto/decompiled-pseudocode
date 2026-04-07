/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x180088928
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800891B8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180089F74 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008AADC (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 12);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
