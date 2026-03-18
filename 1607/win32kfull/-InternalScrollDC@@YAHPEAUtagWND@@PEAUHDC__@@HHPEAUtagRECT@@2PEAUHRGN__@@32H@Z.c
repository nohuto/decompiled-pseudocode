/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C005CF20
 * Callers:
 *     _ScrollDC @ 0x1C005CDF4 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreTransformPoints @ 0x1C00FB364 (GreTransformPoints.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 *     SubtractRect @ 0x1C0113BD0 (SubtractRect.c)
 *     GetDCOrgOnScreen @ 0x1C0125BF8 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C014BE30 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  HRGN v11; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int ClipBox; // r14d
  __m128i *v16; // rcx
  __m128i v17; // xmm6
  int v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // r8d
  unsigned int v23; // eax
  HRGN v24; // rdi
  int v25; // eax
  struct tagRECT v26; // xmm0
  __int64 v27; // rax
  int v28; // edx
  int v29; // r9d
  LONG v30; // r8d
  int v31; // r10d
  int v32; // edi
  __int64 v33; // rbx
  HRGN EmptyRgn; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h]
  HRGN v38; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-78h]
  _DWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  unsigned int v44; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C4h] [rbp-3Ch]
  unsigned int v48; // [rsp+C8h] [rbp-38h]
  unsigned int v49; // [rsp+CCh] [rbp-34h]
  __m128i v50; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int128 v53; // [rsp+F0h] [rbp-10h] BYREF
  int v54; // [rsp+100h] [rbp+0h] BYREF
  int v55; // [rsp+108h] [rbp+8h]
  struct tagRECT v56; // [rsp+110h] [rbp+10h] BYREF
  __int128 v57; // [rsp+120h] [rbp+20h] BYREF
  __m128i v58; // [rsp+130h] [rbp+30h]

  v11 = a8;
  v13 = 0LL;
  v45 = a5;
  v38 = a7;
  v39 = a3;
  v40[0] = 0;
  EmptyRgn = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v14 = *gpDispInfo;
  v43 = 0LL;
  v36 = 0LL;
  v37 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v14, a2) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v54, 1LL);
  if ( !ClipBox )
    goto LABEL_106;
  v16 = (__m128i *)&v54;
  if ( v45 )
    v16 = (__m128i *)v45;
  v17 = *v16;
  v50 = *v16;
  if ( a6 )
    v57 = (__int128)*a6;
  v44 = a4;
  LODWORD(v45) = a3;
  if ( a10 )
  {
    GreTransformPoints(a2, 1);
    GreTransformPoints(a2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v18 = v54;
      v54 = v55;
      v55 = v18;
      v19 = v50.m128i_i32[0];
      v50.m128i_i32[0] = v50.m128i_i32[2];
      v50.m128i_i32[2] = v19;
      v40[0] = 1;
    }
    if ( a6 )
    {
      GreTransformPoints(a2, 1);
      if ( v40[0] )
      {
        v20 = v57;
        LODWORD(v57) = DWORD2(v57);
        DWORD2(v57) = v20;
      }
    }
    v47 = 0;
    v46 = 0;
    v49 = a4;
    v48 = a3;
    GreTransformPoints(a2, 1);
    v17 = v50;
    v39 = a3;
  }
  if ( ClipBox == 1 )
  {
LABEL_23:
    if ( !a8 || (unsigned int)SetEmptyRgn(a8) )
    {
      if ( a9 )
      {
        *(_QWORD *)&a9->left = 0LL;
        *(_QWORD *)&a9->right = 0LL;
      }
      GreUnlockVisRgn(*gpDispInfo);
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v41);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      return 1LL;
    }
    goto LABEL_106;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn();
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_106;
    v17 = v50;
    v21 = 1;
    v37 = 1;
  }
  else
  {
    v21 = 0;
  }
  LODWORD(v53) = a3 + _mm_cvtsi128_si32(v17);
  DWORD2(v53) = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  DWORD1(v53) = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
  HIDWORD(v53) = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 12));
  if ( !a6 )
  {
LABEL_36:
    if ( ClipBox != 2 )
      goto LABEL_72;
    goto LABEL_37;
  }
  if ( ClipBox != 2 || (unsigned __int64)v38 > 1 )
  {
    if ( !v21 )
    {
      EmptyRgn = (HRGN)CreateEmptyRgn();
      if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
        goto LABEL_106;
      v37 = 1;
    }
    v41 = CreateEmptyRgn();
    SetRectRgnIndirect(v41, &v57);
    v23 = GreCombineRgn(EmptyRgn, v41, EmptyRgn, 1LL);
    ClipBox = v23;
    switch ( v23 )
    {
      case 0u:
        goto LABEL_106;
      case 1u:
        goto LABEL_23;
      case 2u:
        v24 = EmptyRgn;
        GreGetRgnBox(EmptyRgn, &v54);
        v17 = v50;
        goto LABEL_38;
    }
    v17 = v50;
    goto LABEL_36;
  }
  if ( !(unsigned int)IntersectRect(&v54, &v54, &v57) )
    goto LABEL_23;
LABEL_37:
  v24 = EmptyRgn;
LABEL_38:
  if ( (unsigned __int64)v38 <= 1 )
  {
    v58 = v17;
    IntersectRect(&v53, &v53, &v54);
    v25 = IntersectRect(&v50, &v50, &v54);
    v40[0] = v25;
    if ( v38 == (HRGN)1 )
    {
      v51 = 0LL;
      v52 = 0LL;
    }
    else
    {
      LODWORD(v51) = a3 + v50.m128i_i32[0];
      LODWORD(v52) = a3 + v50.m128i_i32[2];
      HIDWORD(v51) = a4 + v50.m128i_i32[1];
      HIDWORD(v52) = a4 + v50.m128i_i32[3];
      IntersectRect(&v51, &v51, &v53);
      v25 = v40[0];
    }
    if ( !v25 )
    {
      v26 = (struct tagRECT)v53;
LABEL_50:
      v56 = v26;
LABEL_51:
      if ( a9 )
        *a9 = v26;
      if ( !a8 || (unsigned int)SetRectRgnIndirect(a8, &v56) )
      {
        ClipBox = 2;
        if ( v56.left >= v56.right || v56.top >= v56.bottom )
          ClipBox = 1;
        goto LABEL_67;
      }
      goto LABEL_106;
    }
    if ( (unsigned int)IntersectRect(&v56, &v50, &v53) )
    {
      if ( !a3 || !a4 )
      {
        UnionRect(&v56, &v50, &v53);
        SubtractRect(&v56, &v56, &v51);
        v26 = v56;
        goto LABEL_51;
      }
    }
    else if ( *(_OWORD *)&v50 == *(_OWORD *)&v58 )
    {
      v26 = (struct tagRECT)v50;
      goto LABEL_50;
    }
    if ( !a8 )
    {
      if ( !a9 || (v13 = CreateEmptyRgn(), (v11 = (HRGN)v13) == 0LL) )
      {
LABEL_67:
        v28 = v51;
        v29 = v52;
        if ( (int)v51 < (int)v52 )
        {
          v30 = HIDWORD(v51);
          v31 = HIDWORD(v52);
          if ( SHIDWORD(v51) < SHIDWORD(v52) )
          {
            if ( a10 )
            {
              GreTransformPoints(a2, 0);
              v31 = HIDWORD(v52);
              v29 = v52;
              v30 = HIDWORD(v51);
              v28 = v51;
            }
            NtGdiBitBltInternal(a2, v28, v30, v29 - v28, v31 - v30, a2, v28 - (_DWORD)v45, v30 - v44, 0xCC0020u, 0, 0);
          }
        }
        goto LABEL_101;
      }
    }
    v27 = v41;
    if ( !v41 )
    {
      v27 = CreateEmptyRgn();
      v41 = v27;
    }
    SetRectRgnIndirect(v27, &v50);
    SetRectRgnIndirect(v11, &v53);
    if ( (unsigned int)GreCombineRgn(v11, v11, v41, 2LL) )
    {
      SetRectRgnIndirect(v41, &v51);
      ClipBox = GreCombineRgn(v11, v11, v41, 4LL);
      if ( ClipBox )
      {
        if ( a9 )
          GreGetRgnBox(v11, a9);
        goto LABEL_67;
      }
    }
LABEL_106:
    GreUnlockVisRgn(*gpDispInfo);
    GreDeleteObject(EmptyRgn);
    GreDeleteObject(v41);
    GreDeleteObject(v13);
    GreDeleteObject(v42);
    GreDeleteObject(v43);
    GreDeleteObject(v36);
    return 0LL;
  }
LABEL_72:
  if ( !v37 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn();
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_106;
  }
  v42 = CreateEmptyRgn();
  SetRectRgnIndirect(v42, &v50);
  if ( !(unsigned int)GreCombineRgn(v42, v42, EmptyRgn, 1LL) )
    goto LABEL_106;
  v43 = CreateEmptyRgn();
  SetRectRgnIndirect(v43, &v53);
  if ( !(unsigned int)GreCombineRgn(v43, v43, EmptyRgn, 1LL) )
    goto LABEL_106;
  v32 = 1;
  if ( v38 != (HRGN)1 )
  {
    v36 = CreateEmptyRgn();
    if ( !(unsigned int)GreCombineRgn(v36, v42, 0LL, 5LL) )
      goto LABEL_106;
    GreOffsetRgn(v36, v39, a4);
    v32 = GreCombineRgn(v36, v36, v43, 1LL);
    if ( (unsigned __int64)v38 > 1 )
    {
      v13 = CreateEmptyRgn();
      if ( !v32 )
        goto LABEL_106;
      if ( v32 != 1 )
      {
        GetDCOrgOnScreen(a2, v40);
        GreCombineRgn(v13, v38, 0LL, 5LL);
        GreOffsetRgn(v13, (unsigned int)-v40[0], (unsigned int)-v40[1]);
        v32 = GreCombineRgn(v36, v36, v13, 4LL);
      }
      if ( !v32 )
        goto LABEL_106;
      if ( v32 != 1 )
      {
        GreOffsetRgn(v13, v39, a4);
        v32 = GreCombineRgn(v36, v36, v13, 4LL);
      }
    }
    if ( !v32 )
      goto LABEL_106;
  }
  if ( a8 )
    goto LABEL_91;
  if ( a9 )
  {
    if ( !v13 )
      v13 = CreateEmptyRgn();
    v11 = (HRGN)v13;
    if ( v13 )
    {
LABEL_91:
      ClipBox = GreCombineRgn(v11, v43, v42, 2LL);
      if ( !ClipBox )
        goto LABEL_106;
      if ( v32 != 1 )
        ClipBox = GreCombineRgn(v11, v11, v36, 4LL);
      if ( a9 )
        GreGetRgnBox(v11, a9);
    }
  }
  if ( v32 != 1 )
  {
    GreGetDCOrg(a2, &v38);
    v33 = v36;
    GreOffsetRgn(v36, (unsigned int)v38, HIDWORD(v38));
    GreSelectVisRgnShared(a2, v36, 4LL);
    if ( a10 )
      GreTransformPoints(a2, 0);
    NtGdiBitBltInternal(
      a2,
      v53,
      SDWORD1(v53),
      DWORD2(v53) - v53,
      HIDWORD(v53) - DWORD1(v53),
      a2,
      v53 - (_DWORD)v45,
      DWORD1(v53) - v44,
      0xCC0020u,
      0,
      0);
    GreSelectVisRgnShared(a2, v36, 4LL);
    v24 = EmptyRgn;
    goto LABEL_102;
  }
  v24 = EmptyRgn;
LABEL_101:
  v33 = v36;
LABEL_102:
  if ( a10 && a9 )
    GreTransformPoints(a2, 0);
  GreUnlockVisRgn(*gpDispInfo);
  GreDeleteObject(v24);
  GreDeleteObject(v41);
  GreDeleteObject(v13);
  GreDeleteObject(v42);
  GreDeleteObject(v43);
  GreDeleteObject(v33);
  return ClipBox;
}
