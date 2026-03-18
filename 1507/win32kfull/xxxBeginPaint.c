/*
 * XREFs of xxxBeginPaint @ 0x1C0089C38
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00798F0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserBeginPaint @ 0x1C0089B10 (NtUserBeginPaint.c)
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C02159A0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 *     xxxSendEraseBkgnd @ 0x1C0088150 (xxxSendEraseBkgnd.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     UT_GetParentDCClipBox @ 0x1C0089F3C (UT_GetParentDCClipBox.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF9CC (ThreadLockExchangeAlways.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EB40C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00EC2A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

unsigned __int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 DCEx; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rbx
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1, a1, 0x404u, 1);
  SetOrClrWF(0, a1, 0x240u, 1);
  if ( (*((_BYTE *)a1 + 41) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1 + 41) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0, a1, 0x120u, 1);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 248LL) )
    zzzInternalHideCaret(gptiCurrent, v4);
  v5 = *((_BYTE *)a1 + 41) & 2;
  if ( (*((_BYTE *)a1 + 41) & 2) != 0 )
  {
    SetOrClrWF(0, a1, 0x104u, 1);
    SetOrClrWF(0, a1, 0x102u, 1);
  }
  if ( *((_QWORD *)a1 + 20) || (*((_BYTE *)a1 + 41) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v6 + 528))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v6 + 408) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v6 + 408) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0, a1, 0x110u, 1);
  v8 = *((_QWORD *)a1 + 20);
  *((_QWORD *)a1 + 20) = 0LL;
  if ( (*((_BYTE *)a1 + 44) & 2) != 0 )
  {
    EmptyRgnPublic = ghrgnUpdateSave;
    if ( ghrgnUpdateSave || (EmptyRgnPublic = CreateEmptyRgnPublic(), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
    {
      GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v8, 2LL);
      ++gnUpdateSave;
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v8, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v10 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v5 )
    xxxSendEraseBkgnd((__int64)a1, v10, v8);
  v12 = gptiCurrent;
  v17[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v17;
  v17[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
  {
    if ( !*(_QWORD *)(i + 160) && (*(_BYTE *)(i + 41) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v17);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(v12, v11);
  ClearHungFlag(a1);
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1 + 41) >> 2) & 1;
  return v10;
}
