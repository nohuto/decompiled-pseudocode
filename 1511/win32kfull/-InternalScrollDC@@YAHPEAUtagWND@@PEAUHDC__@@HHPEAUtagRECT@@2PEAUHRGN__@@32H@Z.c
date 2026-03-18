/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524
 * Callers:
 *     _ScrollDC @ 0x1C006A430 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     GetDCOrgOnScreen @ 0x1C00CC890 (GetDCOrgOnScreen.c)
 *     GreTransformPoints @ 0x1C00DC714 (GreTransformPoints.c)
 *     UnionRect @ 0x1C00EB38C (UnionRect.c)
 *     SubtractRect @ 0x1C00EE448 (SubtractRect.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C01474DC (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  unsigned int v10; // r12d
  HRGN v12; // rbx
  __int64 v13; // r13
  unsigned int ClipBox; // r14d
  __m128i *v15; // rax
  __m128i v16; // xmm6
  int v18; // r8d
  HRGN v19; // rdi
  int v20; // eax
  struct tagRECT v21; // xmm0
  LONG v22; // edx
  int v23; // r9d
  int v24; // r8d
  int v25; // r10d
  __int64 v26; // rbx
  int v27; // edi
  unsigned int v28; // eax
  int v29; // ecx
  __int32 v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  HRGN EmptyRgn; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  HRGN v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  unsigned int v39; // [rsp+84h] [rbp-7Ch]
  _DWORD v40[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  unsigned int v44; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h] BYREF
  int v47; // [rsp+BCh] [rbp-44h]
  unsigned int v48; // [rsp+C0h] [rbp-40h]
  unsigned int v49; // [rsp+C4h] [rbp-3Ch]
  __m128i v50; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int128 v53; // [rsp+F0h] [rbp-10h] BYREF
  int v54; // [rsp+100h] [rbp+0h] BYREF
  int v55; // [rsp+108h] [rbp+8h]
  struct tagRECT v56; // [rsp+110h] [rbp+10h] BYREF
  __int128 v57; // [rsp+120h] [rbp+20h] BYREF
  __m128i v58; // [rsp+130h] [rbp+30h]

  v10 = a3;
  v12 = a8;
  v45 = a5;
  v37 = a7;
  v40[0] = 0;
  v13 = 0LL;
  EmptyRgn = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v36 = 0LL;
  v38 = 0;
  v39 = a3;
  GreLockVisRgnSharedOrExclusive(*gpDispInfo);
  ClipBox = GreGetClipBox(a2, &v54, 1LL);
  if ( !ClipBox )
    goto LABEL_109;
  v15 = (__m128i *)&v54;
  if ( v45 )
    v15 = (__m128i *)v45;
  v16 = *v15;
  v50 = *v15;
  if ( a6 )
    v57 = (__int128)*a6;
  v44 = a4;
  LODWORD(v45) = v10;
  if ( a10 )
  {
    GreTransformPoints((_DWORD)a2, (unsigned int)&v54, (unsigned int)&v54, 2, 1);
    GreTransformPoints((_DWORD)a2, (unsigned int)&v50, (unsigned int)&v50, 2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v29 = v54;
      v54 = v55;
      v55 = v29;
      v30 = v50.m128i_i32[0];
      v50.m128i_i32[0] = v50.m128i_i32[2];
      v50.m128i_i32[2] = v30;
      v40[0] = 1;
    }
    if ( a6 )
    {
      GreTransformPoints((_DWORD)a2, (unsigned int)&v57, (unsigned int)&v57, 2, 1);
      if ( v40[0] )
      {
        v31 = v57;
        LODWORD(v57) = DWORD2(v57);
        DWORD2(v57) = v31;
      }
    }
    v47 = 0;
    v46 = 0;
    v49 = a4;
    v48 = v10;
    GreTransformPoints((_DWORD)a2, (unsigned int)&v46, (unsigned int)&v46, 2, 1);
    v10 = v48 - v46;
    v16 = v50;
    a4 = v49 - v47;
    v39 = v48 - v46;
  }
  if ( ClipBox == 1 )
    goto LABEL_12;
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn();
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_109;
    v16 = v50;
    v18 = 1;
    v38 = 1;
  }
  else
  {
    v18 = 0;
  }
  LODWORD(v53) = v10 + _mm_cvtsi128_si32(v16);
  DWORD2(v53) = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
  DWORD1(v53) = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
  HIDWORD(v53) = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v16, 12));
  if ( !a6 )
    goto LABEL_48;
  if ( (unsigned __int64)v37 > 1 || ClipBox != 2 )
  {
    if ( !v18 )
    {
      EmptyRgn = (HRGN)CreateEmptyRgn();
      if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
        goto LABEL_109;
      v38 = 1;
    }
    v41 = CreateEmptyRgn();
    SetRectRgnIndirect(v41, &v57);
    v28 = GreCombineRgn(EmptyRgn, v41, EmptyRgn, 1LL);
    ClipBox = v28;
    switch ( v28 )
    {
      case 0u:
        goto LABEL_109;
      case 1u:
        goto LABEL_12;
      case 2u:
        v19 = EmptyRgn;
        GreGetRgnBox(EmptyRgn, &v54);
        v16 = v50;
LABEL_23:
        if ( (unsigned __int64)v37 <= 1 )
        {
          v58 = v16;
          IntersectRect(&v53, &v53, &v54);
          v20 = IntersectRect(&v50, &v50, &v54);
          v40[0] = v20;
          if ( v37 == (HRGN)1 )
          {
            v51 = 0LL;
            v52 = 0LL;
          }
          else
          {
            LODWORD(v51) = v10 + v50.m128i_i32[0];
            LODWORD(v52) = v10 + v50.m128i_i32[2];
            HIDWORD(v51) = a4 + v50.m128i_i32[1];
            HIDWORD(v52) = a4 + v50.m128i_i32[3];
            IntersectRect(&v51, &v51, &v53);
            v20 = v40[0];
          }
          if ( v20 )
          {
            if ( (unsigned int)IntersectRect(&v56, &v50, &v53) )
            {
              if ( v10 && a4 )
                goto LABEL_93;
              UnionRect(&v56, &v50, &v53);
              SubtractRect(&v56, &v56, &v51);
              v21 = v56;
LABEL_30:
              if ( a9 )
                *a9 = v21;
              if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v56) )
                goto LABEL_109;
              ClipBox = 2;
              if ( v56.left >= v56.right || v56.top >= v56.bottom )
                ClipBox = 1;
LABEL_35:
              v22 = v51;
              v23 = v52;
              if ( (int)v51 < (int)v52 )
              {
                v24 = HIDWORD(v51);
                v25 = HIDWORD(v52);
                if ( SHIDWORD(v51) < SHIDWORD(v52) )
                {
                  if ( a10 )
                  {
                    GreTransformPoints((_DWORD)a2, (unsigned int)&v51, (unsigned int)&v51, 2, 0);
                    v25 = HIDWORD(v52);
                    v23 = v52;
                    v24 = HIDWORD(v51);
                    v22 = v51;
                  }
                  NtGdiBitBltInternal(
                    a2,
                    v22,
                    v24,
                    v23 - v22,
                    v25 - v24,
                    a2,
                    v22 - (_DWORD)v45,
                    v24 - v44,
                    0xCC0020u,
                    0,
                    0);
                }
              }
              goto LABEL_40;
            }
            v33 = v50.m128i_i64[0] - v58.m128i_i64[0];
            if ( v50.m128i_i64[0] == v58.m128i_i64[0] )
              v33 = v50.m128i_i64[1] - v58.m128i_i64[1];
            if ( v33 )
            {
LABEL_93:
              if ( a8 || a9 && (v13 = CreateEmptyRgn(), (v12 = (HRGN)v13) != 0LL) )
              {
                v32 = v41;
                if ( !v41 )
                {
                  v32 = CreateEmptyRgn();
                  v41 = v32;
                }
                SetRectRgnIndirect(v32, &v50);
                SetRectRgnIndirect(v12, &v53);
                if ( !(unsigned int)GreCombineRgn(v12, v12, v41, 2LL) )
                  goto LABEL_109;
                SetRectRgnIndirect(v41, &v51);
                ClipBox = GreCombineRgn(v12, v12, v41, 4LL);
                if ( !ClipBox )
                  goto LABEL_109;
                if ( a9 )
                  GreGetRgnBox(v12, a9);
              }
              goto LABEL_35;
            }
            v21 = (struct tagRECT)v50;
          }
          else
          {
            v21 = (struct tagRECT)v53;
          }
          v56 = v21;
          goto LABEL_30;
        }
LABEL_49:
        if ( v38 || (EmptyRgn = (HRGN)CreateEmptyRgn(), (unsigned int)GetTrueClipRgn(a2, EmptyRgn)) )
        {
          v43 = CreateEmptyRgn();
          SetRectRgnIndirect(v43, &v50);
          if ( (unsigned int)GreCombineRgn(v43, v43, EmptyRgn, 1LL) )
          {
            v42 = CreateEmptyRgn();
            SetRectRgnIndirect(v42, &v53);
            if ( (unsigned int)GreCombineRgn(v42, v42, EmptyRgn, 1LL) )
            {
              v27 = 1;
              if ( v37 == (HRGN)1 )
                goto LABEL_113;
              v36 = CreateEmptyRgn();
              if ( (unsigned int)GreCombineRgn(v36, v43, 0LL, 5LL) )
              {
                GreOffsetRgn(v36, v39, a4);
                v27 = GreCombineRgn(v36, v36, v42, 1LL);
                if ( (unsigned __int64)v37 > 1 )
                {
                  v13 = CreateEmptyRgn();
                  if ( !v27 )
                    goto LABEL_109;
                  if ( v27 != 1 )
                  {
                    GetDCOrgOnScreen(a2, v40);
                    GreCombineRgn(v13, v37, 0LL, 5LL);
                    GreOffsetRgn(v13, (unsigned int)-v40[0], (unsigned int)-v40[1]);
                    v27 = GreCombineRgn(v36, v36, v13, 4LL);
                  }
                  if ( !v27 )
                    goto LABEL_109;
                  if ( v27 != 1 )
                  {
                    GreOffsetRgn(v13, v39, a4);
                    v27 = GreCombineRgn(v36, v36, v13, 4LL);
                  }
                }
                if ( v27 )
                {
LABEL_113:
                  if ( !a8 )
                  {
                    if ( !a9 )
                      goto LABEL_68;
                    if ( !v13 )
                      v13 = CreateEmptyRgn();
                    v12 = (HRGN)v13;
                    if ( !v13 )
                      goto LABEL_68;
                  }
                  ClipBox = GreCombineRgn(v12, v42, v43, 2LL);
                  if ( ClipBox )
                  {
                    if ( v27 != 1 )
                      ClipBox = GreCombineRgn(v12, v12, v36, 4LL);
                    if ( a9 )
                      GreGetRgnBox(v12, a9);
LABEL_68:
                    if ( v27 != 1 )
                    {
                      GreGetDCOrg(a2, &v37);
                      v26 = v36;
                      GreOffsetRgn(v36, (unsigned int)v37, HIDWORD(v37));
                      GreSelectVisRgnShared(a2, v36, 4LL);
                      if ( a10 )
                        GreTransformPoints((_DWORD)a2, (unsigned int)&v53, (unsigned int)&v53, 2, 0);
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
                      v19 = EmptyRgn;
                      goto LABEL_41;
                    }
                    v19 = EmptyRgn;
LABEL_40:
                    v26 = v36;
LABEL_41:
                    if ( a10 && a9 )
                      GreTransformPoints((_DWORD)a2, (_DWORD)a9, (_DWORD)a9, 2, 0);
                    GreUnlockVisRgn(*gpDispInfo);
                    GreDeleteObject(v19);
                    GreDeleteObject(v41);
                    GreDeleteObject(v13);
                    GreDeleteObject(v43);
                    GreDeleteObject(v42);
                    GreDeleteObject(v26);
                    return ClipBox;
                  }
                }
              }
            }
          }
        }
LABEL_109:
        GreUnlockVisRgn(*gpDispInfo);
        GreDeleteObject(EmptyRgn);
        GreDeleteObject(v41);
        GreDeleteObject(v13);
        GreDeleteObject(v43);
        GreDeleteObject(v42);
        GreDeleteObject(v36);
        return 0LL;
    }
    v16 = v50;
LABEL_48:
    if ( ClipBox != 2 )
      goto LABEL_49;
    goto LABEL_22;
  }
  if ( (unsigned int)IntersectRect(&v54, &v54, &v57) )
  {
LABEL_22:
    v19 = EmptyRgn;
    goto LABEL_23;
  }
LABEL_12:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_109;
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
