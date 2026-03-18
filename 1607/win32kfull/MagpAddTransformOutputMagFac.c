/*
 * XREFs of MagpAddTransformOutputMagFac @ 0x1C000DB34
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 */

int __fastcall MagpAddTransformOutputMagFac(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4

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
            v9 = v7 + *(float *)(a1 + 48);
            v10 = v8 + *(float *)(a1 + 52);
            *(float *)(a1 + 48) = v9;
            *(float *)(a1 + 52) = v10;
            if ( v6 != 1.0 )
            {
              LODWORD(v4) = 1065353216;
              *(_DWORD *)(a1 + 40) = 1065353216;
              *(_DWORD *)(a1 + 60) = 1065353216;
              *(float *)(a1 + 48) = v9 * v6;
              *(float *)a1 = v6;
              *(float *)(a1 + 52) = v10 * v6;
              *(float *)(a1 + 20) = v6;
            }
          }
        }
      }
    }
  }
  return v4;
}
