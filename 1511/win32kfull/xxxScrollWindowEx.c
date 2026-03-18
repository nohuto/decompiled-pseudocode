/*
 * XREFs of xxxScrollWindowEx @ 0x1C00CB5C8
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C00CB420 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C021738C (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C570 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     MirrorRegion @ 0x1C0076E60 (MirrorRegion.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     _IsDescendant @ 0x1C007AA44 (_IsDescendant.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 *     zzzInternalHideCaret @ 0x1C00CA3B0 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C00CA470 (zzzInternalShowCaret.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 *     GetDCOrgOnScreen @ 0x1C00CC890 (GetDCOrgOnScreen.c)
 *     GreTransformPoints @ 0x1C00DC714 (GreTransformPoints.c)
 *     UnionRect @ 0x1C00EB38C (UnionRect.c)
 *     OffsetChildren @ 0x1C00EFED0 (OffsetChildren.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  int v15; // r8d
  __int16 v16; // r12
  int v18; // edi
  unsigned int v19; // edi
  HDC DCEx; // r14
  int v21; // r14d
  unsigned int v22; // r15d
  int v23; // edi
  struct tagWND *v24; // rcx
  bool v25; // zf
  struct tagRECT *v26; // rdi
  HDC v27; // r13
  int v28; // eax
  int v29; // edi
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // r8d
  struct tagRECT v38; // xmm0
  LONG left; // r8d
  int v40; // ecx
  int v41; // edx
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // r8d
  __int64 DesktopWindow; // rax
  unsigned int v47; // ecx
  unsigned int v48; // r8d
  __int64 v49; // rcx
  __int64 i; // rdi
  int v51; // edx
  int v52; // eax
  struct tagRECT *v53; // [rsp+20h] [rbp-E0h]
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
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  int v69; // [rsp+A4h] [rbp-5Ch]
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
  v56 = a2;
  *(_QWORD *)&v60.left = a5;
  v12 = a4 != 0LL;
  v73[0] = a6;
  v13 = 0LL;
  v79[0] = (struct tagRECT *)a7;
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
      v33 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v8->left;
      v8->left = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v8->right;
      v8->right = v33;
    }
    v14 = 0;
    v10 = v73[0];
    if ( a5 )
    {
      v34 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - *a5;
      *a5 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - a5[2];
      a5[2] = v34;
    }
  }
  if ( v9 | a3 )
  {
    v16 = a8;
    if ( (unsigned int)IsVisible(v11) )
      goto LABEL_15;
    if ( (((a8 & 1) != 0) & (unsigned __int8)~(*((_BYTE *)v11 + 55) >> 5)) != 0 && !v15 )
    {
      v14 = 1;
      v16 = a8 & 0xFFFD;
      v54 = 1;
    }
  }
  else
  {
    v16 = a8;
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
  v64 = 0;
  if ( v59 )
  {
    v77[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v77;
    v77[1] = v11;
    ++*((_DWORD *)v11 + 2);
  }
  if ( !v14 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 384LL) + 248LL;
    if ( *(_QWORD *)v13 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v13, (__int64)v11) )
      {
        v64 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v74 = v16 & 0x8000;
  if ( v16 < 0 )
  {
    v18 = 0x10000;
    if ( (*(_BYTE *)(*((_QWORD *)v11 + 19) + 84LL) & 0x60) == 0 )
      v18 = 65538;
    v65 = v16 & 1;
    if ( (v16 & 1) != 0 && (*((_BYTE *)v11 + 55) & 2) != 0 )
      v18 |= 0x80002u;
  }
  else
  {
    v18 = 65538;
    v65 = v16 & 1;
    if ( (v16 & 1) != 0 )
      v18 = 589826;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v75);
  GreLockVisRgn(*gpDispInfo);
  v19 = v18 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v11, 0LL, v19);
  v61 = DCEx;
  v72 = v16 & 2;
  if ( (v16 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v66);
    if ( !v73[0] )
      v73[0] = (HRGN)ghrgnSW;
  }
  if ( !v55 )
  {
    v8 = &v80;
    GetRect((__int64)v11, (__int64)&v80, 17);
    if ( (v19 & 2) == 0 )
      GreTransformPoints((_DWORD)DCEx, (unsigned int)&v80, (unsigned int)&v80, 2, 0);
  }
  v21 = v9;
  v22 = a3;
  v78 = *v8;
  v23 = v19 & 2;
  if ( !v23 )
  {
    GreTransformPoints((_DWORD)v61, (unsigned int)&v78, (unsigned int)&v78, 2, 1);
    v69 = 0;
    v68 = 0;
    v70 = v56;
    v71 = a3;
    GreTransformPoints((_DWORD)v61, (unsigned int)&v68, (unsigned int)&v68, 2, 1);
    v21 = v70 - v68;
    v22 = v71 - v69;
  }
  if ( v54 )
  {
    v27 = v61;
    v57 = 1;
  }
  else
  {
    v24 = (struct tagWND *)*((_QWORD *)v11 + 20);
    if ( v74 && (*((_BYTE *)v11 + 45) & 1) == 0 )
    {
      if ( (unsigned __int64)v24 > 1 )
      {
        GreGetRgnBox(v24, &v81);
        v35 = v22 - *((_DWORD *)v11 + 33);
        v36 = v21 - *((_DWORD *)v11 + 32);
        v84 += v35;
        v82 += v35;
        v81 += v36;
        v83 += v36;
        xxxRedrawWindow(v11, &v81, 0LL, 133);
      }
      v24 = 0LL;
    }
    v25 = v23 == 0;
    v26 = v79[0];
    v53 = v8;
    v27 = v61;
    v57 = InternalScrollDC(v24, v61, v56, a3, v53, *(struct tagRECT **)&v60.left, (HRGN)v24, v73[0], v79[0], v25);
    if ( v26 && (*((_BYTE *)v11 + 50) & 0x40) != 0 )
    {
      v37 = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v26->left;
      v26->left = *((_DWORD *)v11 + 34) - *((_DWORD *)v11 + 32) - v26->right;
      v26->right = v37;
    }
  }
  _ReleaseDC(v27);
  v28 = v54;
  if ( !v54 )
  {
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
    {
      if ( v55 )
      {
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v38 = v78;
          v80 = v78;
          left = v78.left;
        }
        else
        {
          v40 = *((_DWORD *)v11 + 32);
          v41 = *((_DWORD *)v11 + 33);
          left = v40 + v78.left;
          v80.right = v78.right + v40;
          v80.left = v40 + v78.left;
          v80.top = v41 + v78.top;
          v80.bottom = v41 + v78.bottom;
          v38 = v80;
        }
        v60.right = v21 + v38.right;
        v60.bottom = v22 + v38.bottom;
        v60.top = v22 + v38.top;
        v60.left = left + v21;
        UnionRect(&v60, &v60, &v80);
      }
      else
      {
        v60 = (struct tagRECT)*((_OWORD *)v11 + 8);
      }
      SpbCheckRect(v11, &v60, 0);
    }
    v28 = 0;
  }
  v29 = v65;
  if ( v65 )
  {
    if ( !v28 && v11 == *(struct tagWND **)v13 )
    {
      if ( !v55
        || (v42 = *(_DWORD *)(v13 + 20),
            LODWORD(v79[0]) = *(_DWORD *)(v13 + 16),
            LODWORD(v79[1]) = *(_DWORD *)(v13 + 28) + LODWORD(v79[0]),
            v43 = *(_DWORD *)(v13 + 24),
            HIDWORD(v79[0]) = v42,
            HIDWORD(v79[1]) = v42 + v43,
            (unsigned int)IntersectRect(v79, (int *)v79, &v78.left)) )
      {
        *(_DWORD *)(v13 + 16) += v21;
        *(_DWORD *)(v13 + 20) += v22;
      }
    }
    if ( v55 )
    {
      if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
      {
        *(struct tagRECT *)v79 = v78;
      }
      else
      {
        v44 = *((_DWORD *)v11 + 32);
        v45 = *((_DWORD *)v11 + 33);
        LODWORD(v79[0]) = v44 + v78.left;
        LODWORD(v79[1]) = v44 + v78.right;
        HIDWORD(v79[0]) = v45 + v78.top;
        HIDWORD(v79[1]) = v45 + v78.bottom;
      }
    }
    if ( *((_QWORD *)v11 + 12) )
    {
      OffsetChildren((_DWORD)v11, v21, v22, (unsigned __int64)v79 & -(__int64)v55, 1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)v11, (*((_BYTE *)v11 + 55) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v72 )
  {
    v30 = (_QWORD *)ghrgnSW;
    if ( v73[0] != (HRGN)ghrgnSW )
    {
      GreCombineRgn(ghrgnSW, v73[0], 0LL, 5LL);
      v30 = (_QWORD *)ghrgnSW;
    }
    GreOffsetRgn(*v30, v66, v67);
    xxxInternalInvalidate(v11, ghrgnSW, v16 & 4 | 0x81);
  }
  GreUnlockVisRgn(*gpDispInfo);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v75);
  v32 = gdwDeferWinEvent;
  --gdwDeferWinEvent;
  if ( gpPendingNotifies && !gdwDeferWinEvent )
    xxxFlushDeferredWindowEvents();
  if ( v29 )
  {
    if ( v55 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v31 == DesktopWindow )
      {
        LODWORD(v61) = v21 + v78.left;
        v62 = v21 + v78.right;
        HIDWORD(v61) = v22 + v78.top;
        v47 = v22 + v78.bottom;
      }
      else
      {
        v48 = v22 + *(_DWORD *)(v31 + 132);
        v31 = (unsigned int)(v21 + *(_DWORD *)(v31 + 128));
        LODWORD(v61) = v31 + v78.left;
        v62 = v31 + v78.right;
        HIDWORD(v61) = v48 + v78.top;
        v47 = v48 + v78.bottom;
      }
      v63 = v47;
    }
    v49 = gptiCurrent;
    v76[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v76;
    v76[1] = 0LL;
    for ( i = *((_QWORD *)v11 + 12); i; i = *(_QWORD *)(i + 72) )
    {
      if ( !v55 || (unsigned int)IntersectRect(v73, (int *)&v61, (int *)(i + 112)) )
      {
        ThreadLockExchangeAlways(i, (__int64)v76);
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v51 = *(unsigned __int16 *)(i + 132);
          v52 = *(unsigned __int16 *)(i + 128);
        }
        else
        {
          v51 = (unsigned __int16)(*(_WORD *)(i + 132) - *((_WORD *)v11 + 66));
          v52 = (unsigned __int16)(*(_WORD *)(i + 128) - *((_WORD *)v11 + 64));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((struct tagWND *)i, 3LL, 0LL, v52 | (v51 << 16), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v49, v31);
  }
  if ( v64 )
    zzzInternalShowCaret();
  if ( v59 )
    ThreadUnlock1(v32, v31);
  return v57;
}
