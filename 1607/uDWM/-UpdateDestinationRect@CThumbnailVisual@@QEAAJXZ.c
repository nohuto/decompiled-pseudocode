/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180016980
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800092A8 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180016068 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x1800160AC (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800160D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001684C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D784 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D79C (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  char IsImmersiveIconic; // r12
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r9
  bool v8; // r15
  int v9; // esi
  int v10; // r14d
  __int64 v11; // rax
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
  __m128i v41; // xmm0
  __int64 v42; // rax
  int v43; // eax
  CSecondaryWindowRepresentation *v44; // rcx
  int v45; // eax
  signed int v46; // ecx
  int v47; // eax
  __m128i v48; // xmm1
  signed int v49; // ecx
  int RectangleGeometry; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // edx
  __int128 v54; // [rsp+38h] [rbp-29h] BYREF
  __m128i v55; // [rsp+48h] [rbp-19h] BYREF
  int v56[4]; // [rsp+58h] [rbp-9h] BYREF
  float v57; // [rsp+68h] [rbp+7h] BYREF
  float v58; // [rsp+6Ch] [rbp+Bh]
  float v59; // [rsp+70h] [rbp+Fh]
  float v60; // [rsp+74h] [rbp+13h]

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 44);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v55 = 0LL;
  v8 = *(_BYTE *)(v5 + 34) == 0;
  if ( !*(_BYTE *)(v5 + 34) )
  {
    if ( v5 )
    {
      v25 = *(_DWORD **)(v5 + 16);
      if ( v25 )
      {
        v26 = v25[49];
        v55.m128i_i32[0] = -*((_DWORD *)this + 26);
        v27 = v26 - v25[47];
        v55.m128i_i32[1] = -*((_DWORD *)this + 27);
        v28 = 0;
        if ( v27 < 0 )
          v27 = 0;
        v29 = v27 - v25[60] - v25[59];
        if ( v29 > 0 )
          v28 = v29;
        v30 = v25[50] - v25[48];
        v55.m128i_i32[2] = v28;
        v31 = 0;
        if ( v30 < 0 )
          v30 = 0;
        v32 = v30 - v25[62] - v25[61];
        if ( v32 > 0 )
          v31 = v32;
        v55.m128i_i32[3] = v31;
        v6 = _mm_loadu_si128(&v55);
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
    *((_QWORD *)&v54 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v54 = 0LL;
    if ( v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 458) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
    if ( IsImmersiveIconic )
    {
      v33 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x223u);
        return v2;
      }
      v34 = (float)(v9 / 2
                  - (int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 45))
                  / 2);
      v57 = v34;
      IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v35);
      v38 = (float)(v10 / v37 - IconicHeight / v37);
      v58 = v38;
      v59 = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v39) + v34;
      v41 = _mm_cvtsi32_si128(CSecondaryWindowRepresentation::GetIconicHeight(v40));
      v42 = *((_QWORD *)this + 48);
      v60 = _mm_cvtepi32_ps(v41).m128_f32[0] + v38;
      v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(v42 + 16) + 288LL))(
              *(_QWORD *)(v42 + 16),
              *(unsigned int *)(v42 + 24),
              &v57);
      v2 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x22Du);
        return v2;
      }
    }
    else
    {
      v11 = *((_QWORD *)this + 48);
      v57 = 0.0;
      v58 = 0.0;
      v59 = (float)v9 + 0.0;
      v60 = (float)v10 + 0.0;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(v11 + 16) + 288LL))(
              *(_QWORD *)(v11 + 16),
              *(unsigned int *)(v11 + 24),
              &v57);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x23Au);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 56);
    if ( v13 && *((_BYTE *)this + 458) )
      goto LABEL_20;
    memset(v56, 0, sizeof(v56));
    if ( IsImmersiveIconic )
    {
      IconicWidth = (double)(int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this
                                                                                + 45));
      *(double *)v56 = IconicWidth;
      v16 = CSecondaryWindowRepresentation::GetIconicHeight(v44);
    }
    else
    {
      if ( v13 )
      {
        v45 = *((_DWORD *)this + 74) - *((_DWORD *)this + 72);
        v46 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 34);
        if ( v45 < 0 )
          v45 = 0;
        if ( v45 < v46 )
          v46 = v45;
        v47 = *((_DWORD *)this + 75) - *((_DWORD *)this + 73);
        if ( v47 < 0 )
          v47 = 0;
        v48 = _mm_cvtsi32_si128(v46);
        v49 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 35);
        *(_QWORD *)&IconicWidth = *(_OWORD *)&_mm_cvtepi32_pd(v48);
        if ( v47 < v49 )
          v49 = v47;
        v18 = _mm_cvtsi32_si128(v49);
        *(double *)v56 = IconicWidth;
LABEL_17:
        *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
        *(double *)&v56[2] = v19;
        if ( !*((_BYTE *)this + 458)
          || (*((double *)this + 58) != IconicWidth || *((double *)this + 59) != v19)
          && (*(_DWORD *)(*((_QWORD *)this + 44) + 36LL) & 0x100000) == 0 )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(*((_QWORD *)this + 49) + 16LL) + 296LL))(
                  *(_QWORD *)(*((_QWORD *)this + 49) + 16LL),
                  *(unsigned int *)(*((_QWORD *)this + 49) + 24LL),
                  v56);
          v2 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x25Eu);
            return v2;
          }
          v21 = *(_OWORD *)v56;
          *((_BYTE *)this + 458) = 1;
          *((_OWORD *)this + 29) = v21;
        }
LABEL_20:
        if ( v8 )
          IntersectRectT<MilPointAndSizeL>(v56, (int *)&v54, v55.m128i_i32);
        else
          *(_OWORD *)v56 = v54;
        if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 51) )
        {
          RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                (unsigned int)v56[0],
                                (unsigned int)v56[1],
                                (unsigned int)v56[2],
                                (unsigned int)v56[3],
                                (struct CResource **)this + 51);
          v2 = RectangleGeometry;
          if ( RectangleGeometry < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, RectangleGeometry, 0x274u);
            return v2;
          }
          v51 = *((_DWORD *)this + 28);
          v52 = *((_DWORD *)this + 29);
          LODWORD(v54) = *((_DWORD *)this + 120);
          DWORD1(v54) = v54;
          v53 = v52 - 2 * v54;
          DWORD2(v54) = v51 - 2 * v54;
          HIDWORD(v54) = v53;
          if ( SDWORD2(v54) > 0 && v53 > 0 )
          {
            if ( v8 )
              IntersectRectT<MilPointAndSizeL>(v56, (int *)&v54, v55.m128i_i32);
            else
              *(_OWORD *)v56 = v54;
          }
        }
        *(_OWORD *)((char *)this + 484) = v54;
        *(__m128i *)((char *)this + 516) = v6;
        v22 = (struct CResource **)((char *)this + 400);
        if ( *v22 )
        {
          v23 = ResourceHelper::CreateRectangleGeometry(
                  (unsigned int)v56[0],
                  (unsigned int)v56[1],
                  (unsigned int)v56[2],
                  (unsigned int)v56[3],
                  v22);
          v2 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x28Du);
        }
        return v2;
      }
      v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 34);
      if ( v9 < v14 )
        v14 = v9;
      v15 = _mm_cvtsi32_si128(v14);
      v16 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 35);
      *(_QWORD *)&IconicWidth = *(_OWORD *)&_mm_cvtepi32_pd(v15);
      if ( v10 < v16 )
        v16 = v10;
      *(double *)v56 = IconicWidth;
    }
    v18 = _mm_cvtsi32_si128(v16);
    goto LABEL_17;
  }
  return v2;
}
