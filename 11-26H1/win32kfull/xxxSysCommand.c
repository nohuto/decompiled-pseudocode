/*
 * XREFs of xxxSysCommand @ 0x1402D135C
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1401366C0 (-HasPendingPromotion@@YAHXZ.c)
 *     xxxIsDragging @ 0x14014A320 (xxxIsDragging.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1401633F0 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F08 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x140178FF8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14019B2E4 (-StartScreenSaver@@YAXH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x14023EF80 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402D0DB8 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 *     xxxClientTrackInit @ 0x1402D859C (xxxClientTrackInit.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  char *v3; // r13
  int v4; // edi
  unsigned int v5; // r12d
  unsigned int v6; // esi
  __int64 v7; // r15
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const struct tagWND *v12; // rdx
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // esi
  __int64 v21; // rdx
  Scrollbar::NonClient *v22; // rcx
  unsigned __int16 KeyState; // ax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int MessagePos; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // cl
  int v32; // r12d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int v35; // edx
  __int64 v36; // rcx
  struct tagTHREADINFO **v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rcx
  _QWORD *v44; // rcx
  int v45; // ebx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO **v54; // rax
  _DWORD *v55; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-28h] BYREF
  __int64 v57; // [rsp+58h] [rbp-20h]
  __int64 v58; // [rsp+60h] [rbp-18h]
  __int64 v59; // [rsp+68h] [rbp-10h]
  int v60; // [rsp+C0h] [rbp+48h] BYREF
  int v61; // [rsp+C8h] [rbp+50h]
  __int64 v62; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v63; // [rsp+D8h] [rbp+60h]

  v3 = (char *)a1 + 40;
  v4 = 0;
  v63 = *((_QWORD *)a1 + 2);
  v60 = 0;
  v5 = a2 & 0xF;
  v6 = a2 - v5;
  v7 = 0LL;
  if ( a3 != 0x10000 )
    v7 = a3;
  if ( !*(_QWORD *)(*(_QWORD *)(v63 + 464) + 112LL) && (*(_BYTE *)(*(_QWORD *)v3 + 31LL) & 8) == 0
    || v6 == 61760
    || v6 == 61808
    || v6 == 61744 )
  {
    v9 = *((_DWORD *)PtiCurrent((__int64)a1) + 178);
    v11 = *((_QWORD *)PtiCurrent(v10) + 62);
    if ( ((*(_BYTE *)(*(_QWORD *)v11 + 16LL) | (unsigned __int8)v9) & 0x40) == 0
      || !(unsigned int)xxxCallHook(8LL, v6, (unsigned int)v7, 5) )
    {
      v12 = *(const struct tagWND **)v3;
      if ( *(char *)(*(_QWORD *)v3 + 19LL) >= 0 )
      {
        if ( v6 <= 0xF090 )
        {
          if ( v6 != 61584 )
          {
            v13 = v6 - 61440;
            if ( v13 )
            {
              v14 = v13 - 16;
              if ( v14 )
              {
                v15 = v14 - 16;
                if ( v15 )
                {
                  v16 = v15 - 16;
                  if ( v16 )
                  {
                    v17 = v16 - 16;
                    if ( v17 && (v18 = v17 - 16) != 0 )
                    {
                      v19 = v18 - 16;
                      if ( v19 )
                      {
                        v20 = v19 - 16;
                        if ( !v20 || v20 == 16 )
                        {
                          if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
                            && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v22, v21) )
                          {
                            KeyState = _GetKeyState(16LL);
                            xxxClientTrackInit(*(_QWORD *)a1, v7, v5, KeyState >> 15);
                          }
                          else
                          {
                            _GetKeyState(16LL);
                            xxxSBTrackInit(a1);
                          }
                        }
                      }
                      else
                      {
                        xxxSendMessage(a1, 0x10u);
                      }
                    }
                    else
                    {
                      v61 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 638);
                    }
                    return;
                  }
                  v24 = 3;
                  if ( (*((_BYTE *)v12 + 31) & 1) != 0 )
                    return;
                  v25 = 12LL;
                }
                else
                {
                  v24 = 6;
                  if ( (*((_BYTE *)v12 + 31) & 0x20) != 0 )
                    return;
                  v25 = 11LL;
                }
LABEL_85:
                xxxPlayEventSound(v25);
                UserSessionState = W32GetUserSessionState(v52, v51);
                xxxShowWindowEx(a1, v24, v24 & 0x10000 | *(_DWORD *)(UserSessionState + 66792) & 0x10000);
                return;
              }
              MessagePos = GetMessagePos(v11);
              LODWORD(v62) = (__int16)MessagePos;
              HIDWORD(v62) = SHIWORD(MessagePos);
              if ( v5 )
              {
                if ( !HasPendingPromotion((unsigned int)SHIWORD(MessagePos), v26)
                  || (v30 = W32GetUserSessionState(v29, v28), *(_QWORD *)(v30 + 16640) != v63) )
                {
                  if ( !(unsigned int)xxxIsDragging(a1, v62) )
                  {
                    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
                    v31 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
                    if ( (v31 & 0x20) != 0 )
                      xxxSendTransformableMessageTimeout(
                        (struct tagTHREADINFO **)a1,
                        274LL,
                        0xF100uLL,
                        (v31 & 0x40) != 0 ? 45LL : 32LL,
                        0,
                        0,
                        0LL,
                        1u,
                        0);
                    goto LABEL_47;
                  }
                }
              }
              v32 = -v5;
              if ( DelegateMoveSizeToShell(a1, 10 - (unsigned int)(v32 != 0))
                || (v33 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v33 + 30) & 4) != 0)
                && (*(_BYTE *)(v33 + 31) & 1) != 0
                && !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v12) )
              {
LABEL_47:
                xxxDeliverRestoreFocusMessage(a1, (__int64)v12);
                return;
              }
              v34 = MessagePos;
              v35 = 10 - (v32 != 0);
            }
            else
            {
              if ( v5 > 0xA || DelegateMoveSizeToShell(a1, v5) )
                goto LABEL_47;
              v34 = GetMessagePos(v36);
              v35 = v5;
            }
            xxxMoveSize(a1, v35, v34);
            goto LABEL_47;
          }
          goto LABEL_64;
        }
        switch ( v6 )
        {
          case 0xF100u:
            v54 = (struct tagTHREADINFO **)xxxMNStartMenuState(a1, 0xF100u, v7);
            v38 = (__int64)v54;
            if ( !v54 )
              return;
            MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v62, v54);
            **(_DWORD **)v38 |= 0x80000000;
            v55 = *(_DWORD **)v38;
            *(_DWORD *)(v38 + 8) |= 0x20u;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, (__int64)v55);
            xxxMNKeyFilter(&BugCheckParameter3, v38, (unsigned int)v7);
LABEL_88:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&BugCheckParameter3);
            if ( (*(_DWORD *)(v38 + 8) & 0x100) == 0 )
              xxxMNEndMenuState((_QWORD *)v38);
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v62);
            return;
          case 0xF120u:
            v25 = 9LL;
            v24 = 9;
            if ( (*((_BYTE *)v12 + 31) & 0x21) == 1 )
            {
              if ( WindowArrangement::MoveWithArrangementAllowed(a1, v12) )
                IsArranged(a1);
              v25 = 10LL;
            }
            goto LABEL_85;
          case 0xF130u:
            v41 = *(_QWORD *)(W32GetUserSessionState(v11, v12) + 19904);
            if ( (*(_DWORD *)(v41 + 2120) & 8) != 0 )
            {
              v42 = *((_DWORD *)PtiCurrent(v41) + 178);
              v44 = (_QWORD *)*((_QWORD *)PtiCurrent(v43) + 62);
              if ( ((*(_DWORD *)(*v44 + 16LL) | v42) & 0x800) != 0
                || (v44 = *(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL), v44[23]) )
              {
                v45 = *((_DWORD *)PtiCurrent((__int64)v44) + 178);
                if ( ((*(_DWORD *)(**((_QWORD **)PtiCurrent(v46) + 62) + 16LL) | v45) & 0x800) != 0 )
                  xxxCallHook(7LL, *(_QWORD *)a1, 0LL, 10);
                v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
                if ( v47 )
                {
                  LastWokenThread::Set(*(_QWORD *)(v47 + 16), 1LL, 0LL);
                  v50 = W32GetUserSessionState(v49, v48);
                  PostMessage(v47, *(_DWORD *)(*(_QWORD *)(v50 + 19904) + 928LL), 7, 0);
                }
              }
            }
            break;
          case 0xF140u:
            StartScreenSaver(0LL, (__int64)v12);
            return;
          case 0xF150u:
            v39 = ValidateHwnd(v7);
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 200);
              if ( !v40 )
                v40 = v39;
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&BugCheckParameter3, v40);
              xxxSetForegroundWindowWithOptions(v40, 2LL, 0, 0);
              if ( (*(_BYTE *)(*(_QWORD *)(v40 + 40) + 31LL) & 0x20) != 0 )
                PostMessage(v40, 274, 61728, 0);
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
            }
            break;
          case 0xF160u:
LABEL_64:
            if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *(_QWORD *)(W32GetUserSessionState(v11, v12) + 18928) )
              return;
            v37 = (struct tagTHREADINFO **)xxxMNStartMenuState(a1, v6, v7);
            v38 = (__int64)v37;
            if ( !v37 )
              return;
            MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v62, v37);
            **(_DWORD **)v38 |= 0x80000000;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, *(_QWORD *)v38);
            LOBYTE(v4) = v6 == 61792;
            xxxMNLoop((struct tagWND ****)&BugCheckParameter3, v38, v7, v4);
            goto LABEL_88;
          case 0xF170u:
            if ( v7 == -1 )
            {
              BugCheckParameter3 = 0LL;
              v59 = 3LL;
              v57 = 0LL;
              v58 = 4LL;
            }
            else
            {
              if ( v7 != 2 )
                return;
              BugCheckParameter3 = 0LL;
              v57 = 0LL;
              v58 = 5LL;
              if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v60) )
                v59 = v60;
              else
                v59 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
            }
            QueuePowerRequest(&BugCheckParameter3, 0LL);
            break;
          case 0xF180u:
            xxxHelpLoop(a1);
            break;
        }
      }
    }
  }
}
