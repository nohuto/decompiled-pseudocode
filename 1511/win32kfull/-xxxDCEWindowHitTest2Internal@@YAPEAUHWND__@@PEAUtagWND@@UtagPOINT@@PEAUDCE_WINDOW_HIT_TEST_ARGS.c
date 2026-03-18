/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270
 * Callers:
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054110 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CF48 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DCELayerHitTest @ 0x1C003C760 (DCELayerHitTest.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0053EAC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054110 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     _FindProp @ 0x1C0054934 (_FindProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     DwmSyncHitTestQuery @ 0x1C00C82C8 (DwmSyncHitTestQuery.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01E4C8C (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C0249344 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct DCE_WINDOW_HIT_TEST_ARGS *a3)
{
  int v3; // r13d
  unsigned int v4; // r10d
  __int64 v6; // rbx
  struct tagWND *v7; // rsi
  __int64 v9; // r14
  unsigned __int16 v10; // r15
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edx
  __int64 *v18; // rcx
  __int16 v19; // cx
  unsigned int v20; // edx
  __int64 *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int128 *v26; // rcx
  LONG y; // r15d
  __int64 *Prop; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  char v34; // r12
  _QWORD *v35; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v37; // r14
  __int64 TopLevelWindow; // rax
  struct DCE_WINDOW_HIT_TEST_ARGS *v39; // r14
  bool v40; // zf
  _QWORD *v41; // rax
  int v42; // r8d
  __int64 v43; // rdx
  HWND v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  int *v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+50h] [rbp-39h] BYREF
  struct tagPOINT v57; // [rsp+58h] [rbp-31h] BYREF
  struct DCE_WINDOW_HIT_TEST_ARGS *v58; // [rsp+60h] [rbp-29h]
  __int64 v59; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v60[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v61; // [rsp+90h] [rbp+7h]
  __int128 v62; // [rsp+98h] [rbp+Fh] BYREF

  v58 = a3;
  v3 = -2;
  LODWORD(v59) = -2;
  v4 = 1;
  LODWORD(v56) = 1;
  v57 = a2;
  v6 = (__int64)a2;
  v7 = a1;
  if ( !a1 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 21);
  v10 = CoreWindowProp::s_atom;
  if ( !v9 )
    goto LABEL_9;
  if ( !CInputQueueProp::s_atom )
    goto LABEL_9;
  v11 = *(_DWORD *)(v9 + 4);
  v12 = v9 + 8;
  if ( !v11 )
    goto LABEL_9;
  while ( *(_WORD *)(v12 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v12 + 10) & 1) == 0 )
  {
    v12 += 16LL;
    if ( !--v11 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)v12
    && ((*((_BYTE *)v7 + 291) & 2) == 0
     || (Prop = (__int64 *)FindProp(v7, CoreWindowProp::s_atom, 1LL)) != 0LL
     && (v29 = *Prop) != 0
     && *(_DWORD *)(v29 + 20)) )
  {
    if ( (*((_DWORD *)a3 + 8) & 8) == 0
      || *((_QWORD *)v7 + 11) != GetMessageWindow(v7) && (*((_BYTE *)v7 + 55) & 0x10) == 0 )
    {
      return 0LL;
    }
  }
  else
  {
LABEL_9:
    if ( (*((_BYTE *)v7 + 55) & 0x10) == 0 )
      return 0LL;
  }
  v13 = *((_QWORD *)v7 + 11);
  if ( !v13 )
    goto LABEL_128;
  v14 = *((_QWORD *)v7 + 3);
  v15 = 0LL;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    if ( v16 )
      v15 = *(_QWORD *)(v16 + 16);
  }
  if ( v13 != v15 )
  {
LABEL_128:
    if ( (*((_BYTE *)v7 + 50) & 8) == 0 || !GetTopLevelWindow((__int64)v7) )
      goto LABEL_35;
    v4 = 1;
  }
  if ( !v9 )
    goto LABEL_24;
  if ( !atomDWMProp )
    goto LABEL_24;
  v17 = *(_DWORD *)(v9 + 4);
  v18 = (__int64 *)(v9 + 8);
  if ( !v17 )
    goto LABEL_24;
  while ( *((_WORD *)v18 + 4) != atomDWMProp || (*((_BYTE *)v18 + 10) & 1) == 0 )
  {
    v18 += 2;
    if ( !--v17 )
      goto LABEL_24;
  }
  v30 = *v18;
  if ( *v18 )
  {
    v60[0] = *(_OWORD *)v30;
    v19 = v60[0];
    v60[1] = *(_OWORD *)(v30 + 16);
    v61 = *(_QWORD *)(v30 + 32);
  }
  else
  {
LABEL_24:
    v19 = v60[0] & 0xE000;
  }
  v20 = 0;
  if ( (v19 & 0x400) != 0 )
    v20 = v4;
  if ( (v19 & 0x800) != 0 )
    v20 |= 2u;
  if ( v20 )
  {
    if ( (*((_BYTE *)v7 + 291) & 2) == 0 )
      return 0LL;
    if ( !v9 )
      return 0LL;
    v21 = (__int64 *)FindProp(v7, v10, v4);
    if ( !v21 )
      return 0LL;
    v22 = *v21;
    if ( !v22 || !*(_DWORD *)(v22 + 20) )
      return 0LL;
  }
LABEL_35:
  if ( v9 )
  {
    if ( CInputQueueProp::s_atom )
    {
      v23 = *(_DWORD *)(v9 + 4);
      v24 = v9 + 8;
      if ( v23 )
      {
        while ( *(_WORD *)(v24 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v24 + 10) & 1) == 0 )
        {
          v24 += 16LL;
          if ( !--v23 )
            goto LABEL_41;
        }
        if ( *(_QWORD *)v24 )
        {
          if ( (*((_BYTE *)v7 + 291) & 2) == 0 )
          {
LABEL_49:
            y = v57.y;
            goto LABEL_72;
          }
          if ( (unsigned int)CoreWindowProp::IsComponent(v7) )
          {
            y = v57.y;
            goto LABEL_72;
          }
        }
      }
    }
  }
LABEL_41:
  if ( *((_QWORD *)v7 + 34) && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    v25 = *((_QWORD *)v7 + 26);
    v62 = 0LL;
    if ( v25 )
      GreGetRgnBox(v25, &v62);
    v26 = &v62;
    if ( !*((_QWORD *)v7 + 26) )
      v26 = (__int128 *)((char *)v7 + 112);
    if ( !(unsigned int)DCEHitTestWindow(v26, *((_QWORD *)v7 + 34), &v57, 0LL) )
      return 0LL;
    v6 = (__int64)v57;
    goto LABEL_49;
  }
  v31 = *((_QWORD *)v7 + 26);
  if ( v31 )
  {
    y = v57.y;
    if ( !(unsigned int)GrePtInRegion(v31, (unsigned int)v6, (unsigned int)v57.y) )
      return 0LL;
  }
  else
  {
    if ( (int)v6 < *((_DWORD *)v7 + 28) )
      return 0LL;
    if ( (int)v6 >= *((_DWORD *)v7 + 30) )
      return 0LL;
    y = v57.y;
    if ( v57.y < *((_DWORD *)v7 + 29) || v57.y >= *((_DWORD *)v7 + 31) )
      return 0LL;
  }
LABEL_72:
  v32 = *((_QWORD *)v7 + 25);
  if ( v32 )
  {
    if ( !(unsigned int)GrePtInRegion(v32, (unsigned int)v6, (unsigned int)y) )
      return 0LL;
  }
  else
  {
    v33 = *((_QWORD *)v7 + 26);
    if ( v33 && !(unsigned int)GrePtInRegion(v33, (unsigned int)v6, (unsigned int)y) )
      return 0LL;
  }
  if ( (*((_BYTE *)v7 + 50) & 8) != 0 && (*((_DWORD *)v7 + 72) & 0x20) == 0 && !DCELayerHitTest((__int64)v7, v6) )
    return 0LL;
  v34 = *((_BYTE *)v7 + 55);
  if ( (v34 & 8) == 0 )
  {
    if ( *((_QWORD *)v7 + 21) )
    {
      v35 = (_QWORD *)FindProp(v7, CInputQueueProp::s_atom, 1LL);
      if ( v35 )
      {
        if ( *v35 )
        {
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v7);
          v37 = CompositionInputWindowUIOwner;
          if ( CompositionInputWindowUIOwner )
          {
            TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
            if ( v37 != (struct tagWND *)TopLevelWindow )
            {
              while ( (*((_BYTE *)v37 + 55) & 8) == 0 )
              {
                v37 = (struct tagWND *)*((_QWORD *)v37 + 11);
                if ( v37 == (struct tagWND *)TopLevelWindow )
                  goto LABEL_88;
              }
              goto LABEL_89;
            }
LABEL_88:
            if ( (*((_BYTE *)v37 + 55) & 8) != 0 )
              goto LABEL_89;
          }
        }
      }
    }
    v39 = v58;
    goto LABEL_94;
  }
LABEL_89:
  v39 = v58;
  if ( (*((_DWORD *)v58 + 8) & 1) != 0 )
  {
    v40 = (v34 & 0xC0) == 64;
    goto LABEL_91;
  }
LABEL_94:
  if ( *((_QWORD *)v7 + 21) )
  {
    v41 = (_QWORD *)FindProp(v7, CInputQueueProp::s_atom, 1LL);
    if ( v41 )
    {
      if ( *v41 )
      {
        if ( (*((_BYTE *)v7 + 291) & 2) == 0 )
        {
          LODWORD(v44) = v42;
          goto LABEL_110;
        }
        if ( (unsigned int)CoreWindowProp::IsComponent(v7) )
          goto LABEL_109;
      }
    }
  }
  if ( (v34 & 0x20) != 0
    || (int)v6 < *((_DWORD *)v7 + 32)
    || (int)v6 >= *((_DWORD *)v7 + 34)
    || y < *((_DWORD *)v7 + 33)
    || y >= *((_DWORD *)v7 + 35) )
  {
LABEL_109:
    LODWORD(v44) = v56;
    goto LABEL_110;
  }
  v43 = *((_QWORD *)v7 + 12);
  *(_QWORD *)&v60[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v60;
  *((_QWORD *)&v60[0] + 1) = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  v44 = xxxDCEWindowHitTestInternal(*((struct tagWND **)v7 + 12), (struct tagPOINT)v6, v39);
  ThreadUnlock1(v46, v45);
  if ( v44 )
    return v44;
LABEL_110:
  if ( !(unsigned int)IsCompositionInputWindowForHitTest(v7) && *((_QWORD *)v7 + 2) == gptiCurrent )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(v7)
      && (*((_BYTE *)v7 + 50) & 8) != 0
      && (_DWORD)v44
      && (v51 = (void *)ReferenceDwmApiPort(v48, v47, v49, v50),
          LODWORD(v56) = 1,
          UserSessionSwitchLeaveCrit(v53, v52),
          DwmSyncHitTestQuery(v51, *((_QWORD *)v39 + 1), *((_QWORD *)v39 + 2), -2, (__int64)&v59, (__int64)&v56),
          EnterCrit(0LL, 1LL),
          (_DWORD)v56) )
    {
      v3 = v59;
      v40 = (_DWORD)v59 == -1;
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      v3 = xxxSendTransformableMessageTimeout(v7, 0x84u, 0LL, LOWORD(v57.x) | (LOWORD(v57.y) << 16), 0, 0, 0LL, 1, 0);
      v40 = v3 == -1;
    }
LABEL_91:
    if ( v40 )
      return 0LL;
    goto LABEL_119;
  }
  v3 = 1;
LABEL_119:
  v54 = (int *)*((_QWORD *)v39 + 3);
  if ( v54 )
  {
    *v54 = v3;
    *((_DWORD *)v39 + 9) = 1;
  }
  if ( v3 == 17 - (((*((unsigned __int8 *)v7 + 50) >> 6) & 1) != ((*((unsigned __int8 *)v7 + 49) >> 6) & 1))
    && (*((_BYTE *)v7 + 54) & 4) == 0 )
  {
    v55 = SizeBoxHwnd(v7);
    if ( v55 )
      v7 = (struct tagWND *)v55;
  }
  return *(HWND *)v7;
}
