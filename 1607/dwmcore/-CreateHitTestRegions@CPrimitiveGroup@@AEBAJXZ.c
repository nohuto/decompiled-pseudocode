/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000E2BC
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000EA90 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x18000DEF4 (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18000DFE4 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18000E13C (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001210C (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180020CD8 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180020DC0 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18002C100 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800A2F3C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  float v9; // xmm0_4
  float v10; // xmm1_4
  _BYTE *v11; // rax
  const struct MilRectF *v12; // r10
  float *v13; // rcx
  float *v14; // r10
  unsigned int v15; // r11d
  float v16; // xmm0_4
  int v17; // r8d
  float v18; // xmm0_4
  int v19; // edx
  float v20; // xmm0_4
  int v21; // ecx
  float v22; // xmm0_4
  int v23; // eax
  unsigned int v24; // ecx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // r14
  unsigned int x_low; // ecx
  unsigned int v30; // eax
  unsigned int v31; // r9d
  __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  char v34; // r13
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // r12d
  __int64 v41; // rdx
  float *v42; // rcx
  unsigned int v43; // r11d
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // r8
  int v50; // eax
  int v51; // eax
  CRegionShape *v52; // rdi
  int D2DGeometry; // eax
  int v55; // eax
  int D2DFactoryNoRef; // eax
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  MILMatrix3x2 *v60; // rcx
  __int64 v61; // r10
  unsigned int v62; // r11d
  int v63; // r8d
  int v64; // edx
  int v65; // ecx
  int v66; // eax
  int v67; // eax
  struct D2D_POINT_2F *v68; // rax
  FLOAT v69; // xmm2_4
  __int64 v70; // rdx
  float v71; // xmm0_4
  __m128 v72; // xmm3
  struct D2D_POINT_2F *v73; // rax
  FLOAT v74; // xmm2_4
  float v75; // xmm0_4
  float v76; // xmm1_4
  __int64 v77; // rdx
  __m128 v78; // xmm3
  int v79; // r9d
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  float v81; // [rsp+38h] [rbp-D0h]
  float v82; // [rsp+38h] [rbp-D0h]
  float v83; // [rsp+38h] [rbp-D0h]
  float v84; // [rsp+38h] [rbp-D0h]
  float v85; // [rsp+38h] [rbp-D0h]
  float v86; // [rsp+38h] [rbp-D0h]
  float v87; // [rsp+38h] [rbp-D0h]
  float v88; // [rsp+38h] [rbp-D0h]
  float v89; // [rsp+38h] [rbp-D0h]
  float v90; // [rsp+38h] [rbp-D0h]
  float v91; // [rsp+38h] [rbp-D0h]
  float v92; // [rsp+38h] [rbp-D0h]
  CRegionShape *v93; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v94; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1GeometrySink *v95; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_POINT_2F v96; // [rsp+58h] [rbp-B0h]
  struct CD2DFactory *v97; // [rsp+60h] [rbp-A8h] BYREF
  struct CD2DFactory *v98; // [rsp+68h] [rbp-A0h] BYREF
  struct CD2DFactory *v99[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v100; // [rsp+80h] [rbp-88h] BYREF
  float v101; // [rsp+88h] [rbp-80h]
  float v102; // [rsp+8Ch] [rbp-7Ch]
  __int128 v103; // [rsp+90h] [rbp-78h] BYREF
  __int128 v104; // [rsp+A0h] [rbp-68h] BYREF
  int *v105; // [rsp+B8h] [rbp-50h] BYREF
  int v106; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v107[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v108; // [rsp+11Ch] [rbp+14h]
  unsigned int v109; // [rsp+120h] [rbp+18h]
  struct D2D_POINT_2F v110; // [rsp+228h] [rbp+120h] BYREF
  float v111; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v113; // [rsp+238h] [rbp+130h]
  FLOAT v114; // [rsp+240h] [rbp+138h]
  float v115; // [rsp+244h] [rbp+13Ch]

  v4 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v107);
  v93 = 0LL;
  v5 = *((_QWORD *)this + 16);
  v94 = 0LL;
  v95 = 0LL;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 17) = 0LL;
  }
  v7 = *((_QWORD *)this + 58);
  v8 = v7 + *((_QWORD *)this + 59);
  while ( 1 )
  {
    if ( v7 >= v8 )
    {
      v27 = *((_QWORD *)this + 54);
      v28 = 0;
      x_low = *((_DWORD *)this + 110);
      v30 = 0;
      v100 = v27;
      LODWORD(v96.x) = x_low;
      while ( 1 )
      {
        v31 = v30 + 144;
        LODWORD(v97) = v30 + 144;
        if ( v30 + 144 > x_low )
          break;
        v32 = v27 + v30;
        v33 = *(unsigned int *)(v32 + 16);
        if ( (*(_BYTE *)(v32 + 4) & 0x20) != 0 && (_DWORD)v33 != *((_DWORD *)this + 99) )
        {
          v34 = 1;
LABEL_32:
          v35 = *((_QWORD *)this + 57);
          if ( v33 >= v35
            || (v36 = 148LL * *(unsigned int *)(v32 + 20), v36 > 0xFFFFFFFF)
            || (v37 = (unsigned int)(v36 + v33), (unsigned int)v37 < (unsigned int)v36)
            || v37 > v35 )
          {
            v79 = -2147467259;
            v80 = 1318;
            v4 = -2147467259;
            goto LABEL_133;
          }
          v38 = 0;
          v39 = *(unsigned int *)(v32 + 16) + *((_QWORD *)this + 56);
          *(_QWORD *)&v103 = v39;
          while ( 2 )
          {
            v40 = v38 + 148;
            if ( v38 + 148 > (unsigned int)v36 )
            {
              v31 = (unsigned int)v97;
              v27 = v100;
              goto LABEL_57;
            }
            if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v39 + v38 + 16)) )
            {
              MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v42, (const struct MilRectF *)v41, (struct MilRectF *)v99);
              if ( IsPixelAligned((const struct MilRectF *)v99) )
              {
                if ( (v43 & HIDWORD(v99[1])) > 0x497FFFF0 )
                {
                  *(float *)&a3 = (float)(int)*((float *)&v99[1] + 1) - *((float *)&v99[1] + 1);
                  *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
                  v44 = (int)*((float *)&v99[1] + 1) - LODWORD(a3);
                }
                else
                {
                  v85 = *((float *)&v99[1] + 1) + 6291456.25;
                  v44 = (int)(LODWORD(v85) << 10) >> 11;
                }
                if ( (unsigned __int64)(v43 & (__int64)v99[1]) > 0x497FFFF0 )
                {
                  *(float *)&a3 = (float)(int)*(float *)&v99[1] - *(float *)&v99[1];
                  *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
                  v45 = (int)*(float *)&v99[1] - LODWORD(a3);
                }
                else
                {
                  v86 = *(float *)&v99[1] + 6291456.25;
                  v45 = (int)(LODWORD(v86) << 10) >> 11;
                }
                if ( (v43 & HIDWORD(v99[0])) > 0x497FFFF0 )
                {
                  *(float *)&a3 = (float)(int)*((float *)v99 + 1) - *((float *)v99 + 1);
                  *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
                  v46 = (int)*((float *)v99 + 1) - LODWORD(a3);
                }
                else
                {
                  v87 = *((float *)v99 + 1) + 6291456.25;
                  v46 = (int)(LODWORD(v87) << 10) >> 11;
                }
                if ( (unsigned __int64)(v43 & (__int64)v99[0]) > 0x497FFFF0 )
                {
                  *(float *)&a3 = (float)(int)*(float *)v99 - *(float *)v99;
                  *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
                  v47 = (int)*(float *)v99 - LODWORD(a3);
                }
                else
                {
                  v88 = *(float *)v99 + 6291456.25;
                  v47 = (int)(LODWORD(v88) << 10) >> 11;
                }
                *(_QWORD *)&v104 = __PAIR64__(v46, v47);
                *((_QWORD *)&v104 + 1) = __PAIR64__(v44, v45);
                v48 = v109 + 1;
                if ( v109 + 1 < v109 )
                {
                  v4 = -2147024362;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                }
                else
                {
                  v4 = 0;
                  if ( v48 <= v108 )
                  {
                    *(_OWORD *)(v107[0] + 16LL * v109) = v104;
                    v109 = v48;
LABEL_51:
                    v39 = v103;
                    v38 = v40;
                    continue;
                  }
                  v55 = DynArrayImpl<0>::AddMultipleAndSet(v107, 16LL, 1LL, &v104);
                  v4 = v55;
                  if ( v55 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0xC0u);
                }
                if ( v4 < 0 )
                {
                  v80 = 1348;
                  v79 = v4;
                  goto LABEL_133;
                }
                goto LABEL_51;
              }
              *(_OWORD *)&a3 = LODWORD(v99[0]);
              y = *((float *)v99 + 1);
              v115 = *((float *)&v99[1] + 1);
              v110 = (struct D2D_POINT_2F)v99[0];
              v111 = *(float *)&v99[1];
              v113 = (unsigned __int64)v99[1];
              v114 = *(float *)v99;
            }
            else
            {
              v73 = &v110;
              v74 = *(float *)v41;
              v75 = *(float *)(v41 + 8);
              v110.y = *(FLOAT *)(v41 + 4);
              y = v110.y;
              v76 = *(float *)(v41 + 12);
              v77 = 4LL;
              v115 = v76;
              v110.x = v74;
              v111 = v75;
              v113 = __PAIR64__(LODWORD(v76), LODWORD(v75));
              v114 = v74;
              do
              {
                v78 = (__m128)HIDWORD(*(unsigned __int64 *)v73);
                *(__m128 *)&a3 = v78;
                *(float *)&a3 = (float)((float)(COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)v73)) * v42[2])
                                      + (float)(COERCE_FLOAT(*v73) * *v42))
                              + v42[4];
                v78.m128_f32[0] = (float)((float)(COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)v73)) * v42[3])
                                        + (float)(COERCE_FLOAT(*v73) * v42[1]))
                                + v42[5];
                *v73++ = (struct D2D_POINT_2F)_mm_unpacklo_ps(*(__m128 *)&a3, v78).m128_u64[0];
                --v77;
              }
              while ( v77 );
            }
            break;
          }
          if ( !v94 )
          {
            D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v42, &v98);
            v4 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v80 = 1397;
              goto LABEL_151;
            }
            D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v98 + 3) + 80LL))(
                                *((_QWORD *)v98 + 3),
                                &v94);
            v4 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v80 = 1399;
              goto LABEL_151;
            }
            D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v94 + 136LL))(
                                v94,
                                &v95);
            v4 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v80 = 1401;
              goto LABEL_151;
            }
            (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v95 + 24LL))(v95, 1LL);
          }
          CPrimitiveGroup::AddFilledPolygonToD2DSink(v95, &v110);
          goto LABEL_51;
        }
        v34 = 0;
        if ( !v28 && (*(_BYTE *)(v32 + 4) & 2) == 0 )
          goto LABEL_32;
LABEL_57:
        x_low = LODWORD(v96.x);
        if ( (*(_BYTE *)(v32 + 4) & 0x20) != 0 )
          v28 = v34;
        v30 = v31;
      }
      if ( v95 )
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v95 + 72LL))(v95);
        v4 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef < 0 )
        {
          v80 = 1423;
LABEL_151:
          v79 = D2DFactoryNoRef;
          goto LABEL_133;
        }
        v57 = v94;
        v94 = 0LL;
        *((_QWORD *)this + 17) = v57;
      }
      v49 = v109;
      if ( v109 )
      {
        v106 = 0;
        v105 = &v106;
        v50 = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)&v105);
        v4 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x59Bu);
        }
        else
        {
          v51 = CRegionShape::Create((const struct CRegion *)&v105, &v93);
          v4 = v51;
          if ( v51 >= 0 )
          {
            v52 = v93;
            D2DGeometry = CRegionShape::GetD2DGeometry(v93, 0LL, (struct ID2D1Geometry **)this + 16);
            v4 = D2DGeometry;
            if ( D2DGeometry < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x5A1u);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
              goto LABEL_67;
            }
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
LABEL_66:
            *((_BYTE *)this + 144) = 1;
            goto LABEL_67;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x59Du);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v105);
        goto LABEL_136;
      }
      v52 = v93;
      goto LABEL_66;
    }
    v11 = (_BYTE *)(v7 + 16);
    v12 = (const struct MilRectF *)v7;
    v7 += 17LL;
    if ( (unsigned __int64)v11 > v8 || v7 > v8 )
      break;
    if ( *v11 )
    {
      v60 = (MILMatrix3x2 *)v7;
      v7 += 24LL;
      if ( v7 > v8 )
      {
        v80 = 1172;
        goto LABEL_131;
      }
      if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v60) )
      {
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v13, (const struct MilRectF *)v61, (struct MilRectF *)&v100);
        if ( !IsPixelAligned((const struct MilRectF *)&v100) )
        {
          *(_OWORD *)&a3 = (unsigned int)v100;
          v9 = v101;
          v110.y = *((FLOAT *)&v100 + 1);
          y = *((float *)&v100 + 1);
          v10 = v102;
          goto LABEL_7;
        }
        if ( (v62 & LODWORD(v102)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v102 - v102;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v63 = (int)v102 - LODWORD(a3);
        }
        else
        {
          v89 = v102 + 6291456.25;
          v63 = (int)(LODWORD(v89) << 10) >> 11;
        }
        if ( (v62 & LODWORD(v101)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v101 - v101;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v64 = (int)v101 - LODWORD(a3);
        }
        else
        {
          v90 = v101 + 6291456.25;
          v64 = (int)(LODWORD(v90) << 10) >> 11;
        }
        if ( (v62 & HIDWORD(v100)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)&v100 + 1) - *((float *)&v100 + 1);
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v65 = (int)*((float *)&v100 + 1) - LODWORD(a3);
        }
        else
        {
          v91 = *((float *)&v100 + 1) + 6291456.25;
          v65 = (int)(LODWORD(v91) << 10) >> 11;
        }
        if ( (v62 & (unsigned int)v100) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)&v100 - *(float *)&v100;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v66 = (int)*(float *)&v100 - LODWORD(a3);
        }
        else
        {
          v92 = *(float *)&v100 + 6291456.25;
          v66 = (int)(LODWORD(v92) << 10) >> 11;
        }
        v99[0] = (struct CD2DFactory *)__PAIR64__(v65, v66);
        v26 = v109;
        v99[1] = (struct CD2DFactory *)__PAIR64__(v63, v64);
        v24 = v109 + 1;
        if ( v109 + 1 >= v109 )
        {
          v4 = 0;
          if ( v24 > v108 )
          {
            v67 = DynArrayImpl<0>::AddMultipleAndSet(v107, 16LL, 1LL, v99);
            v4 = v67;
            if ( v67 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0xC0u);
            goto LABEL_113;
          }
          v25 = *(_OWORD *)v99;
LABEL_26:
          *(_OWORD *)(v107[0] + 16 * v26) = v25;
          v109 = v24;
        }
        else
        {
          v4 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_113:
          if ( v4 < 0 )
          {
            v80 = 1191;
            goto LABEL_124;
          }
        }
      }
      else
      {
        v68 = &v110;
        v69 = *(float *)v61;
        v70 = 4LL;
        v71 = *(float *)(v61 + 8);
        v110.y = *(FLOAT *)(v61 + 4);
        y = v110.y;
        HIDWORD(v113) = *(_DWORD *)(v61 + 12);
        v115 = *((float *)&v113 + 1);
        v110.x = v69;
        v111 = v71;
        *(float *)&v113 = v71;
        v114 = v69;
        do
        {
          v96 = *v68;
          v72 = (__m128)LODWORD(v96.x);
          *(_OWORD *)&a3 = LODWORD(v96.x);
          *(float *)&a3 = (float)((float)(v96.x * *v13) + (float)(v96.y * v13[2])) + v13[4];
          v72.m128_f32[0] = (float)((float)(v96.x * v13[1]) + (float)(v96.y * v13[3])) + v13[5];
          *v68++ = (struct D2D_POINT_2F)_mm_unpacklo_ps(*(__m128 *)&a3, v72).m128_u64[0];
          --v70;
        }
        while ( v70 );
LABEL_8:
        if ( v94 )
          goto LABEL_9;
        v58 = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v13, &v97);
        v4 = v58;
        if ( v58 < 0 )
        {
          v80 = 1269;
          goto LABEL_129;
        }
        v58 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v97 + 3) + 80LL))(*((_QWORD *)v97 + 3), &v94);
        v4 = v58;
        if ( v58 < 0 )
        {
          v80 = 1271;
          goto LABEL_129;
        }
        v58 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v94 + 136LL))(v94, &v95);
        v4 = v58;
        if ( v58 < 0 )
        {
          v80 = 1273;
LABEL_129:
          v79 = v58;
          goto LABEL_133;
        }
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v95 + 24LL))(v95, 1LL);
LABEL_9:
        CPrimitiveGroup::AddFilledPolygonToD2DSink(v95, &v110);
      }
    }
    else
    {
      if ( !IsPixelAligned(v12) )
      {
        *(_OWORD *)&a3 = *(unsigned int *)v14;
        v9 = v14[2];
        v110.y = v14[1];
        y = v110.y;
        v10 = v14[3];
LABEL_7:
        v115 = v10;
        v114 = *(float *)&a3;
        v113 = __PAIR64__(LODWORD(v10), LODWORD(v9));
        v111 = v9;
        v110.x = *(FLOAT *)&a3;
        goto LABEL_8;
      }
      v16 = v14[3];
      if ( (v15 & LODWORD(v16)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v16 - v16;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v17 = (int)v16 - LODWORD(a3);
      }
      else
      {
        v81 = v16 + 6291456.25;
        v17 = (int)(LODWORD(v81) << 10) >> 11;
      }
      v18 = v14[2];
      if ( (v15 & LODWORD(v18)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v18 - v18;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v19 = (int)v18 - LODWORD(a3);
      }
      else
      {
        v82 = v18 + 6291456.25;
        v19 = (int)(LODWORD(v82) << 10) >> 11;
      }
      v20 = v14[1];
      if ( (v15 & LODWORD(v20)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v20 - v20;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v21 = (int)v20 - LODWORD(a3);
      }
      else
      {
        v83 = v20 + 6291456.25;
        v21 = (int)(LODWORD(v83) << 10) >> 11;
      }
      v22 = *v14;
      if ( (v15 & *(_DWORD *)v14) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v22 - v22;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v23 = (int)v22 - LODWORD(a3);
      }
      else
      {
        v84 = v22 + 6291456.25;
        v23 = (int)(LODWORD(v84) << 10) >> 11;
      }
      *(_QWORD *)&v103 = __PAIR64__(v21, v23);
      *((_QWORD *)&v103 + 1) = __PAIR64__(v17, v19);
      v24 = v109 + 1;
      if ( v109 + 1 < v109 )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        v4 = 0;
        if ( v24 <= v108 )
        {
          v25 = v103;
          v26 = v109;
          goto LABEL_26;
        }
        v59 = DynArrayImpl<0>::AddMultipleAndSet(v107, 16LL, 1LL, &v103);
        v4 = v59;
        if ( v59 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xC0u);
      }
      if ( v4 < 0 )
      {
        v80 = 1242;
LABEL_124:
        v79 = v4;
        goto LABEL_133;
      }
    }
  }
  v80 = 1161;
LABEL_131:
  v79 = -2147467259;
  v4 = -2147467259;
LABEL_133:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, v80);
LABEL_136:
  v52 = v93;
LABEL_67:
  if ( v95 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v95 + 16LL))(v95);
  if ( v94 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
  if ( v52 )
    CRegionShape::`vector deleting destructor'(v52, 1u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v107, v27, v49);
  return (unsigned int)v4;
}
