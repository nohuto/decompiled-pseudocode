/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C0118264 (IsCompositionInputWindowUIDisabled.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C02209B0 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0221104 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0221DA4 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0221E84 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0221EF0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02222E0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C024571C (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C024823C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C02486E8 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _DWORD *a4,
        struct tagRECT *a5,
        int a6,
        int a7)
{
  struct tagRECT *v7; // r13
  int v9; // r15d
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  struct tagRECT *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int MonitorFlagsFromWindow; // eax
  struct tagWND *v22; // rcx
  __int64 v23; // r9
  HWND v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagWND *v27; // r14
  __int64 v28; // rdx
  unsigned int v29; // eax
  struct tagWND *v30; // rcx
  __int64 v31; // r9
  HWND v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagWND *v35; // r13
  unsigned int v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r14d
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46[5]; // [rsp+54h] [rbp-ACh] BYREF
  struct tagPOINT v47; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT v48; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-60h]
  int v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D4h] [rbp-2Ch]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+E0h] [rbp-20h]
  struct tagRECT v62; // [rsp+F0h] [rbp-10h] BYREF

  v7 = a5;
  v9 = -2;
  v51 = a4;
  v47 = a2;
  v11 = *(_DWORD *)(a3 + 88) == 1;
  v12 = a1;
  v49 = a5;
  v13 = 0LL;
  v46[1] = a6;
  v46[0] = -2;
  v46[2] = 0;
  *(_QWORD *)&v46[3] = 0LL;
  v45 = 0;
  if ( v11 && !PtInRect((_DWORD *)(a1 + 112), *(_QWORD *)&a2) && (_WORD)a6 != 3 && (*(_BYTE *)(v12 + 54) & 4) == 0 )
    return v13;
  v62 = *a5;
  if ( !(unsigned int)BasicTargetingWindowHitTest(
                        v12,
                        *(_QWORD *)&a2,
                        a3,
                        a4,
                        &v62,
                        &v46[2],
                        &v45,
                        (__int64)&v46[3],
                        a7,
                        a6) )
    return v13;
  if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v12) )
  {
    if ( (*(_BYTE *)(v12 + 55) & 8) == 0 && !IsCompositionInputWindowUIDisabled((struct tagWND *)v12) )
      v9 = 1;
    v46[0] = v9;
    v17 = 1;
  }
  else
  {
    v17 = v46[2];
  }
  v46[2] = v17;
  if ( v17 )
  {
    v40 = v45;
    goto LABEL_66;
  }
  if ( (*(_BYTE *)(v12 + 55) & 0x20) != 0 )
    goto LABEL_53;
  LODWORD(v50) = v47.x + v46[3];
  HIDWORD(v50) = v47.y + v46[4];
  if ( !PtInRect((_DWORD *)(v12 + 128), v50) )
  {
    if ( *(_DWORD *)(a3 + 88) == 1 )
      goto LABEL_53;
    v19 = *(_QWORD *)(a3 + 40);
    v48 = *v18;
    v62 = v48;
    if ( (unsigned __int16)TouchTargetingRankForRect((unsigned int)&v48, (unsigned int)&v62, v19, 0, 0LL, a6) > 0xFFDu )
      goto LABEL_53;
  }
  if ( *(_DWORD *)(a3 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a3 + 40) + 176LL)
      || (xxxSendNCHitTest(
            (struct tagWND *)v12,
            a2,
            v47,
            (struct tagPOINT *)&v46[3],
            v46,
            (struct tagPNTRWINDOWHITTTESTARGS *)a3),
          v9 = v46[0],
          ((v46[0] + 1) & 0xFFFFFFFD) == 0) )
    {
      v48 = *a5;
      xxxPointerInsideNCTargeting((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, &v48, a6);
    }
  }
  if ( v9 != -2 && v9 != 1 )
  {
    v20 = *(_QWORD *)(v12 + 96);
    v52 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v52;
    v53 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    if ( *(_DWORD *)(a3 + 84) )
    {
      v49 = (struct tagRECT *)v47;
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v12);
      LogicalToPhysicalDPIPoint(&v49, &v47, MonitorFlagsFromWindow, 0LL);
      v22 = *(struct tagWND **)(v12 + 96);
      v54 = *(_DWORD *)a3;
      v55 = *(_QWORD *)(a3 + 8);
      v56 = *(_QWORD *)(a3 + 16);
      v57 = a3 + 32;
      v58 = *(_DWORD *)(a3 + 36);
      v59 = 0;
      v60 = 0LL;
      v61 = 0;
      v24 = xxxDCEWindowHitTestIndirect(v22, (struct tagPOINT)v49, (__int64)&v54, v23);
    }
    else
    {
      v24 = (HWND)xxxWindowHitTest(*(struct tagWND **)(v12 + 96));
    }
    v13 = (__int64)v24;
    if ( v24 )
    {
      v27 = (struct tagWND *)ValidateHwnd(v24);
      if ( v27 )
      {
        *v51 = 1;
        v62 = *a5;
        TransformRectBetweenCoordinateSpaces(&v62, a5, v27, v12);
        v48 = v62;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v27, 0, 0LL, 0LL, 0, &v48, v46[1]);
      }
    }
    ThreadUnlock1(v26, v25);
LABEL_50:
    v36 = v45;
    goto LABEL_51;
  }
  if ( a6 != 2 )
  {
    if ( (unsigned int)IntersectRect(&v48, (int *)(v12 + 128), &a5->left) )
    {
      ++*(_DWORD *)(a3 + 88);
      v37 = *(_QWORD *)(v12 + 96);
      v52 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v52;
      v53 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              *(_QWORD *)(v12 + 96),
              v47,
              a3,
              &v48,
              (unsigned __int16)a6);
      ThreadUnlock1(v39, v38);
      --*(_DWORD *)(a3 + 88);
      goto LABEL_50;
    }
LABEL_53:
    v36 = v45;
LABEL_54:
    if ( v36 == 4093 )
      return 0LL;
    v40 = _TTWindowPenalty((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v36) + v36;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v12, v40, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v7, v46[1]) )
      return *(_QWORD *)v12;
    if ( v9 == -2 || v46[3] || v46[4] )
    {
      xxxSendNCHitTest(
        (struct tagWND *)v12,
        a2,
        v47,
        (struct tagPOINT *)&v46[3],
        v46,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v9 = v46[0];
    }
    if ( v9 == -1 )
    {
      v41 = *(_QWORD *)(a3 + 40);
      v48 = *(struct tagRECT *)(v12 + 112);
      v40 = (unsigned __int16)TouchTargetingRankForRectDeep(
                                (unsigned int)&v48,
                                v41,
                                (_DWORD)v7,
                                (unsigned int)&v46[3],
                                a7);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v12, v40, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v7, v46[1])
        || (xxxSendNCHitTest(
              (struct tagWND *)v12,
              a2,
              v47,
              (struct tagPOINT *)&v46[3],
              v46,
              (struct tagPNTRWINDOWHITTTESTARGS *)a3),
            v9 = v46[0],
            v46[0] == -1) )
      {
        *v51 = 0;
        return v13;
      }
    }
LABEL_66:
    v11 = *(_DWORD *)(a3 + 84) == 0;
    *(_DWORD *)(a3 + 32) = v9;
    if ( v11 )
    {
      v42 = 17;
      if ( (*(_BYTE *)(v12 + 50) & 0x40) != 0 )
        v42 = 16;
    }
    else
    {
      v42 = 17 - (((*(unsigned __int8 *)(v12 + 50) >> 6) & 1) != ((*(unsigned __int8 *)(v12 + 49) >> 6) & 1));
    }
    if ( v9 == v42 && (*(_BYTE *)(v12 + 54) & 4) == 0 )
    {
      v43 = SizeBoxHwnd(v12, v14, v15, v16);
      if ( v43 )
        v12 = v43;
    }
    if ( v46[2] )
      v40 += _TTWindowPenalty((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v40);
    if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v12)
      || (unsigned int)TTBetterTarget((struct tagWND *)v12, v40, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v7, v46[1]) )
    {
      v48 = *v7;
      _TTUpdateBestTarget(
        (struct tagPNTRWINDOWHITTTESTARGS *)a3,
        (struct tagWND *)v12,
        v40,
        (const struct tagPOINT *)&v46[3],
        0LL,
        0,
        &v48,
        v46[1]);
    }
    return *(_QWORD *)v12;
  }
  v28 = *(_QWORD *)(v12 + 96);
  v52 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v52;
  v53 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  if ( *(_DWORD *)(a3 + 84) )
  {
    *(_QWORD *)&v62.left = v50;
    v29 = GetMonitorFlagsFromWindow(v12);
    LogicalToPhysicalDPIPoint(&v62, &v50, v29, 0LL);
    v30 = *(struct tagWND **)(v12 + 96);
    v54 = *(_DWORD *)a3;
    v55 = *(_QWORD *)(a3 + 8);
    v56 = *(_QWORD *)(a3 + 16);
    v57 = a3 + 32;
    v58 = *(_DWORD *)(a3 + 36);
    v59 = 0;
    v60 = 0LL;
    v61 = 0;
    v32 = xxxDCEWindowHitTestIndirect(v30, *(struct tagPOINT *)&v62.left, (__int64)&v54, v31);
  }
  else
  {
    v32 = (HWND)xxxWindowHitTest(*(struct tagWND **)(v12 + 96));
  }
  v13 = (__int64)v32;
  if ( v32 && (v35 = (struct tagWND *)ValidateHwnd(v32)) != 0LL )
  {
    v36 = v45;
    if ( v45 )
      v36 += _TTWindowPenalty((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v45);
    if ( (unsigned int)TTBetterTarget(v35, v36, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v49, 2) )
    {
      *v51 = 1;
      v62 = *v49;
      TransformRectBetweenCoordinateSpaces(&v62, v49, v35, v12);
      v48 = v62;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v35, v36, 0LL, 0LL, 0, &v48, 2);
    }
  }
  else
  {
    v36 = v45;
  }
  ThreadUnlock1(v34, v33);
  v7 = v49;
LABEL_51:
  if ( !v13 )
    goto LABEL_54;
  return v13;
}
