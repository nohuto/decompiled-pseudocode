/*
 * XREFs of xxxScrollWindowEx @ 0x1C0112924
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C0112780 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C0217528 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00085DC (SpbCheckRect.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     _IsDescendant @ 0x1C0012B34 (_IsDescendant.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C0079DA8 (zzzInternalShowCaret.c)
 *     MirrorRegion @ 0x1C00859F0 (MirrorRegion.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     UnionRect @ 0x1C0091308 (UnionRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreTransformPoints @ 0x1C00DDF64 (GreTransformPoints.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF9CC (ThreadLockExchangeAlways.c)
 *     OffsetChildren @ 0x1C00EA6A4 (OffsetChildren.c)
 *     GetDCOrgOnScreen @ 0x1C0113178 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  int v9; // r15d
  HRGN v10; // r10
  struct tagWND *v11; // rbx
  BOOL v12; // r8d
  __int64 v13; // rsi
  int v14; // r9d
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  __int16 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  unsigned int v23; // edi
  HDC DCEx; // r14
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  int v27; // edi
  HDC v28; // rdi
  struct tagWND *v29; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  bool v32; // zf
  struct tagRECT *v33; // rax
  int v34; // r8d
  int v35; // eax
  struct tagRECT v36; // xmm0
  LONG left; // r8d
  int v38; // ecx
  int v39; // edx
  int v40; // edi
  int v41; // edx
  int v42; // ecx
  int v43; // edx
  int v44; // r8d
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 DesktopWindow; // rax
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  __int64 v51; // rcx
  __int64 i; // rdi
  int v53; // edx
  int v54; // eax
  int v55; // [rsp+50h] [rbp-B0h]
  BOOL v56; // [rsp+54h] [rbp-ACh]
  unsigned int v57; // [rsp+58h] [rbp-A8h]
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+60h] [rbp-A0h]
  struct tagRECT v61; // [rsp+70h] [rbp-90h] BYREF
  HDC v62; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v63; // [rsp+88h] [rbp-78h]
  unsigned int v64; // [rsp+8Ch] [rbp-74h]
  int v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+94h] [rbp-6Ch]
  unsigned int v67; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+9Ch] [rbp-64h]
  struct _POINTL v69; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v70; // [rsp+A8h] [rbp-58h]
  unsigned int v71; // [rsp+ACh] [rbp-54h]
  int v72; // [rsp+B0h] [rbp-50h]
  HRGN v73[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v74; // [rsp+C8h] [rbp-38h]
  char v75[8]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v76[3]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v77[4]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v78; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT *v79[2]; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v80; // [rsp+130h] [rbp+30h] BYREF
  int v81; // [rsp+140h] [rbp+40h] BYREF
  int v82; // [rsp+144h] [rbp+44h]
  int v83; // [rsp+148h] [rbp+48h]
  int v84; // [rsp+14Ch] [rbp+4Ch]

  v8 = a4;
  v9 = a2;
  v10 = a6;
  v11 = a1;
  v57 = a2;
  *(_QWORD *)&v61.left = a5;
  v12 = a4 != 0LL;
  v73[0] = a6;
  v13 = 0LL;
  v79[0] = (struct tagRECT *)a7;
  v67 = 0;
  v14 = 0;
  v68 = 0;
  v60 = 0;
  v56 = v12;
  v55 = 0;
  if ( !a1 )
  {
    v60 = 1;
    v11 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL);
  }
  if ( (*((_BYTE *)v11 + 50) & 0x40) != 0 )
  {
    v9 = -a2;
    v57 = -a2;
    MirrorRegion((__int64)v11, (unsigned __int64)a6, 1);
    if ( v8 )
    {
      v15 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v8->left;
      v8->left = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v8->right;
      v8->right = v15;
    }
    v14 = 0;
    v10 = v73[0];
    if ( a5 )
    {
      v16 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - *a5;
      *a5 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - a5[2];
      a5[2] = v16;
    }
  }
  if ( !(v9 | a3) )
    goto LABEL_27;
  if ( (unsigned int)IsVisible((__int64)v11) )
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
      v55 = 1;
    }
  }
  if ( v10 )
  {
    SetEmptyRgn(v10);
    v14 = v55;
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
  if ( v60 )
  {
    v77[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v77;
    v77[1] = v11;
    ++*((_DWORD *)v11 + 2);
  }
  if ( !v55 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 392LL) + 248LL;
    if ( *(_QWORD *)v13 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v13, (__int64)v11) )
      {
        v65 = 1;
        zzzInternalHideCaret(v20, v19);
      }
    }
  }
  v74 = v18 & 0x8000;
  if ( v18 < 0 )
  {
    v21 = 0x10000;
    if ( (*(_BYTE *)(*((_QWORD *)v11 + 19) + 84LL) & 0x60) == 0 )
      v21 = 65538;
    v66 = v18 & 1;
    if ( (v18 & 1) != 0 && (*((_BYTE *)v11 + 55) & 2) != 0 )
      v21 |= 0x80002u;
  }
  else
  {
    v21 = 65538;
    v66 = v18 & 1;
    if ( (v18 & 1) != 0 )
      v21 = 589826;
  }
  GreLockVisRgn(*gpDispInfo);
  v23 = v21 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v11, 0LL, v23);
  v62 = DCEx;
  v72 = v18 & 2;
  if ( (v18 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v67);
    if ( !v73[0] )
      v73[0] = (HRGN)ghrgnSW;
  }
  if ( !v56 )
  {
    v8 = &v80;
    GetRect((__int64)v11, (__int64)&v80, 17);
    if ( (v23 & 2) == 0 )
      GreTransformPoints(DCEx, (struct _POINTL *)&v80, (struct _POINTFIX *)&v80, 2, 0);
  }
  v25 = v9;
  v26 = a3;
  v78 = *v8;
  v27 = v23 & 2;
  if ( !v27 )
  {
    GreTransformPoints(v62, (struct _POINTL *)&v78, (struct _POINTFIX *)&v78, 2, 1);
    v69.y = 0;
    v69.x = 0;
    v70 = v57;
    v71 = a3;
    GreTransformPoints(v62, &v69, (struct _POINTFIX *)&v69, 2, 1);
    v25 = v70 - v69.x;
    v26 = v71 - v69.y;
  }
  if ( v55 )
  {
    v28 = v62;
    v58 = 1;
  }
  else
  {
    v29 = (struct tagWND *)*((_QWORD *)v11 + 20);
    if ( v74 && (*((_BYTE *)v11 + 45) & 1) == 0 )
    {
      if ( (unsigned __int64)v29 > 1 )
      {
        GreGetRgnBox(v29, &v81);
        v30 = v26 - *((_DWORD *)v11 + 33);
        v31 = v25 - *((_DWORD *)v11 + 32);
        v84 += v30;
        v82 += v30;
        v81 += v31;
        v83 += v31;
        xxxRedrawWindow(v11, &v81, 0LL, 133);
      }
      v29 = 0LL;
    }
    v32 = v27 == 0;
    v28 = v62;
    v58 = InternalScrollDC(v29, v62, v57, a3, v8, *(struct tagRECT **)&v61.left, (HRGN)v29, v73[0], v79[0], v32);
    v33 = v79[0];
    if ( v79[0] && (*((_BYTE *)v11 + 50) & 0x40) != 0 )
    {
      v34 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v79[0]->left;
      v79[0]->left = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v79[0]->right;
      v33->right = v34;
    }
  }
  _ReleaseDC(v28);
  v35 = v55;
  if ( !v55 )
  {
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
    {
      if ( v56 )
      {
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v36 = v78;
          v80 = v78;
          left = v78.left;
        }
        else
        {
          v38 = *((_DWORD *)v11 + 32);
          v39 = *((_DWORD *)v11 + 33);
          left = v38 + v78.left;
          v80.right = v78.right + v38;
          v80.left = v38 + v78.left;
          v80.top = v39 + v78.top;
          v80.bottom = v39 + v78.bottom;
          v36 = v80;
        }
        v61.right = v25 + v36.right;
        v61.bottom = v26 + v36.bottom;
        v61.top = v26 + v36.top;
        v61.left = left + v25;
        UnionRect(&v61, &v61.left, &v80.left);
      }
      else
      {
        v61 = (struct tagRECT)*((_OWORD *)v11 + 8);
      }
      SpbCheckRect(v11, &v61, 0);
    }
    v35 = 0;
  }
  v40 = v66;
  if ( v66 )
  {
    if ( !v35 && v11 == *(struct tagWND **)v13 )
    {
      if ( !v56
        || (v41 = *(_DWORD *)(v13 + 20),
            LODWORD(v79[0]) = *(_DWORD *)(v13 + 16),
            LODWORD(v79[1]) = *(_DWORD *)(v13 + 28) + LODWORD(v79[0]),
            v42 = *(_DWORD *)(v13 + 24),
            HIDWORD(v79[0]) = v41,
            HIDWORD(v79[1]) = v41 + v42,
            (unsigned int)IntersectRect(v79, (int *)v79, &v78.left)) )
      {
        *(_DWORD *)(v13 + 16) += v25;
        *(_DWORD *)(v13 + 20) += v26;
      }
    }
    if ( v56 )
    {
      if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
      {
        *(struct tagRECT *)v79 = v78;
      }
      else
      {
        v43 = *((_DWORD *)v11 + 32);
        v44 = *((_DWORD *)v11 + 33);
        LODWORD(v79[0]) = v43 + v78.left;
        LODWORD(v79[1]) = v43 + v78.right;
        HIDWORD(v79[0]) = v44 + v78.top;
        HIDWORD(v79[1]) = v44 + v78.bottom;
      }
    }
    if ( *((_QWORD *)v11 + 12) )
    {
      OffsetChildren((__int64)v11, v25, v26, (int *)((unsigned __int64)v79 & -(__int64)v56), 1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)v11, (*((_BYTE *)v11 + 55) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v72 )
  {
    v45 = (_QWORD *)ghrgnSW;
    if ( v73[0] != (HRGN)ghrgnSW )
    {
      GreCombineRgn(ghrgnSW, v73[0], 0LL, 5LL);
      v45 = (_QWORD *)ghrgnSW;
    }
    GreOffsetRgn(*v45, v67, v68);
    xxxInternalInvalidate(v11, ghrgnSW, v18 & 4 | 0x81);
  }
  GreUnlockVisRgn(*gpDispInfo);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v75);
  v47 = gdwDeferWinEvent;
  if ( !--gdwDeferWinEvent && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  if ( v40 )
  {
    if ( v56 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v46 == DesktopWindow )
      {
        LODWORD(v62) = v25 + v78.left;
        v63 = v25 + v78.right;
        HIDWORD(v62) = v26 + v78.top;
        v49 = v26 + v78.bottom;
      }
      else
      {
        v50 = v26 + *(_DWORD *)(v46 + 132);
        v46 = v25 + *(_DWORD *)(v46 + 128);
        LODWORD(v62) = v46 + v78.left;
        v63 = v46 + v78.right;
        HIDWORD(v62) = v50 + v78.top;
        v49 = v50 + v78.bottom;
      }
      v64 = v49;
    }
    v51 = gptiCurrent;
    v76[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v76;
    v76[1] = 0LL;
    for ( i = *((_QWORD *)v11 + 12); i; i = *(_QWORD *)(i + 72) )
    {
      if ( !v56 || (unsigned int)IntersectRect(v73, (int *)&v62, (int *)(i + 112)) )
      {
        ThreadLockExchangeAlways(i, (__int64)v76);
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v53 = *(unsigned __int16 *)(i + 132);
          v54 = *(unsigned __int16 *)(i + 128);
        }
        else
        {
          v53 = (unsigned __int16)(*(_WORD *)(i + 132) - *((_WORD *)v11 + 66));
          v54 = (unsigned __int16)(*(_WORD *)(i + 128) - *((_WORD *)v11 + 64));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)i,
          3u,
          0LL,
          (struct _LARGE_STRING *)(v54 | (v53 << 16)),
          0,
          0,
          0LL,
          1,
          0);
      }
    }
    ThreadUnlock1(v51, v46);
  }
  if ( v65 )
    zzzInternalShowCaret(v47, v46);
  if ( v60 )
    ThreadUnlock1(v47, v46);
  return v58;
}
