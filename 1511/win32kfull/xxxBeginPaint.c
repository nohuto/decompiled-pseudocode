/*
 * XREFs of xxxBeginPaint @ 0x1C0067C4C
 * Callers:
 *     NtUserBeginPaint @ 0x1C0067B20 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C80C4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0215850 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     UT_GetParentDCClipBox @ 0x1C0067F7C (UT_GetParentDCClipBox.c)
 *     xxxSendEraseBkgnd @ 0x1C0069A20 (xxxSendEraseBkgnd.c)
 *     CalcWindowRgn @ 0x1C007D1B4 (CalcWindowRgn.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007EEF8 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ThreadLockExchangeAlways @ 0x1C0096828 (ThreadLockExchangeAlways.c)
 *     zzzInternalHideCaret @ 0x1C00CA3B0 (zzzInternalHideCaret.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F1FD4 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 DCEx; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rbx
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1LL, a1, 1028LL, 1LL);
  SetOrClrWF(0LL, a1, 576LL, 1LL);
  if ( (*((_BYTE *)a1 + 41) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0LL, a1, 288LL, 1LL);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1 + 41) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0LL, a1, 288LL, 1LL);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 248LL) )
    zzzInternalHideCaret();
  v4 = *((_BYTE *)a1 + 41) & 2;
  if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
  {
    SetOrClrWF(0LL, a1, 260LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  if ( *((_QWORD *)a1 + 20) || (*((_BYTE *)a1 + 41) & 0x10) != 0 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v5 + 520))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v5 + 400) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v5 + 400) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0LL, a1, 272LL, 1LL);
  v9 = *((_QWORD *)a1 + 20);
  *((_QWORD *)a1 + 20) = 0LL;
  if ( (*((_BYTE *)a1 + 44) & 2) != 0 )
  {
    if ( v9 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave || (EmptyRgnPublic = CreateEmptyRgnPublic(v8, v7), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v9 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v9, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v9, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v11 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v4 )
    xxxSendEraseBkgnd(a1, v11, v9);
  v13 = gptiCurrent;
  v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v18;
  v18[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
  {
    if ( !*(_QWORD *)(i + 160) && (*(_BYTE *)(i + 41) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v18);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(v13, v12);
  ClearHungFlag(a1);
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1 + 41) >> 2) & 1;
  return v11;
}
