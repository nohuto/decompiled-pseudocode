/*
 * XREFs of TouchTargetingRankForRect @ 0x1400878F8
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1400872B4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x140089318 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     TouchTargetingRankForRegion @ 0x140303104 (TouchTargetingRankForRegion.c)
 * Callees:
 *     _TTPixelsToHm @ 0x140088148 (_TTPixelsToHm.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x140302C20 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 */

__int64 __fastcall TouchTargetingRankForRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  BOOL v10; // r14d
  LONG right; // r10d
  int left; // r13d
  LONG bottom; // r11d
  int top; // ecx
  struct tagRECT v16; // xmm1
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  struct tagRECT v21; // xmm1
  struct tagRECT v22; // xmm1
  struct tagRECT v23; // xmm1
  LONG x; // r10d
  LONG y; // r13d
  int v26; // eax
  LONG v27; // r11d
  int v28; // r11d
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r10d
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r10d
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rcx
  LONG v38; // esi
  LONG *p_top; // r11
  LONG v40; // edx
  LONG v41; // r8d
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // eax
  bool v46; // zf
  bool v47; // sf
  bool v48; // of
  LONG v49; // eax
  int v50; // r8d
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  LONG *p_right; // r9
  LONG v55; // eax
  int v56; // r8d
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  LONG v60; // r15d
  int v61; // edx
  int v62; // eax
  __int64 v63; // r8
  int v64; // r10d
  __int64 v65; // rcx
  bool v66; // [rsp+20h] [rbp-59h]
  struct tagRECT *v67; // [rsp+38h] [rbp-41h]
  struct tagRECT *v68; // [rsp+40h] [rbp-39h]
  struct tagTOUCHTARGETINGCONTACT *v69; // [rsp+48h] [rbp-31h]
  unsigned __int16 v70[2]; // [rsp+50h] [rbp-29h] BYREF
  int v71; // [rsp+54h] [rbp-25h]
  LONG v72; // [rsp+58h] [rbp-21h]
  LONG v73; // [rsp+5Ch] [rbp-1Dh]
  struct tagPOINT v74; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v75; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v76; // [rsp+80h] [rbp+7h] BYREF
  bool v77; // [rsp+E0h] [rbp+67h]

  v74 = 0LL;
  v70[0] = 4094;
  v75 = 0LL;
  if ( !*(_DWORD *)(a3 + 180) )
    return 4094LL;
  v10 = 1;
  if ( a6 == 4 )
  {
    v77 = 1;
  }
  else
  {
    v77 = 0;
    if ( !(unsigned int)IntersectRect(&v75, a1, a3) )
      return 4094LL;
  }
  if ( a4 && !(unsigned int)IntersectRect(a1, a1, a4) )
    return 4094LL;
  if ( !(unsigned int)IntersectRect(a1, a2, a1) )
    return 4094LL;
  right = a1->right;
  left = a1->left;
  v72 = right;
  if ( left == right )
    return 4094LL;
  bottom = a1->bottom;
  top = a1->top;
  v73 = bottom;
  v71 = top;
  if ( top == bottom )
    return 4094LL;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  if ( !a6 )
  {
    v75 = *a2;
    if ( a4 && !(unsigned int)IntersectRect(&v75, &v75, a4) )
      return 4094LL;
    if ( (int)TTPixelsToHm((unsigned int)(v75.right - v75.left), *(unsigned int *)(a3 + 184)) > 1400
      && (int)TTPixelsToHm((unsigned int)(v75.bottom - v75.top), *(unsigned int *)(a3 + 188)) > 1400 )
    {
      return 4093LL;
    }
    top = v71;
  }
  v16 = *a2;
  v17 = bottom - 1;
  v69 = (struct tagTOUCHTARGETINGCONTACT *)a3;
  v18 = bottom - 1;
  if ( left == right - 1 )
  {
    v75 = *a1;
    v68 = &v75;
    v67 = &v76;
    v66 = v77;
    v19 = top;
    v20 = left;
    v76 = v16;
LABEL_24:
    _TTUpdateRankWithSegment(v20, v19, left, v18, v66, &v74, v70, v67, v68, v69);
    goto LABEL_25;
  }
  v76 = *a1;
  v75 = v16;
  if ( top != v17 )
  {
    _TTUpdateRankWithSegment(
      left,
      top,
      left,
      v18,
      v77,
      &v74,
      v70,
      &v75,
      &v76,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v21 = *a2;
    v76 = *a1;
    v75 = v21;
    _TTUpdateRankWithSegment(
      v72 - 1,
      v73 - 1,
      v72 - 1,
      v71,
      v77,
      &v74,
      v70,
      &v75,
      &v76,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v22 = *a2;
    v76 = *a1;
    v75 = v22;
    _TTUpdateRankWithSegment(
      left,
      v73 - 1,
      v72 - 1,
      v73 - 1,
      v77,
      &v74,
      v70,
      &v75,
      &v76,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v23 = *a2;
    v18 = v71;
    v20 = v72 - 1;
    v69 = (struct tagTOUCHTARGETINGCONTACT *)a3;
    v19 = v71;
    v68 = &v76;
    v67 = &v75;
    v66 = v77;
    v76 = *a1;
    v75 = v23;
    goto LABEL_24;
  }
  _TTUpdateRankWithSegment(
    left,
    v17,
    right - 1,
    v18,
    v77,
    &v74,
    v70,
    &v75,
    &v76,
    (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_25:
  if ( v70[0] == 4094 || !a5 )
    return v70[0];
  x = v74.x;
  y = v74.y;
  v26 = v74.x - *(_DWORD *)(a3 + 32);
  v27 = v74.y;
  *(_DWORD *)a5 = v26;
  v28 = v27 - *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a5 + 4) = v28;
  if ( a6 && (_WORD)a6 != 3 )
  {
    if ( a6 == 4 )
    {
      if ( v26 )
      {
        v29 = (unsigned int)-v26;
        if ( v26 > 0 )
          v29 = (unsigned int)v26;
        v30 = TTPixelsToHm(v29, *(unsigned int *)(a3 + 184));
        if ( v30 > v31 )
          return 4094LL;
      }
      if ( v28 )
      {
        v32 = (unsigned int)-v28;
        if ( v28 > 0 )
          v32 = (unsigned int)v28;
        v33 = TTPixelsToHm(v32, *(unsigned int *)(a3 + 188));
        goto LABEL_82;
      }
    }
    return v70[0];
  }
  v35 = 200;
  if ( (_WORD)a6 == 3 )
    v35 = HIWORD(a6);
  if ( v26 )
  {
    v36 = (unsigned int)-v26;
    if ( v26 > 0 )
      v36 = (unsigned int)v26;
    if ( (int)TTPixelsToHm(v36, *(unsigned int *)(a3 + 184)) > v35 )
      return 4094LL;
  }
  if ( v28 )
  {
    v37 = (unsigned int)-v28;
    if ( v28 > 0 )
      v37 = (unsigned int)v28;
    if ( (int)TTPixelsToHm(v37, *(unsigned int *)(a3 + 188)) > v35 )
      return 4094LL;
  }
  if ( a6 )
    return v70[0];
  v38 = a2->left;
  p_top = &a2->top;
  v40 = *(_DWORD *)(a3 + 32);
  if ( v40 < a2->left )
  {
    v41 = *(_DWORD *)(a3 + 36);
    if ( v41 >= *p_top )
    {
      v49 = a2->bottom;
      if ( v41 < v49 )
      {
LABEL_63:
        p_right = &a2->right;
        goto LABEL_76;
      }
      v50 = v41 - v49 + 1;
      v51 = -v50;
      if ( v50 > 0 )
        v51 = v50;
      v52 = v40 - v38;
      v53 = -v52;
      if ( v52 > 0 )
        v53 = v52;
      v10 = 0;
      v48 = __OFSUB__(v53, v51);
      v46 = v53 == v51;
      v47 = v53 - v51 < 0;
    }
    else
    {
      v42 = v40 - v38;
      v43 = -v42;
      if ( v42 > 0 )
        v43 = v42;
      v44 = v41 - *p_top;
      v45 = -v44;
      if ( v44 > 0 )
        v45 = v44;
      v10 = 0;
      v48 = __OFSUB__(v43, v45);
      v46 = v43 == v45;
      v47 = v43 - v45 < 0;
    }
    LOBYTE(v10) = !(v47 ^ v48 | v46);
    goto LABEL_63;
  }
  p_right = &a2->right;
  v55 = a2->right;
  if ( v40 < v55 )
    goto LABEL_78;
  v56 = *(_DWORD *)(a3 + 36);
  if ( v56 < *p_top )
  {
    v57 = v40 - v55 + 1;
    v58 = -v57;
    if ( v57 > 0 )
      v58 = v57;
    v59 = v56 - *p_top;
LABEL_73:
    v62 = -v59;
    if ( v59 > 0 )
      v62 = v59;
    v10 = v58 > v62;
LABEL_76:
    if ( v10 )
      goto LABEL_77;
LABEL_78:
    v63 = 188LL;
    v64 = y - (*p_top + a2->bottom) / 2;
    goto LABEL_79;
  }
  v60 = a2->bottom;
  if ( v56 >= v60 )
  {
    v61 = v40 - v55 + 1;
    v58 = -v61;
    if ( v61 > 0 )
      v58 = v61;
    v59 = v56 - v60 + 1;
    goto LABEL_73;
  }
LABEL_77:
  v63 = 184LL;
  v64 = x - (v38 + *p_right) / 2;
LABEL_79:
  v65 = (unsigned int)-v64;
  if ( v64 > 0 )
    v65 = (unsigned int)v64;
  v33 = TTPixelsToHm(v65, *(unsigned int *)(v63 + a3));
  v34 = 700;
LABEL_82:
  if ( v33 <= v34 )
    return v70[0];
  return 4094LL;
}
