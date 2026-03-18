/*
 * XREFs of ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00085DC (SpbCheckRect.c)
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     GreUnlockDisplayArea @ 0x1C00099CC (GreUnlockDisplayArea.c)
 *     SpbCheck @ 0x1C0009B04 (SpbCheck.c)
 *     UpdateSpriteArea @ 0x1C000A280 (UpdateSpriteArea.c)
 *     DeleteOldRedirectionBitmap @ 0x1C000BC28 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C000BC64 (GetOldRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     GreHintDCWnd @ 0x1C0016C90 (GreHintDCWnd.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C005B600 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0066BA0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0067710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C008A480 (GreRedrawSpriteOverlapPresent.c)
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C008FC6C (PhysicalToLogicalInPlaceRgn.c)
 *     UnionRect @ 0x1C0091308 (UnionRect.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00DFA30 (LogicalToPhysicalInPlaceRgn.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00F02C0 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     GreForceClipRgnChange @ 0x1C00FA7B4 (GreForceClipRgnChange.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01EA224 (FindSpb.c)
 *     RestoreSpb @ 0x1C01EA24C (RestoreSpb.c)
 *     GreClientRgnDone @ 0x1C027CD84 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // r15
  unsigned int v2; // r13d
  HDC v3; // r12
  __int64 v4; // rdx
  int *v5; // r14
  int v6; // esi
  int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r14d
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // r13d
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  int v22; // edi
  _QWORD *v23; // rbx
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  HRGN v32; // rdx
  _QWORD *v33; // rax
  int v34; // eax
  int v35; // esi
  unsigned int v36; // ebx
  int v37; // r9d
  int v38; // edx
  int v39; // r10d
  int v40; // r8d
  _QWORD *v41; // r15
  _QWORD *v42; // rcx
  __int64 v43; // r14
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // r15d
  __int64 StyleWindow; // rax
  __int64 v48; // r14
  __int64 RedirectionBitmap; // rax
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdi
  int v57; // edi
  __int64 v58; // rbx
  int v59; // r13d
  unsigned int v60; // r12d
  int v61; // edx
  __m128i v62; // xmm0
  int v63; // ecx
  int v64; // edx
  int v65; // eax
  __int64 OldRedirectionBitmap; // rcx
  __int64 v67; // r11
  HDC v68; // r9
  __int64 v69; // r8
  HDC v70; // r12
  int v71; // eax
  __int64 Spb; // rax
  unsigned int v73[2]; // [rsp+28h] [rbp-99h]
  __int64 v74; // [rsp+30h] [rbp-91h]
  int valid; // [rsp+68h] [rbp-59h]
  int v76; // [rsp+68h] [rbp-59h]
  __int64 v77; // [rsp+70h] [rbp-51h] BYREF
  int v78; // [rsp+78h] [rbp-49h]
  int v79; // [rsp+7Ch] [rbp-45h]
  int v80; // [rsp+80h] [rbp-41h]
  HDC v81; // [rsp+88h] [rbp-39h] BYREF
  int v82; // [rsp+90h] [rbp-31h]
  __m128i v83; // [rsp+98h] [rbp-29h] BYREF
  struct tagSMWP *v84; // [rsp+A8h] [rbp-19h] BYREF
  HRGN v85; // [rsp+B0h] [rbp-11h]
  __int64 v86; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v87; // [rsp+C0h] [rbp-1h]
  __m128i v88; // [rsp+C8h] [rbp+7h] BYREF
  struct tagRECT v89; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v84 = a1;
  v2 = 0;
  v3 = 0LL;
  v80 = 0;
  v81 = 0LL;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*gpDispInfo);
  valid = BltValidInit(v1);
  if ( !valid )
    goto LABEL_39;
  v5 = 0LL;
  v6 = *((_DWORD *)v1 + 7) - 1;
  v7 = (int *)*((_QWORD *)v1 + 5);
  if ( v6 < 0 )
    goto LABEL_39;
  do
  {
    LOBYTE(v4) = 1;
    v8 = HMValidateHandleNoSecure(*(_QWORD *)v7, v4);
    v9 = v8;
    if ( v8 && *(_QWORD *)(v8 + 88) && (unsigned int)IsStillWindowC(*((HWND *)v7 + 1)) )
    {
      if ( *((_QWORD *)v7 + 14) == 2LL
        && ((*(_BYTE *)(v9 + 55) & 1) == 0 || *(_QWORD *)(v9 + 88) != GetDesktopWindow(v9)) )
      {
        *((_QWORD *)v7 + 14) = 0LL;
      }
      if ( !v5 )
        v5 = v7;
    }
    else
    {
      *(_QWORD *)v7 = 0LL;
      v7[8] = 6159;
    }
    v7 += 42;
    --v6;
  }
  while ( v6 >= 0 );
  if ( v5 )
  {
    v10 = *v5;
    v11 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v10 + gSharedInfo[1]) + 88LL);
    v87 = v12;
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, v1);
    *(_QWORD *)&v89.left = 0LL;
    *(_QWORD *)&v89.right = 0LL;
    v82 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v57 = *((_DWORD *)v1 + 7) - 1;
      v58 = *((_QWORD *)v1 + 5);
      if ( v57 >= 0 )
      {
        do
        {
          if ( *(_QWORD *)v58 )
          {
            if ( (*(_DWORD *)(v58 + 32) & 8) == 0 )
            {
              v61 = *(_DWORD *)(v58 + 72);
              if ( v61 || *(_DWORD *)(v58 + 76) )
              {
                v63 = -*(_DWORD *)(v58 + 76);
                v64 = -v61;
                v83 = *(__m128i *)(v58 + 56);
                v62 = v83;
                v83.m128i_i32[2] += v64;
                v83.m128i_i32[3] += v63;
                v83.m128i_i32[1] += v63;
                v88 = v62;
                v83.m128i_i32[0] = v64 + _mm_cvtsi128_si32(v62);
                UnionRect(&v89, &v88, &v83);
                v13 = 1;
              }
            }
          }
          v58 += 168LL;
          --v57;
        }
        while ( v57 >= 0 );
        v82 = v13;
      }
    }
    zzzLockDisplayAreaAndInvalidateDCCache(
      v12,
      (*(_BYTE *)(v12 + 55) & 2) != 0 ? 12 : 10,
      (struct tagRECT *)((unsigned __int64)&v89 & -(__int64)(v13 != 0)));
    v14 = 96;
    v15 = *((_QWORD *)v1 + 5);
    v16 = *((_DWORD *)v1 + 7) - 1;
    LODWORD(v77) = 96;
    v85 = (HRGN)ghrgnInvalidSum;
    v78 = 0;
    v79 = v16;
    if ( v16 >= 0 )
    {
      v17 = valid;
      while ( 1 )
      {
        v76 = --v17;
        if ( *(_QWORD *)v15 )
          break;
LABEL_19:
        v15 += 168LL;
        v79 = --v16;
        if ( v16 < 0 )
        {
          v1 = v84;
          v12 = v87;
          goto LABEL_21;
        }
      }
      if ( (*(_DWORD *)(v15 + 32) & 8) != 0 )
      {
LABEL_18:
        v17 = v76;
        goto LABEL_19;
      }
      v24 = *(_DWORD *)(v15 + 88);
      v25 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v15;
      v26 = gSharedInfo[1];
      v80 = 1;
      v27 = *(_QWORD **)(v25 + v26);
      if ( (*((_BYTE *)v27 + 50) & 8) != 0 )
      {
        if ( !GetRedirectionBitmap(*(_QWORD *)(v25 + v26)) && (*((_BYTE *)v27 + 51) & 0x20) == 0 )
          goto LABEL_48;
        v31 = *((_DWORD *)v27 + 72);
        if ( (v31 & 0x20) == 0 && (*(_DWORD *)(v15 + 156) & 7) == 0 )
          goto LABEL_48;
        *((_DWORD *)v27 + 72) = v31 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v27, ghrgnVisNew) )
        v24 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 72LL) )
        SpbCheckRect((struct tagWND *)v27, (struct tagRECT *)v27 + 7, 1u);
      if ( (v24 & 3) == 0 && v27[20] != 1LL )
      {
        v37 = *(_DWORD *)(v15 + 64);
        v38 = *(_DWORD *)(v15 + 56);
        if ( v37 > v38 )
        {
          v39 = *(_DWORD *)(v15 + 68);
          v40 = *(_DWORD *)(v15 + 60);
          if ( v39 > v40 )
          {
            v73[0] = v39 - *(_DWORD *)(v15 + 76);
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v38 - *(_DWORD *)(v15 + 72)),
              (unsigned int)(v40 - *(_DWORD *)(v15 + 76)),
              (unsigned int)(v37 - *(_DWORD *)(v15 + 72)));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, *(_QWORD *)(v15 + 96), 1LL, *(_QWORD *)v73, v74) >= 2
              && ((v14 & 0x20) != 0
               || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL, *(_QWORD *)v73, v74) > 1) )
            {
              if ( *(_QWORD *)(v15 + 72) )
                GreOffsetRgn(ghrgnValid, *(unsigned int *)(v15 + 72), *(unsigned int *)(v15 + 76));
              v41 = v27;
              v42 = 0LL;
              while ( 1 )
              {
                v43 = v41[20];
                if ( v43 == 1 )
                  break;
                if ( v43 )
                {
                  v86 = v41[20];
                  if ( v42 )
                  {
                    v65 = PhysicalToLogicalInPlaceRgn(v42, &v86);
                    v43 = v86;
                    v59 = v65;
                  }
                  else
                  {
                    v59 = 0;
                  }
                  v60 = GreCombineRgn(ghrgnValid, ghrgnValid, v43, 4LL, *(_QWORD *)v73, v74);
                  if ( v59 )
                    GreDeleteObject(v43);
                  if ( v60 < 2 )
                    break;
                  v42 = v41;
                }
                v41 = (_QWORD *)v41[11];
                if ( !v41 || (*((_BYTE *)v41 + 55) & 2) != 0 )
                {
                  v44 = *(_QWORD *)(v15 + 120);
                  if ( (!v44 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v44, 4LL, *(_QWORD *)v73, v74) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL, *(_QWORD *)v73, v74) > 1 )
                  {
                    goto LABEL_67;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v24 |= 4u;
LABEL_67:
      if ( (v24 & 4) == 0 )
      {
        v46 = *(_DWORD *)(v15 + 72);
        if ( *(_QWORD *)(v15 + 72) )
        {
          StyleWindow = GetStyleWindow(v27, 2568LL);
          v48 = StyleWindow;
          if ( StyleWindow && (RedirectionBitmap = GetRedirectionBitmap(StyleWindow)) != 0 )
          {
            if ( v27 == (_QWORD *)v48 )
            {
              if ( (*(_DWORD *)(v15 + 156) & 1) != 0
                || v46 != *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 80)
                || *(_DWORD *)(v15 + 76) != *(_DWORD *)(v15 + 20) - *(_DWORD *)(v15 + 84) )
              {
                OldRedirectionBitmap = GetOldRedirectionBitmap(v48);
                if ( OldRedirectionBitmap )
                  v68 = (HDC)ghdcMem;
                else
                  v68 = (HDC)ghdcMem2;
                v69 = v67;
                if ( OldRedirectionBitmap )
                  v69 = OldRedirectionBitmap;
                UpdateSpriteArea(
                  (_QWORD *)v48,
                  v67,
                  v69,
                  v68,
                  ghdcMem2,
                  ghrgnValid,
                  (__m128i *)(v15 + 56),
                  -v46,
                  -*(_DWORD *)(v15 + 76),
                  *(_DWORD *)(v15 + 80),
                  *(_DWORD *)(v15 + 84));
              }
            }
            else
            {
              UpdateSpriteArea(
                (_QWORD *)v48,
                RedirectionBitmap,
                RedirectionBitmap,
                ghdcMem,
                ghdcMem,
                ghrgnValid,
                (__m128i *)(v15 + 56),
                -v46,
                -*(_DWORD *)(v15 + 76),
                *(_DWORD *)(v48 + 112),
                *(_DWORD *)(v48 + 116));
            }
          }
          else if ( (*((_BYTE *)v27 + 50) & 8) == 0 )
          {
            v70 = v81;
            if ( !v81 )
            {
              v70 = *(HDC *)(gpDispInfo + 24LL);
              v81 = v70;
            }
            GreHintDCWnd((__int64)v70, *v27, 0LL, 0, 0);
            GreSelectVisRgn(v70, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v70,
              *(_DWORD *)(v15 + 56),
              *(_DWORD *)(v15 + 60),
              *(_DWORD *)(v15 + 64) - *(_DWORD *)(v15 + 56),
              *(_DWORD *)(v15 + 68) - *(_DWORD *)(v15 + 60),
              (__int64)v70,
              *(_DWORD *)(v15 + 56) - *(_DWORD *)(v15 + 72),
              *(_DWORD *)(v15 + 60) - *(_DWORD *)(v15 + 76),
              13369376,
              0,
              1);
            GreHintDCWnd((__int64)v70, 0LL, 0LL, 0, 0);
          }
        }
      }
      if ( ((*((_BYTE *)v27 + 40) >> 7) & ((v24 & 2) == 0)) == 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, *(HRGN *)(v15 + 96), ghrgnVisNew, 4u, v24) )
      {
        v32 = *(HRGN *)(v15 + 96);
        if ( v32 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v32, ghrgnVisNew, 2u, v24) )
          {
LABEL_105:
            v14 = v77;
            goto LABEL_48;
          }
        }
        else
        {
          v88 = *(__m128i *)(v87 + 112);
          TransformRectBetweenCoordinateSpaces(&v88, &v88, v27, v87);
          SetRectRgnIndirect(ghrgnInvalid, &v88);
        }
LABEL_71:
        v14 = v77;
        if ( (v24 & 4) == 0 )
        {
          if ( (v77 & 0x20) != 0 )
          {
            v50 = 5LL;
            v51 = 0LL;
            v52 = ghrgnValidSum;
          }
          else
          {
            v50 = 2LL;
            v52 = ghrgnValidSum;
            v51 = ghrgnValidSum;
          }
          GreCombineRgn(v52, ghrgnValid, v51, v50, *(_QWORD *)v73, v74);
          v14 &= ~0x20u;
          LODWORD(v77) = v14;
        }
        if ( (v14 & 0x20) != 0 && (v24 & 4) != 0 )
          goto LABEL_49;
        v33 = (_QWORD *)ghrgnValidSum;
        if ( (v14 & 0x20) != 0 )
          v33 = (_QWORD *)ghrgnValid;
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v33, 4LL, *(_QWORD *)v73, v74) > 1 )
        {
LABEL_49:
          v29 = *(unsigned int *)(v15 + 32);
          if ( ((*((_BYTE *)v27 + 40) >> 7) & ((v29 & 0x40) == 0)) != 0 )
          {
            v29 = (unsigned __int8)v29 & 0x87;
            if ( (_BYTE)v29 != 7 )
            {
              Spb = FindSpb(v27);
              FreeSpb(Spb);
            }
          }
          if ( (unsigned int)IsToplevelWindowDesktopComposed(v27, v29, v28)
            && (*((_BYTE *)v27 + 50) & 8) != 0
            && *(_QWORD *)(v15 + 112)
            && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, *(HRGN *)(v15 + 96), 4u, v24) )
          {
            GreForceClipRgnChange(v45, *v27);
          }
          v30 = *(_QWORD *)(v15 + 96);
          if ( v30 )
          {
            GreDeleteObject(v30);
            *(_QWORD *)(v15 + 96) = 0LL;
          }
          v11 = v78;
          if ( (((*(_BYTE *)(v15 + 32) & 0x40) != 0) & (unsigned __int8)~*((_BYTE *)v27 + 45)) != 0 )
            v11 = ++v78;
          if ( (v24 & 8) != 0 )
            goto LABEL_58;
          if ( (v24 & 5) == 4 )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v83);
            xxxInternalInvalidate((struct tagWND *)v27, (HRGN)1, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v83);
          }
          v77 = ghrgnInvalid;
          v34 = LogicalToPhysicalInPlaceRgn(v27, &v77);
          v35 = v34;
          if ( (v14 & 0x40) != 0 )
          {
            if ( !v76 && !v34 )
            {
              v85 = (HRGN)ghrgnInvalid;
LABEL_84:
              v14 &= ~0x40u;
              LODWORD(v77) = v14;
LABEL_58:
              v16 = v79;
              v3 = v81;
              goto LABEL_18;
            }
            v53 = 5LL;
            v55 = 0LL;
            v54 = ghrgnInvalidSum;
          }
          else
          {
            v53 = 2LL;
            v54 = ghrgnInvalidSum;
            v55 = ghrgnInvalidSum;
          }
          v56 = v77;
          GreCombineRgn(v54, v77, v55, v53, *(_QWORD *)v73, v74);
          if ( v35 )
            GreDeleteObject(v56);
          goto LABEL_84;
        }
LABEL_48:
        *((_DWORD *)v27 + 72) &= ~2u;
        v24 |= 8u;
        goto LABEL_49;
      }
      v71 = RestoreSpb(v27, ghrgnInvalid, &v81);
      if ( v71 )
      {
        if ( v71 == 2 && (v77 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL, *(_QWORD *)v73, v74);
        if ( (v24 & 1) != 0 )
          goto LABEL_167;
      }
      else if ( (v24 & 1) != 0 )
      {
        goto LABEL_105;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL, *(_QWORD *)v73, v74);
LABEL_167:
      if ( (v24 & 0x20) == 0
        && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL, *(_QWORD *)v73, v74) <= 1 )
      {
        v24 |= 0x20u;
      }
      goto LABEL_71;
    }
LABEL_21:
    if ( v82 )
      GreUnlockDisplayArea(*gpDispInfo, &v89);
    v18 = *((_DWORD *)v1 + 7) - 1;
    v19 = (_QWORD *)*((_QWORD *)v1 + 5);
    if ( v18 >= 0 )
    {
      v20 = gSharedInfo[0];
      do
      {
        if ( *v19
          && (*(_BYTE *)(*(_QWORD *)(*(_DWORD *)(v20 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)v19
                                   + *(_QWORD *)(v20 + 8))
                       + 50LL) & 8) != 0 )
        {
          DeleteOldRedirectionBitmap();
          v20 = gSharedInfo[0];
        }
        v19 += 21;
        --v18;
      }
      while ( v18 >= 0 );
    }
    if ( (v14 & 0x40) == 0 )
    {
      if ( v11 != *((_DWORD *)v1 + 7) || (v36 = 69, v12 == GetDesktopWindow(v12)) )
        v36 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v84);
      xxxInternalInvalidate((struct tagWND *)v12, v85, v36);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v84);
    }
    if ( gcountPWO )
      GreClientRgnDone();
    GreRedrawSpriteOverlapPresent(*gpDispInfo);
    if ( v3 )
    {
      GreSelectVisRgn(v3, 0LL, 1LL);
      GreGetBounds(v3, 0LL, 0LL);
    }
    v2 = v80;
  }
  else
  {
LABEL_39:
    v22 = *((_DWORD *)v1 + 7) - 1;
    if ( v22 >= 0 )
    {
      v23 = (_QWORD *)(*((_QWORD *)v1 + 5) + 96LL);
      do
      {
        if ( *v23 )
        {
          GreDeleteObject(*v23);
          *v23 = 0LL;
        }
        v23 += 21;
        --v22;
      }
      while ( v22 >= 0 );
    }
  }
  GreUnlockVisRgn(*gpDispInfo);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return v2;
}
