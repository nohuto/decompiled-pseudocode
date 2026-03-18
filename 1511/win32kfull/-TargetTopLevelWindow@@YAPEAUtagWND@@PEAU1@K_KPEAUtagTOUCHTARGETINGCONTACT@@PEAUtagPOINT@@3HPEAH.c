/*
 * XREFs of ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B78C
 * Callers:
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022B1F4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C022DEF4 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C0008CE0 (ResolveDCompInputHandleToPwnd.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C0066924 (xxxIsDCompSpeedHitTest.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C022AAD4 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C022ABA0 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C022AEF4 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C022AF1C (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C022B120 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

struct tagWND *__fastcall TargetTopLevelWindow(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6,
        int a7,
        int *a8,
        int *a9,
        unsigned int *a10)
{
  struct tagTOUCHTARGETINGCONTACT *v10; // r12
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // r14
  int v15; // ebx
  struct tagPOINT v16; // rdi
  struct tagPOINT v17; // rsi
  struct tagPOINT v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LONG left; // eax
  const struct _D3DMATRIX *v24; // rcx
  int v25; // r8d
  __int64 v26; // r8
  int v27; // eax
  struct tagRECT v28; // xmm0
  struct tagRECT *ScreenRect; // rax
  __int128 v30; // xmm0
  __m128i v31; // xmm6
  struct tagRECT v32; // xmm6
  struct tagRECT v33; // xmm6
  struct tagRECT v34; // xmm6
  unsigned __int64 v35; // xmm0_8
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  struct tagPOINT v38[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h] BYREF
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+B8h] [rbp-50h]
  BOOL v44; // [rsp+BCh] [rbp-4Ch]
  unsigned int v45; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v46; // [rsp+C8h] [rbp-40h]
  struct tagPOINT *v47; // [rsp+D0h] [rbp-38h]
  __int64 v48; // [rsp+D8h] [rbp-30h] BYREF
  struct tagTOUCHTARGETINGCONTACT *Prop; // [rsp+E0h] [rbp-28h]
  __int64 v50; // [rsp+E8h] [rbp-20h]
  int *v51; // [rsp+F0h] [rbp-18h]
  int *v52; // [rsp+F8h] [rbp-10h]
  unsigned int *v53; // [rsp+100h] [rbp-8h]
  __int64 v54; // [rsp+108h] [rbp+0h]
  struct tagRECT v55; // [rsp+110h] [rbp+8h] BYREF
  struct tagRECT v56; // [rsp+120h] [rbp+18h] BYREF
  struct tagRECT v57; // [rsp+130h] [rbp+28h] BYREF
  struct tagRECT v58; // [rsp+140h] [rbp+38h] BYREF
  struct tagRECT v59; // [rsp+150h] [rbp+48h] BYREF
  struct tagRECT v60; // [rsp+160h] [rbp+58h] BYREF
  struct tagRECT v61; // [rsp+170h] [rbp+68h] BYREF
  struct tagRECT v62; // [rsp+180h] [rbp+78h] BYREF
  _OWORD v63[4]; // [rsp+198h] [rbp+90h] BYREF

  v10 = a4;
  v54 = a3;
  v11 = 0LL;
  v47 = a5;
  v45 = a2;
  v12 = 0LL;
  v51 = a9;
  v13 = a10;
  *a8 = 0;
  v14 = *((_QWORD *)a1 + 12);
  v52 = a8;
  v53 = a10;
  v50 = 0LL;
  v40 = 0LL;
  v43 = 4094;
  v38[0] = 0LL;
  v39 = 0LL;
  v44 = 0;
  v48 = 0LL;
  v46 = 0LL;
  if ( v14 )
  {
    v15 = a7;
    v16 = 0LL;
    v17 = 0LL;
    while ( 1 )
    {
      v42.left = 0;
      LODWORD(v41) = 0;
      LODWORD(v39) = 0;
      if ( !*((_DWORD *)v10 + 44) && !*((_DWORD *)v10 + 45) )
      {
LABEL_46:
        if ( !v11 )
          break;
        *v47 = v17;
        *a6 = v16;
        goto LABEL_50;
      }
      if ( (*(_BYTE *)(v14 + 55) & 0x10) != 0 && ((*(_BYTE *)(v14 + 50) & 8) == 0 || (*(_BYTE *)(v14 + 48) & 0x20) == 0) )
      {
        if ( !v15 || !(unsigned int)GetWindowCloakState(v14) )
        {
          v18 = *v47;
          v38[0] = *v47;
          if ( (unsigned int)IsDwmInputThread(a1, v12, v13, a4) )
            v46 = *(_QWORD *)v14;
          if ( !(unsigned int)CanPointStartResize((struct tagWND *)v14, v10, v18) )
          {
            if ( (unsigned int)xxxIsDCompSpeedHitTest(
                                 (struct tagWND *)v14,
                                 v45,
                                 0,
                                 *(_QWORD *)&v18,
                                 &v48,
                                 v63,
                                 &v41,
                                 &v39) )
            {
              v19 = v48;
              if ( v48 )
              {
                v50 = ResolveDCompInputHandleToPwnd(v46, (struct tagWND *)v48, v45, v54, v63);
                left = v42.left;
                v20 = 1LL;
                if ( v50 )
                  left = 1;
                v42.left = left;
              }
            }
          }
          if ( (unsigned int)IsDwmInputThread(v20, v19, v21, v22) )
          {
            v14 = HMValidateHandleNoSecure(v46, 1);
            if ( !v14 )
            {
              EtwTraceDITSpeedHitTestFailedRevalidation(v46);
              *v52 = 1;
              return 0LL;
            }
          }
          if ( a7 )
          {
            v24 = *(const struct _D3DMATRIX **)(v14 + 272);
            if ( v24 )
            {
              ApplyWindowTransform(v24, v38, (struct tagRECT *)v10, 1);
              v18 = v38[0];
            }
          }
          Prop = (struct tagTOUCHTARGETINGCONTACT *)GetProp(v14, (unsigned __int16)gatomPtrTargetFlags, 1LL);
          v42.left = BasicTargetingHitTest(
                       v14,
                       (__int64)v10,
                       *(_QWORD *)&v18,
                       (unsigned __int16 *)&v37,
                       (__int64)a6,
                       a7,
                       0LL,
                       4,
                       v25,
                       (int)Prop,
                       v42.left);
          if ( !v42.left || (v26 = 1LL, (_WORD)v37) )
            v26 = 0LL;
          ClipContact((struct tagWND *)v14, v10, v26, 0LL);
          v27 = a7;
          if ( a7 )
          {
            a1 = *(struct tagWND **)(v14 + 272);
            if ( a1 )
            {
              ApplyWindowTransform((const struct _D3DMATRIX *)a1, 0LL, (struct tagRECT *)v10, 0);
              v27 = a7;
            }
          }
          if ( v42.left )
          {
            if ( !v11 )
            {
              a4 = Prop;
LABEL_36:
              v13 = (unsigned int *)v50;
              v12 = v50;
              v40 = v50;
              v44 = (_WORD)a4 == 3;
              v11 = v14;
              if ( v50 )
              {
                if ( v51 )
                  *v51 = v41;
                v13 = v53;
                if ( v53 )
                  *v53 = v39;
              }
              v17 = v18;
              v16 = *a6;
              v15 = a7;
              v43 = (unsigned __int16)v37;
              goto LABEL_45;
            }
            v28 = *(struct tagRECT *)(v11 + 112);
            v38[0] = *(struct tagPOINT *)(v11 + 272);
            v42 = v28;
            ScreenRect = GetScreenRect(&v55, v27, *(const struct _D3DMATRIX **)v38, &v42);
            v30 = *(_OWORD *)(v14 + 112);
            v31 = *(__m128i *)ScreenRect;
            *(_QWORD *)&v42.left = *(_QWORD *)(v14 + 272);
            *(_OWORD *)&v38[1].x = v30;
            if ( _mm_cvtsi128_si32(v31) >= _mm_cvtsi128_si32(
                                             _mm_srli_si128(
                                               *(__m128i *)GetScreenRect(
                                                             &v60,
                                                             a7,
                                                             *(const struct _D3DMATRIX **)&v42.left,
                                                             (struct tagRECT *)&v38[1]),
                                               8)) )
              goto LABEL_55;
            *(_OWORD *)&v38[1].x = *(_OWORD *)(v14 + 112);
            v32 = *GetScreenRect(&v58, a7, *(const struct _D3DMATRIX **)&v42.left, (struct tagRECT *)&v38[1]);
            *(_OWORD *)&v38[1].x = *(_OWORD *)(v11 + 112);
            if ( _mm_cvtsi128_si32((__m128i)v32) >= _mm_cvtsi128_si32(
                                                      _mm_srli_si128(
                                                        *(__m128i *)GetScreenRect(
                                                                      &v62,
                                                                      a7,
                                                                      *(const struct _D3DMATRIX **)v38,
                                                                      (struct tagRECT *)&v38[1]),
                                                        8)) )
              goto LABEL_55;
            *(_OWORD *)&v38[1].x = *(_OWORD *)(v11 + 112);
            v33 = *GetScreenRect(&v56, a7, *(const struct _D3DMATRIX **)v38, (struct tagRECT *)&v38[1]);
            *(_OWORD *)&v38[1].x = *(_OWORD *)(v14 + 112);
            if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v33, 4)) >= _mm_srli_si128(
                                                                         *(__m128i *)GetScreenRect(
                                                                                       &v57,
                                                                                       a7,
                                                                                       *(const struct _D3DMATRIX **)&v42,
                                                                                       (struct tagRECT *)(v38 + 8)),
                                                                         8).m128i_i32[1]
              || (*(_OWORD *)&v38[1].x = *(_OWORD *)(v14 + 112),
                  v34 = *GetScreenRect(&v59, a7, *(const struct _D3DMATRIX **)&v42.left, (struct tagRECT *)&v38[1]),
                  *(_OWORD *)&v38[1].x = *(_OWORD *)(v11 + 112),
                  v35 = _mm_srli_si128(
                          *(__m128i *)GetScreenRect(
                                        &v61,
                                        a7,
                                        *(const struct _D3DMATRIX **)v38,
                                        (struct tagRECT *)&v38[1]),
                          8).m128i_u64[0],
                  a1 = (struct tagWND *)HIDWORD(v35),
                  _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v34, 4)) >= SHIDWORD(v35)) )
            {
LABEL_55:
              a4 = Prop;
              v13 = (_WORD)Prop != 3 ? (unsigned int *)0xFFF : 0LL;
              a1 = (struct tagWND *)((unsigned int)v13 + (unsigned __int16)v37);
              if ( (unsigned int)a1 < (!v44 ? 0xFFF : 0) + (unsigned int)(unsigned __int16)v43 )
                goto LABEL_36;
            }
          }
          v15 = a7;
        }
        v12 = v40;
      }
LABEL_45:
      v14 = *(_QWORD *)(v14 + 72);
      if ( !v14 )
        goto LABEL_46;
    }
  }
  *a6 = 0LL;
LABEL_50:
  if ( v12 )
    return (struct tagWND *)v12;
  return (struct tagWND *)v11;
}
