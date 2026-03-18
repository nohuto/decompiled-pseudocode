/*
 * XREFs of xxxScrollWindowEx @ 0x1C00ADA68
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C00AD8C0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0233F08 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C005CF20 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     _IsDescendant @ 0x1C0063558 (_IsDescendant.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     MirrorRegion @ 0x1C00A6900 (MirrorRegion.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     zzzInternalShowCaret @ 0x1C00ABA64 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C00ABB10 (zzzInternalHideCaret.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     GreTransformPoints @ 0x1C00FB364 (GreTransformPoints.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 *     OffsetChildren @ 0x1C010F838 (OffsetChildren.c)
 *     GetDCOrgOnScreen @ 0x1C0125BF8 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        unsigned int a2,
        unsigned int a3,
        struct tagRECT *a4,
        _DWORD *a5,
        HRGN a6,
        __int64 a7,
        __int16 a8)
{
  struct tagRECT *v8; // r13
  int v9; // r12d
  HRGN v10; // r10
  struct tagWND *v11; // rbx
  BOOL v12; // r8d
  __int64 v13; // rsi
  int v14; // r9d
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  __int16 v18; // r14
  int v19; // edi
  unsigned int v21; // edi
  HDC DCEx; // r15
  int v23; // r15d
  unsigned int v24; // r12d
  int v25; // edi
  HDC v26; // rdi
  struct tagWND *v27; // rcx
  unsigned int v28; // ecx
  int v29; // eax
  bool v30; // zf
  struct tagRECT *v31; // rax
  int v32; // r8d
  int v33; // eax
  struct tagRECT v34; // xmm0
  LONG left; // r8d
  int v36; // ecx
  int v37; // edx
  int v38; // edi
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // r8d
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 DesktopWindow; // rax
  unsigned int v47; // ecx
  unsigned int v48; // r8d
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 i; // rdi
  int v52; // edx
  int v53; // eax
  int v54; // [rsp+50h] [rbp-B0h]
  BOOL v55; // [rsp+54h] [rbp-ACh]
  unsigned int v56; // [rsp+58h] [rbp-A8h]
  unsigned int v57; // [rsp+58h] [rbp-A8h]
  int v59; // [rsp+60h] [rbp-A0h]
  struct tagRECT v60; // [rsp+70h] [rbp-90h] BYREF
  HDC v61; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+88h] [rbp-78h]
  unsigned int v63; // [rsp+8Ch] [rbp-74h]
  int v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+94h] [rbp-6Ch]
  unsigned int v66; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v67; // [rsp+9Ch] [rbp-64h]
  int v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A4h] [rbp-5Ch]
  unsigned int v70; // [rsp+A8h] [rbp-58h]
  unsigned int v71; // [rsp+ACh] [rbp-54h]
  int v72; // [rsp+B0h] [rbp-50h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  HRGN v74[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v75[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  _QWORD v78[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRECT v79; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT *v80[2]; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v81; // [rsp+120h] [rbp+20h] BYREF
  int v82; // [rsp+130h] [rbp+30h] BYREF
  int v83; // [rsp+134h] [rbp+34h]
  int v84; // [rsp+138h] [rbp+38h]
  int v85; // [rsp+13Ch] [rbp+3Ch]

  v8 = a4;
  v9 = a2;
  v10 = a6;
  v11 = a1;
  v56 = a2;
  *(_QWORD *)&v60.left = a5;
  v12 = a4 != 0LL;
  v74[0] = a6;
  v13 = 0LL;
  v80[0] = (struct tagRECT *)a7;
  v66 = 0;
  v14 = 0;
  v67 = 0;
  v59 = 0;
  v55 = v12;
  v54 = 0;
  if ( !a1 )
  {
    v59 = 1;
    v11 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
  }
  if ( (*((_BYTE *)v11 + 50) & 0x40) != 0 )
  {
    v9 = -a2;
    v56 = -a2;
    MirrorRegion((__int64)v11, (unsigned __int64)a6, 1);
    if ( v8 )
    {
      v15 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v8->left;
      v8->left = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v8->right;
      v8->right = v15;
    }
    v14 = 0;
    v10 = v74[0];
    if ( a5 )
    {
      v16 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - *a5;
      *a5 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - a5[2];
      a5[2] = v16;
    }
  }
  if ( !(v9 | a3) )
    goto LABEL_27;
  if ( (unsigned int)IsVisible(v11) )
  {
    v18 = a8;
    goto LABEL_15;
  }
  if ( (*((_BYTE *)v11 + 55) & 0x20) != 0 )
  {
LABEL_27:
    v18 = a8;
  }
  else
  {
    v18 = a8;
    if ( (a8 & 1) != 0 && !v17 )
    {
      v14 = 1;
      v18 = a8 & 0xFFFD;
      v54 = 1;
    }
  }
  if ( v10 )
  {
    SetEmptyRgn(v10);
    v14 = v54;
  }
  if ( a7 )
  {
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(a7 + 8) = 0LL;
  }
  if ( !v14 )
    return 1LL;
LABEL_15:
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v75);
  v65 = 0;
  if ( v59 )
  {
    v78[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v78;
    v78[1] = v11;
    ++*((_DWORD *)v11 + 2);
  }
  if ( !v54 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 384LL) + 256LL;
    if ( *(_QWORD *)v13 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v13, (__int64)v11) )
      {
        v65 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v72 = v18 & 0x8000;
  if ( v18 < 0 )
  {
    v19 = 0x10000;
    if ( (*(_BYTE *)(*((_QWORD *)v11 + 19) + 84LL) & 0x60) == 0 )
      v19 = 65538;
    v64 = v18 & 1;
    if ( (v18 & 1) != 0 && (*((_BYTE *)v11 + 55) & 2) != 0 )
      v19 |= 0x80002u;
  }
  else
  {
    v19 = 65538;
    v64 = v18 & 1;
    if ( (v18 & 1) != 0 )
      v19 = 589826;
  }
  GreLockVisRgn(*gpDispInfo);
  v21 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v11, 0LL, v21);
  v61 = DCEx;
  v73 = v18 & 2;
  if ( (v18 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v66);
    if ( !v74[0] )
      v74[0] = (HRGN)ghrgnSW;
  }
  if ( !v55 )
  {
    v8 = &v81;
    GetRect(v11, &v81, 17LL);
    if ( (v21 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v23 = v9;
  v24 = a3;
  v79 = *v8;
  v25 = v21 & 2;
  if ( !v25 )
  {
    GreTransformPoints(v61, 1);
    v69 = 0;
    v68 = 0;
    v70 = v56;
    v71 = a3;
    GreTransformPoints(v61, 1);
    v23 = v70 - v68;
    v24 = v71 - v69;
  }
  if ( v54 )
  {
    v26 = v61;
    v57 = 1;
  }
  else
  {
    v27 = (struct tagWND *)*((_QWORD *)v11 + 20);
    if ( v72 && (*((_BYTE *)v11 + 45) & 1) == 0 )
    {
      if ( (unsigned __int64)v27 > 1 )
      {
        GreGetRgnBox(v27, &v82);
        v28 = v24 - *((_DWORD *)v11 + 33);
        v29 = v23 - *((_DWORD *)v11 + 32);
        v85 += v28;
        v83 += v28;
        v82 += v29;
        v84 += v29;
        xxxRedrawWindow(v11, &v82, 0LL, 133);
      }
      v27 = 0LL;
    }
    v30 = v25 == 0;
    v26 = v61;
    v57 = InternalScrollDC(v27, v61, v56, a3, v8, *(struct tagRECT **)&v60.left, (HRGN)v27, v74[0], v80[0], v30);
    v31 = v80[0];
    if ( v80[0] && (*((_BYTE *)v11 + 50) & 0x40) != 0 )
    {
      v32 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v80[0]->left;
      v80[0]->left = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v80[0]->right;
      v31->right = v32;
    }
  }
  _ReleaseDC(v26);
  v33 = v54;
  if ( !v54 )
  {
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
    {
      if ( v55 )
      {
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v34 = v79;
          v81 = v79;
          left = v79.left;
        }
        else
        {
          v36 = *((_DWORD *)v11 + 32);
          v37 = *((_DWORD *)v11 + 33);
          left = v36 + v79.left;
          v81.right = v79.right + v36;
          v81.left = v36 + v79.left;
          v81.top = v37 + v79.top;
          v81.bottom = v37 + v79.bottom;
          v34 = v81;
        }
        v60.right = v23 + v34.right;
        v60.bottom = v24 + v34.bottom;
        v60.top = v24 + v34.top;
        v60.left = left + v23;
        UnionRect(&v60, &v60, &v81);
      }
      else
      {
        v60 = (struct tagRECT)*((_OWORD *)v11 + 8);
      }
      SpbCheckRect(v11, &v60, 0);
    }
    v33 = 0;
  }
  v38 = v64;
  if ( v64 )
  {
    if ( !v33 && v11 == *(struct tagWND **)v13 )
    {
      if ( !v55
        || (v39 = *(_DWORD *)(v13 + 20),
            LODWORD(v80[0]) = *(_DWORD *)(v13 + 16),
            LODWORD(v80[1]) = *(_DWORD *)(v13 + 28) + LODWORD(v80[0]),
            v40 = *(_DWORD *)(v13 + 24),
            HIDWORD(v80[0]) = v39,
            HIDWORD(v80[1]) = v39 + v40,
            (unsigned int)IntersectRect(v80, (int *)v80, &v79.left)) )
      {
        *(_DWORD *)(v13 + 16) += v23;
        *(_DWORD *)(v13 + 20) += v24;
      }
    }
    if ( v55 )
    {
      if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
      {
        *(struct tagRECT *)v80 = v79;
      }
      else
      {
        v41 = *((_DWORD *)v11 + 32);
        v42 = *((_DWORD *)v11 + 33);
        LODWORD(v80[0]) = v41 + v79.left;
        LODWORD(v80[1]) = v41 + v79.right;
        HIDWORD(v80[0]) = v42 + v79.top;
        HIDWORD(v80[1]) = v42 + v79.bottom;
      }
    }
    if ( *((_QWORD *)v11 + 12) )
    {
      OffsetChildren((_DWORD)v11, v23, v24, (unsigned __int64)v80 & -(__int64)v55, (v18 & 0x4000) == 0);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)v11, (*((_BYTE *)v11 + 55) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v73 )
  {
    v43 = (_QWORD *)ghrgnSW;
    if ( v74[0] != (HRGN)ghrgnSW )
    {
      GreCombineRgn(ghrgnSW, v74[0], 0LL, 5LL);
      v43 = (_QWORD *)ghrgnSW;
    }
    GreOffsetRgn(*v43, v66, v67);
    xxxInternalInvalidate(v11, ghrgnSW, v18 & 4 | 0x81);
  }
  GreUnlockVisRgn(*gpDispInfo);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v75);
  v45 = gdwDeferWinEvent;
  if ( !--gdwDeferWinEvent && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  if ( v38 )
  {
    if ( v55 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v44 == DesktopWindow )
      {
        LODWORD(v61) = v23 + v79.left;
        v62 = v23 + v79.right;
        HIDWORD(v61) = v24 + v79.top;
        v47 = v24 + v79.bottom;
      }
      else
      {
        v48 = v24 + *(_DWORD *)(v44 + 132);
        v44 = (unsigned int)(v23 + *(_DWORD *)(v44 + 128));
        LODWORD(v61) = v44 + v79.left;
        v62 = v44 + v79.right;
        HIDWORD(v61) = v48 + v79.top;
        v47 = v48 + v79.bottom;
      }
      v63 = v47;
    }
    v49 = 0LL;
    v50 = gptiCurrent;
    v76 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v76;
    v77 = 0LL;
    for ( i = *((_QWORD *)v11 + 12); i; i = *(_QWORD *)(i + 72) )
    {
      if ( !v55 || (unsigned int)IntersectRect(v74, (int *)&v61, (int *)(i + 112)) )
      {
        v77 = i;
        ++*(_DWORD *)(i + 8);
        if ( v49 )
          HMUnlockObject(v49);
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v52 = *(unsigned __int16 *)(i + 132);
          v53 = *(unsigned __int16 *)(i + 128);
        }
        else
        {
          v52 = (unsigned __int16)(*(_WORD *)(i + 132) - *((_WORD *)v11 + 66));
          v53 = (unsigned __int16)(*(_WORD *)(i + 128) - *((_WORD *)v11 + 64));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((struct tagWND *)i, 3LL, 0LL, v53 | (v52 << 16), 0, 0, 0LL, 1, 0);
        v49 = v77;
      }
    }
    ThreadUnlock1(v50, v44);
  }
  if ( v65 )
    zzzInternalShowCaret();
  if ( v59 )
    ThreadUnlock1(v45, v44);
  return v57;
}
