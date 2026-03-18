/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0
 * Callers:
 *     NtUserPostMessage @ 0x1C0080290 (NtUserPostMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0099324 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C023E9CC (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00837D0 (TransformMessageBetweenCoordinateSpaces.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     ProcessSuspendedPostMessage @ 0x1C0120570 (ProcessSuspendedPostMessage.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01E2E50 (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  __int64 v6; // rbx
  struct tagWND *v8; // r15
  unsigned __int64 result; // rax
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  _DWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  struct _KEVENT *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v32[3]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v35; // [rsp+E8h] [rbp+6Fh] BYREF

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v6 = 0LL;
  v8 = (struct tagWND *)a1;
  if ( !a5 )
  {
    v31 = 0LL;
    a5 = (struct tagINPUT_MESSAGE_SOURCE *)&v31;
  }
  if ( (unsigned int)a2 < 0x400 )
  {
    a1 = 512LL;
    if ( (MessageTable[(unsigned int)a2] & 0x200) != 0 )
      goto LABEL_11;
    if ( (_DWORD)a2 == 537 )
    {
      if ( (a3 & 0x8000) == 0 )
        goto LABEL_7;
LABEL_11:
      UserSetLastError(1159LL);
      return 0LL;
    }
  }
  if ( (_DWORD)a2 == 536 && (a3 & 0x8000) != 0 )
    goto LABEL_11;
LABEL_7:
  if ( v8 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, a3, a4, 2, 0LL, 0, 0);
    return 1LL;
  }
  if ( !v8 )
  {
    LOBYTE(v6) = (unsigned int)PostThreadMessage(gptiCurrent) != 0;
    return v6;
  }
  v10 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 376LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v13 = v33;
  v14 = CurrentProcessWin32Process;
  if ( v10 == CurrentProcessWin32Process )
    goto LABEL_31;
  if ( v33 > 0xD0 )
  {
    if ( v33 == 272 )
    {
LABEL_30:
      UserSetLastError(5LL);
      return 0LL;
    }
    if ( v33 != 353 && v33 != 424 && v33 != 563 && v33 != 648 )
    {
LABEL_31:
      v15 = 0;
      if ( v33 - 992 <= 8 )
      {
        v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v32;
        ++*((_DWORD *)v8 + 2);
        v32[1] = v8;
        v17 = xxxDDETrackPostHook(&v33, v8, 0);
        if ( v17 != 2 )
        {
          ThreadUnlock1(v16, v12);
          return v17;
        }
        v13 = v33;
        v15 = 1;
      }
      v18 = *((_QWORD *)v8 + 2);
      if ( (unsigned int)(v13 - 912) <= 0xF || (_DWORD)v13 == 30 )
      {
        v12 = *(_QWORD *)(v18 + 736);
        if ( v12 )
        {
          if ( *(_DWORD *)(v12 + 24) == (_DWORD)v13 && *(_QWORD *)(v12 + 16) == *(_QWORD *)v8 )
          {
            DelQEntry((_QWORD *)(v18 + 728), v12);
            v13 = v33;
          }
        }
      }
      if ( (unsigned int)(v13 - 256) <= 9 )
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v18 + 384));
        goto LABEL_50;
      }
      if ( (_DWORD)v13 == 576 )
      {
        LOBYTE(v12) = 20;
        if ( HMValidateHandle(v35, v12, v13, v14) )
          goto LABEL_50;
      }
      else
      {
        if ( (_DWORD)v13 != 281 )
        {
LABEL_51:
          if ( (*(_DWORD *)(v18 + 1096) & 0x20) == 0
            || v18 == gptiCurrent
            || (unsigned int)ProcessSuspendedPostMessage(v18, v8, v13, a3, v35) )
          {
            v21 = 0;
            if ( *(_DWORD *)(v18 + 744) < gUserPostMessageLimit )
            {
              v25 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
              v24 = v25;
              if ( v25 )
              {
                memset(v25, 0, 0x98uLL);
                if ( *(_DWORD *)(v18 + 748) == 2 )
                  v24[25] |= 8u;
                else
                  v24[25] |= 4u;
                v26 = *(_QWORD **)(v18 + 736);
                if ( v26 )
                {
                  *v26 = v24;
                  *((_QWORD *)v24 + 1) = *(_QWORD *)(v18 + 736);
                }
                else
                {
                  *(_QWORD *)(v18 + 728) = v24;
                }
                ++*(_DWORD *)(v18 + 744);
                *(_QWORD *)(v18 + 736) = v24;
                if ( a6 && (unsigned int)IsWindowDesktopComposed(v8) )
                  TransformMessageBetweenCoordinateSpaces(
                    v33,
                    0,
                    (unsigned int)&v34,
                    (unsigned int)&v35,
                    (__int64)v8,
                    0LL);
                if ( (*((_DWORD *)v8 + 88) & 0xF) != 0 )
                {
                  if ( (*((_DWORD *)v8 + 88) & 0xF) == 1 )
                    v27 = *(_QWORD *)(gpsi + 5352LL);
                  else
                    v27 = *(_QWORD *)(gpsi + 5368LL);
                }
                else
                {
                  v27 = *(_QWORD *)(gpsi + 5344LL);
                }
                StoreQMessage(v24, v8, v33, v34, v35, 0, 0LL, 0, 0LL, 0, a5, v27, 0LL, 0LL);
                v23 = v33;
                if ( v33 == 576 || v33 == 281 )
                {
                  v22 = gSharedInfo;
                  v23 = *(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v35
                                  + *((_QWORD *)&gSharedInfo + 1));
                  if ( v23 )
                    HMChangeOwnerThread(v23, v18);
                }
                if ( (*(_DWORD *)(v18 + 440) & 1) == 0 )
                {
                  v22 = 264LL;
                  *(_WORD *)(*(_QWORD *)(v18 + 400) + 6LL) |= 0x108u;
                  *(_WORD *)(*(_QWORD *)(v18 + 400) + 4LL) |= 0x108u;
                  if ( (*(_WORD *)(*(_QWORD *)(v18 + 400) + 10LL) & 0x108) != 0 )
                    KeSetEvent(*(PRKEVENT *)(v18 + 648), 2, 0);
                }
                if ( v33 == 786 )
                {
                  if ( (*(_DWORD *)(v18 + 1096) & 0x40000) != 0 )
                  {
                    v29 = *(struct _KEVENT **)(v18 + 1240);
                    if ( v29 )
                      KeSetEvent(v29, 1, 0);
                  }
                  SetWakeBit(v18, 128LL, v28);
                }
                v21 = 1;
              }
              else
              {
                UserSetLastError(8LL);
                v24 = 0LL;
              }
            }
            else
            {
              UserSetLastError(1816LL);
              v24 = 0LL;
            }
            v30 = *(_QWORD *)(v18 + 384);
            if ( v18 == *(_QWORD *)(v30 + 32) )
              *(_QWORD *)(v30 + 40) = v24;
            if ( v15 )
              ThreadUnlock1(v23, v22);
            if ( v21 )
              return (unsigned __int64)v24;
            return v6;
          }
          goto LABEL_45;
        }
        LOBYTE(v12) = 21;
        if ( HMValidateHandle(v35, v12, v13, v14) )
        {
LABEL_50:
          v13 = v33;
          goto LABEL_51;
        }
      }
LABEL_45:
      if ( v15 )
        ThreadUnlock1(v20, v19);
      return 0LL;
    }
LABEL_26:
    if ( !gbEnforceUIPI || (v12 = gpepCSRSS, *(_QWORD *)v10 == gpepCSRSS) )
    {
      if ( *(_DWORD *)(v10 + 732) != *(_DWORD *)(CurrentProcessWin32Process + 732)
        || *(_DWORD *)(v10 + 736) != *(_DWORD *)(CurrentProcessWin32Process + 736) )
      {
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
  if ( v33 == 208 )
    goto LABEL_26;
  switch ( v33 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_26;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      v12 = *((_QWORD *)v8 + 19);
      if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(v12 + 10) || (*((_BYTE *)v8 + 52) & 0x20) == 0 )
        goto LABEL_31;
      UserSetLastError(5LL);
      UserSetLastError(5LL);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_30;
    default:
      goto LABEL_31;
  }
  return result;
}
