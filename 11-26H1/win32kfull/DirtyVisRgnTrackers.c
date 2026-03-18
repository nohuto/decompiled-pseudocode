/*
 * XREFs of DirtyVisRgnTrackers @ 0x14004F51C
 * Callers:
 *     CreateVisRgnTracker @ 0x140018348 (CreateVisRgnTracker.c)
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     xxxSendEraseBkgnd @ 0x14012BCEC (xxxSendEraseBkgnd.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x1401FE798 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1400197C8 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14004EBCC (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1401D1884 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void __fastcall DirtyVisRgnTrackers(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  _QWORD *v6; // rdi
  _QWORD *i; // rcx
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  CVisRgnTrackerProp *v17; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
    v3 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    v4 = *(_QWORD *)(v3 + 488);
    if ( v4 )
    {
      v5 = 1;
      if ( (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) != 0 && (*((_DWORD *)v1 + 95) & 0x2000000) != 0 )
      {
        v6 = (_QWORD *)*((_QWORD *)v1 + 13);
        for ( i = v6; i; i = (_QWORD *)i[13] )
        {
          v8 = i[5];
          v9 = *(_BYTE *)(v8 + 31);
          if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && i != v6 )
            return;
          if ( (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x29D )
            break;
        }
        EtwTraceDwmVisRgnDirty(*(_QWORD *)v1, *v6);
        v10 = *((_QWORD *)v1 + 13);
        if ( !v10 )
          goto LABEL_18;
        v11 = *((_QWORD *)v1 + 3);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v13 )
            v12 = *(_QWORD *)(v13 + 24);
        }
        if ( v10 != v12 )
        {
LABEL_18:
          v14 = *((_QWORD *)v1 + 3);
          v5 = 0;
          if ( (!v14 || (v15 = *(_QWORD *)(v14 + 8)) == 0 || v1 != *(struct tagWND **)(v15 + 24))
            && (*(_BYTE *)(v6[5] + 31LL) & 2) != 0 )
          {
            v17 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)v6, (__int64 *)&v17) )
              CVisRgnTrackerProp::MarkDirty(v17);
          }
        }
        MarkDirtyWorker((struct tagWND **)v1, v10);
        if ( !v5 )
        {
          while ( 1 )
          {
            v1 = (struct tagWND *)*((_QWORD *)v1 + 11);
            if ( !v1 )
              break;
            if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker((struct tagWND **)v1, v16);
          }
        }
      }
    }
  }
}
