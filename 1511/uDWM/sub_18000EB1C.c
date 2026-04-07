/*
 * XREFs of sub_18000EB1C @ 0x18000EB1C
 * Callers:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000EA8C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18009EEFC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18000EB1C(float a1, float a2)
{
  float v2; // xmm0_4

  v2 = a1 - a2;
  return v2 >= -0.00000011920929 && v2 <= 0.00000011920929;
}
