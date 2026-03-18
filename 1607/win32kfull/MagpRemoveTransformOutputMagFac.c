/*
 * XREFs of MagpRemoveTransformOutputMagFac @ 0x1C000DC28
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 */

int __fastcall MagpRemoveTransformOutputMagFac(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4

  v4 = *(_QWORD *)(gptiRit + 408LL);
  v5 = *(_QWORD *)(v4 + 216);
  if ( v5 )
  {
    LODWORD(v4) = *(_DWORD *)(v5 + 16);
    if ( (v4 & 2) != 0 )
    {
      LODWORD(v4) = NlsNullProc((struct tagKE *)a1, gptiRit, a3);
      if ( (_DWORD)v4 )
      {
        LODWORD(v4) = memcmp((const void *)(v5 + 88), &gMagOutTransformIdentity, 0x20uLL);
        if ( (_DWORD)v4 )
        {
          v6 = *(double *)(v5 + 88);
          v7 = *(double *)(v5 + 104);
          v8 = *(double *)(v5 + 112);
          if ( v6 != 1.0 || v7 != 0.0 || v8 != 0.0 )
          {
            v9 = *(float *)(a1 + 48) - v7;
            v10 = *(float *)(a1 + 52) - v8;
            *(float *)(a1 + 48) = v9;
            *(float *)(a1 + 52) = v10;
            if ( v6 != 0.0 )
            {
              v11 = *(float *)(a1 + 20) / v6;
              *(float *)a1 = *(float *)a1 / v6;
              *(float *)(a1 + 20) = v11;
              *(float *)(a1 + 48) = v9 / v6;
              *(float *)(a1 + 52) = v10 / v6;
            }
          }
        }
      }
    }
  }
  return v4;
}
