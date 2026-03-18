/*
 * XREFs of EditionPostDwmSpeedHitTest @ 0x14008C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x140087E8C (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x14008868C (xxxTouchTargetWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008C2DC (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C5C0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C6E8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CC5C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x14008D414 (IsWindowUnderActiveLockScreen.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008DB28 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall EditionPostDwmSpeedHitTest(
        __int64 a1,
        __int64 a2,
        const struct _SUBPIXELS *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  struct tagPOINT *v10; // r14
  struct tagWND *i; // rdi
  __int64 v12; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r12
  struct tagPOINT v19; // rbx
  struct tagWND *v20; // rbx
  _QWORD *v21; // r8
  struct tagWND *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  struct tagWND *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 UserSessionState; // rax
  struct tagPOINT v34; // [rsp+48h] [rbp-69h] BYREF
  int v35; // [rsp+50h] [rbp-61h] BYREF
  __int64 v36; // [rsp+58h] [rbp-59h] BYREF
  _OWORD v37[5]; // [rsp+60h] [rbp-51h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-1h]
  __int128 v39; // [rsp+C0h] [rbp+Fh]
  struct tagPOINT v40; // [rsp+108h] [rbp+57h] BYREF

  v6 = a6;
  v10 = (struct tagPOINT *)a2;
  i = 0LL;
  *a6 = 0;
  v12 = *(unsigned int *)(a1 + 92);
  if ( (_DWORD)v12 != 2 )
    goto LABEL_15;
  if ( (*(_DWORD *)(a1 + 88) & 1) == 0 )
  {
    v17 = 1;
    goto LABEL_14;
  }
  i = *(struct tagWND **)(a1 + 80);
  if ( i )
  {
    do
    {
      v16 = *((_QWORD *)i + 13);
      if ( v16 )
      {
        v12 = *((_QWORD *)i + 3);
        if ( v12 )
        {
          a2 = *(_QWORD *)(v12 + 8);
          if ( a2 )
          {
            if ( v16 == *(_QWORD *)(a2 + 24) )
              break;
          }
        }
      }
      i = (struct tagWND *)*((_QWORD *)i + 13);
    }
    while ( v16 );
    v17 = i == 0LL;
LABEL_14:
    if ( !v17 )
      goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 80) )
  {
    CompositionInputWindowUIOwner = *(struct tagWND **)(a1 + 80);
    if ( (unsigned int)IsIndependentInputWindow(CompositionInputWindowUIOwner) )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v14);
    a6 = (_DWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 256LL));
    result = PhysicalToLogicalDPIPoint(
               v10,
               v10,
               *(unsigned int *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL),
               &a6);
    *v6 = 1;
    return result;
  }
LABEL_15:
  v18 = a5;
  if ( *(_DWORD *)(a5 + 80) )
  {
    v40.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 438LL);
  }
  v19 = *v10;
  v34 = *v10;
  if ( a4 )
  {
    v36 = 0LL;
    v35 = 0;
    LOWORD(v40.x) = 0;
    if ( !i )
      goto LABEL_22;
    UserSessionState = W32GetUserSessionState(v12, a2);
    if ( !(unsigned int)xxxTouchTargetWindow(
                          i,
                          a4,
                          &v34,
                          &v35,
                          &v40,
                          (__int64)&v36,
                          *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(UserSessionState + 19176) + 8LL) + 64LL) & 1) )
      goto LABEL_22;
    W32GetUserSessionState(v12, a2);
    v26 = TouchTargetChildTree(i, a4, v34, &v36);
    goto LABEL_41;
  }
  if ( !i )
    goto LABEL_19;
  v12 = *((_QWORD *)i + 5);
  v40 = v19;
  if ( (*(_BYTE *)(v12 + 31) & 0x10) == 0 )
    goto LABEL_19;
  v12 = *(unsigned __int8 *)(v12 + 233);
  a2 = ((unsigned int)v12 >> 4) & 2;
  v24 = ((unsigned int)v12 >> 4) & 2 | 1;
  if ( (v12 & 0x40) == 0 )
    v24 = ((unsigned int)v12 >> 4) & 2;
  if ( v24 || (unsigned int)IsWindowUnderActiveLockScreen(i) )
    goto LABEL_19;
  a2 = *((_QWORD *)i + 27);
  v12 = *((_QWORD *)i + 5) + 88LL;
  if ( a2 )
  {
    if ( !DCEHitTestWindow((const struct tagRECT *)v12, (const struct _D3DMATRIX *)a2, &v40, a3) )
      goto LABEL_19;
    v19 = v40;
  }
  else if ( v19.x < *(_DWORD *)v12
         || v19.x >= *(_DWORD *)(*((_QWORD *)i + 5) + 96LL)
         || v19.y < *(_DWORD *)(*((_QWORD *)i + 5) + 92LL)
         || v19.y >= *(_DWORD *)(*((_QWORD *)i + 5) + 100LL) )
  {
    goto LABEL_19;
  }
  v25 = *(_QWORD *)(*((_QWORD *)i + 5) + 168LL);
  if ( v25 && !(unsigned int)GrePtInRegion(v25, (unsigned int)v19.x, (unsigned int)v40.y)
    || (v12 = *((_QWORD *)i + 5), (*(_BYTE *)(v12 + 26) & 8) != 0)
    && (*(_DWORD *)(v12 + 232) & 2) == 0
    && !DCELayerHitTest(i, v19) )
  {
LABEL_19:
    v20 = 0LL;
    v12 = *(_QWORD *)(W32GetUserSessionState(v12, a2) + 19176);
    v21 = *(_QWORD **)(v12 + 8);
    a2 = *(unsigned int *)(*v21 + 64LL);
    if ( (a2 & 1) != 0 )
    {
      v20 = DCETopLevelSpeedHitTest((struct tagDESKTOP *)v12, &v34, a3);
    }
    else
    {
      for ( i = *(struct tagWND **)(v21[3] + 112LL); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( (unsigned int)ClassicIsWindowHit(i, v34) )
          goto LABEL_39;
      }
    }
    i = v20;
    if ( !v20 )
      goto LABEL_22;
    goto LABEL_39;
  }
  if ( *((_QWORD *)i + 27) )
    v34 = v19;
LABEL_39:
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v12, a2, v21) + 96) + 120LL) )
    v26 = DCEChildTreeSpeedHitTest(i, *v10, &v34, a3);
  else
    v26 = ClassicChildTreeSpeedHitTest(i, v34);
LABEL_41:
  v22 = v26;
  if ( v26 )
  {
    *a6 = 1;
    *v10 = v34;
    goto LABEL_43;
  }
LABEL_22:
  v34 = *v10;
  v22 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, a2) + 19176) + 8LL) + 24LL);
  *v10 = v34;
  if ( v22 )
  {
LABEL_43:
    v23 = *(_QWORD *)v22;
    goto LABEL_44;
  }
  v23 = 0LL;
LABEL_44:
  *(_QWORD *)v18 = v23;
  memset_0(v37, 0, 0x70uLL);
  if ( v22 )
  {
    LODWORD(v37[0]) = 4;
    *(_QWORD *)&v38 = v22;
    HIDWORD(v38) = 2;
  }
  v27 = v37[1];
  *(_OWORD *)a1 = v37[0];
  v28 = v37[2];
  *(_OWORD *)(a1 + 16) = v27;
  v29 = v37[3];
  *(_OWORD *)(a1 + 32) = v28;
  v30 = v37[4];
  *(_OWORD *)(a1 + 48) = v29;
  v31 = v38;
  *(_OWORD *)(a1 + 64) = v30;
  v32 = v39;
  *(_OWORD *)(a1 + 80) = v31;
  *(_OWORD *)(a1 + 96) = v32;
  result = *(unsigned int *)(v18 + 100);
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
