/*
 * XREFs of xxxBeginPaint @ 0x1C00552FC
 * Callers:
 *     NtUserBeginPaint @ 0x1C0054280 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C0100A90 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C020E6B8 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C0055550 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     UT_GetParentDCClipBox @ 0x1C00555D8 (UT_GetParentDCClipBox.c)
 *     CalcWindowRgn @ 0x1C0056EE4 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzInternalHideCaret @ 0x1C00ABB10 (zzzInternalHideCaret.c)
 *     xxxSendEraseBkgnd @ 0x1C010BBF0 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0112454 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 DCEx; // rax
  __int64 v9; // rbp
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax

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
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 256LL) )
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
  v7 = *((_QWORD *)a1 + 20);
  *((_QWORD *)a1 + 20) = 0LL;
  if ( (*((_BYTE *)a1 + 44) & 2) != 0 )
  {
    if ( v7 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave || (EmptyRgnPublic = CreateEmptyRgnPublic(), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v7 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v7, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v7, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v9 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v4 )
    xxxSendEraseBkgnd(a1, v9, v7);
  xxxSendChildNCPaint(a1);
  ClearHungFlag(a1);
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1 + 41) >> 2) & 1;
  return v9;
}
