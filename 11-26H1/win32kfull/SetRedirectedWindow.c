/*
 * XREFs of SetRedirectedWindow @ 0x14014DABC
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     IncrementCompositedCount @ 0x1400109DC (IncrementCompositedCount.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1400A5198 (HintSpriteShape.c)
 *     UpdateWindowSpriteMonitor @ 0x1400A6748 (UpdateWindowSpriteMonitor.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     RedirectDCEs @ 0x14014D444 (RedirectDCEs.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  struct tagTHREADINFO *v4; // rax
  int v5; // r15d
  int v6; // r13d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  HBITMAP v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r8
  const struct tagRECT *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 Prop; // rax
  __int64 v23; // rcx
  HBRUSH SolidBrush; // r12
  BOOL v25; // ebx
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 RedirectionBitmap; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  RECT v38; // [rsp+20h] [rbp-20h] BYREF
  __int64 v39; // [rsp+30h] [rbp-10h] BYREF
  __int64 v40; // [rsp+38h] [rbp-8h] BYREF
  HBITMAP v41; // [rsp+90h] [rbp+50h] BYREF

  v41 = 0LL;
  v4 = PtiCurrent((__int64)a1);
  v39 = gSmartObjNullRef;
  v5 = 0;
  v6 = a2 & 0x10;
  v7 = a2 & 0xFFFFFFEF;
  v40 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v40;
  if ( GetRedirectionBitmap((__int64)a1, v8) )
  {
    if ( v7 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap((__int64)a1, v9);
      UserSessionState = W32GetUserSessionState(v36, v35);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), a1, RedirectionBitmap, 0);
    }
LABEL_14:
    if ( !v6 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v38);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      if ( LOBYTE(v38.left) )
        --*(_DWORD *)(*(_QWORD *)&v38.right + 28LL);
    }
    v20 = W32GetUserSessionState(v10, v9);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v20 + 41398), 1u);
    *(_DWORD *)(Prop + 32) |= v7;
    v11 = 0;
    goto LABEL_18;
  }
  SmartObjStackRefBase<tagCLS>::operator=(&v39, *((_QWORD *)a1 + 17));
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v39 + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v39 + 8LL) + 8LL) & 0x40) != 0 )
  {
    v25 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v25 = v7 == 1;
    if ( (IsTopLevelWindow((__int64)a1) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v39 + 8LL) + 8LL) & 0x40) != 0 || v7 != 1)
      && !v25 )
    {
      v11 = -2143420411;
      goto LABEL_18;
    }
  }
  v11 = CreateOrGetRedirectionBitmap(a1, 0, 0, &v41);
  if ( v11 >= 0 )
  {
    v12 = v41;
    if ( !(unsigned int)SetRedirectionBitmap(a1, v41, 0) )
    {
      DeleteOrSetRedirectionBitmap(a1, v12, 0LL);
      v11 = -1073741801;
      goto LABEL_18;
    }
    SetOrClrWF(1, a1, 0xB20u, 1);
    v13 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor((__int64 *)a1, v13);
    if ( v7 == 2 )
    {
      IncrementCompositedCount((__int64)a1, v14);
    }
    else if ( v7 == 1 )
    {
      v16 = (_QWORD *)*((_QWORD *)a1 + 5);
      v17 = (const struct tagRECT *)(v16 + 11);
      v18 = v16[11] - v16[13];
      if ( !v18 )
        v18 = v16[12] - v16[14];
      if ( (v18 || v16[21]) && !IsRectEmptyInl(v17) )
      {
        v23 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 1076LL);
        if ( (_DWORD)v23 == -1 && (v23 = *((unsigned int *)a1 + 45), (_DWORD)v23 == -1) )
        {
          SolidBrush = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v23, v18) + 19904) + 4736LL);
        }
        else
        {
          LOBYTE(v5) = 1;
          SolidBrush = (HBRUSH)GreCreateSolidBrush(v23);
        }
        v26 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        v38.right = DWORD2(v26) - v26;
        v38.bottom = HIDWORD(v26) - DWORD1(v26);
        v38.top = 0;
        v38.left = 0;
        v27 = W32GetUserSessionState(0LL, (unsigned int)-DWORD1(v26));
        v41 = (HBITMAP)GreSelectBitmap(*(_QWORD *)(v27 + 43248), v12);
        v30 = W32GetUserSessionState(v29, v28);
        FillRect(*(HDC *)(v30 + 43248), &v38, SolidBrush);
        if ( (_BYTE)v5 )
          GreDeleteObject(SolidBrush);
        v33 = W32GetUserSessionState(v32, v31);
        GreSelectBitmap(*(_QWORD *)(v33 + 43248), v41);
        v5 = 1;
      }
      v19 = W32GetUserSessionState(v17, v18);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(v19 + 56968) + 40LL), a1, (__int64)v12, v5);
    }
    RedirectDCEs((__int64)a1, v14, v15);
    goto LABEL_14;
  }
LABEL_18:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v39);
  return (unsigned int)v11;
}
