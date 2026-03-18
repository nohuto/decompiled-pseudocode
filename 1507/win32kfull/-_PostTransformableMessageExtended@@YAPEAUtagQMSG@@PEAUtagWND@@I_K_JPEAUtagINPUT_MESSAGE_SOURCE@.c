/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 *     NtUserPostMessage @ 0x1C006FDF0 (NtUserPostMessage.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0085FE0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0070A00 (TransformMessageBetweenCoordinateSpaces.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     _PostThreadMessage @ 0x1C0090EB0 (_PostThreadMessage.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     ProcessSuspendedPostMessage @ 0x1C00E7740 (ProcessSuspendedPostMessage.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01EBDA4 (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
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
  int v14; // r12d
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rsi
  _DWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  struct _KEVENT *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v32[4]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v33; // [rsp+E8h] [rbp+5Fh] BYREF
  unsigned __int64 v34; // [rsp+F0h] [rbp+67h] BYREF
  struct _LARGE_STRING *v35; // [rsp+F8h] [rbp+6Fh] BYREF

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
  if ( a2 < 0x400 )
  {
    a1 = 512LL;
    if ( (MessageTable[a2] & 0x200) != 0 )
      goto LABEL_11;
    if ( a2 == 537 )
    {
      if ( (a3 & 0x8000) == 0 )
        goto LABEL_7;
LABEL_11:
      UserSetLastError(1159);
      return 0LL;
    }
  }
  if ( a2 == 536 && (a3 & 0x8000) != 0 )
    goto LABEL_11;
LABEL_7:
  if ( v8 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
  if ( !v8 )
  {
    LOBYTE(v6) = (unsigned int)PostThreadMessage(gptiCurrent) != 0;
    return v6;
  }
  v10 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v13 = v33;
  if ( v10 == CurrentProcessWin32Process )
    goto LABEL_31;
  if ( v33 > 0xD0 )
  {
    if ( v33 == 272 )
    {
LABEL_30:
      UserSetLastError(5);
      return 0LL;
    }
    if ( v33 != 353 && v33 != 424 && v33 != 563 && v33 != 648 )
    {
LABEL_31:
      v14 = 0;
      if ( v33 - 992 <= 8 )
      {
        v32[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v32;
        ++*((_DWORD *)v8 + 2);
        v32[1] = v8;
        v16 = xxxDDETrackPostHook(&v33, v8, 0);
        if ( v16 != 2 )
        {
          ThreadUnlock1(v15, v12);
          return v16;
        }
        v13 = v33;
        v14 = 1;
      }
      v17 = *((_QWORD *)v8 + 2);
      if ( (unsigned int)(v13 - 912) <= 0xF || (_DWORD)v13 == 30 )
      {
        v12 = *(_QWORD *)(v17 + 744);
        if ( v12 )
        {
          if ( *(_DWORD *)(v12 + 24) == (_DWORD)v13 && *(_QWORD *)(v12 + 16) == *(_QWORD *)v8 )
          {
            DelQEntry(v17 + 736, v12, 1LL);
            v13 = v33;
          }
        }
      }
      if ( (unsigned int)(v13 - 256) <= 9 )
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v17 + 392));
        goto LABEL_50;
      }
      if ( (_DWORD)v13 == 576 )
      {
        LOBYTE(v12) = 20;
        if ( HMValidateHandle(v35, v12) )
          goto LABEL_50;
      }
      else
      {
        if ( (_DWORD)v13 != 281 )
        {
LABEL_51:
          if ( (*(_DWORD *)(v17 + 1080) & 0x20) == 0
            || v17 == gptiCurrent
            || (unsigned int)ProcessSuspendedPostMessage(v17, v8, v13, a3, v35) )
          {
            v20 = 0;
            if ( *(_DWORD *)(v17 + 752) < gUserPostMessageLimit )
            {
              v24 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
              v23 = v24;
              if ( v24 )
              {
                memset(v24, 0, 0x90uLL);
                if ( *(_DWORD *)(v17 + 756) == 2 )
                  v23[23] |= 8u;
                else
                  v23[23] |= 4u;
                v25 = *(_QWORD **)(v17 + 744);
                if ( v25 )
                {
                  *v25 = v23;
                  *((_QWORD *)v23 + 1) = *(_QWORD *)(v17 + 744);
                }
                else
                {
                  *(_QWORD *)(v17 + 736) = v23;
                }
                ++*(_DWORD *)(v17 + 752);
                *(_QWORD *)(v17 + 744) = v23;
                if ( a6 && (unsigned int)IsWindowDesktopComposed(v8) )
                  TransformMessageBetweenCoordinateSpaces(
                    v33,
                    0,
                    (unsigned int)&v34,
                    (unsigned int)&v35,
                    (__int64)v8,
                    0LL);
                v26 = *(_QWORD *)(v17 + 416);
                v27 = *(_QWORD *)(gpsi + 3976LL);
                if ( v26 && (*(_DWORD *)(*(_QWORD *)(v26 + 8) + 260LL) & 1) != 0 )
                {
                  v28 = *(_DWORD *)(*(_QWORD *)(v17 + 384) + 776LL);
                  if ( (v28 & 0x2000) != 0 )
                  {
                    v27 = *(_QWORD *)(gpsi + 3960LL);
                  }
                  else if ( (v28 & 0x6000) == 0 )
                  {
                    v27 = *(_QWORD *)(gpsi + 3952LL);
                  }
                }
                StoreQMessage(
                  (_DWORD)v23,
                  (_DWORD)v8,
                  v33,
                  v34,
                  (__int64)v35,
                  0,
                  0,
                  0,
                  0LL,
                  0,
                  (__int64)a5,
                  v27,
                  0LL,
                  0LL);
                v22 = v33;
                if ( v33 == 576 || v33 == 281 )
                {
                  v21 = gSharedInfo[0];
                  v22 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v35 + gSharedInfo[1]);
                  if ( v22 )
                    HMChangeOwnerThread(v22, v17);
                }
                if ( (*(_DWORD *)(v17 + 448) & 1) == 0 )
                {
                  v21 = 264LL;
                  *(_WORD *)(*(_QWORD *)(v17 + 408) + 6LL) |= 0x108u;
                  *(_WORD *)(*(_QWORD *)(v17 + 408) + 4LL) |= 0x108u;
                  if ( (*(_WORD *)(*(_QWORD *)(v17 + 408) + 10LL) & 0x108) != 0 )
                    KeSetEvent(*(PRKEVENT *)(v17 + 656), 2, 0);
                }
                if ( v33 == 786 )
                {
                  if ( (*(_DWORD *)(v17 + 1080) & 0x40000) != 0 )
                  {
                    v29 = *(struct _KEVENT **)(v17 + 1224);
                    if ( v29 )
                      KeSetEvent(v29, 1, 0);
                  }
                  SetWakeBit(v17, 128LL);
                }
                v20 = 1;
              }
              else
              {
                UserSetLastError(8);
                v23 = 0LL;
              }
            }
            else
            {
              UserSetLastError(1816);
              v23 = 0LL;
            }
            v30 = *(_QWORD *)(v17 + 392);
            if ( v17 == *(_QWORD *)(v30 + 24) )
              *(_QWORD *)(v30 + 32) = v23;
            if ( v14 )
              ThreadUnlock1(v22, v21);
            if ( v20 )
              return (unsigned __int64)v23;
            return v6;
          }
          goto LABEL_45;
        }
        LOBYTE(v12) = 21;
        if ( HMValidateHandle(v35, v12) )
        {
LABEL_50:
          v13 = v33;
          goto LABEL_51;
        }
      }
LABEL_45:
      if ( v14 )
        ThreadUnlock1(v19, v18);
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
