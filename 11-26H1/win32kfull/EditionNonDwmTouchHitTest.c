/*
 * XREFs of EditionNonDwmTouchHitTest @ 0x1402C2960
 * Callers:
 *     <none>
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x140087E8C (TouchTargetChildTree.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x14008837C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x14008B1BC (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008B4A0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

_OWORD *__fastcall EditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, struct tagTOUCHTARGETINGCONTACT *a3, _DWORD *a4)
{
  __int64 UserSessionState; // rax
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  struct tagWND *v19; // rax
  struct tagWND *v20; // rax
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rcx
  struct tagWND *v29; // r15
  __int64 v30; // rdx
  _QWORD *v31; // rax
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagWND *v37; // rbx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  _DWORD v46[28]; // [rsp+30h] [rbp-88h] BYREF
  struct tagPOINT v47; // [rsp+C0h] [rbp+8h] BYREF

  if ( a4 )
    *a4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = INPUTDEST_FROM_PWND(v46, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19176) + 8LL) + 24LL));
  v12 = v9[1];
  *a1 = *v9;
  v13 = v9[2];
  a1[1] = v12;
  v14 = v9[3];
  a1[2] = v13;
  v15 = v9[4];
  a1[3] = v14;
  v16 = v9[5];
  a1[4] = v15;
  v17 = v9[6];
  a1[5] = v16;
  a1[6] = v17;
  if ( a3 )
  {
    v47 = 0LL;
    v28 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19176);
    v29 = *(struct tagWND **)(*(_QWORD *)(v28 + 8) + 24LL);
    v31 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v28, v30) + 19176) + 8LL);
    v32 = *(_DWORD *)(*v31 + 64LL) & 1;
    v34 = W32GetUserSessionState(*v31, v33);
    v37 = TopLevelTouchTarget(
            *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v34 + 19176) + 8LL) + 24LL),
            a3,
            (struct tagPOINT *)(a2 + 20),
            &v47,
            v32);
    if ( v37 )
    {
      if ( a4 )
        *a4 = 1;
      W32GetUserSessionState(v36, v35);
      v29 = TouchTargetChildTree(v37, a3, *(struct tagPOINT *)(a2 + 20), &v47);
    }
    v38 = INPUTDEST_FROM_PWND(v46, (__int64)v29);
    v39 = v38[1];
    *a1 = *v38;
    v40 = v38[2];
    a1[1] = v39;
    v41 = v38[3];
    a1[2] = v40;
    v42 = v38[4];
    a1[3] = v41;
    v43 = v38[5];
    a1[4] = v42;
    v44 = v38[6];
    a1[5] = v43;
    a1[6] = v44;
  }
  else
  {
    v18 = W32GetUserSessionState(v11, v10);
    v19 = TopLevelSpeedHitTest(*(struct tagDESKTOP **)(v18 + 19176), (struct tagPOINT *)(a2 + 20), 0LL);
    if ( v19 )
    {
      v20 = ClassicChildTreeSpeedHitTest(v19, *(struct tagPOINT *)(a2 + 20));
      if ( v20 )
      {
        v21 = INPUTDEST_FROM_PWND(v46, (__int64)v20);
        v22 = v21[1];
        *a1 = *v21;
        v23 = v21[2];
        a1[1] = v22;
        v24 = v21[3];
        a1[2] = v23;
        v25 = v21[4];
        a1[3] = v24;
        v26 = v21[5];
        a1[4] = v25;
        v27 = v21[6];
        a1[5] = v26;
        a1[6] = v27;
        if ( a4 )
          *a4 = 1;
      }
    }
  }
  return a1;
}
