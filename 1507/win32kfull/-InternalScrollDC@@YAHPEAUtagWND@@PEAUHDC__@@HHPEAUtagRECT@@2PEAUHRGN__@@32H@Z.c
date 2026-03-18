/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0
 * Callers:
 *     _ScrollDC @ 0x1C008D9BC (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     SubtractRect @ 0x1C008B93C (SubtractRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     UnionRect @ 0x1C0091308 (UnionRect.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreTransformPoints @ 0x1C00DDF64 (GreTransformPoints.c)
 *     GetDCOrgOnScreen @ 0x1C0113178 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011D97C (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  unsigned int v10; // edi
  HRGN v12; // rbx
  __int64 v14; // rdx
  unsigned int ClipBox; // r15d
  __m128i *v16; // rax
  struct tagRECT *v17; // r12
  __m128i v18; // xmm6
  HRGN v19; // r12
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagRECT v27; // xmm0
  int v28; // edx
  int v29; // r9d
  int v30; // r8d
  int v31; // r10d
  __int64 v32; // r13
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rax
  LONG x; // ecx
  __int32 v43; // ecx
  LONG left; // ecx
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  int v49; // [rsp+78h] [rbp-90h]
  HRGN v50; // [rsp+80h] [rbp-88h] BYREF
  HRGN EmptyRgn; // [rsp+88h] [rbp-80h]
  unsigned int v52; // [rsp+90h] [rbp-78h]
  __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  __int64 v55; // [rsp+A8h] [rbp-60h]
  unsigned int v56; // [rsp+B0h] [rbp-58h]
  _DWORD v57[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT *v58; // [rsp+C0h] [rbp-48h]
  struct _POINTL v59; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v60; // [rsp+D0h] [rbp-38h]
  unsigned int v61; // [rsp+D4h] [rbp-34h]
  _QWORD v62[6]; // [rsp+D8h] [rbp-30h] BYREF
  __m128i v63; // [rsp+108h] [rbp+0h] BYREF
  int v64[2]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v65; // [rsp+120h] [rbp+18h]
  int v66[4]; // [rsp+128h] [rbp+20h] BYREF
  struct _POINTL v67; // [rsp+138h] [rbp+30h] BYREF
  LONG v68; // [rsp+140h] [rbp+38h]
  struct tagRECT v69; // [rsp+148h] [rbp+40h] BYREF
  __m128i v70; // [rsp+158h] [rbp+50h] BYREF
  struct tagRECT v71; // [rsp+168h] [rbp+60h] BYREF

  v10 = a4;
  v12 = a8;
  v58 = a6;
  v50 = a7;
  v57[0] = 0;
  EmptyRgn = 0LL;
  v55 = 0LL;
  v47 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v52 = a4;
  GreLockVisRgnSharedOrExclusive(*gpDispInfo);
  ClipBox = GreGetClipBox(a2, &v67, 1LL);
  if ( !ClipBox )
    goto LABEL_121;
  v16 = (__m128i *)&v67;
  if ( a5 )
    v16 = (__m128i *)a5;
  v17 = v58;
  v18 = *v16;
  v63 = *v16;
  if ( v58 )
    v71 = *v58;
  LODWORD(v58) = a3;
  v56 = v10;
  if ( a10 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v62, a2);
    if ( v62[0] )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v70, (struct XDCOBJ *)v62, 0x204u);
      if ( v70.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v70, &v67, &v67, 2uLL);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v62);
    DCOBJ::DCOBJ((DCOBJ *)v62, a2);
    if ( v62[0] )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v70, (struct XDCOBJ *)v62, 0x204u);
      if ( v70.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v70, (struct _POINTL *)&v63, (struct _POINTL *)&v63, 2uLL);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v62);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      x = v67.x;
      v67.x = v68;
      v68 = x;
      v43 = v63.m128i_i32[0];
      v63.m128i_i32[0] = v63.m128i_i32[2];
      v63.m128i_i32[2] = v43;
      v57[0] = 1;
    }
    if ( v17 )
    {
      GreTransformPoints(a2, 1);
      if ( v57[0] )
      {
        left = v71.left;
        v71.left = v71.right;
        v71.right = left;
      }
    }
    v59.y = 0;
    v59.x = 0;
    v60 = a3;
    v61 = v10;
    DCOBJ::DCOBJ((DCOBJ *)v62, a2);
    if ( v62[0] )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v70, (struct XDCOBJ *)v62, 0x204u);
      if ( v70.m128i_i64[0] )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v70, &v59, &v59, 2uLL);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v62);
    a3 = v60 - v59.x;
    v10 = v61 - v59.y;
    v18 = v63;
    v52 = v61 - v59.y;
  }
  if ( ClipBox == 1 )
    goto LABEL_21;
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v14);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_121;
    v18 = v63;
    v21 = 1;
    v49 = 1;
  }
  else
  {
    v21 = 0;
  }
  v22 = a3 + _mm_cvtsi128_si32(v18);
  v66[0] = v22;
  v66[2] = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  v66[1] = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
  v23 = v10 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
  v66[3] = v23;
  if ( !v17 )
  {
LABEL_29:
    if ( ClipBox != 2 )
    {
LABEL_68:
      if ( !v49 )
      {
        EmptyRgn = (HRGN)CreateEmptyRgn(v23, v22);
        if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
          goto LABEL_121;
      }
      v53 = CreateEmptyRgn(v23, v22);
      SetRectRgnIndirect(v53, &v63);
      if ( !(unsigned int)GreCombineRgn(v53, v53, EmptyRgn, 1LL) )
        goto LABEL_121;
      v54 = CreateEmptyRgn(v36, v35);
      SetRectRgnIndirect(v54, v66);
      if ( !(unsigned int)GreCombineRgn(v54, v54, EmptyRgn, 1LL) )
        goto LABEL_121;
      v39 = 1;
      if ( v50 == (HRGN)1 )
      {
        v32 = 0LL;
LABEL_81:
        if ( !a8 )
        {
          if ( !a9 )
            goto LABEL_87;
          v41 = v47;
          if ( !v47 )
          {
            v41 = CreateEmptyRgn(v38, v37);
            v47 = v41;
          }
          v32 = v47;
          v12 = (HRGN)v41;
          if ( !v41 )
          {
LABEL_87:
            if ( v39 != 1 )
            {
              GreGetDCOrg(a2, &v50);
              v33 = v48;
              GreOffsetRgn(v48, (unsigned int)v50, HIDWORD(v50));
              GreSelectVisRgnShared(a2, v48, 4LL);
              if ( a10 )
                GreTransformPoints(a2, 0);
              NtGdiBitBltInternal(
                a2,
                v66[0],
                v66[1],
                v66[2] - v66[0],
                v66[3] - v66[1],
                (__int64)a2,
                v66[0] - (_DWORD)v58,
                v66[1] - v56,
                13369376,
                0,
                0);
              GreSelectVisRgnShared(a2, v48, 4LL);
              goto LABEL_49;
            }
LABEL_48:
            v33 = v48;
LABEL_49:
            if ( a10 && a9 )
              GreTransformPoints(a2, 0);
            GreUnlockVisRgn(*gpDispInfo);
            GreDeleteObject(EmptyRgn);
            GreDeleteObject(v55);
            GreDeleteObject(v32);
            GreDeleteObject(v53);
            GreDeleteObject(v54);
            GreDeleteObject(v33);
            return ClipBox;
          }
        }
        ClipBox = GreCombineRgn(v12, v54, v53, 2LL);
        if ( ClipBox )
        {
          if ( v39 != 1 )
            ClipBox = GreCombineRgn(v12, v12, v48, 4LL);
          if ( a9 )
            GreGetRgnBox(v12, a9);
          goto LABEL_87;
        }
LABEL_122:
        GreUnlockVisRgn(*gpDispInfo);
        GreDeleteObject(EmptyRgn);
        GreDeleteObject(v55);
        GreDeleteObject(v32);
        GreDeleteObject(v53);
        GreDeleteObject(v54);
        GreDeleteObject(v48);
        return 0LL;
      }
      v48 = CreateEmptyRgn(v38, v37);
      if ( (unsigned int)GreCombineRgn(v48, v53, 0LL, 5LL) )
      {
        GreOffsetRgn(v48, a3, v52);
        v39 = GreCombineRgn(v48, v48, v54, 1LL);
        if ( (unsigned __int64)v50 <= 1 )
          goto LABEL_97;
        v40 = CreateEmptyRgn(v38, v37);
        v47 = v40;
        if ( !v39 )
        {
          v32 = v40;
          goto LABEL_122;
        }
        if ( v39 != 1 )
        {
          GetDCOrgOnScreen(a2, v57);
          GreCombineRgn(v47, v50, 0LL, 5LL);
          GreOffsetRgn(v47, (unsigned int)-v57[0], (unsigned int)-v57[1]);
          v39 = GreCombineRgn(v48, v48, v47, 4LL);
          v40 = v47;
        }
        if ( !v39 )
          goto LABEL_121;
        if ( v39 == 1 )
        {
LABEL_97:
          v32 = v47;
        }
        else
        {
          GreOffsetRgn(v40, a3, v52);
          v32 = v47;
          v39 = GreCombineRgn(v48, v48, v47, 4LL);
        }
        if ( !v39 )
          goto LABEL_122;
        goto LABEL_81;
      }
LABEL_121:
      v32 = v47;
      goto LABEL_122;
    }
LABEL_30:
    if ( (unsigned __int64)v50 <= 1 )
    {
      v70 = v18;
      IntersectRect(v66, v66, &v67);
      v24 = IntersectRect(&v63, &v63, &v67);
      if ( v50 == (HRGN)1 )
      {
        *(_QWORD *)v64 = 0LL;
        v65 = 0LL;
      }
      else
      {
        v64[0] = a3 + v63.m128i_i32[0];
        LODWORD(v65) = a3 + v63.m128i_i32[2];
        v64[1] = v10 + v63.m128i_i32[1];
        HIDWORD(v65) = v10 + v63.m128i_i32[3];
        IntersectRect(v64, v64, v66);
      }
      if ( v24 )
      {
        if ( (unsigned int)IntersectRect(&v69, &v63, v66) )
        {
          if ( a3 && v10 )
            goto LABEL_105;
          UnionRect(&v69, &v63, v66);
          SubtractRect((__int64)&v69, (__int64)&v69, (__int64)v64);
          v27 = v69;
LABEL_37:
          if ( a9 )
            *a9 = v27;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v69) )
            goto LABEL_121;
          ClipBox = 2;
          if ( v69.left >= v69.right || v69.top >= v69.bottom )
            ClipBox = 1;
LABEL_42:
          v28 = v64[0];
          v29 = v65;
          if ( v64[0] < (int)v65 )
          {
            v30 = v64[1];
            v31 = HIDWORD(v65);
            if ( v64[1] < SHIDWORD(v65) )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v31 = HIDWORD(v65);
                v29 = v65;
                v30 = v64[1];
                v28 = v64[0];
              }
              NtGdiBitBltInternal(
                a2,
                v28,
                v30,
                v29 - v28,
                v31 - v30,
                (__int64)a2,
                v28 - (_DWORD)v58,
                v30 - v56,
                13369376,
                0,
                0);
            }
          }
          v32 = v47;
          goto LABEL_48;
        }
        v46 = v63.m128i_i64[0] - v70.m128i_i64[0];
        if ( v63.m128i_i64[0] == v70.m128i_i64[0] )
          v46 = v63.m128i_i64[1] - v70.m128i_i64[1];
        if ( v46 )
        {
LABEL_105:
          if ( a8 || a9 && (v47 = CreateEmptyRgn(v26, v25), (v12 = (HRGN)v47) != 0LL) )
          {
            v45 = v55;
            if ( !v55 )
            {
              v45 = CreateEmptyRgn(v26, v25);
              v55 = v45;
            }
            SetRectRgnIndirect(v45, &v63);
            SetRectRgnIndirect(v12, v66);
            if ( !(unsigned int)GreCombineRgn(v12, v12, v45, 2LL) )
              goto LABEL_121;
            SetRectRgnIndirect(v45, v64);
            ClipBox = GreCombineRgn(v12, v12, v45, 4LL);
            if ( !ClipBox )
              goto LABEL_121;
            if ( a9 )
              GreGetRgnBox(v12, a9);
          }
          goto LABEL_42;
        }
        v27 = (struct tagRECT)v63;
      }
      else
      {
        v27 = *(struct tagRECT *)v66;
      }
      v69 = v27;
      goto LABEL_37;
    }
    goto LABEL_68;
  }
  if ( (unsigned __int64)v50 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v67, &v67, &v71) )
    {
LABEL_21:
      v19 = EmptyRgn;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  if ( !v21 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v23, v22);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_121;
    v49 = 1;
  }
  v55 = CreateEmptyRgn(v23, v22);
  SetRectRgnIndirect(v55, &v71);
  v19 = EmptyRgn;
  v34 = GreCombineRgn(EmptyRgn, v55, EmptyRgn, 1LL);
  ClipBox = v34;
  if ( !v34 )
    goto LABEL_121;
  v22 = v34 - 1;
  if ( v34 != 1 )
  {
    if ( v34 == 2 )
    {
      GreGetRgnBox(EmptyRgn, &v67);
      v18 = v63;
      goto LABEL_30;
    }
    v18 = v63;
    goto LABEL_29;
  }
LABEL_22:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_121;
  if ( a9 )
  {
    *(_QWORD *)&a9->left = 0LL;
    *(_QWORD *)&a9->right = 0LL;
  }
  GreUnlockVisRgn(*gpDispInfo);
  GreDeleteObject(v19);
  GreDeleteObject(v55);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
