/*
 * XREFs of ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C
 * Callers:
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C0220DB4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000C718 (ResolveDCompInputHandleToPwnd.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0155248 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C0220680 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C022075C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220AAC (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C0220AD4 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C0220CD8 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

struct tagWND *__fastcall TargetTopLevelWindow(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6,
        int a7,
        int *a8,
        int *a9,
        unsigned int *a10)
{
  __int64 v10; // r14
  struct tagPOINT *v11; // rdi
  struct tagTOUCHTARGETINGCONTACT *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  struct tagPOINT v22; // rdi
  struct _D3DMATRIX *v23; // rsi
  struct tagPOINT v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r9
  InputTransform *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _D3DMATRIX *v33; // rcx
  int v34; // r8d
  __int64 v35; // r8
  struct _D3DMATRIX *v36; // rcx
  struct tagRECT v37; // xmm0
  struct tagRECT *ScreenRect; // rax
  struct tagRECT v39; // xmm0
  __m128i v40; // xmm6
  struct tagRECT v41; // xmm6
  struct tagRECT v42; // xmm6
  struct tagRECT v43; // xmm6
  int v44; // ebx
  unsigned __int64 v45; // rdi
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  struct tagTOUCHTARGETINGCONTACT *v48; // [rsp+70h] [rbp-98h]
  struct tagPOINT Prop; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h]
  struct _D3DMATRIX *v51; // [rsp+88h] [rbp-80h]
  struct tagRECT v52; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v53; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+B8h] [rbp-50h]
  BOOL v55; // [rsp+BCh] [rbp-4Ch]
  __int64 v56; // [rsp+C0h] [rbp-48h] BYREF
  int v57; // [rsp+C8h] [rbp-40h]
  __int64 v58; // [rsp+CCh] [rbp-3Ch]
  int v59; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v60; // [rsp+D8h] [rbp-30h]
  struct tagPOINT *v61; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v62; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v63; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v64; // [rsp+F8h] [rbp-10h]
  InputTransform *v65; // [rsp+100h] [rbp-8h]
  struct tagPOINT *v66; // [rsp+108h] [rbp+0h]
  _BYTE v67[8]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v68; // [rsp+118h] [rbp+10h] BYREF
  __int64 v69; // [rsp+120h] [rbp+18h]
  int *v70; // [rsp+128h] [rbp+20h]
  int *v71; // [rsp+130h] [rbp+28h]
  unsigned int *v72; // [rsp+138h] [rbp+30h]
  struct tagRECT v73; // [rsp+140h] [rbp+38h] BYREF
  struct tagRECT v74; // [rsp+150h] [rbp+48h] BYREF
  struct tagRECT v75; // [rsp+160h] [rbp+58h] BYREF
  struct tagRECT v76; // [rsp+170h] [rbp+68h] BYREF
  struct tagRECT v77; // [rsp+180h] [rbp+78h] BYREF
  struct tagRECT v78; // [rsp+190h] [rbp+88h] BYREF
  struct tagRECT v79; // [rsp+1A0h] [rbp+98h] BYREF
  struct tagRECT v80; // [rsp+1B0h] [rbp+A8h] BYREF
  _OWORD v81[4]; // [rsp+1C8h] [rbp+C0h] BYREF

  v10 = 0LL;
  v11 = a6;
  v13 = a4;
  v66 = a5;
  v14 = 0LL;
  v15 = 0LL;
  v71 = a9;
  v72 = a10;
  v48 = a4;
  v69 = a3;
  v54 = a2;
  v61 = a6;
  v70 = a8;
  v65 = 0LL;
  v57 = 4094;
  Prop = 0LL;
  v51 = 0LL;
  v55 = 0;
  v68 = 0LL;
  v60 = 0LL;
  v64 = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  v58 = 0LL;
  *a8 = 0;
  v16 = IsDwmInputThread(a8, a2);
  v17 = v16;
  v59 = v16;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v67);
  if ( (_DWORD)v17 )
    UserAtomicCheck::Detach((UserAtomicCheck *)v67);
  v21 = *((_QWORD *)a1 + 12);
  if ( v21 )
  {
    v22 = Prop;
    v50 = v17;
    v23 = v51;
    while ( 1 )
    {
      v53.left = 0;
      v56 = 0LL;
      if ( !*((_DWORD *)v13 + 44) && !*((_DWORD *)v13 + 45) )
      {
LABEL_50:
        if ( v14 )
        {
          *v66 = (struct tagPOINT)v23;
          *v61 = v22;
          goto LABEL_55;
        }
        v11 = v61;
        goto LABEL_54;
      }
      if ( (*(_BYTE *)(v21 + 55) & 0x10) != 0
        && ((*(_BYTE *)(v21 + 50) & 8) == 0 || (*(_BYTE *)(v21 + 48) & 0x20) == 0)
        && (!a7 || !(unsigned int)GetWindowCloakState(v21)) )
      {
        break;
      }
LABEL_49:
      v21 = *(_QWORD *)(v21 + 72);
      if ( !v21 )
        goto LABEL_50;
    }
    v24 = *v66;
    Prop = *v66;
    if ( v50 )
      v60 = *(_QWORD *)v21;
    if ( !(unsigned int)CanPointStartResize((struct tagWND *)v21, v48, v24)
      && (unsigned int)xxxIsDCompSpeedHitTest(
                         (struct tagWND *)v21,
                         v54,
                         0,
                         *(_QWORD *)&v24,
                         &v68,
                         v81,
                         &v56,
                         (_DWORD *)&v56 + 1)
      && (v25 = v68) != 0 )
    {
      v27 = ResolveDCompInputHandleToPwnd(v60, (struct tagWND *)v68, v54, v69, v81);
      v28 = v50;
      v25 = (__int64)v27;
      v65 = v27;
      v53.left = v27 != 0LL;
      if ( !v50 )
        goto LABEL_25;
      if ( v27 )
        v64 = *(_QWORD *)v27;
      else
        v64 = 0LL;
    }
    else
    {
      v28 = v50;
    }
    if ( v28 )
    {
      LOBYTE(v25) = 1;
      v29 = HMValidateHandleNoSecure(v60, v25, 1LL, v26);
      v21 = v29;
      if ( !v29 || *(char *)(v29 + 43) < 0 )
      {
        EtwTraceDITSpeedHitTestFailedRevalidation(v60, v30, v31, v32);
        *v70 = 1;
        goto LABEL_69;
      }
    }
LABEL_25:
    if ( a7 )
    {
      v33 = *(struct _D3DMATRIX **)(v21 + 272);
      if ( v33 )
      {
        ApplyWindowTransform(v33, &Prop, (struct tagRECT *)v48, 1);
        v24 = Prop;
      }
    }
    Prop = (struct tagPOINT)GetProp(v21, (unsigned __int16)gatomPtrTargetFlags, 1LL);
    v53.left = BasicTargetingHitTest(
                 v21,
                 (__int64)v48,
                 *(_QWORD *)&v24,
                 (unsigned __int16 *)&v47,
                 (__int64)v61,
                 a7,
                 0LL,
                 4,
                 v34,
                 Prop.x,
                 v53.left);
    if ( !v53.left || (v35 = 1LL, (_WORD)v47) )
      v35 = 0LL;
    ClipContact((struct tagWND *)v21, v48, v35, 0LL);
    if ( a7 )
    {
      v36 = *(struct _D3DMATRIX **)(v21 + 272);
      if ( v36 )
        ApplyWindowTransform(v36, 0LL, (struct tagRECT *)v48, 0);
    }
    if ( !v53.left )
      goto LABEL_48;
    if ( v14 && (!v50 || (LOBYTE(v18) = 1, (v14 = HMValidateHandleNoSecure(v63, v18, v19, v20)) != 0)) )
    {
      v37 = *(struct tagRECT *)(v14 + 112);
      v51 = *(struct _D3DMATRIX **)(v14 + 272);
      v53 = v37;
      ScreenRect = GetScreenRect(&v73, a7, v51, &v53);
      v39 = *(struct tagRECT *)(v21 + 112);
      v40 = *(__m128i *)ScreenRect;
      *(_QWORD *)&v53.left = *(_QWORD *)(v21 + 272);
      v52 = v39;
      if ( _mm_cvtsi128_si32(v40) < _mm_cvtsi128_si32(
                                      _mm_srli_si128(
                                        *(__m128i *)GetScreenRect(
                                                      &v74,
                                                      a7,
                                                      *(const struct _D3DMATRIX **)&v53.left,
                                                      &v52),
                                        8)) )
      {
        v52 = *(struct tagRECT *)(v21 + 112);
        v41 = *GetScreenRect(&v75, a7, *(const struct _D3DMATRIX **)&v53.left, &v52);
        v52 = *(struct tagRECT *)(v14 + 112);
        if ( _mm_cvtsi128_si32((__m128i)v41) < _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)GetScreenRect(
                                                                                              &v76,
                                                                                              a7,
                                                                                              v51,
                                                                                              &v52), 8)) )
        {
          v52 = *(struct tagRECT *)(v14 + 112);
          v42 = *GetScreenRect(&v77, a7, v51, &v52);
          v52 = *(struct tagRECT *)(v21 + 112);
          if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v42, 4)) < _mm_srli_si128(
                                                                      *(__m128i *)GetScreenRect(
                                                                                    &v78,
                                                                                    a7,
                                                                                    *(const struct _D3DMATRIX **)&v53,
                                                                                    &v52),
                                                                      8).m128i_i32[1] )
          {
            v52 = *(struct tagRECT *)(v21 + 112);
            v43 = *GetScreenRect(&v79, a7, *(const struct _D3DMATRIX **)&v53.left, &v52);
            v52 = *(struct tagRECT *)(v14 + 112);
            if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v43, 4)) < _mm_srli_si128(
                                                                        *(__m128i *)GetScreenRect(&v80, a7, v51, &v52),
                                                                        8).m128i_i32[1] )
              goto LABEL_48;
          }
        }
      }
      v20 = (__int64)Prop;
      v19 = LOWORD(Prop.x) != 3 ? 0xFFF : 0;
      v18 = !v55 ? 0xFFF : 0;
      if ( (unsigned int)v19 + (unsigned __int16)v47 >= (unsigned int)v18 + (unsigned __int16)v57 )
      {
LABEL_48:
        v13 = v48;
        goto LABEL_49;
      }
    }
    else
    {
      v20 = (__int64)Prop;
    }
    v15 = (__int64)v65;
    v14 = v21;
    v55 = (_WORD)v20 == 3;
    if ( v50 )
    {
      v63 = v60;
      v62 = v64;
    }
    v23 = (struct _D3DMATRIX *)v24;
    v58 = v56;
    v57 = (unsigned __int16)v47;
    v22 = *v61;
    goto LABEL_48;
  }
LABEL_54:
  *v11 = 0LL;
LABEL_55:
  v44 = v59;
  v45 = v62;
  if ( v15 )
  {
    if ( !v59 || (LOBYTE(v18) = 1, (v15 = HMValidateHandleNoSecure(v62, v18, v19, v20)) != 0) )
    {
      if ( v71 )
        *v71 = v58;
      if ( v72 )
        *v72 = HIDWORD(v58);
    }
  }
  if ( v44 )
  {
    if ( v45 )
    {
      v10 = v15;
    }
    else
    {
      LOBYTE(v18) = 1;
      v10 = HMValidateHandleNoSecure(v63, v18, v19, v20);
    }
  }
  else
  {
    if ( v15 )
      v14 = v15;
    v10 = v14;
  }
LABEL_69:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
  return (struct tagWND *)v10;
}
