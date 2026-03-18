/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0
 * Callers:
 *     NtUserPostMessage @ 0x1C005F7D0 (NtUserPostMessage.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0081C70 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 *     xxxTranslateMessage @ 0x1C0099414 (xxxTranslateMessage.c)
 * Callees:
 *     ProcessSuspendedPostMessage @ 0x1C0001650 (ProcessSuspendedPostMessage.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00603C0 (TransformMessageBetweenCoordinateSpaces.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01EC2C4 (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  __int64 v6; // rdi
  struct tagWND *v8; // r15
  unsigned __int64 result; // rax
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rsi
  _DWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  struct _KEVENT *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v33[4]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+5Fh] BYREF
  unsigned __int64 v35; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+6Fh] BYREF

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v6 = 0LL;
  v8 = (struct tagWND *)a1;
  if ( !a5 )
  {
    v32 = 0LL;
    a5 = (struct tagINPUT_MESSAGE_SOURCE *)&v32;
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
      UserSetLastError(1159);
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
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v13 = v34;
  v14 = CurrentProcessWin32Process;
  if ( v10 == CurrentProcessWin32Process )
    goto LABEL_31;
  if ( v34 > 0xD0 )
  {
    if ( v34 == 272 )
    {
LABEL_30:
      UserSetLastError(5);
      return 0LL;
    }
    if ( v34 != 353 && v34 != 424 && v34 != 563 && v34 != 648 )
    {
LABEL_31:
      v15 = 0;
      if ( v34 - 992 <= 8 )
      {
        v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v33;
        ++*((_DWORD *)v8 + 2);
        v33[1] = v8;
        v17 = xxxDDETrackPostHook(&v34, v8, 0);
        if ( v17 != 2 )
        {
          ThreadUnlock1(v16, v12);
          return v17;
        }
        v13 = v34;
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
            DelQEntry(v18 + 728, v12, 1LL);
            v13 = v34;
          }
        }
      }
      if ( (unsigned int)(v13 - 256) <= 9 )
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v18 + 384), v12, v13, v14);
        goto LABEL_50;
      }
      if ( (_DWORD)v13 == 576 )
      {
        if ( HMValidateHandle(v36, 20) )
          goto LABEL_50;
      }
      else
      {
        if ( (_DWORD)v13 != 281 )
        {
LABEL_51:
          if ( (*(_DWORD *)(v18 + 1072) & 0x20) == 0
            || v18 == gptiCurrent
            || (unsigned int)ProcessSuspendedPostMessage(v18, (HWND *)v8, v13, a3, v36) )
          {
            v21 = 0;
            if ( *(_DWORD *)(v18 + 744) < gUserPostMessageLimit )
            {
              v25 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
              v24 = v25;
              if ( v25 )
              {
                memset(v25, 0, 0x90uLL);
                if ( *(_DWORD *)(v18 + 748) == 2 )
                  v24[23] |= 8u;
                else
                  v24[23] |= 4u;
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
                    v34,
                    0,
                    (unsigned int)&v35,
                    (unsigned int)&v36,
                    (__int64)v8,
                    0LL);
                v27 = *(_QWORD *)(v18 + 408);
                v28 = *(_QWORD *)(gpsi + 3976LL);
                if ( v27 && (*(_DWORD *)(*(_QWORD *)(v27 + 8) + 244LL) & 1) != 0 )
                {
                  v29 = *(_DWORD *)(*(_QWORD *)(v18 + 376) + 776LL);
                  if ( (v29 & 0x2000) != 0 )
                  {
                    v28 = *(_QWORD *)(gpsi + 3960LL);
                  }
                  else if ( (v29 & 0x6000) == 0 )
                  {
                    v28 = *(_QWORD *)(gpsi + 3952LL);
                  }
                }
                StoreQMessage(v24, v8, v34, v35, v36, 0, 0LL, 0, 0LL, 0, a5, v28, 0LL, 0LL);
                v23 = v34;
                if ( v34 == 576 || v34 == 281 )
                {
                  v22 = gSharedInfo;
                  v23 = *(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v36
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
                if ( v34 == 786 )
                {
                  if ( (*(_DWORD *)(v18 + 1072) & 0x40000) != 0 )
                  {
                    v30 = *(struct _KEVENT **)(v18 + 1216);
                    if ( v30 )
                      KeSetEvent(v30, 1, 0);
                  }
                  SetWakeBit(v18, 0x80u);
                }
                v21 = 1;
              }
              else
              {
                UserSetLastError(8);
                v24 = 0LL;
              }
            }
            else
            {
              UserSetLastError(1816);
              v24 = 0LL;
            }
            v31 = *(_QWORD *)(v18 + 384);
            if ( v18 == *(_QWORD *)(v31 + 24) )
              *(_QWORD *)(v31 + 32) = v24;
            if ( v15 )
              ThreadUnlock1(v23, v22);
            if ( v21 )
              return (unsigned __int64)v24;
            return v6;
          }
          goto LABEL_45;
        }
        if ( HMValidateHandle(v36, 21) )
        {
LABEL_50:
          LODWORD(v13) = v34;
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
      if ( *(_DWORD *)(v10 + 740) != *(_DWORD *)(CurrentProcessWin32Process + 740)
        || *(_DWORD *)(v10 + 744) != *(_DWORD *)(CurrentProcessWin32Process + 744) )
      {
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
  if ( v34 == 208 )
    goto LABEL_26;
  switch ( v34 )
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
      UserSetLastError(5);
      UserSetLastError(5);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_30;
    default:
      goto LABEL_31;
  }
  return result;
}
