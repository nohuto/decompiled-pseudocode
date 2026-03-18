/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0
 * Callers:
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0065580 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CC44 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DCELayerHitTest @ 0x1C00104D8 (DCELayerHitTest.c)
 *     DwmSyncHitTestQuery @ 0x1C003E64C (DwmSyncHitTestQuery.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006501C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0065580 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01E47FC (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C0249384 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct DCE_WINDOW_HIT_TEST_ARGS *a3)
{
  int v3; // r12d
  __int64 v5; // rbx
  struct tagWND *v6; // rsi
  __int64 v9; // rbp
  unsigned __int16 v10; // r14
  int v11; // edx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int128 *v18; // rcx
  LONG y; // r14d
  __int64 *Prop; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // r15
  _QWORD *v26; // rax
  struct tagWND *v27; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v29; // rbp
  __int64 TopLevelWindow; // rax
  bool v31; // zf
  _QWORD *v32; // rax
  struct tagWND *v33; // rcx
  int v34; // r8d
  __int64 v35; // rdx
  HWND v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  void *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int *v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+50h] [rbp-88h] BYREF
  struct tagPOINT v52; // [rsp+58h] [rbp-80h] BYREF
  __int64 v53; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v54[3]; // [rsp+68h] [rbp-70h] BYREF
  __int128 v55; // [rsp+80h] [rbp-58h] BYREF

  v52 = a2;
  v3 = -2;
  LODWORD(v53) = -2;
  LODWORD(v51) = 1;
  v5 = (__int64)a2;
  v6 = a1;
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
  if ( !*(_QWORD *)v12
    || (*((_BYTE *)v6 + 291) & 2) != 0
    && ((Prop = (__int64 *)FindProp(v6, CoreWindowProp::s_atom, 1LL)) == 0LL
     || (v21 = *Prop) == 0
     || !*(_DWORD *)(v21 + 20)) )
  {
LABEL_9:
    if ( (*((_BYTE *)v6 + 55) & 0x10) != 0 )
      goto LABEL_10;
    return 0LL;
  }
  if ( (*((_DWORD *)a3 + 8) & 8) == 0 )
    return 0LL;
  if ( *((_QWORD *)v6 + 11) != GetMessageWindow((__int64)v6) && (*((_BYTE *)v6 + 55) & 0x10) == 0 )
    return 0LL;
LABEL_10:
  if ( (unsigned int)GetWindowCloakState(v6) )
  {
    if ( (*((_BYTE *)v6 + 291) & 2) == 0 )
      return 0LL;
    if ( !v9 )
      return 0LL;
    v13 = (__int64 *)FindProp(v6, v10, 1LL);
    if ( !v13 )
      return 0LL;
    v14 = *v13;
    if ( !v14 || !*(_DWORD *)(v14 + 20) )
      return 0LL;
  }
  if ( v9 )
  {
    if ( CInputQueueProp::s_atom )
    {
      v15 = *(_DWORD *)(v9 + 4);
      v16 = v9 + 8;
      if ( v15 )
      {
        while ( *(_WORD *)(v16 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v16 + 10) & 1) == 0 )
        {
          v16 += 16LL;
          if ( !--v15 )
            goto LABEL_22;
        }
        if ( *(_QWORD *)v16 )
        {
          if ( (*((_BYTE *)v6 + 291) & 2) == 0 )
          {
LABEL_30:
            y = v52.y;
            goto LABEL_51;
          }
          if ( (unsigned int)CoreWindowProp::IsComponent(v6) )
          {
            y = v52.y;
            goto LABEL_51;
          }
        }
      }
    }
  }
LABEL_22:
  if ( *((_QWORD *)v6 + 34) && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    v17 = *((_QWORD *)v6 + 26);
    v55 = 0LL;
    if ( v17 )
      GreGetRgnBox(v17, &v55);
    v18 = &v55;
    if ( !*((_QWORD *)v6 + 26) )
      v18 = (__int128 *)((char *)v6 + 112);
    if ( !(unsigned int)DCEHitTestWindow(v18, *((_QWORD *)v6 + 34), &v52, 0LL) )
      return 0LL;
    v5 = (__int64)v52;
    goto LABEL_30;
  }
  v22 = *((_QWORD *)v6 + 26);
  if ( v22 )
  {
    y = v52.y;
    if ( !(unsigned int)GrePtInRegion(v22, (unsigned int)v5, (unsigned int)v52.y) )
      return 0LL;
  }
  else
  {
    if ( (int)v5 < *((_DWORD *)v6 + 28) )
      return 0LL;
    if ( (int)v5 >= *((_DWORD *)v6 + 30) )
      return 0LL;
    y = v52.y;
    if ( v52.y < *((_DWORD *)v6 + 29) || v52.y >= *((_DWORD *)v6 + 31) )
      return 0LL;
  }
LABEL_51:
  v23 = *((_QWORD *)v6 + 25);
  if ( v23 )
  {
    if ( !(unsigned int)GrePtInRegion(v23, (unsigned int)v5, (unsigned int)y) )
      return 0LL;
  }
  else
  {
    v24 = *((_QWORD *)v6 + 26);
    if ( v24 && !(unsigned int)GrePtInRegion(v24, (unsigned int)v5, (unsigned int)y) )
      return 0LL;
  }
  if ( (*((_BYTE *)v6 + 50) & 8) != 0 && (*((_DWORD *)v6 + 72) & 0x20) == 0 && !DCELayerHitTest((__int64)v6, v5) )
    return 0LL;
  v25 = *((_BYTE *)v6 + 55);
  if ( (v25 & 8) != 0 )
  {
LABEL_68:
    if ( (*((_DWORD *)a3 + 8) & 1) != 0 )
    {
      v31 = (v25 & 0xC0) == 64;
      goto LABEL_70;
    }
    goto LABEL_73;
  }
  if ( *((_QWORD *)v6 + 21) )
  {
    v26 = (_QWORD *)FindProp(v6, CInputQueueProp::s_atom, 1LL);
    if ( v26 )
    {
      if ( *v26 )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v27);
        v29 = CompositionInputWindowUIOwner;
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          if ( v29 != (struct tagWND *)TopLevelWindow )
          {
            while ( (*((_BYTE *)v29 + 55) & 8) == 0 )
            {
              v29 = (struct tagWND *)*((_QWORD *)v29 + 11);
              if ( v29 == (struct tagWND *)TopLevelWindow )
                goto LABEL_67;
            }
            goto LABEL_68;
          }
LABEL_67:
          if ( (*((_BYTE *)v29 + 55) & 8) != 0 )
            goto LABEL_68;
        }
      }
    }
  }
LABEL_73:
  if ( !*((_QWORD *)v6 + 21) )
    goto LABEL_82;
  v32 = (_QWORD *)FindProp(v6, CInputQueueProp::s_atom, 1LL);
  if ( !v32 || !*v32 )
    goto LABEL_82;
  if ( (*((_BYTE *)v6 + 291) & 2) == 0 )
  {
    v39 = v34;
    goto LABEL_90;
  }
  if ( !(unsigned int)CoreWindowProp::IsComponent(v33) )
  {
LABEL_82:
    if ( (v25 & 0x20) == 0
      && (int)v5 >= *((_DWORD *)v6 + 32)
      && (int)v5 < *((_DWORD *)v6 + 34)
      && y >= *((_DWORD *)v6 + 33)
      && y < *((_DWORD *)v6 + 35) )
    {
      v35 = *((_QWORD *)v6 + 12);
      v54[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v54;
      v54[1] = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      v36 = xxxDCEWindowHitTestInternal(*((struct tagWND **)v6 + 12), (struct tagPOINT)v5, a3);
      ThreadUnlock1(v38, v37);
      if ( v36 )
        return v36;
      v39 = 0;
      goto LABEL_90;
    }
  }
  v39 = v51;
LABEL_90:
  if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) || *((_QWORD *)v6 + 2) != gptiCurrent )
  {
    v3 = 1;
    goto LABEL_99;
  }
  if ( (unsigned int)IsToplevelWindowDesktopComposed(v6, v40, v41)
    && (*((_BYTE *)v6 + 50) & 8) != 0
    && v39
    && (v46 = (void *)ReferenceDwmApiPort(v43, v42, v44, v45),
        LODWORD(v51) = 1,
        UserSessionSwitchLeaveCrit(v48, v47),
        DwmSyncHitTestQuery(
          v46,
          *(_QWORD *)v6,
          *(_DWORD *)a3,
          *(_QWORD *)&a2,
          *((_QWORD *)a3 + 1),
          *((_QWORD *)a3 + 2),
          -2,
          &v53,
          &v51),
        EnterCrit(1LL),
        (_DWORD)v51) )
  {
    v3 = v53;
    v31 = (_DWORD)v53 == -1;
  }
  else
  {
    _InterlockedIncrement(&glSendMessage);
    v3 = xxxSendTransformableMessageTimeout(v6, 0x84u, 0LL, LOWORD(v52.x) | (LOWORD(v52.y) << 16), 0, 0, 0LL, 1, 0);
    v31 = v3 == -1;
  }
LABEL_70:
  if ( v31 )
    return 0LL;
LABEL_99:
  v49 = (int *)*((_QWORD *)a3 + 3);
  if ( v49 )
  {
    *v49 = v3;
    *((_DWORD *)a3 + 9) = 1;
  }
  if ( v3 == 17 - (((*((unsigned __int8 *)v6 + 50) >> 6) & 1) != ((*((unsigned __int8 *)v6 + 49) >> 6) & 1))
    && (*((_BYTE *)v6 + 54) & 4) == 0 )
  {
    v50 = SizeBoxHwnd(v6);
    if ( v50 )
      v6 = (struct tagWND *)v50;
  }
  return *(HWND *)v6;
}
