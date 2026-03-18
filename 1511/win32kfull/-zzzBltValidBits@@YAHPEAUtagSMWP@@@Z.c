/*
 * XREFs of ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     SpbCheck @ 0x1C000C7D8 (SpbCheck.c)
 *     GreUnlockDisplayArea @ 0x1C000CC58 (GreUnlockDisplayArea.c)
 *     GreHintDCWnd @ 0x1C0030DE0 (GreHintDCWnd.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0053484 (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0055B50 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00573EC (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C00684F0 (GreRedrawSpriteOverlapPresent.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C006A080 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     DeleteOldRedirectionBitmap @ 0x1C007FFA4 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C007FFF4 (GetOldRedirectionBitmap.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C009688C (LogicalToPhysicalInPlaceRgn.c)
 *     UnionRect @ 0x1C00EB38C (UnionRect.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00F559C (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     GreForceClipRgnChange @ 0x1C0103A50 (GreForceClipRgnChange.c)
 *     UpdateSpriteArea @ 0x1C014577C (UpdateSpriteArea.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01EA734 (FindSpb.c)
 *     RestoreSpb @ 0x1C01EA75C (RestoreSpb.c)
 *     GreClientRgnDone @ 0x1C027C344 (GreClientRgnDone.c)
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
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r13d
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ebx
  _QWORD *v21; // rdi
  int v23; // edi
  _QWORD *v24; // rbx
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rdi
  int v29; // edx
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
  _QWORD *v48; // r14
  __int64 RedirectionBitmap; // rax
  __int64 v50; // r11
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdi
  int v59; // edi
  __int64 v60; // rbx
  int v61; // edx
  int v62; // r13d
  unsigned int v63; // r12d
  int v64; // eax
  __m128i v65; // xmm0
  int v66; // ecx
  int v67; // edx
  __int64 OldRedirectionBitmap; // rcx
  HDC v69; // r12
  int v70; // eax
  __int64 Spb; // rax
  unsigned int v72[2]; // [rsp+28h] [rbp-99h]
  __int64 v73; // [rsp+30h] [rbp-91h]
  int valid; // [rsp+68h] [rbp-59h]
  int v75; // [rsp+68h] [rbp-59h]
  __int64 v76; // [rsp+70h] [rbp-51h] BYREF
  int v77; // [rsp+78h] [rbp-49h]
  int v78; // [rsp+7Ch] [rbp-45h]
  int v79; // [rsp+80h] [rbp-41h]
  HDC v80; // [rsp+88h] [rbp-39h] BYREF
  int v81; // [rsp+90h] [rbp-31h]
  __m128i v82; // [rsp+98h] [rbp-29h] BYREF
  struct tagSMWP *v83; // [rsp+A8h] [rbp-19h] BYREF
  HRGN v84; // [rsp+B0h] [rbp-11h]
  __int64 v85; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-1h]
  __m128i v87; // [rsp+C8h] [rbp+7h] BYREF
  struct tagRECT v88; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v83 = a1;
  v2 = 0;
  v3 = 0LL;
  v79 = 0;
  v80 = 0LL;
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
        && ((*(_BYTE *)(v9 + 55) & 1) == 0 || *(_QWORD *)(v9 + 88) != GetDesktopWindow(v9, v4)) )
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
    v86 = v12;
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, v1);
    *(_QWORD *)&v88.left = 0LL;
    *(_QWORD *)&v88.right = 0LL;
    v81 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent, v13, 0LL) )
    {
      v59 = *((_DWORD *)v1 + 7) - 1;
      v60 = *((_QWORD *)v1 + 5);
      if ( v59 >= 0 )
      {
        do
        {
          if ( *(_QWORD *)v60 )
          {
            if ( (*(_DWORD *)(v60 + 32) & 8) == 0 )
            {
              v61 = *(_DWORD *)(v60 + 72);
              if ( v61 || *(_DWORD *)(v60 + 76) )
              {
                v66 = -*(_DWORD *)(v60 + 76);
                v67 = -v61;
                v82 = *(__m128i *)(v60 + 56);
                v65 = v82;
                v82.m128i_i32[2] += v67;
                v82.m128i_i32[3] += v66;
                v82.m128i_i32[1] += v66;
                v87 = v65;
                v82.m128i_i32[0] = v67 + _mm_cvtsi128_si32(v65);
                UnionRect(&v88, &v87, &v82);
                v14 = 1;
              }
            }
          }
          v60 += 168LL;
          --v59;
        }
        while ( v59 >= 0 );
        v81 = v14;
      }
    }
    zzzLockDisplayAreaAndInvalidateDCCache(
      v12,
      (*(_BYTE *)(v12 + 55) & 2) != 0 ? 12 : 10,
      (struct tagRECT *)((unsigned __int64)&v88 & -(__int64)(v14 != 0)));
    v15 = 96;
    v16 = *((_QWORD *)v1 + 5);
    v17 = *((_DWORD *)v1 + 7) - 1;
    LODWORD(v76) = 96;
    v18 = ghrgnInvalidSum;
    v84 = (HRGN)ghrgnInvalidSum;
    v77 = 0;
    v78 = v17;
    if ( v17 >= 0 )
    {
      v19 = valid;
      while ( 1 )
      {
        v75 = --v19;
        if ( *(_QWORD *)v16 )
          break;
LABEL_19:
        v16 += 168LL;
        v78 = --v17;
        if ( v17 < 0 )
        {
          v1 = v83;
          v12 = v86;
          goto LABEL_21;
        }
      }
      if ( (*(_DWORD *)(v16 + 32) & 8) != 0 )
      {
LABEL_18:
        v19 = v75;
        goto LABEL_19;
      }
      v25 = *(_DWORD *)(v16 + 88);
      v26 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v16;
      v27 = *((_QWORD *)&gSharedInfo + 1);
      v79 = 1;
      v28 = *(_QWORD **)(v26 + v27);
      if ( (*((_BYTE *)v28 + 50) & 8) != 0 )
      {
        if ( !GetRedirectionBitmap(*(_QWORD *)(v26 + v27)) && (*((_BYTE *)v28 + 51) & 0x20) == 0 )
          goto LABEL_48;
        v31 = *((_DWORD *)v28 + 72);
        if ( (v31 & 0x20) == 0 && (*(_DWORD *)(v16 + 156) & 7) == 0 )
          goto LABEL_48;
        *((_DWORD *)v28 + 72) = v31 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v28, ghrgnVisNew) )
        v25 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 72LL) )
        SpbCheckRect((struct tagWND *)v28, (struct tagRECT *)v28 + 7, 1u);
      if ( (v25 & 3) == 0 && v28[20] != 1LL )
      {
        v37 = *(_DWORD *)(v16 + 64);
        v38 = *(_DWORD *)(v16 + 56);
        if ( v37 > v38 )
        {
          v39 = *(_DWORD *)(v16 + 68);
          v40 = *(_DWORD *)(v16 + 60);
          if ( v39 > v40 )
          {
            v72[0] = v39 - *(_DWORD *)(v16 + 76);
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v38 - *(_DWORD *)(v16 + 72)),
              (unsigned int)(v40 - *(_DWORD *)(v16 + 76)),
              (unsigned int)(v37 - *(_DWORD *)(v16 + 72)));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, *(_QWORD *)(v16 + 96), 1LL, *(_QWORD *)v72, v73) >= 2
              && ((v15 & 0x20) != 0
               || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL, *(_QWORD *)v72, v73) > 1) )
            {
              if ( *(_QWORD *)(v16 + 72) )
                GreOffsetRgn(ghrgnValid, *(unsigned int *)(v16 + 72), *(unsigned int *)(v16 + 76));
              v41 = v28;
              v42 = 0LL;
              while ( 1 )
              {
                v43 = v41[20];
                if ( v43 == 1 )
                  break;
                if ( v43 )
                {
                  v85 = v41[20];
                  if ( v42 )
                  {
                    v64 = PhysicalToLogicalInPlaceRgn(v42, &v85);
                    v43 = v85;
                    v62 = v64;
                  }
                  else
                  {
                    v62 = 0;
                  }
                  v63 = GreCombineRgn(ghrgnValid, ghrgnValid, v43, 4LL, *(_QWORD *)v72, v73);
                  if ( v62 )
                    GreDeleteObject(v43);
                  if ( v63 < 2 )
                    break;
                  v42 = v41;
                }
                v41 = (_QWORD *)v41[11];
                if ( !v41 || (*((_BYTE *)v41 + 55) & 2) != 0 )
                {
                  v44 = *(_QWORD *)(v16 + 120);
                  if ( (!v44 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v44, 4LL, *(_QWORD *)v72, v73) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL, *(_QWORD *)v72, v73) > 1 )
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
      v25 |= 4u;
LABEL_67:
      if ( (v25 & 4) == 0 )
      {
        v46 = *(_DWORD *)(v16 + 72);
        if ( *(_QWORD *)(v16 + 72) )
        {
          StyleWindow = GetStyleWindow(v28, 2568LL);
          v48 = (_QWORD *)StyleWindow;
          if ( StyleWindow && (RedirectionBitmap = GetRedirectionBitmap(StyleWindow), (v50 = RedirectionBitmap) != 0) )
          {
            if ( v28 != v48 )
            {
              v51 = RedirectionBitmap;
              v73 = ghrgnValid;
              *(_QWORD *)v72 = ghdcMem;
LABEL_113:
              UpdateSpriteArea(v48, v50, v51);
              goto LABEL_68;
            }
            if ( (*(_DWORD *)(v16 + 156) & 1) != 0
              || v46 != *(_DWORD *)(v16 + 16) - *(_DWORD *)(v16 + 80)
              || *(_DWORD *)(v16 + 76) != *(_DWORD *)(v16 + 20) - *(_DWORD *)(v16 + 84) )
            {
              OldRedirectionBitmap = GetOldRedirectionBitmap(v48);
              v51 = v50;
              if ( OldRedirectionBitmap )
                v51 = OldRedirectionBitmap;
              v73 = ghrgnValid;
              *(_QWORD *)v72 = ghdcMem2;
              goto LABEL_113;
            }
          }
          else if ( (*((_BYTE *)v28 + 50) & 8) == 0 )
          {
            v69 = v80;
            if ( !v80 )
            {
              v69 = *(HDC *)(gpDispInfo + 24LL);
              v80 = v69;
            }
            GreHintDCWnd((__int64)v69, *v28, 0LL, 0, 0);
            GreSelectVisRgn(v69, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v69,
              *(_DWORD *)(v16 + 56),
              *(_DWORD *)(v16 + 60),
              *(_DWORD *)(v16 + 64) - *(_DWORD *)(v16 + 56),
              *(_DWORD *)(v16 + 68) - *(_DWORD *)(v16 + 60),
              v69,
              *(_DWORD *)(v16 + 56) - *(_DWORD *)(v16 + 72),
              *(_DWORD *)(v16 + 60) - *(_DWORD *)(v16 + 76),
              0xCC0020u,
              0,
              1);
            GreHintDCWnd((__int64)v69, 0LL, 0LL, 0, 0);
          }
        }
      }
LABEL_68:
      if ( ((*((_BYTE *)v28 + 40) >> 7) & ((v25 & 2) == 0)) == 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, *(HRGN *)(v16 + 96), ghrgnVisNew, 4u, v25) )
      {
        v32 = *(HRGN *)(v16 + 96);
        if ( v32 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v32, ghrgnVisNew, 2u, v25) )
          {
LABEL_105:
            v15 = v76;
            goto LABEL_48;
          }
        }
        else
        {
          v87 = *(__m128i *)(v86 + 112);
          TransformRectBetweenCoordinateSpaces(&v87, &v87, v28, v86);
          SetRectRgnIndirect(ghrgnInvalid, &v87);
        }
LABEL_71:
        v15 = v76;
        if ( (v25 & 4) == 0 )
        {
          if ( (v76 & 0x20) != 0 )
          {
            v52 = 5LL;
            v53 = 0LL;
            v54 = ghrgnValidSum;
          }
          else
          {
            v52 = 2LL;
            v54 = ghrgnValidSum;
            v53 = ghrgnValidSum;
          }
          GreCombineRgn(v54, ghrgnValid, v53, v52, *(_QWORD *)v72, v73);
          v15 &= ~0x20u;
          LODWORD(v76) = v15;
        }
        if ( (v15 & 0x20) != 0 && (v25 & 4) != 0 )
          goto LABEL_49;
        v33 = (_QWORD *)ghrgnValidSum;
        if ( (v15 & 0x20) != 0 )
          v33 = (_QWORD *)ghrgnValid;
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v33, 4LL, *(_QWORD *)v72, v73) > 1 )
        {
LABEL_49:
          v29 = *(_DWORD *)(v16 + 32);
          if ( ((*((_BYTE *)v28 + 40) >> 7) & ((v29 & 0x40) == 0)) != 0 && (v29 & 0x87) != 7 )
          {
            Spb = FindSpb(v28);
            FreeSpb(Spb);
          }
          if ( (unsigned int)IsToplevelWindowDesktopComposed(v28)
            && (*((_BYTE *)v28 + 50) & 8) != 0
            && *(_QWORD *)(v16 + 112)
            && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, *(HRGN *)(v16 + 96), 4u, v25) )
          {
            GreForceClipRgnChange(v45, *v28);
          }
          v30 = *(_QWORD *)(v16 + 96);
          if ( v30 )
          {
            GreDeleteObject(v30);
            *(_QWORD *)(v16 + 96) = 0LL;
          }
          v11 = v77;
          if ( (((*(_BYTE *)(v16 + 32) & 0x40) != 0) & (unsigned __int8)~*((_BYTE *)v28 + 45)) != 0 )
            v11 = ++v77;
          if ( (v25 & 8) != 0 )
            goto LABEL_58;
          if ( (v25 & 5) == 4 )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v82);
            xxxInternalInvalidate((struct tagWND *)v28, (HRGN)1, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v82);
          }
          v76 = ghrgnInvalid;
          v34 = LogicalToPhysicalInPlaceRgn(v28, &v76);
          v35 = v34;
          if ( (v15 & 0x40) != 0 )
          {
            if ( !v75 && !v34 )
            {
              v84 = (HRGN)ghrgnInvalid;
LABEL_84:
              v15 &= ~0x40u;
              LODWORD(v76) = v15;
LABEL_58:
              v17 = v78;
              v3 = v80;
              goto LABEL_18;
            }
            v55 = 5LL;
            v57 = 0LL;
            v56 = ghrgnInvalidSum;
          }
          else
          {
            v55 = 2LL;
            v56 = ghrgnInvalidSum;
            v57 = ghrgnInvalidSum;
          }
          v58 = v76;
          GreCombineRgn(v56, v76, v57, v55, *(_QWORD *)v72, v73);
          if ( v35 )
            GreDeleteObject(v58);
          goto LABEL_84;
        }
LABEL_48:
        *((_DWORD *)v28 + 72) &= ~2u;
        v25 |= 8u;
        goto LABEL_49;
      }
      v70 = RestoreSpb(v28, ghrgnInvalid, &v80);
      if ( v70 )
      {
        if ( v70 == 2 && (v76 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL, *(_QWORD *)v72, v73);
        if ( (v25 & 1) != 0 )
          goto LABEL_165;
      }
      else if ( (v25 & 1) != 0 )
      {
        goto LABEL_105;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL, *(_QWORD *)v72, v73);
LABEL_165:
      if ( (v25 & 0x20) == 0
        && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL, *(_QWORD *)v72, v73) <= 1 )
      {
        v25 |= 0x20u;
      }
      goto LABEL_71;
    }
LABEL_21:
    if ( v81 )
      GreUnlockDisplayArea(*gpDispInfo, &v88);
    v20 = *((_DWORD *)v1 + 7) - 1;
    v21 = (_QWORD *)*((_QWORD *)v1 + 5);
    if ( v20 >= 0 )
    {
      v18 = gSharedInfo;
      do
      {
        if ( *v21
          && (*(_BYTE *)(*(_QWORD *)(*(_DWORD *)(v18 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)v21
                                   + *(_QWORD *)(v18 + 8))
                       + 50LL) & 8) != 0 )
        {
          DeleteOldRedirectionBitmap();
          v18 = gSharedInfo;
        }
        v21 += 21;
        --v20;
      }
      while ( v20 >= 0 );
    }
    if ( (v15 & 0x40) == 0 )
    {
      if ( v11 != *((_DWORD *)v1 + 7) || (v36 = 69, v12 == GetDesktopWindow(v12, v18)) )
        v36 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v83);
      xxxInternalInvalidate((struct tagWND *)v12, v84, v36);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v83);
    }
    if ( gcountPWO )
      GreClientRgnDone();
    GreRedrawSpriteOverlapPresent(*gpDispInfo);
    if ( v3 )
    {
      GreSelectVisRgn(v3, 0LL, 1LL);
      GreGetBounds(v3, 0LL, 0LL);
    }
    v2 = v79;
  }
  else
  {
LABEL_39:
    v23 = *((_DWORD *)v1 + 7) - 1;
    if ( v23 >= 0 )
    {
      v24 = (_QWORD *)(*((_QWORD *)v1 + 5) + 96LL);
      do
      {
        if ( *v24 )
        {
          GreDeleteObject(*v24);
          *v24 = 0LL;
        }
        v24 += 21;
        --v23;
      }
      while ( v23 >= 0 );
    }
  }
  GreUnlockVisRgn(*gpDispInfo);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return v2;
}
