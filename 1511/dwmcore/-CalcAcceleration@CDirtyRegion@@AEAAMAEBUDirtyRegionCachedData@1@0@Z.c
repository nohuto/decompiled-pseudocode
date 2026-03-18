/*
 * XREFs of ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x18007A7DC
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDirtyRegion::CalcAcceleration(
        CDirtyRegion *this,
        const struct CDirtyRegion::DirtyRegionCachedData *a2,
        const struct CDirtyRegion::DirtyRegionCachedData *a3)
{
  float v3; // xmm1_4
  char v4; // al
  float v5; // xmm2_4

  v3 = 0.0;
  v4 = *((_BYTE *)a3 + 12);
  if ( *((_BYTE *)a2 + 12) )
  {
    if ( !v4 )
      return FLOAT_3_4028235e38;
  }
  else if ( !v4 )
  {
    v5 = (float)((float)(*((float *)a2 + 1) - *((float *)a3 + 1)) * (float)(*((float *)a2 + 1) - *((float *)a3 + 1)))
       + (float)((float)(*(float *)a2 - *(float *)a3) * (float)(*(float *)a2 - *(float *)a3));
    if ( v5 != 0.0 )
      return (float)(*((float *)a2 + 2) + *((float *)a3 + 2)) / v5;
  }
  return v3;
}
