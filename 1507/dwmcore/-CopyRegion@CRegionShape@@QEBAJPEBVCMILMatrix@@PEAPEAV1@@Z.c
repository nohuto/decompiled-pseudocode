/*
 * XREFs of ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18014A7A0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180119B28 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x1801219E0 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078740 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18014ABB0 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CRegionShape::CopyRegion(
        struct ID2D1RegionGeometry **this,
        const struct CMILMatrix *a2,
        struct CRegionShape **a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned int RectCount; // eax
  __int64 v8; // rsi
  unsigned int v9; // esi
  __int64 v10; // rdi
  Mesh::MeshLine *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ebx
  float v15; // xmm1_4
  __m128i v16; // xmm0
  float v17; // xmm1_4
  __int64 v18; // r11
  CRegionShape *v19; // rax
  CRegionShape *v20; // rbx
  unsigned int v21; // eax
  int v22; // eax
  int v23; // eax
  int v26[2]; // [rsp+38h] [rbp-28h] BYREF
  float v27; // [rsp+40h] [rbp-20h]
  float v28; // [rsp+44h] [rbp-1Ch]
  __int128 v29; // [rsp+48h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  if ( a2 && !D2DMatrixIsIdentity(a2) && this[1] )
  {
    RectCount = CRegionShape::GetRectCount((CRegionShape *)this);
    v8 = 16LL * RectCount;
    if ( !is_mul_ok(RectCount, 0x10uLL) )
      v8 = -1LL;
    v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           v8);
    if ( v3 )
    {
      *(_QWORD *)v26 = (unsigned int)CRegionShape::GetRectCount((CRegionShape *)this);
      v10 = 16LL * *(_QWORD *)v26;
      if ( !is_mul_ok(*(unsigned __int64 *)v26, 0x10uLL) )
        v10 = -1LL;
      v11 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                v10);
      v4 = (__int64)v11;
      if ( v11 )
        `vector constructor iterator'(
          v11,
          16LL,
          v26[0],
          (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
      else
        v4 = 0LL;
      if ( v4 )
      {
        v12 = *(_QWORD *)this[1];
        v13 = (unsigned int)CRegionShape::GetRectCount((CRegionShape *)this);
        (*(void (__fastcall **)(struct ID2D1RegionGeometry *, __int64, __int64))(v12 + 144))(this[1], v3, v13);
        v14 = 0;
        while ( v14 < (unsigned int)CRegionShape::GetRectCount((CRegionShape *)this) )
        {
          v15 = (float)*(int *)(v3 + 16LL * v14 + 4);
          *(float *)v26 = (float)*(int *)(v3 + 16LL * v14);
          v16 = _mm_cvtsi32_si128(*(_DWORD *)(v3 + 16LL * v14 + 8));
          *(float *)&v26[1] = v15;
          v17 = (float)*(int *)(v3 + 16LL * v14 + 12);
          LODWORD(v27) = _mm_cvtepi32_ps(v16).m128_u32[0];
          v28 = v17;
          CBaseMatrix::Transform2DBounds(a2, (const struct MilRectF *)v26, (struct MilRectF *)v26);
          ++v14;
          DWORD1(v29) = (int)*(float *)&v26[1];
          LODWORD(v29) = (int)*(float *)v26;
          DWORD2(v29) = (int)v27;
          HIDWORD(v29) = (int)v28;
          *(_OWORD *)(v4 + 8 * v18) = v29;
        }
        v19 = (CRegionShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                16LL);
        v20 = v19;
        if ( v19 )
        {
          *((_QWORD *)v19 + 1) = 0LL;
          *(_QWORD *)v19 = &CRegionShape::`vftable';
        }
        else
        {
          v20 = 0LL;
        }
        if ( v20 )
        {
          v21 = CRegionShape::GetRectCount((CRegionShape *)this);
          v22 = CRegionShape::BuildFromRects(v20, v4, v21);
          v9 = v22;
          if ( v22 >= 0 )
          {
            *a3 = v20;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x4Bu);
            CRegionShape::`vector deleting destructor'(v20, 1);
          }
        }
        else
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x46u);
        }
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x33u);
      }
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x32u);
    }
  }
  else
  {
    v23 = CRegionShape::Create(this[1], a3);
    v9 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x2Cu);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v3);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return v9;
}
