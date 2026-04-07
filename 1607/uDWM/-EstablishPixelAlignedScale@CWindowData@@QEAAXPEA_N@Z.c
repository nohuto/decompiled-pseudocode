/*
 * XREFs of ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001B260
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?UpdateNonClientMetrics@CWindowData@@QEAAXXZ @ 0x18001A3A0 (-UpdateNonClientMetrics@CWindowData@@QEAAXXZ.c)
 *     PixelAligningFactor @ 0x180081634 (PixelAligningFactor.c)
 */

void __fastcall CWindowData::EstablishPixelAlignedScale(CWindowData *this, bool *a2)
{
  bool v2; // di
  int v3; // eax
  CWindowData *v5; // rbx
  double v6; // xmm7_8
  double v7; // xmm6_8
  double v8; // xmm6_8
  float v9; // xmm5_4
  float v10; // xmm4_4
  int v11; // ebp
  int v12; // ebp
  int v13; // r14d
  int v14; // r14d
  double v15; // xmm10_8
  __int64 v16; // rcx
  double v17; // xmm0_8
  double v18; // xmm1_8
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm2_4
  double v23; // [rsp+A0h] [rbp+8h] BYREF
  double v24; // [rsp+A8h] [rbp+10h] BYREF
  double v25; // [rsp+B0h] [rbp+18h] BYREF
  double v26; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 76);
  v5 = this;
  v6 = DOUBLE_1_0;
  v7 = DOUBLE_1_0;
  if ( v3 )
  {
    if ( v3 == 1 && *((_QWORD *)this + 3) )
    {
      v8 = (double)*((int *)this + 77);
      this = (CWindowData *)*((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 361);
      v7 = v8 / (double)(int)this;
      v6 = v7;
    }
  }
  else
  {
    v6 = *((double *)this + 36);
    v7 = *((double *)this + 37);
  }
  v9 = v6;
  v10 = v7;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 43) - v9)) & _xmm) > 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 44) - v10)) & _xmm) > 0.0000011920929 )
  {
    *((float *)v5 + 43) = v9;
    v2 = 1;
    *((float *)v5 + 44) = v10;
  }
  if ( v6 == 1.0 && v7 == 1.0 )
  {
    if ( *((float *)v5 + 45) != 1.0 || *((float *)v5 + 46) != 1.0 )
    {
      *((_DWORD *)v5 + 46) = 1065353216;
      v2 = 1;
      *((_DWORD *)v5 + 45) = 1065353216;
      goto LABEL_31;
    }
  }
  else
  {
    v11 = *((_DWORD *)v5 + 49) - *((_DWORD *)v5 + 47);
    if ( v11 < 0 )
      v11 = 0;
    v12 = v11 - *((_DWORD *)v5 + 60) - *((_DWORD *)v5 + 59);
    v13 = *((_DWORD *)v5 + 50) - *((_DWORD *)v5 + 48);
    if ( v13 < 0 )
      v13 = 0;
    v14 = v13 - *((_DWORD *)v5 + 62) - *((_DWORD *)v5 + 61);
    if ( v14 && v12 )
    {
      v15 = PixelAligningFactor(this, (unsigned int)v12, &v25, &v23);
      v17 = PixelAligningFactor(v16, (unsigned int)v14, &v26, &v24);
      if ( v23 <= 0.02 && v24 <= 0.02 )
      {
        v18 = ((double)v12 / (double)v14 - v25 / v26) / ((double)v12 / (double)v14);
        if ( v18 < 0.0 )
          *(_QWORD *)&v18 ^= _xmm;
        if ( v18 <= 0.02 )
        {
          v6 = v15;
          v7 = v17;
        }
      }
      v19 = v6;
      v20 = v7;
      v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 45) - v19)) & _xmm);
      if ( v21 > 0.0000011920929
        || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 46) - v20)) & _xmm), v22 > 0.0000011920929) )
      {
        *((float *)v5 + 45) = v19;
        v2 = 1;
        *((float *)v5 + 46) = v20;
        goto LABEL_31;
      }
    }
  }
  if ( v2 )
LABEL_31:
    CWindowData::UpdateNonClientMetrics(v5);
  *a2 = v2;
}
