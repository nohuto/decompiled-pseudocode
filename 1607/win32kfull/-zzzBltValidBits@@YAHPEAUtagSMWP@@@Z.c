/*
 * XREFs of ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     GreUnlockDisplayArea @ 0x1C000E2D0 (GreUnlockDisplayArea.c)
 *     SpbCheck @ 0x1C000E53C (SpbCheck.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     GreHintDCWnd @ 0x1C00452A0 (GreHintDCWnd.c)
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0055B30 (GreRedrawSpriteOverlapPresent.c)
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C005B290 (PhysicalToLogicalInPlaceRgn.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00796A4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C007A248 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00D5880 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     UpdateSpriteArea @ 0x1C00D661C (UpdateSpriteArea.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00D7C3C (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00D7C8C (GetOldRedirectionBitmap.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C01156B8 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C011DB00 (LogicalToPhysicalInPlaceRgn.c)
 *     GreForceClipRgnChange @ 0x1C01242C0 (GreForceClipRgnChange.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01E12B4 (FindSpb.c)
 *     RestoreSpb @ 0x1C01E12DC (RestoreSpb.c)
 *     GreClientRgnDone @ 0x1C027A514 (GreClientRgnDone.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r13d
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  _DWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // edi
  _QWORD *v26; // rbx
  unsigned int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rdi
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  HRGN v35; // rdx
  _QWORD *v36; // rax
  int v37; // eax
  int v38; // esi
  unsigned int v39; // ebx
  int v40; // r9d
  int v41; // edx
  int v42; // r10d
  int v43; // r8d
  _QWORD *v44; // r15
  __int64 v45; // rcx
  HRGN v46; // r14
  __int64 v47; // r8
  int v48; // r15d
  __int64 StyleWindow; // rax
  _QWORD *v50; // r14
  __int64 RedirectionBitmap; // rax
  __int64 v52; // r11
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // edi
  __int64 v58; // rbx
  int v59; // edx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdi
  int v64; // r13d
  unsigned int v65; // r12d
  int v66; // eax
  __m128i v67; // xmm0
  int v68; // ecx
  int v69; // edx
  __int64 OldRedirectionBitmap; // rcx
  HDC v71; // r12
  int v72; // eax
  __int64 Spb; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  unsigned int v76[2]; // [rsp+28h] [rbp-99h]
  __int64 v77; // [rsp+30h] [rbp-91h]
  __int64 v78; // [rsp+38h] [rbp-89h]
  int valid; // [rsp+68h] [rbp-59h]
  int v80; // [rsp+68h] [rbp-59h]
  __int64 v81; // [rsp+70h] [rbp-51h] BYREF
  int v82; // [rsp+78h] [rbp-49h]
  int v83; // [rsp+7Ch] [rbp-45h]
  int v84; // [rsp+80h] [rbp-41h]
  int v85; // [rsp+84h] [rbp-3Dh]
  HDC v86[2]; // [rsp+88h] [rbp-39h] BYREF
  __m128i v87; // [rsp+98h] [rbp-29h] BYREF
  struct tagSMWP *v88; // [rsp+A8h] [rbp-19h] BYREF
  HRGN v89; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-9h]
  HRGN v91; // [rsp+C0h] [rbp-1h]
  __m128i v92; // [rsp+C8h] [rbp+7h] BYREF
  struct tagRECT v93; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v88 = a1;
  v2 = 0;
  v3 = 0LL;
  v84 = 0;
  v86[0] = 0LL;
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
    v12 = *(_QWORD *)(*(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v10
                                + *((_QWORD *)&gSharedInfo + 1))
                    + 88LL);
    v90 = v12;
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, v1);
    *(_QWORD *)&v93.left = 0LL;
    *(_QWORD *)&v93.right = 0LL;
    v85 = 0;
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
              v59 = *(_DWORD *)(v58 + 72);
              if ( v59 || *(_DWORD *)(v58 + 76) )
              {
                v68 = -*(_DWORD *)(v58 + 76);
                v69 = -v59;
                v87 = *(__m128i *)(v58 + 56);
                v67 = v87;
                v87.m128i_i32[2] += v69;
                v87.m128i_i32[3] += v68;
                v87.m128i_i32[1] += v68;
                v92 = v67;
                v87.m128i_i32[0] = v69 + _mm_cvtsi128_si32(v67);
                UnionRect(&v93, &v92, &v87);
                v13 = 1;
              }
            }
          }
          v58 += 168LL;
          --v57;
        }
        while ( v57 >= 0 );
        v85 = v13;
      }
    }
    zzzLockDisplayAreaAndInvalidateDCCache(
      v12,
      (*(_BYTE *)(v12 + 55) & 2) != 0 ? 12 : 10,
      (struct tagRECT *)((unsigned __int64)&v93 & -(__int64)(v13 != 0)));
    v16 = 96;
    v17 = *((_QWORD *)v1 + 5);
    v18 = *((_DWORD *)v1 + 7) - 1;
    LODWORD(v81) = 96;
    v91 = (HRGN)ghrgnInvalidSum;
    v82 = 0;
    v83 = v18;
    if ( v18 >= 0 )
    {
      v19 = valid;
      while ( 1 )
      {
        v80 = --v19;
        if ( *(_QWORD *)v17 )
          break;
LABEL_19:
        v17 += 168LL;
        v83 = --v18;
        if ( v18 < 0 )
        {
          v1 = v88;
          v12 = v90;
          goto LABEL_21;
        }
      }
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 )
      {
LABEL_18:
        v19 = v80;
        goto LABEL_19;
      }
      v27 = *(_DWORD *)(v17 + 88);
      v28 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v17;
      v29 = *((_QWORD *)&gSharedInfo + 1);
      v84 = 1;
      v30 = *(_QWORD **)(v28 + v29);
      if ( (*((_BYTE *)v30 + 50) & 8) != 0 )
      {
        if ( !GetRedirectionBitmap(*(_QWORD *)(v28 + v29)) && (*((_BYTE *)v30 + 51) & 0x20) == 0 )
          goto LABEL_48;
        v34 = *((_DWORD *)v30 + 72);
        if ( (v34 & 0x20) == 0 && (*(_DWORD *)(v17 + 156) & 7) == 0 )
          goto LABEL_48;
        *((_DWORD *)v30 + 72) = v34 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v30, ghrgnVisNew) )
        v27 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 72LL) )
        SpbCheckRect((struct tagWND *)v30, (struct tagRECT *)v30 + 7, 1u);
      if ( (v27 & 3) == 0 && v30[20] != 1LL )
      {
        v40 = *(_DWORD *)(v17 + 64);
        v41 = *(_DWORD *)(v17 + 56);
        if ( v40 > v41 )
        {
          v42 = *(_DWORD *)(v17 + 68);
          v43 = *(_DWORD *)(v17 + 60);
          if ( v42 > v43 )
          {
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v41 - *(_DWORD *)(v17 + 72)),
              (unsigned int)(v43 - *(_DWORD *)(v17 + 76)),
              (unsigned int)(v40 - *(_DWORD *)(v17 + 72)),
              v42 - *(_DWORD *)(v17 + 76));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, *(_QWORD *)(v17 + 96), 1LL) >= 2
              && ((v16 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( *(_QWORD *)(v17 + 72) )
                GreOffsetRgn(ghrgnValid, *(unsigned int *)(v17 + 72), *(unsigned int *)(v17 + 76));
              v44 = v30;
              v45 = 0LL;
              while ( 1 )
              {
                v46 = (HRGN)v44[20];
                if ( v46 == (HRGN)1 )
                  break;
                if ( v46 )
                {
                  v89 = (HRGN)v44[20];
                  if ( v45 )
                  {
                    v66 = PhysicalToLogicalInPlaceRgn(v45, &v89);
                    v46 = v89;
                    v64 = v66;
                  }
                  else
                  {
                    v64 = 0;
                  }
                  v65 = GreCombineRgn(ghrgnValid, ghrgnValid, v46, 4LL);
                  if ( v64 )
                    GreDeleteObject(v46);
                  if ( v65 < 2 )
                    break;
                  v45 = (__int64)v44;
                }
                v44 = (_QWORD *)v44[11];
                if ( !v44 || (*((_BYTE *)v44 + 55) & 2) != 0 )
                {
                  v47 = *(_QWORD *)(v17 + 120);
                  if ( (!v47 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v47, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_69;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v27 |= 4u;
LABEL_69:
      if ( (v27 & 4) == 0 )
      {
        v48 = *(_DWORD *)(v17 + 72);
        if ( *(_QWORD *)(v17 + 72) )
        {
          StyleWindow = GetStyleWindow(v30, 2568LL);
          v50 = (_QWORD *)StyleWindow;
          if ( StyleWindow && (RedirectionBitmap = GetRedirectionBitmap(StyleWindow), (v52 = RedirectionBitmap) != 0) )
          {
            if ( v30 != v50 )
            {
              v53 = RedirectionBitmap;
              v78 = v17 + 56;
              v77 = ghrgnValid;
              *(_QWORD *)v76 = ghdcMem;
LABEL_113:
              UpdateSpriteArea(v50, v52, v53);
              goto LABEL_70;
            }
            if ( (*(_DWORD *)(v17 + 156) & 1) != 0
              || v48 != *(_DWORD *)(v17 + 16) - *(_DWORD *)(v17 + 80)
              || *(_DWORD *)(v17 + 76) != *(_DWORD *)(v17 + 20) - *(_DWORD *)(v17 + 84) )
            {
              OldRedirectionBitmap = GetOldRedirectionBitmap(v50);
              v53 = v52;
              if ( OldRedirectionBitmap )
                v53 = OldRedirectionBitmap;
              v78 = v17 + 56;
              v77 = ghrgnValid;
              *(_QWORD *)v76 = ghdcMem2;
              goto LABEL_113;
            }
          }
          else if ( (*((_BYTE *)v30 + 50) & 8) == 0 )
          {
            v71 = v86[0];
            if ( !v86[0] )
            {
              v71 = *(HDC *)(gpDispInfo + 24LL);
              v86[0] = v71;
            }
            GreHintDCWnd((__int64)v71, *v30, 0LL, 0, 0);
            GreSelectVisRgn(v71, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v71,
              *(_DWORD *)(v17 + 56),
              *(_DWORD *)(v17 + 60),
              *(_DWORD *)(v17 + 64) - *(_DWORD *)(v17 + 56),
              *(_DWORD *)(v17 + 68) - *(_DWORD *)(v17 + 60),
              v71,
              *(_DWORD *)(v17 + 56) - *(_DWORD *)(v17 + 72),
              *(_DWORD *)(v17 + 60) - *(_DWORD *)(v17 + 76),
              0xCC0020u,
              0,
              1);
            GreHintDCWnd((__int64)v71, 0LL, 0LL, 0, 0);
          }
        }
      }
LABEL_70:
      if ( ((*((_BYTE *)v30 + 40) >> 7) & ((v27 & 2) == 0)) == 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, *(HRGN *)(v17 + 96), ghrgnVisNew, 4u, v27) )
      {
        v35 = *(HRGN *)(v17 + 96);
        if ( v35 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v35, ghrgnVisNew, 2u, v27) )
          {
LABEL_105:
            v16 = v81;
            goto LABEL_48;
          }
        }
        else
        {
          v92 = *(__m128i *)(v90 + 112);
          TransformRectBetweenCoordinateSpaces(&v92, &v92, v30, v90);
          SetRectRgnIndirect(ghrgnInvalid, &v92);
        }
LABEL_73:
        v16 = v81;
        if ( (v27 & 4) == 0 )
        {
          if ( (v81 & 0x20) != 0 )
          {
            v54 = 5LL;
            v55 = 0LL;
            v56 = ghrgnValidSum;
          }
          else
          {
            v54 = 2LL;
            v56 = ghrgnValidSum;
            v55 = ghrgnValidSum;
          }
          GreCombineRgn(v56, ghrgnValid, v55, v54);
          v16 &= ~0x20u;
          LODWORD(v81) = v16;
        }
        if ( (v16 & 0x20) != 0 && (v27 & 4) != 0 )
          goto LABEL_49;
        v36 = (_QWORD *)ghrgnValidSum;
        if ( (v16 & 0x20) != 0 )
          v36 = (_QWORD *)ghrgnValid;
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v36, 4LL) > 1 )
        {
LABEL_49:
          v31 = *(_DWORD *)(v17 + 32);
          if ( ((*((_BYTE *)v30 + 40) >> 7) & ((v31 & 0x40) == 0)) != 0 && (v31 & 0x87) != 7 )
          {
            Spb = FindSpb(v30);
            FreeSpb(Spb, v74, v75);
          }
          if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)v30)
            && (*((_BYTE *)v30 + 50) & 8) != 0
            && *(_QWORD *)(v17 + 112)
            && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, *(HRGN *)(v17 + 96), 4u, v27) )
          {
            GreForceClipRgnChange(v32, *v30);
          }
          v33 = *(_QWORD *)(v17 + 96);
          if ( v33 )
          {
            GreDeleteObject(v33);
            *(_QWORD *)(v17 + 96) = 0LL;
          }
          v11 = v82;
          if ( (((*(_BYTE *)(v17 + 32) & 0x40) != 0) & (unsigned __int8)~*((_BYTE *)v30 + 45)) != 0 )
            v11 = ++v82;
          if ( (v27 & 8) != 0 )
            goto LABEL_60;
          if ( (v27 & 5) == 4 )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v87);
            xxxInternalInvalidate((struct tagWND *)v30, (HRGN)1, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v87);
          }
          v81 = ghrgnInvalid;
          v37 = LogicalToPhysicalInPlaceRgn(v30, &v81);
          v38 = v37;
          if ( (v16 & 0x40) != 0 )
          {
            if ( !v80 && !v37 )
            {
              v91 = (HRGN)ghrgnInvalid;
LABEL_86:
              v16 &= ~0x40u;
              LODWORD(v81) = v16;
LABEL_60:
              v18 = v83;
              v3 = v86[0];
              goto LABEL_18;
            }
            v60 = 5LL;
            v62 = 0LL;
            v61 = ghrgnInvalidSum;
          }
          else
          {
            v60 = 2LL;
            v61 = ghrgnInvalidSum;
            v62 = ghrgnInvalidSum;
          }
          v63 = v81;
          GreCombineRgn(v61, v81, v62, v60);
          if ( v38 )
            GreDeleteObject(v63);
          goto LABEL_86;
        }
LABEL_48:
        *((_DWORD *)v30 + 72) &= ~2u;
        v27 |= 8u;
        goto LABEL_49;
      }
      v72 = RestoreSpb(v30, ghrgnInvalid, v86);
      if ( v72 )
      {
        if ( v72 == 2 && (v81 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v27 & 1) != 0 )
          goto LABEL_165;
      }
      else if ( (v27 & 1) != 0 )
      {
        goto LABEL_105;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_165:
      if ( (v27 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v27 |= 0x20u;
      goto LABEL_73;
    }
LABEL_21:
    if ( v85 )
      GreUnlockDisplayArea(*gpDispInfo, &v93);
    v20 = *((_DWORD *)v1 + 7) - 1;
    v21 = (_DWORD *)*((_QWORD *)v1 + 5);
    if ( v20 >= 0 )
    {
      v22 = gSharedInfo;
      do
      {
        if ( *(_QWORD *)v21 )
        {
          v23 = *(_QWORD *)(*(_DWORD *)(v22 + 16) * (unsigned int)(unsigned __int16)*v21 + *(_QWORD *)(v22 + 8));
          if ( (*(_BYTE *)(v23 + 50) & 8) != 0 )
          {
            DeleteOldRedirectionBitmap(v23, v22, v14, v15, *(_QWORD *)v76, v77, v78);
            v22 = gSharedInfo;
          }
        }
        v21 += 42;
        --v20;
      }
      while ( v20 >= 0 );
    }
    if ( (v16 & 0x40) == 0 )
    {
      if ( v11 != *((_DWORD *)v1 + 7) || (v39 = 69, v12 == GetDesktopWindow(v12)) )
        v39 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v88);
      xxxInternalInvalidate((struct tagWND *)v12, v91, v39);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v88);
    }
    if ( gcountPWO )
      GreClientRgnDone();
    GreRedrawSpriteOverlapPresent(*gpDispInfo);
    if ( v3 )
    {
      GreSelectVisRgn(v3, 0LL, 1LL);
      GreGetBounds(v3, 0LL, 0LL);
    }
    v2 = v84;
  }
  else
  {
LABEL_39:
    v25 = *((_DWORD *)v1 + 7) - 1;
    if ( v25 >= 0 )
    {
      v26 = (_QWORD *)(*((_QWORD *)v1 + 5) + 96LL);
      do
      {
        if ( *v26 )
        {
          GreDeleteObject(*v26);
          *v26 = 0LL;
        }
        v26 += 21;
        --v25;
      }
      while ( v25 >= 0 );
    }
  }
  GreUnlockVisRgn(*gpDispInfo);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return v2;
}
