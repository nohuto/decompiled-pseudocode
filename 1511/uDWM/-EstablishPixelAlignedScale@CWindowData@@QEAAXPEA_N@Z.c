/*
 * XREFs of ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001E6B4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?UpdateNonClientMetrics@CWindowData@@QEAAXXZ @ 0x18001D870 (-UpdateNonClientMetrics@CWindowData@@QEAAXXZ.c)
 *     sub_180080E28 @ 0x180080E28 (sub_180080E28.c)
 */

void __fastcall CWindowData::EstablishPixelAlignedScale(CWindowData *this, bool *a2)
{
  CWindowData *v3; // rbx
  bool v4; // di
  double v5; // xmm7_8
  int v6; // eax
  double v7; // xmm6_8
  double v8; // xmm6_8
  float v9; // xmm5_4
  float v10; // xmm4_4
  int v11; // esi
  int v12; // esi
  int v13; // ebp
  int v14; // ebp
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

  v3 = this;
  v4 = 0;
  v5 = DOUBLE_1_0;
  v6 = *((_DWORD *)this + 76);
  v7 = DOUBLE_1_0;
  if ( v6 )
  {
    if ( v6 == 1 && *((_QWORD *)this + 3) )
    {
      v8 = (double)*((int *)this + 77);
      this = (CWindowData *)*((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 365);
      v7 = v8 / (double)(int)this;
      v5 = v7;
    }
  }
  else
  {
    v5 = *((double *)this + 36);
    v7 = *((double *)this + 37);
  }
  v9 = v5;
  v10 = v7;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v3 + 43) - v9)) & _xmm) > 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v3 + 44) - v10)) & _xmm) > 0.0000011920929 )
  {
    *((float *)v3 + 43) = v9;
    v4 = 1;
    *((float *)v3 + 44) = v10;
  }
  if ( v5 == 1.0 && v7 == 1.0 )
  {
    if ( *((float *)v3 + 45) != 1.0 || *((float *)v3 + 46) != 1.0 )
    {
      v4 = 1;
      *((_DWORD *)v3 + 46) = 1065353216;
      *((_DWORD *)v3 + 45) = 1065353216;
      goto LABEL_16;
    }
  }
  else
  {
    v11 = *((_DWORD *)v3 + 49) - *((_DWORD *)v3 + 47);
    if ( v11 < 0 )
      v11 = 0;
    v12 = v11 - *((_DWORD *)v3 + 60) - *((_DWORD *)v3 + 59);
    v13 = *((_DWORD *)v3 + 50) - *((_DWORD *)v3 + 48);
    if ( v13 < 0 )
      v13 = 0;
    v14 = v13 - *((_DWORD *)v3 + 62) - *((_DWORD *)v3 + 61);
    if ( v14 && v12 )
    {
      v15 = sub_180080E28(this, (unsigned int)v12, &v25, &v23);
      v17 = sub_180080E28(v16, (unsigned int)v14, &v26, &v24);
      if ( v23 <= 0.02 && v24 <= 0.02 )
      {
        v18 = ((double)v12 / (double)v14 - v25 / v26) / ((double)v12 / (double)v14);
        if ( v18 < 0.0 )
          *(_QWORD *)&v18 ^= _xmm;
        if ( v18 <= 0.02 )
        {
          v5 = v15;
          v7 = v17;
        }
      }
      v19 = v5;
      v20 = v7;
      v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v3 + 45) - v19)) & _xmm);
      if ( v21 > 0.0000011920929
        || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v3 + 46) - v20)) & _xmm), v22 > 0.0000011920929) )
      {
        *((float *)v3 + 45) = v19;
        v4 = 1;
        *((float *)v3 + 46) = v20;
      }
    }
  }
  if ( v4 )
LABEL_16:
    CWindowData::UpdateNonClientMetrics(v3);
  *a2 = v4;
}
