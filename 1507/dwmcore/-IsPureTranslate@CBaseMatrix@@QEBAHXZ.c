/*
 * XREFs of ?IsPureTranslate@CBaseMatrix@@QEBAHXZ @ 0x1801238D8
 * Callers:
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800FCD1C (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@Coordin.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBaseMatrix::IsPureTranslate(CBaseMatrix *this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4

  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)this - 1.0)) & _xmm) >= 0.00012207031 )
    return 0LL;
  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
  if ( v1 >= 0.00012207031 )
    return 0LL;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
  if ( v2 >= 0.00012207031 )
    return 0LL;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
  if ( v3 >= 0.00012207031 )
    return 0LL;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 4)) & _xmm);
  if ( v4 >= 0.00012207031 )
    return 0LL;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 5) - 1.0)) & _xmm);
  if ( v5 >= 0.00012207031 )
    return 0LL;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
  if ( v6 >= 0.00012207031 )
    return 0LL;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm);
  if ( v7 >= 0.00012207031 )
    return 0LL;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v8 >= 0.00012207031 )
    return 0LL;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 9)) & _xmm);
  if ( v9 >= 0.00012207031 )
    return 0LL;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm);
  if ( v10 >= 0.00012207031 )
    return 0LL;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm);
  return v11 < 0.00012207031;
}
