/*
 * XREFs of MagpRemoveTransformOutputMagFac @ 0x1C0008BD4
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C008D644 (xxxIsDCompSpeedHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F072C (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C015BBC0 (memcmp.c)
 */

int __fastcall MagpRemoveTransformOutputMagFac(float *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm1_4

  v2 = *(_QWORD *)(gptiRit + 416LL);
  v3 = *(_QWORD *)(v2 + 216);
  if ( v3 )
  {
    LODWORD(v2) = *(_DWORD *)(v3 + 16);
    if ( (v2 & 2) != 0 )
    {
      LODWORD(v2) = memcmp((const void *)(v3 + 88), &gMagOutTransformIdentity, 0x20uLL);
      if ( (_DWORD)v2 )
      {
        v4 = *(double *)(v3 + 88);
        v5 = *(double *)(v3 + 104);
        v6 = *(double *)(v3 + 112);
        if ( v4 != 1.0 || v5 != 0.0 || v6 != 0.0 )
        {
          v7 = a1[12] - v5;
          v8 = a1[13] - v6;
          a1[12] = v7;
          a1[13] = v8;
          if ( v4 != 0.0 )
          {
            v9 = a1[5] / v4;
            *a1 = *a1 / v4;
            a1[5] = v9;
            a1[12] = v7 / v4;
            a1[13] = v8 / v4;
          }
        }
      }
    }
  }
  return v2;
}
