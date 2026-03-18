/*
 * XREFs of ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x18000C3F4
 * Callers:
 *     ?EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x18000C8D8 (-EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18000CD00 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18000CF04 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18000D020 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18000D204 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18005B7D8 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800785F0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateFastHitTestRegion(CPrimitiveGroup *this, bool *a2, double a3)
{
  char v3; // r12
  unsigned int v6; // ebx
  int v7; // edi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r14
  _BYTE *v10; // rax
  const struct MilRectF *v11; // r11
  MILMatrix3x2 *v12; // r10
  float *v13; // r11
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm0_4
  int v19; // eax
  float v20; // xmm0_4
  int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  char v25; // r9
  unsigned int v26; // r13d
  __int64 v27; // r10
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rax
  unsigned int v34; // r14d
  const struct MilRectF *v35; // rdx
  MILMatrix3x2 *v36; // rcx
  int v37; // eax
  float v38; // xmm0_4
  int v39; // eax
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm0_4
  int v43; // eax
  char v44; // al
  int D2DGeometry; // eax
  CRegionShape *v46; // rdi
  MILMatrix3x2 *v48; // rcx
  const struct MilRectF *v49; // r11
  int v50; // r9d
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  float v52; // [rsp+38h] [rbp-D0h]
  float v53; // [rsp+38h] [rbp-D0h]
  float v54; // [rsp+38h] [rbp-D0h]
  float v55; // [rsp+38h] [rbp-D0h]
  float v56; // [rsp+38h] [rbp-D0h]
  float v57; // [rsp+38h] [rbp-D0h]
  float v58; // [rsp+38h] [rbp-D0h]
  float v59; // [rsp+38h] [rbp-D0h]
  float v60; // [rsp+38h] [rbp-D0h]
  char v61; // [rsp+40h] [rbp-C8h]
  unsigned int v62; // [rsp+44h] [rbp-C4h]
  CRegionShape *v63; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B0h]
  float v66; // [rsp+60h] [rbp-A8h] BYREF
  float v67; // [rsp+64h] [rbp-A4h]
  float v68; // [rsp+68h] [rbp-A0h]
  float v69; // [rsp+6Ch] [rbp-9Ch]
  int *v70; // [rsp+78h] [rbp-90h] BYREF
  int v71; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v72[64]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = 0;
  v61 = 0;
  v70 = &v71;
  v71 = 0;
  v63 = 0LL;
  v6 = -2147467259;
  `vector constructor iterator'(
    (Mesh::MeshLine *)v72,
    0x10uLL,
    16,
    TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  *a2 = 1;
  v7 = 0;
  if ( *((_DWORD *)this + 100) <= 0x10u )
  {
    v8 = *((_QWORD *)this + 48);
    v9 = v8 + *((_QWORD *)this + 49);
    while ( v8 < v9 )
    {
      if ( v7 == 16 )
        goto LABEL_52;
      v10 = (_BYTE *)(v8 + 16);
      v11 = (const struct MilRectF *)v8;
      v12 = (MILMatrix3x2 *)(v8 + 17);
      if ( (unsigned __int64)v10 > v9 || (unsigned __int64)v12 > v9 )
      {
        v51 = 1175;
        goto LABEL_62;
      }
      if ( *v10 )
      {
        if ( (unsigned __int64)v12 + 24 > v9 )
        {
          v51 = 1189;
LABEL_62:
          *a2 = 0;
          v50 = -2147467259;
          goto LABEL_65;
        }
        if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v12) )
          goto LABEL_52;
        MILMatrix3x2::Transform2DBounds(v48, v49, (struct MilRectF *)&v66);
        v11 = (const struct MilRectF *)&v66;
      }
      if ( !IsPixelAligned(v11) )
        goto LABEL_52;
      v14 = *v13;
      if ( (*(_DWORD *)v13 & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v14 - v14;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v15 = (int)v14 - LODWORD(a3);
      }
      else
      {
        v52 = v14 + 6291456.25;
        v15 = (int)(LODWORD(v52) << 10) >> 11;
      }
      v72[4 * v7] = v15;
      v16 = v13[1];
      if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v16 - v16;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v17 = (int)v16 - LODWORD(a3);
      }
      else
      {
        v53 = v16 + 6291456.25;
        v17 = (int)(LODWORD(v53) << 10) >> 11;
      }
      v72[4 * v7 + 1] = v17;
      v18 = v13[2];
      if ( (LODWORD(v18) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v18 - v18;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v19 = (int)v18 - LODWORD(a3);
      }
      else
      {
        v54 = v18 + 6291456.25;
        v19 = (int)(LODWORD(v54) << 10) >> 11;
      }
      v72[4 * v7 + 2] = v19;
      v20 = v13[3];
      if ( (LODWORD(v20) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v20 - v20;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v21 = (int)v20 - LODWORD(a3);
      }
      else
      {
        v55 = v20 + 6291456.25;
        v21 = (int)(LODWORD(v55) << 10) >> 11;
      }
      v72[4 * v7++ + 3] = v21;
    }
    v22 = *((_QWORD *)this + 44);
    v23 = 0;
    v24 = *((_DWORD *)this + 90);
    v25 = 0;
    v65 = v22;
    v62 = v24;
    while ( 1 )
    {
      v26 = v23 + 144;
      if ( v23 + 144 > v24 )
      {
        if ( !v7 )
        {
LABEL_51:
          *((_BYTE *)this + 64) = 1;
          *a2 = 0;
          break;
        }
        *v70 = 0;
        D2DGeometry = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)&v70);
        v6 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          v51 = 1313;
        }
        else
        {
          D2DGeometry = CRegionShape::Create((const struct CRegion *)&v70, &v63);
          v6 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            v51 = 1316;
          }
          else
          {
            v46 = v63;
            D2DGeometry = CRegionShape::GetD2DGeometry(v63, 0LL, (struct ID2D1Geometry **)this + 7);
            v6 = D2DGeometry;
            if ( D2DGeometry >= 0 )
            {
              if ( v46 )
                CRegionShape::`vector deleting destructor'(v46, 1u);
              goto LABEL_51;
            }
            v51 = 1320;
          }
        }
        v50 = D2DGeometry;
LABEL_65:
        MilInstrumentationCheckHR(0x14u, &dword_18016AD4C, 1u, v50, v51);
        break;
      }
      v27 = v22 + v23;
      v28 = *(unsigned int *)(v27 + 16);
      if ( (*(_BYTE *)(v27 + 4) & 0x40) == 0 || (_DWORD)v28 == *((_DWORD *)this + 79) )
      {
        if ( v25 || (*(_BYTE *)(v27 + 4) & 2) != 0 )
          goto LABEL_42;
      }
      else
      {
        v3 = 1;
      }
      v29 = *((_QWORD *)this + 47);
      if ( v28 >= v29
        || (v30 = 148LL * *(unsigned int *)(v27 + 20), v30 > 0xFFFFFFFF)
        || (v31 = (unsigned int)(v30 + v28), (unsigned int)v31 < (unsigned int)v30)
        || v31 > v29 )
      {
        *a2 = 0;
        MilInstrumentationCheckHR(0x14u, &dword_18016AD4C, 1u, -2147467259, 0x4E7u);
        break;
      }
      v32 = 0;
      v33 = *(unsigned int *)(v27 + 16) + *((_QWORD *)this + 46);
      v64 = v33;
      while ( 1 )
      {
        v34 = v32 + 148;
        if ( v32 + 148 > (unsigned int)v30 )
          break;
        if ( v7 == 16 )
          goto LABEL_52;
        if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v33 + v32 + 16)) )
          goto LABEL_52;
        MILMatrix3x2::Transform2DBounds(v36, v35, (struct MilRectF *)&v66);
        if ( !IsPixelAligned((const struct MilRectF *)&v66) )
          goto LABEL_52;
        if ( (LODWORD(v66) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v66 - v66;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v37 = (int)v66 - LODWORD(a3);
        }
        else
        {
          v56 = v66 + 6291456.25;
          v37 = (int)(LODWORD(v56) << 10) >> 11;
        }
        v38 = v67;
        v57 = v67;
        v72[4 * v7] = v37;
        if ( (LODWORD(v57) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v38 - v38;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v39 = (int)v38 - LODWORD(a3);
        }
        else
        {
          v58 = v38 + 6291456.25;
          v39 = (int)(LODWORD(v58) << 10) >> 11;
        }
        v40 = v68;
        v72[4 * v7 + 1] = v39;
        if ( (LODWORD(v40) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v40 - v40;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v41 = (int)v40 - LODWORD(a3);
        }
        else
        {
          v59 = v40 + 6291456.25;
          v41 = (int)(LODWORD(v59) << 10) >> 11;
        }
        v42 = v69;
        v72[4 * v7 + 2] = v41;
        if ( (LODWORD(v42) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v42 - v42;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v43 = (int)v42 - LODWORD(a3);
        }
        else
        {
          v60 = v42 + 6291456.25;
          v43 = (int)(LODWORD(v60) << 10) >> 11;
        }
        v72[4 * v7++ + 3] = v43;
        v33 = v64;
        v32 = v34;
      }
      v25 = v61;
      v22 = v65;
LABEL_42:
      v44 = v3;
      v3 = 0;
      v24 = v62;
      if ( (*(_BYTE *)(v27 + 4) & 0x40) != 0 )
        v25 = v44;
      v23 = v26;
      v61 = v25;
    }
  }
LABEL_52:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v70);
  return v6;
}
