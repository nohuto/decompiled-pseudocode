/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C000DAB8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     _FindProp @ 0x1C007B010 (_FindProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     DwmSyncHitTestQuery @ 0x1C00B75BC (DwmSyncHitTestQuery.c)
 *     DCELayerHitTest @ 0x1C010E858 (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01DB530 (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C024571C (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  __int64 v3; // rax
  int v4; // r13d
  struct tagPOINT v6; // rbx
  struct tagWND *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r14
  unsigned __int16 v10; // r15
  int v11; // edx
  __int64 v12; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rcx
  bool v19; // zf
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // xmm0_8
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rcx
  LONG y; // r12d
  __int64 v28; // rcx
  __int64 v29; // rcx
  char v30; // r15
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // r14d
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  HWND v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  _QWORD *Prop; // rax
  __int64 DesktopWindow; // rax
  __int64 v49; // rdx
  int *v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  void *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v59; // r14
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rax
  __int64 v62; // rcx
  __int128 *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // [rsp+58h] [rbp-49h] BYREF
  struct tagPOINT v66; // [rsp+60h] [rbp-41h] BYREF
  __int64 v67; // [rsp+68h] [rbp-39h] BYREF
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v68; // [rsp+70h] [rbp-31h]
  __int64 v69; // [rsp+78h] [rbp-29h]
  _OWORD v70[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-1h]
  __int128 v72; // [rsp+A8h] [rbp+7h] BYREF

  v3 = *((_QWORD *)a3 + 2);
  v4 = -2;
  v68 = a3;
  v66 = a2;
  v6 = a2;
  LODWORD(v67) = -2;
  v7 = a1;
  LODWORD(v65) = 0;
  v8 = 1LL;
  v69 = v3;
  if ( !a1 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 21);
  v10 = CoreWindowProp::s_atom;
  if ( !v9 )
    goto LABEL_7;
  if ( !CInputQueueProp::s_atom )
    goto LABEL_7;
  v11 = *(_DWORD *)(v9 + 4);
  v12 = v9 + 8;
  if ( !v11 )
    goto LABEL_7;
  while ( *(_WORD *)(v12 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v12 + 10) & 1) == 0 )
  {
    v12 += 16LL;
    if ( !--v11 )
      goto LABEL_7;
  }
  if ( !*(_QWORD *)v12 )
    goto LABEL_7;
  if ( (*((_BYTE *)a1 + 291) & 2) == 0 )
    goto LABEL_10;
  if ( !CoreWindowProp::s_atom )
    goto LABEL_7;
  v45 = *(_DWORD *)(v9 + 4);
  v46 = v9 + 8;
  if ( !v45 )
    goto LABEL_7;
  while ( *(_WORD *)(v46 + 8) != CoreWindowProp::s_atom || (*(_BYTE *)(v46 + 10) & 1) == 0 )
  {
    v46 += 16LL;
    if ( !--v45 )
      goto LABEL_7;
  }
  if ( *(_QWORD *)v46 && *(_DWORD *)(*(_QWORD *)v46 + 20LL) )
  {
LABEL_10:
    if ( (*((_DWORD *)a3 + 8) & 8) == 0
      || *((_QWORD *)v7 + 11) != GetMessageWindow((__int64)v7) && (*((_BYTE *)v7 + 55) & 0x10) == 0 )
    {
      return 0LL;
    }
  }
  else
  {
LABEL_7:
    if ( (*((_BYTE *)v7 + 55) & 0x10) == 0 )
      return 0LL;
  }
  v14 = *((_QWORD *)v7 + 11);
  if ( v14 )
  {
    v15 = *((_QWORD *)v7 + 3);
    v16 = 0LL;
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( v17 )
        v16 = *(_QWORD *)(v17 + 16);
    }
    if ( v14 == v16 )
      goto LABEL_16;
  }
  if ( (*((_BYTE *)v7 + 50) & 8) != 0 && GetTopLevelWindow((__int64)v7) )
  {
    v8 = 1LL;
LABEL_16:
    if ( !v9 )
      goto LABEL_21;
    if ( !atomDWMProp )
      goto LABEL_21;
    v14 = *(unsigned int *)(v9 + 4);
    v18 = (__int64 *)(v9 + 8);
    if ( !(_DWORD)v14 )
      goto LABEL_21;
    while ( *((_WORD *)v18 + 4) != atomDWMProp || (*((_BYTE *)v18 + 10) & 1) == 0 )
    {
      v18 += 2;
      v19 = (_DWORD)v14 == 1;
      v14 = (unsigned int)(v14 - 1);
      if ( v19 )
        goto LABEL_21;
    }
    v21 = *v18;
    if ( *v18 )
    {
      v70[0] = *(_OWORD *)v21;
      v70[1] = *(_OWORD *)(v21 + 16);
      v22 = *(_QWORD *)(v21 + 32);
      v20 = v70[0];
      v71 = v22;
    }
    else
    {
LABEL_21:
      v20 = v70[0] & 0xE000;
    }
    v23 = 0;
    if ( (v20 & 0x400) != 0 )
      v23 = v8;
    if ( (v20 & 0x800) != 0 )
      v23 |= 2u;
    if ( v23 )
    {
      if ( (*((_BYTE *)v7 + 291) & 2) == 0 )
        return 0LL;
      if ( !v9 )
        return 0LL;
      if ( !v10 )
        return 0LL;
      v43 = *(_DWORD *)(v9 + 4);
      v44 = v9 + 8;
      if ( !v43 )
        return 0LL;
      while ( *(_WORD *)(v44 + 8) != v10 || (*(_BYTE *)(v44 + 10) & 1) == 0 )
      {
        v44 += 16LL;
        if ( !--v43 )
          return 0LL;
      }
      if ( !*(_QWORD *)v44 || !*(_DWORD *)(*(_QWORD *)v44 + 20LL) )
        return 0LL;
    }
  }
  if ( !v9 )
    goto LABEL_35;
  v14 = CInputQueueProp::s_atom;
  if ( !CInputQueueProp::s_atom )
    goto LABEL_35;
  v24 = *(_DWORD *)(v9 + 4);
  v25 = v9 + 8;
  if ( !v24 )
    goto LABEL_35;
  while ( *(_WORD *)(v25 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v25 + 10) & 1) == 0 )
  {
    v25 += 16LL;
    if ( !--v24 )
      goto LABEL_35;
  }
  if ( !*(_QWORD *)v25 )
    goto LABEL_35;
  if ( (*((_BYTE *)v7 + 291) & 2) == 0 )
  {
LABEL_142:
    y = v66.y;
    goto LABEL_41;
  }
  if ( !(unsigned int)CoreWindowProp::IsComponent(v7) )
  {
LABEL_35:
    if ( !*((_QWORD *)v7 + 34) || (*((_DWORD *)a3 + 8) & 4) != 0 )
    {
      v26 = *((_QWORD *)v7 + 26);
      if ( v26 )
      {
        y = v66.y;
        if ( !(unsigned int)GrePtInRegion(v26, (unsigned int)v6.x, (unsigned int)v66.y) )
          return 0LL;
      }
      else
      {
        if ( v6.x < *((_DWORD *)v7 + 28) )
          return 0LL;
        if ( v6.x >= *((_DWORD *)v7 + 30) )
          return 0LL;
        y = v66.y;
        if ( v66.y < *((_DWORD *)v7 + 29) || v66.y >= *((_DWORD *)v7 + 31) )
          return 0LL;
      }
      goto LABEL_41;
    }
    v62 = *((_QWORD *)v7 + 26);
    v72 = 0LL;
    if ( v62 )
      GreGetRgnBox(v62, &v72);
    v63 = &v72;
    if ( !*((_QWORD *)v7 + 26) )
      v63 = (__int128 *)((char *)v7 + 112);
    if ( !(unsigned int)DCEHitTestWindow(v63, *((_QWORD *)v7 + 34), &v66, *((_QWORD *)a3 + 5)) )
      return 0LL;
    v6 = v66;
    goto LABEL_142;
  }
  y = v66.y;
LABEL_41:
  v28 = *((_QWORD *)v7 + 25);
  if ( v28 )
  {
    if ( !(unsigned int)GrePtInRegion(v28, (unsigned int)v6.x, (unsigned int)y) )
      return 0LL;
  }
  else
  {
    v29 = *((_QWORD *)v7 + 26);
    if ( v29 && !(unsigned int)GrePtInRegion(v29, (unsigned int)v6.x, (unsigned int)y) )
      return 0LL;
  }
  if ( (*((_BYTE *)v7 + 50) & 8) != 0
    && (*((_DWORD *)v7 + 72) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DCELayerHitTest)(v7, v6, v14, v8) )
  {
    return 0LL;
  }
  v30 = *((_BYTE *)v7 + 55);
  if ( (v30 & 8) == 0 )
  {
    v31 = *((_QWORD *)v7 + 21);
    if ( !v31 )
      goto LABEL_50;
    v14 = CInputQueueProp::s_atom;
    if ( !CInputQueueProp::s_atom )
      goto LABEL_50;
    v32 = *(_DWORD *)(v31 + 4);
    v33 = v31 + 8;
    if ( !v32 )
      goto LABEL_50;
    while ( *(_WORD *)(v33 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v33 + 10) & 1) == 0 )
    {
      v33 += 16LL;
      if ( !--v32 )
        goto LABEL_50;
    }
    if ( !*(_QWORD *)v33 )
      goto LABEL_50;
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v7);
    v59 = (__int64)CompositionInputWindowUIOwner;
    if ( !CompositionInputWindowUIOwner )
      goto LABEL_50;
    if ( (*((_BYTE *)CompositionInputWindowUIOwner + 55) & 8) == 0 )
    {
      TopLevelHost = CoreWindowProp::GetTopLevelHost(CompositionInputWindowUIOwner);
      if ( TopLevelHost )
        v59 = (__int64)TopLevelHost;
      TopLevelWindow = GetTopLevelWindow(v59);
      if ( v59 == TopLevelWindow )
      {
LABEL_128:
        if ( (*(_BYTE *)(v59 + 55) & 8) == 0 )
        {
LABEL_50:
          v34 = (unsigned int)v65;
          v35 = 1;
          goto LABEL_51;
        }
      }
      else
      {
        while ( (*(_BYTE *)(v59 + 55) & 8) == 0 )
        {
          v59 = *(_QWORD *)(v59 + 88);
          if ( v59 == TopLevelWindow )
            goto LABEL_128;
        }
      }
    }
  }
  if ( (*((_DWORD *)v68 + 8) & 1) == 0 )
    goto LABEL_50;
  if ( (v30 & 0xC0) == 0x40 )
    return 0LL;
  v35 = 1;
  v34 = 1LL;
LABEL_51:
  v36 = (__int64)v68;
  if ( *((_QWORD *)v7 + 34) )
  {
    *((_DWORD *)v68 + 12) = 1;
    *(_QWORD *)(v36 + 16) = ((unsigned __int16)y << 16) | LOWORD(v6.x);
  }
  if ( (_DWORD)v34 )
    goto LABEL_96;
  v37 = *((_QWORD *)v7 + 21);
  if ( v37 )
  {
    v14 = CInputQueueProp::s_atom;
    if ( CInputQueueProp::s_atom )
    {
      v34 = *(unsigned int *)(v37 + 4);
      v38 = v37 + 8;
      if ( (_DWORD)v34 )
      {
        while ( *(_WORD *)(v38 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v38 + 10) & 1) == 0 )
        {
          v38 += 16LL;
          v19 = (_DWORD)v34 == 1;
          v34 = (unsigned int)(v34 - 1);
          if ( v19 )
            goto LABEL_59;
        }
        if ( *(_QWORD *)v38 && ((*((_BYTE *)v7 + 291) & 2) == 0 || (unsigned int)CoreWindowProp::IsComponent(v7)) )
          goto LABEL_136;
      }
    }
  }
LABEL_59:
  if ( (*((_BYTE *)v7 + 55) & 0x20) != 0
    || v6.x < *((_DWORD *)v7 + 32)
    || v6.x >= *((_DWORD *)v7 + 34)
    || y < *((_DWORD *)v7 + 33)
    || y >= *((_DWORD *)v7 + 35) )
  {
LABEL_136:
    LODWORD(v40) = 1;
    goto LABEL_89;
  }
  v39 = *((_QWORD *)v7 + 12);
  *(_QWORD *)&v70[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v70;
  *((_QWORD *)&v70[0] + 1) = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = xxxDCEWindowHitTestIndirect(*((struct tagWND **)v7 + 12), v6, v36, v8);
  ThreadUnlock1(v42, v41);
  if ( v40 )
    return v40;
LABEL_89:
  if ( (!*((_QWORD *)v7 + 21)
     || (Prop = (_QWORD *)FindProp(v7, CInputQueueProp::s_atom, 1LL)) == 0LL
     || !*Prop
     || (*((_BYTE *)v7 + 291) & 2) != 0 && !(unsigned int)CoreWindowProp::IsComponent(v7))
    && *((_QWORD *)v7 + 2) == gptiCurrent )
  {
    if ( !*((_QWORD *)v7 + 11) )
      goto LABEL_94;
    DesktopWindow = GetDesktopWindow(v7);
    if ( v49 != DesktopWindow
      || !(unsigned int)IsWindowDesktopComposed(v7)
      || (*((_BYTE *)v7 + 50) & 8) == 0
      || !(_DWORD)v40 )
    {
      goto LABEL_94;
    }
    if ( gdwInAtomicOperation )
    {
      v52 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v55 = (void *)ReferenceDwmApiPort(v52, gdwInAtomicOperation, v53, v54);
    LODWORD(v65) = 1;
    UserSessionSwitchLeaveCrit(v57, v56);
    DwmSyncHitTestQuery(v55, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16), -2, (__int64)&v67, (__int64)&v65);
    EnterCrit(0LL, 1LL);
    if ( (_DWORD)v65 )
    {
      v4 = v67;
    }
    else
    {
LABEL_94:
      _InterlockedIncrement(&glSendMessage);
      v4 = xxxSendTransformableMessageTimeout(v7, 0x84u, 0LL, LOWORD(v66.x) | (LOWORD(v66.y) << 16), 0, 0, 0LL, 1, 0);
    }
    if ( v4 != -1 )
      goto LABEL_96;
    *(_QWORD *)(v36 + 16) = v69;
    *(_DWORD *)(v36 + 48) = 0;
    return 0LL;
  }
  v4 = 1;
LABEL_96:
  v50 = *(int **)(v36 + 24);
  if ( v50 )
  {
    *v50 = v4;
    *(_DWORD *)(v36 + 36) = 1;
  }
  if ( (*((_BYTE *)v7 + 49) & 0x40) == 0 )
    v35 = 0;
  if ( ((*((_BYTE *)v7 + 50) & 0x40) != 0) != v35 )
    v51 = 16;
  else
    v51 = 17;
  if ( v4 == v51 && (*((_BYTE *)v7 + 54) & 4) == 0 )
  {
    v64 = SizeBoxHwnd(v7, v34, v14, v8);
    if ( v64 )
      v7 = (struct tagWND *)v64;
  }
  return *(HWND *)v7;
}
