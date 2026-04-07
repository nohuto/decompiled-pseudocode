/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18001969C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180018AB4 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180018AF8 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180018B1C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001956C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x180040FAC (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB0C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB24 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  char IsImmersiveIconic; // r12
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r11
  bool v8; // r15
  int v9; // esi
  int v10; // r14d
  CResource *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  signed int v14; // eax
  __m128i v15; // xmm1
  signed int v16; // eax
  double IconicWidth; // xmm1_8
  __m128i v18; // xmm2
  double v19; // xmm2_8
  int v20; // eax
  __int128 v21; // xmm0
  struct CResource **v22; // rbx
  int v23; // eax
  _DWORD *v25; // r8
  int v26; // ecx
  int v27; // ecx
  __int32 v28; // eax
  int v29; // ecx
  int v30; // ecx
  __int32 v31; // eax
  int v32; // ecx
  int v33; // eax
  float v34; // xmm2_4
  CSecondaryWindowRepresentation *v35; // r9
  int IconicHeight; // eax
  int v37; // r10d
  float v38; // xmm1_4
  CSecondaryWindowRepresentation *v39; // rcx
  CSecondaryWindowRepresentation *v40; // rcx
  int v41; // eax
  CResource *v42; // rcx
  int v43; // r10d
  int v44; // eax
  CSecondaryWindowRepresentation *v45; // rcx
  int v46; // eax
  signed int v47; // ecx
  int v48; // eax
  __m128i v49; // xmm1
  signed int v50; // ecx
  int RectangleGeometry; // eax
  int v52; // ecx
  int v53; // edx
  int v54; // edx
  __int128 v55; // [rsp+38h] [rbp-39h] BYREF
  __m128i v56; // [rsp+48h] [rbp-29h] BYREF
  _OWORD v57[2]; // [rsp+58h] [rbp-19h] BYREF
  int v58; // [rsp+78h] [rbp+7h] BYREF
  __int64 v59; // [rsp+7Ch] [rbp+Bh]
  __int64 v60; // [rsp+84h] [rbp+13h]
  float v61; // [rsp+8Ch] [rbp+1Bh]

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 44);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v56 = 0LL;
  v8 = *(_BYTE *)(v5 + 34) == 0;
  if ( !*(_BYTE *)(v5 + 34) )
  {
    if ( v5 )
    {
      v25 = *(_DWORD **)(v5 + 16);
      if ( v25 )
      {
        v26 = v25[49];
        v56.m128i_i32[0] = -*((_DWORD *)this + 26);
        v27 = v26 - v25[47];
        v56.m128i_i32[1] = -*((_DWORD *)this + 27);
        v28 = 0;
        if ( v27 < 0 )
          v27 = 0;
        v29 = v27 - v25[60] - v25[59];
        if ( v29 > 0 )
          v28 = v29;
        v30 = v25[50] - v25[48];
        v56.m128i_i32[2] = v28;
        v31 = 0;
        if ( v30 < 0 )
          v30 = 0;
        v32 = v30 - v25[62] - v25[61];
        if ( v32 > 0 )
          v31 = v32;
        v56.m128i_i32[3] = v31;
        v6 = _mm_loadu_si128(&v56);
      }
    }
  }
  if ( v7 )
  {
    *(__m128i *)((char *)this + 516) = v6;
    return v2;
  }
  if ( *((_QWORD *)this + 48) && *((_QWORD *)this + 49) )
  {
    v9 = *((_DWORD *)this + 28);
    v10 = *((_DWORD *)this + 29);
    *((_QWORD *)&v55 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v55 = 0LL;
    if ( v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 458) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
    v58 = 35;
    v59 = 0LL;
    v60 = 0LL;
    if ( IsImmersiveIconic )
    {
      v61 = 0.0;
      v33 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x224u);
        return v2;
      }
      v34 = (float)(v9 / 2
                  - (int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 45))
                  / 2);
      *((float *)&v59 + 1) = v34;
      IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v35);
      v38 = (float)(v10 / v37 - IconicHeight / v37);
      *(float *)&v60 = v38;
      *((float *)&v60 + 1) = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v39) + v34;
      v41 = CSecondaryWindowRepresentation::GetIconicHeight(v40);
      v42 = (CResource *)*((_QWORD *)this + 48);
      v61 = (float)v41 + v38;
      v44 = CResource::Send(v42, &v58, v43 + 22);
      v2 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x22Au);
        return v2;
      }
    }
    else
    {
      v11 = (CResource *)*((_QWORD *)this + 48);
      HIDWORD(v59) = 0;
      LODWORD(v60) = 0;
      *((float *)&v60 + 1) = (float)v9 + 0.0;
      v61 = (float)v10 + 0.0;
      v12 = CResource::Send(v11, &v58, 0x18u);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x234u);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 56);
    if ( v13 && *((_BYTE *)this + 458) )
      goto LABEL_20;
    LODWORD(v57[0]) = 36;
    memset((char *)v57 + 4, 0, 20);
    if ( IsImmersiveIconic )
    {
      IconicWidth = (double)(int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this
                                                                                + 45));
      *((double *)v57 + 1) = IconicWidth;
      v16 = CSecondaryWindowRepresentation::GetIconicHeight(v45);
    }
    else
    {
      if ( v13 )
      {
        v46 = *((_DWORD *)this + 74) - *((_DWORD *)this + 72);
        v47 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
        if ( v46 < 0 )
          v46 = 0;
        if ( v46 < v47 )
          v47 = v46;
        v48 = *((_DWORD *)this + 75) - *((_DWORD *)this + 73);
        if ( v48 < 0 )
          v48 = 0;
        v49 = _mm_cvtsi32_si128(v47);
        v50 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
        *(_QWORD *)&IconicWidth = *(_OWORD *)&_mm_cvtepi32_pd(v49);
        if ( v48 < v50 )
          v50 = v48;
        v18 = _mm_cvtsi32_si128(v50);
        *((double *)v57 + 1) = IconicWidth;
LABEL_17:
        *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
        *(double *)&v57[1] = v19;
        if ( !*((_BYTE *)this + 458)
          || (*((double *)this + 58) != IconicWidth || *((double *)this + 59) != v19)
          && (*(_DWORD *)(*((_QWORD *)this + 44) + 36LL) & 0x100000) == 0 )
        {
          v20 = CResource::Send(*((CResource **)this + 49), v57, 0x18u);
          v2 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x255u);
            return v2;
          }
          v21 = *(_OWORD *)((char *)v57 + 8);
          *((_BYTE *)this + 458) = 1;
          *((_OWORD *)this + 29) = v21;
        }
LABEL_20:
        if ( v8 )
          IntersectRectT<MilPointAndSizeL>(v57, &v55, &v56);
        else
          v57[0] = v55;
        if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 51) )
        {
          RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                v57[0],
                                SDWORD1(v57[0]),
                                SDWORD2(v57[0]),
                                SHIDWORD(v57[0]),
                                (struct CResource **)this + 51);
          v2 = RectangleGeometry;
          if ( RectangleGeometry < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x26Bu);
            return v2;
          }
          v52 = *((_DWORD *)this + 28);
          v53 = *((_DWORD *)this + 29);
          LODWORD(v55) = *((_DWORD *)this + 120);
          DWORD1(v55) = v55;
          v54 = v53 - 2 * v55;
          DWORD2(v55) = v52 - 2 * v55;
          HIDWORD(v55) = v54;
          if ( SDWORD2(v55) > 0 && v54 > 0 )
          {
            if ( v8 )
              IntersectRectT<MilPointAndSizeL>(v57, &v55, &v56);
            else
              v57[0] = v55;
          }
        }
        *(_OWORD *)((char *)this + 484) = v55;
        *(__m128i *)((char *)this + 516) = v6;
        v22 = (struct CResource **)((char *)this + 400);
        if ( *v22 )
        {
          v23 = ResourceHelper::CreateRectangleGeometry(v57[0], SDWORD1(v57[0]), SDWORD2(v57[0]), SHIDWORD(v57[0]), v22);
          v2 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x284u);
        }
        return v2;
      }
      v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
      if ( v9 < v14 )
        v14 = v9;
      v15 = _mm_cvtsi32_si128(v14);
      v16 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
      *(_QWORD *)&IconicWidth = *(_OWORD *)&_mm_cvtepi32_pd(v15);
      if ( v10 < v16 )
        v16 = v10;
      *((double *)v57 + 1) = IconicWidth;
    }
    v18 = _mm_cvtsi32_si128(v16);
    goto LABEL_17;
  }
  return v2;
}
