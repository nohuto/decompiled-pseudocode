/*
 * XREFs of ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34
 * Callers:
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01F1D50 (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3314 (xxxDoDeferredPointerActivate.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0127B40 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxSendPointerMessageWorker @ 0x1C01D8180 (xxxSendPointerMessageWorker.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01DC23C (PhysicalToLogicalInPlacePoint.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F2528 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0PEBUtagPOINTERINFONODE@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F3180 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C020F558 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivate(struct tagWND *a1, const struct tagPOINTERINFONODE *a2)
{
  __int64 MessageWindow; // rax
  __int64 v5; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *v7; // rax
  __int64 v8; // r15
  __int64 TopLevelWindow; // rax
  __int64 *v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 LegacyActivation; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+28h] BYREF

  if ( (*((_DWORD *)a2 + 1) & 0x80u) == 0 || (*((_BYTE *)a1 + 291) & 4) != 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) && (*((_BYTE *)a1 + 55) & 8) == 0 )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      v10 = (__int64 *)TopLevelWindow;
      if ( TopLevelWindow )
      {
        if ( (*(_BYTE *)(TopLevelWindow + 55) & 8) == 0 && a1 != *(struct tagWND **)(v8 + 88) )
        {
          v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v23;
          v23[1] = TopLevelWindow;
          ++*(_DWORD *)(TopLevelWindow + 8);
          v11 = *(_QWORD *)(v8 + 72);
          if ( v11 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v11 + 16)) )
          {
            v25 = *((_QWORD *)a2 + 11);
            v14 = *(_QWORD **)(v12 + 528);
            if ( v14 )
              v14 = (_QWORD *)*v14;
            if ( (*(_DWORD *)(v13 + 352) & 0xF) == 2 )
            {
              if ( v14 )
              {
                v15 = v14[2];
                if ( v15 )
                {
                  if ( (*(_DWORD *)(v15 + 352) & 0xF) != 2 && *(_QWORD *)(v15 + 272) )
                    PhysicalToLogicalInPlacePoint(v15, (int *)&v25, 0LL);
                }
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v25, &v25, 0LL, v13);
            }
            v16 = *(_QWORD *)(v8 + 72);
            v17 = (unsigned __int16)v25 | (WORD2(v25) << 16);
            v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v24;
            v24[1] = v16;
            ++*(_DWORD *)(v16 + 8);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v8 + 72), v17);
            ThreadUnlock1(v19, v18);
          }
          LegacyActivation = xxxSendPointerMessageWorker(a1, 587LL, *((_QWORD *)a2 + 2), *v10, 0LL, 177);
          if ( LegacyActivation == 1 )
            goto LABEL_27;
          if ( LegacyActivation != 3 )
            LegacyActivation = xxxQueryLegacyActivation(a1, (struct tagWND *)v10, a2);
          if ( LegacyActivation == 1 )
LABEL_27:
            xxxActivateWindow((struct tagWND *)v10, 2LL);
          ThreadUnlock1(v22, v21);
        }
      }
    }
  }
  else
  {
    MessageWindow = GetMessageWindow((__int64)a1);
    if ( *(_QWORD *)(v5 + 88) == MessageWindow )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v5);
      if ( CompositionInputWindowUIOwner )
      {
        v7 = (__int64 *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
        PostEventMessageEx(v7[2], *(_QWORD *)(v7[2] + 384), 6u, 0LL, 0, 0LL, *v7, 0LL);
      }
    }
  }
}
