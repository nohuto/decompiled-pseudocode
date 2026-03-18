/*
 * XREFs of ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x180009B08
 * Callers:
 *     ?EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x180009FE4 (-EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180018704 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180019244 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18001C694 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18001C898 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18004E2D0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180065C84 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateFastHitTestRegion(CPrimitiveGroup *this, bool *a2, double a3)
{
  char v3; // r12
  unsigned int v6; // ebx
  int v7; // edi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  char v13; // r9
  unsigned int v14; // r13d
  __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // r14d
  const struct MilRectF *v23; // rdx
  MILMatrix3x2 *v24; // rcx
  int v25; // eax
  float v26; // xmm0_4
  int v27; // eax
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm0_4
  int v31; // eax
  char v32; // al
  int D2DGeometry; // eax
  CRegionShape *v34; // rdi
  _BYTE *v36; // rax
  const struct MilRectF *v37; // r11
  MILMatrix3x2 *v38; // r10
  float *v39; // r11
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm0_4
  int v43; // eax
  float v44; // xmm0_4
  int v45; // eax
  float v46; // xmm0_4
  int v47; // eax
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
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v72,
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
        goto LABEL_38;
      v36 = (_BYTE *)(v8 + 16);
      v37 = (const struct MilRectF *)v8;
      v38 = (MILMatrix3x2 *)(v8 + 17);
      if ( (unsigned __int64)v36 > v9 || (unsigned __int64)v38 > v9 )
      {
        v51 = 1159;
        goto LABEL_62;
      }
      if ( *v36 )
      {
        if ( (unsigned __int64)v38 + 24 > v9 )
        {
          v51 = 1173;
LABEL_62:
          *a2 = 0;
          v50 = -2147467259;
          goto LABEL_65;
        }
        if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v38) )
          goto LABEL_38;
        MILMatrix3x2::Transform2DBounds(v48, v49, (struct MilRectF *)&v66);
        v37 = (const struct MilRectF *)&v66;
      }
      if ( !IsPixelAligned(v37) )
        goto LABEL_38;
      v40 = *v39;
      if ( (*(_DWORD *)v39 & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v40 - v40;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v41 = (int)v40 - LODWORD(a3);
      }
      else
      {
        v57 = v40 + 6291456.25;
        v41 = (int)(LODWORD(v57) << 10) >> 11;
      }
      v72[4 * v7] = v41;
      v42 = v39[1];
      if ( (LODWORD(v42) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v42 - v42;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v43 = (int)v42 - LODWORD(a3);
      }
      else
      {
        v58 = v42 + 6291456.25;
        v43 = (int)(LODWORD(v58) << 10) >> 11;
      }
      v72[4 * v7 + 1] = v43;
      v44 = v39[2];
      if ( (LODWORD(v44) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v44 - v44;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v45 = (int)v44 - LODWORD(a3);
      }
      else
      {
        v59 = v44 + 6291456.25;
        v45 = (int)(LODWORD(v59) << 10) >> 11;
      }
      v72[4 * v7 + 2] = v45;
      v46 = v39[3];
      if ( (LODWORD(v46) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v46 - v46;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v47 = (int)v46 - LODWORD(a3);
      }
      else
      {
        v60 = v46 + 6291456.25;
        v47 = (int)(LODWORD(v60) << 10) >> 11;
      }
      v72[4 * v7++ + 3] = v47;
    }
    v10 = *((_QWORD *)this + 44);
    v11 = 0;
    v12 = *((_DWORD *)this + 90);
    v13 = 0;
    v65 = v10;
    v62 = v12;
    while ( 1 )
    {
      v14 = v11 + 144;
      if ( v11 + 144 > v12 )
      {
        if ( !v7 )
        {
LABEL_37:
          *((_BYTE *)this + 64) = 1;
          *a2 = 0;
          break;
        }
        *v70 = 0;
        D2DGeometry = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)&v70);
        v6 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          v51 = 1297;
        }
        else
        {
          D2DGeometry = CRegionShape::Create((const struct CRegion *)&v70, &v63);
          v6 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            v51 = 1300;
          }
          else
          {
            v34 = v63;
            D2DGeometry = CRegionShape::GetD2DGeometry(v63, 0LL, (struct ID2D1Geometry **)this + 7);
            v6 = D2DGeometry;
            if ( D2DGeometry >= 0 )
            {
              if ( v34 )
                CRegionShape::`vector deleting destructor'(v34, 1u);
              goto LABEL_37;
            }
            v51 = 1304;
          }
        }
        v50 = D2DGeometry;
LABEL_65:
        MilInstrumentationCheckHR(0x14u, &dword_180179134, 1u, v50, v51);
        break;
      }
      v15 = v10 + v11;
      v16 = *(unsigned int *)(v15 + 16);
      if ( (*(_BYTE *)(v15 + 4) & 0x40) == 0 || (_DWORD)v16 == *((_DWORD *)this + 79) )
      {
        if ( v13 || (*(_BYTE *)(v15 + 4) & 2) != 0 )
          goto LABEL_28;
      }
      else
      {
        v3 = 1;
      }
      v17 = *((_QWORD *)this + 47);
      if ( v16 >= v17
        || (v18 = 148LL * *(unsigned int *)(v15 + 20), v18 > 0xFFFFFFFF)
        || (v19 = (unsigned int)(v18 + v16), (unsigned int)v19 < (unsigned int)v18)
        || v19 > v17 )
      {
        *a2 = 0;
        MilInstrumentationCheckHR(0x14u, &dword_180179134, 1u, -2147467259, 0x4D7u);
        break;
      }
      v20 = 0;
      v21 = *(unsigned int *)(v15 + 16) + *((_QWORD *)this + 46);
      v64 = v21;
      while ( 1 )
      {
        v22 = v20 + 148;
        if ( v20 + 148 > (unsigned int)v18 )
          break;
        if ( v7 == 16 )
          goto LABEL_38;
        if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v21 + v20 + 16)) )
          goto LABEL_38;
        MILMatrix3x2::Transform2DBounds(v24, v23, (struct MilRectF *)&v66);
        if ( !IsPixelAligned((const struct MilRectF *)&v66) )
          goto LABEL_38;
        if ( (LODWORD(v66) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v66 - v66;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v25 = (int)v66 - LODWORD(a3);
        }
        else
        {
          v52 = v66 + 6291456.25;
          v25 = (int)(LODWORD(v52) << 10) >> 11;
        }
        v26 = v67;
        v53 = v67;
        v72[4 * v7] = v25;
        if ( (LODWORD(v53) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v26 - v26;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v27 = (int)v26 - LODWORD(a3);
        }
        else
        {
          v54 = v26 + 6291456.25;
          v27 = (int)(LODWORD(v54) << 10) >> 11;
        }
        v28 = v68;
        v72[4 * v7 + 1] = v27;
        if ( (LODWORD(v28) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v28 - v28;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v29 = (int)v28 - LODWORD(a3);
        }
        else
        {
          v55 = v28 + 6291456.25;
          v29 = (int)(LODWORD(v55) << 10) >> 11;
        }
        v30 = v69;
        v72[4 * v7 + 2] = v29;
        if ( (LODWORD(v30) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v30 - v30;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v31 = (int)v30 - LODWORD(a3);
        }
        else
        {
          v56 = v30 + 6291456.25;
          v31 = (int)(LODWORD(v56) << 10) >> 11;
        }
        v72[4 * v7++ + 3] = v31;
        v21 = v64;
        v20 = v22;
      }
      v13 = v61;
      v10 = v65;
LABEL_28:
      v32 = v3;
      v3 = 0;
      v12 = v62;
      if ( (*(_BYTE *)(v15 + 4) & 0x40) != 0 )
        v13 = v32;
      v11 = v14;
      v61 = v13;
    }
  }
LABEL_38:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v70);
  return v6;
}
