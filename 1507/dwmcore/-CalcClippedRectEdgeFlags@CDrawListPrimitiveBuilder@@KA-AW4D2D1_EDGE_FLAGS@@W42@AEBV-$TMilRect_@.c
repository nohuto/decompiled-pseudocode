/*
 * XREFs of ?CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@KA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x1800760FC
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListPrimitiveBuilder::CalcClippedRectEdgeFlags(unsigned int a1, float *a2, float *a3, char a4)
{
  if ( a4 )
  {
    if ( a1 != 50529027 )
    {
      if ( *a3 > *a2 )
        a1 |= 0x3000000u;
      if ( a3[1] > a2[1] )
        a1 |= 3u;
      if ( a2[2] > a3[2] )
        a1 |= 0x300u;
      if ( a2[3] > a3[3] )
        a1 |= 0x30000u;
    }
  }
  else if ( a1 )
  {
    if ( (float)(*a2 - *a3) <= 0.0000011920929 )
      a1 &= 0xFCFFFFFF;
    if ( (float)(a2[1] - a3[1]) <= 0.0000011920929 )
      a1 &= 0xFFFFFFFC;
    if ( (float)(a3[2] - a2[2]) <= 0.0000011920929 )
      a1 &= 0xFFFFFCFF;
    if ( (float)(a3[3] - a2[3]) <= 0.0000011920929 )
      a1 &= 0xFFFCFFFF;
  }
  return a1;
}
