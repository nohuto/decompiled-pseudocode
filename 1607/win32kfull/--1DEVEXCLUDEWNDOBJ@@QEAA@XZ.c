/*
 * XREFs of ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x1C0265130
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266614 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     EngControlSprites @ 0x1C02786E0 (EngControlSprites.c)
 */

void __fastcall DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(WNDOBJ **this)
{
  WNDOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    EngControlSprites(v1, 2u);
}
