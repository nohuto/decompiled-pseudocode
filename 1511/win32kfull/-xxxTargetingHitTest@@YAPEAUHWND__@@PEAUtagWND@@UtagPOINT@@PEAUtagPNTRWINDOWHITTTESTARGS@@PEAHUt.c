/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022D268 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054110 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     xxxWindowHitTest @ 0x1C0096200 (xxxWindowHitTest.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C009686C (IsCompositionInputWindowUIDisabled.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C022ADF8 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C022B524 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C022C0DC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C022C1B0 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C022C21C (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C5F8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022D268 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C0249344 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C024BF0C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C024C3B8 (TouchTargetingRankForRectDeep.c)
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
  int v14; // eax
  struct tagRECT *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int MonitorFlags; // eax
  int v20; // eax
  struct tagWND *v21; // rcx
  HWND v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // eax
  struct tagWND *v30; // rcx
  HWND v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagWND *v34; // r13
  unsigned int v35; // r14d
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rax
  unsigned int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45[5]; // [rsp+54h] [rbp-ACh] BYREF
  struct tagPOINT v46; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT v47; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v48; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D4h] [rbp-2Ch]
  struct tagPOINT v59[2]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = a5;
  v9 = -2;
  v50 = a4;
  v46 = a2;
  v11 = *(_DWORD *)(a3 + 88) == 1;
  v12 = a1;
  v48 = (struct tagPOINT)a5;
  v13 = 0LL;
  v45[2] = a6;
  v45[0] = -2;
  v45[1] = 0;
  *(_QWORD *)&v45[3] = 0LL;
  v44 = 0;
  if ( v11 && !PtInRect((_DWORD *)(a1 + 112), *(_QWORD *)&a2) && (_WORD)a6 != 3 && (*(_BYTE *)(v12 + 54) & 4) == 0 )
    return v13;
  *(struct tagRECT *)&v59[0].x = *a5;
  if ( !(unsigned int)BasicTargetingWindowHitTest(
                        v12,
                        *(_QWORD *)&a2,
                        a3,
                        a4,
                        v59,
                        &v45[1],
                        &v44,
                        (__int64)&v45[3],
                        a7,
                        a6) )
    return v13;
  if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v12) )
  {
    if ( (*(_BYTE *)(v12 + 55) & 8) == 0 && !IsCompositionInputWindowUIDisabled((struct tagWND *)v12) )
      v9 = 1;
    v45[0] = v9;
    v14 = 1;
  }
  else
  {
    v14 = v45[1];
  }
  v45[1] = v14;
  if ( v14 )
  {
    v39 = v44;
    goto LABEL_66;
  }
  if ( (*(_BYTE *)(v12 + 55) & 0x20) != 0 )
    goto LABEL_53;
  LODWORD(v49) = v46.x + v45[3];
  HIDWORD(v49) = v46.y + v45[4];
  if ( !PtInRect((_DWORD *)(v12 + 128), v49) )
  {
    if ( *(_DWORD *)(a3 + 88) == 1 )
      goto LABEL_53;
    v16 = *(_QWORD *)(a3 + 40);
    v47 = *v15;
    *(struct tagRECT *)&v59[0].x = v47;
    if ( (unsigned __int16)TouchTargetingRankForRect((unsigned int)&v47, (unsigned int)v59, v16, 0, 0LL, a6) > 0xFFDu )
      goto LABEL_53;
  }
  if ( *(_DWORD *)(a3 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a3 + 40) + 176LL)
      || (xxxSendNCHitTest(
            (struct tagWND *)v12,
            a2,
            v46,
            (struct tagPOINT *)&v45[3],
            v45,
            (struct tagPNTRWINDOWHITTTESTARGS *)a3),
          v9 = v45[0],
          ((v45[0] + 1) & 0xFFFFFFFD) == 0) )
    {
      v47 = *a5;
      xxxPointerInsideNCTargeting((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, &v47, a6);
    }
  }
  if ( v9 != -2 && v9 != 1 )
  {
    v17 = *(_QWORD *)(v12 + 96);
    v51 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v51;
    v52 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    if ( *(_DWORD *)(a3 + 84) )
    {
      v18 = *(_QWORD *)(v12 + 16);
      v48 = v46;
      MonitorFlags = GetMonitorFlags(*(_QWORD *)(v18 + 376));
      LogicalToPhysicalDPIPoint(&v48, &v46, MonitorFlags, 0LL);
      v20 = *(_DWORD *)a3;
      v21 = *(struct tagWND **)(v12 + 96);
      v58 = 0;
      v53 = v20;
      v54 = *(_QWORD *)(a3 + 8);
      v55 = *(_QWORD *)(a3 + 16);
      v56 = a3 + 32;
      v57 = *(_DWORD *)(a3 + 36);
      v22 = xxxDCEWindowHitTestInternal(v21, v48, (struct DCE_WINDOW_HIT_TEST_ARGS *)&v53);
    }
    else
    {
      v22 = (HWND)xxxWindowHitTest(*(struct tagWND **)(v12 + 96));
    }
    v13 = (__int64)v22;
    if ( v22 )
    {
      v25 = (struct tagWND *)ValidateHwnd(v22);
      if ( v25 )
      {
        *v50 = 1;
        *(struct tagRECT *)&v59[0].x = *a5;
        TransformRectBetweenCoordinateSpaces(v59, a5, v25, v12);
        v47 = *(struct tagRECT *)&v59[0].x;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v25, 0, 0LL, 0LL, 0, &v47, v45[2]);
      }
    }
    ThreadUnlock1(v24, v23);
LABEL_50:
    v35 = v44;
    goto LABEL_51;
  }
  if ( a6 != 2 )
  {
    if ( (unsigned int)IntersectRect(&v47, (int *)(v12 + 128), &a5->left) )
    {
      ++*(_DWORD *)(a3 + 88);
      v36 = *(_QWORD *)(v12 + 96);
      v51 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v51;
      v52 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              *(_QWORD *)(v12 + 96),
              v46,
              a3,
              &v47,
              (unsigned __int16)a6);
      ThreadUnlock1(v38, v37);
      --*(_DWORD *)(a3 + 88);
      goto LABEL_50;
    }
LABEL_53:
    v35 = v44;
LABEL_54:
    if ( v35 == 4093 )
      return 0LL;
    v39 = _TTWindowPenalty((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v35) + v35;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v12, v39, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v7, v45[2]) )
      return *(_QWORD *)v12;
    if ( v9 == -2 || v45[3] || v45[4] )
    {
      xxxSendNCHitTest(
        (struct tagWND *)v12,
        a2,
        v46,
        (struct tagPOINT *)&v45[3],
        v45,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v9 = v45[0];
    }
    if ( v9 == -1 )
    {
      v40 = *(_QWORD *)(a3 + 40);
      v47 = *(struct tagRECT *)(v12 + 112);
      v39 = (unsigned __int16)TouchTargetingRankForRectDeep(
                                (unsigned int)&v47,
                                v40,
                                (_DWORD)v7,
                                (unsigned int)&v45[3],
                                a7);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v12, v39, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v7, v45[2])
        || (xxxSendNCHitTest(
              (struct tagWND *)v12,
              a2,
              v46,
              (struct tagPOINT *)&v45[3],
              v45,
              (struct tagPNTRWINDOWHITTTESTARGS *)a3),
            v9 = v45[0],
            v45[0] == -1) )
      {
        *v50 = 0;
        return v13;
      }
    }
LABEL_66:
    v11 = *(_DWORD *)(a3 + 84) == 0;
    *(_DWORD *)(a3 + 32) = v9;
    if ( v11 )
    {
      v41 = 17;
      if ( (*(_BYTE *)(v12 + 50) & 0x40) != 0 )
        v41 = 16;
    }
    else
    {
      v41 = 17 - (((*(unsigned __int8 *)(v12 + 50) >> 6) & 1) != ((*(unsigned __int8 *)(v12 + 49) >> 6) & 1));
    }
    if ( v9 == v41 && (*(_BYTE *)(v12 + 54) & 4) == 0 )
    {
      v42 = SizeBoxHwnd(v12);
      if ( v42 )
        v12 = v42;
    }
    if ( v45[1] )
      v39 += _TTWindowPenalty((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v39);
    if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v12)
      || (unsigned int)TTBetterTarget((struct tagWND *)v12, v39, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v7, v45[2]) )
    {
      v47 = *v7;
      _TTUpdateBestTarget(
        (struct tagPNTRWINDOWHITTTESTARGS *)a3,
        (struct tagWND *)v12,
        v39,
        (const struct tagPOINT *)&v45[3],
        0LL,
        0,
        &v47,
        v45[2]);
    }
    return *(_QWORD *)v12;
  }
  v26 = *(_QWORD *)(v12 + 96);
  v51 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v51;
  v52 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  if ( *(_DWORD *)(a3 + 84) )
  {
    v27 = *(_QWORD *)(v12 + 16);
    v59[0] = (struct tagPOINT)v49;
    v28 = GetMonitorFlags(*(_QWORD *)(v27 + 376));
    LogicalToPhysicalDPIPoint(v59, &v49, v28, 0LL);
    v29 = *(_DWORD *)a3;
    v30 = *(struct tagWND **)(v12 + 96);
    v58 = 0;
    v53 = v29;
    v54 = *(_QWORD *)(a3 + 8);
    v55 = *(_QWORD *)(a3 + 16);
    v56 = a3 + 32;
    v57 = *(_DWORD *)(a3 + 36);
    v31 = xxxDCEWindowHitTestInternal(v30, v59[0], (struct DCE_WINDOW_HIT_TEST_ARGS *)&v53);
  }
  else
  {
    v31 = (HWND)xxxWindowHitTest(*(struct tagWND **)(v12 + 96));
  }
  v13 = (__int64)v31;
  if ( v31 && (v34 = (struct tagWND *)ValidateHwnd(v31)) != 0LL )
  {
    v35 = v44;
    if ( v44 )
      v35 += _TTWindowPenalty((struct tagWND *)v12, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v44);
    if ( (unsigned int)TTBetterTarget(v34, v35, (struct tagPNTRWINDOWHITTTESTARGS *)a3, *(struct tagRECT **)&v48, 2) )
    {
      *v50 = 1;
      *(_OWORD *)&v59[0].x = *(_OWORD *)*(_QWORD *)&v48;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TransformRectBetweenCoordinateSpaces)(v59, v48, v34, v12);
      v47 = *(struct tagRECT *)&v59[0].x;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v34, v35, 0LL, 0LL, 0, &v47, 2);
    }
  }
  else
  {
    v35 = v44;
  }
  ThreadUnlock1(v33, v32);
  v7 = (struct tagRECT *)v48;
LABEL_51:
  if ( !v13 )
    goto LABEL_54;
  return v13;
}
