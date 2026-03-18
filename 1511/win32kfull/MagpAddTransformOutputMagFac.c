/*
 * XREFs of MagpAddTransformOutputMagFac @ 0x1C000BED4
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C0066924 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     memcmp @ 0x1C0151300 (memcmp.c)
 */

int __fastcall MagpAddTransformOutputMagFac(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4

  v2 = *(_QWORD *)(gptiRit + 408LL);
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
          v7 = v5 + *(float *)(a1 + 48);
          v8 = v6 + *(float *)(a1 + 52);
          *(float *)(a1 + 48) = v7;
          *(float *)(a1 + 52) = v8;
          if ( v4 != 1.0 )
          {
            LODWORD(v2) = 1065353216;
            *(_DWORD *)(a1 + 40) = 1065353216;
            *(_DWORD *)(a1 + 60) = 1065353216;
            *(float *)(a1 + 48) = v7 * v4;
            *(float *)a1 = v4;
            *(float *)(a1 + 52) = v8 * v4;
            *(float *)(a1 + 20) = v4;
          }
        }
      }
    }
  }
  return v2;
}
