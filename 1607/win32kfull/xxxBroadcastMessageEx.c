/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C00AA034
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0099664 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C010DBD0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxBroadcastMessage @ 0x1C0134374 (xxxBroadcastMessage.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0099664 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C009CD54 (_PostTransformableMessageIL.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C01292CC (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  int v12; // r12d
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagBWL *v16; // rbx
  unsigned __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _WORD *v29; // rcx
  unsigned __int16 v30; // ax
  int v31; // ebx
  unsigned __int16 SystemMetricsForWindow; // ax
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 CurrentProcessWin32Process; // [rsp+50h] [rbp-78h]
  struct tagBWL *v41; // [rsp+58h] [rbp-70h]
  _BYTE v42[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v43; // [rsp+68h] [rbp-60h]
  _QWORD v44[3]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v45[3]; // [rsp+88h] [rbp-40h] BYREF

  if ( a2 - 1024 <= 0xBBFF )
  {
    v12 = 1;
    UserSetLastError(87LL);
  }
  else
  {
    v12 = 0;
  }
  v13 = a7;
  if ( !a7 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794 || a2 > 0x323 && a2 <= 0x325) )
    v13 = 1;
  if ( !a1 )
  {
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( a4 )
        {
          if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v42, a4) )
            return 0LL;
          PushW32ThreadLock(v43, v45, (__int64)Win32FreePool, v35);
          a4 = (struct _LARGE_STRING *)v42;
        }
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v13, a8);
        if ( a4 )
          PopAndFreeAlwaysW32ThreadLock((__int64)v45, v36, v37, v38);
        return 1LL;
      }
      if ( a2 == 30 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 )
          return 0LL;
      }
      else
      {
        if ( a2 == 42 )
        {
          xxxSystemBroadcastMessage(0x2Au, a3, (__int64)a4, a5, a6, v13, a8);
          return 1LL;
        }
        if ( a2 - 712 <= 1 )
        {
          xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v13, a8);
          return 1LL;
        }
      }
    }
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
    if ( !a1 )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  v41 = BuildHwndList(*(_QWORD *)(a1 + 96), (struct tagWND *)2, 0LL);
  v16 = v41;
  if ( !v41 )
    return 0LL;
  v17 = (unsigned __int64 *)((char *)v41 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14);
  v21 = *((_QWORD *)v41 + 4);
  if ( v21 == 1 )
    goto LABEL_9;
  v23 = v12;
  do
  {
    LOBYTE(v18) = 1;
    v24 = HMValidateHandleNoSecure(v21, v18, v19, v20);
    v19 = 0LL;
    v25 = v24;
    if ( v24 )
    {
      if ( (*(_WORD *)(v24 + 66) & 0x3FFF) != 0x29C )
      {
        v26 = *(_WORD *)(*(_QWORD *)(v24 + 152) + 8LL);
        v18 = gpsi;
        if ( *(_WORD *)(gpsi + 892LL) != v26
          && gaOleMainThreadWndClass != v26
          && (!v23 || (*(_BYTE *)(v25 + 45) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v25 + 55) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 440LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v25 + 304) == 1)
          && (a8 != 2 || *(_DWORD *)(v25 + 304) != 1 || (*(_BYTE *)(v25 + 290) & 0x40) != 0) )
        {
          v27 = gptiCurrent;
          v44[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v44;
          v44[1] = v25;
          ++*(_DWORD *)(v25 + 8);
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout((struct tagWND *)v25, a2, a3, (__int64)a4, 0, 0, 0LL, v13, 1);
            goto LABEL_36;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v25 + 104) )
                PostTransformableMessageIL((struct tagWND *)v25, a2, a3, (unsigned __int64)a4, v13);
              goto LABEL_36;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v25,
                a2,
                *(_QWORD *)a6,
                *((_QWORD *)a6 + 1),
                *((_DWORD *)a6 + 4),
                v13,
                1);
              goto LABEL_36;
            }
            if ( a5 != 4 )
            {
              if ( a5 == 5 )
              {
                v39 = *(_QWORD *)(v25 + 16);
                if ( *(_QWORD *)(v39 + 376) != CurrentProcessWin32Process || (*(_DWORD *)(v39 + 440) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v25, a2, a3, a4, v13);
                }
                else
                {
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout((struct tagWND *)v25, a2, a3, (__int64)a4, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_36;
              }
              if ( a5 != 6 )
                goto LABEL_36;
            }
            if ( xxxSendTransformableMessageTimeout(
                   (struct tagWND *)v25,
                   a2,
                   a3,
                   (__int64)a4,
                   *(_DWORD *)a6,
                   *((_DWORD *)a6 + 1),
                   *((__int64 **)a6 + 1),
                   v13,
                   1)
              || a5 != 6 )
            {
LABEL_36:
              ThreadUnlock1(v27, v18);
              goto LABEL_37;
            }
          }
          v28 = 0LL;
          if ( a2 < 0x1A )
            goto LABEL_42;
          if ( a2 <= 0x1B )
          {
            if ( !a4 )
              goto LABEL_34;
            v29 = (_WORD *)*((_QWORD *)a4 + 1);
            if ( !*v29 )
            {
              v28 = -1LL;
LABEL_34:
              if ( !(unsigned int)PostEventMessageEx(
                                    *(_QWORD *)(v25 + 16),
                                    *(_QWORD *)(*(_QWORD *)(v25 + 16) + 384LL),
                                    9u,
                                    v25,
                                    a2,
                                    a3,
                                    v28,
                                    0LL)
                && (unsigned __int64)(v28 + 1) > 1 )
              {
                UserDeleteAtom((unsigned __int16)v28);
              }
              goto LABEL_35;
            }
            v30 = UserAddAtomEx(v29, 0LL, 2LL);
            v28 = v30;
            if ( v30 )
              goto LABEL_34;
LABEL_35:
            v23 = v12;
            goto LABEL_36;
          }
          if ( a2 == 126 )
          {
            v31 = (unsigned __int16)GetSystemMetricsForWindow(v25, 1u) << 16;
            SystemMetricsForWindow = GetSystemMetricsForWindow(v25, 0);
            v33 = 126LL;
            v34 = v31 | (unsigned __int64)SystemMetricsForWindow;
          }
          else
          {
LABEL_42:
            v34 = (unsigned __int64)a4;
            v33 = a2;
          }
          xxxSendNotifyMessage(v25, v33, a3, v34, v13);
          goto LABEL_35;
        }
      }
    }
LABEL_37:
    v21 = *++v17;
  }
  while ( *v17 != 1 );
  v16 = v41;
LABEL_9:
  FreeHwndList(v16);
  return 1LL;
}
