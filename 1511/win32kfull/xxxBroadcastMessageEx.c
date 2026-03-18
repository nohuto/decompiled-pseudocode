/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C0075B18
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C008D658 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00EF380 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxBroadcastMessage @ 0x1C0112B88 (xxxBroadcastMessage.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C008D658 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C009176C (_PostTransformableMessageIL.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C01077AC (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
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
  __int64 v14; // rcx
  struct tagBWL *v15; // rbx
  unsigned __int64 *v16; // r13
  unsigned __int64 v17; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int16 v22; // ax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _WORD *v26; // rcx
  unsigned __int16 v27; // ax
  int v28; // ebx
  unsigned __int16 SystemMetricsForWindow; // ax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rax
  __int64 CurrentProcessWin32Process; // [rsp+50h] [rbp-78h]
  struct tagBWL *v34; // [rsp+58h] [rbp-70h]
  _BYTE v35[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  _QWORD v37[3]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v38[3]; // [rsp+88h] [rbp-40h] BYREF

  if ( a2 - 1024 <= 0xBBFF )
  {
    v12 = 1;
    UserSetLastError(87);
  }
  else
  {
    v12 = 0;
  }
  v13 = a7;
  if ( !a7 && (a2 == 26 || a2 == 29 || a2 == 21 || a2 == 295 || a2 == 794 || a2 > 0x323 && a2 <= 0x325) )
    v13 = 1;
  if ( !a1 )
  {
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( a4 )
        {
          if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v35, a4) )
            return 0LL;
          PushW32ThreadLock(v36, v38, (__int64)Win32FreePool);
          a4 = (struct _LARGE_STRING *)v35;
        }
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v13, a8);
        if ( a4 )
          PopAndFreeAlwaysW32ThreadLock((__int64)v38);
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
      UserSetLastError(5);
      return 0LL;
    }
  }
  v34 = BuildHwndList(*(_QWORD *)(a1 + 96), 2, 0LL);
  v15 = v34;
  if ( !v34 )
    return 0LL;
  v16 = (unsigned __int64 *)((char *)v34 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v17 = *((_QWORD *)v34 + 4);
  if ( v17 == 1 )
    goto LABEL_9;
  v19 = v12;
  do
  {
    v20 = HMValidateHandleNoSecure(v17, 1);
    v21 = v20;
    if ( v20 )
    {
      if ( (*(_WORD *)(v20 + 66) & 0x3FFF) != 0x29C )
      {
        v22 = *(_WORD *)(*(_QWORD *)(v20 + 152) + 8LL);
        v23 = gpsi;
        if ( *(_WORD *)(gpsi + 892LL) != v22
          && gaOleMainThreadWndClass != v22
          && (!v19 || (*(_BYTE *)(v21 + 45) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v21 + 55) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v21 + 16) + 440LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v21 + 304) == 1)
          && (a8 != 2 || *(_DWORD *)(v21 + 304) != 1 || (*(_BYTE *)(v21 + 290) & 0x40) != 0) )
        {
          v24 = gptiCurrent;
          v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v37;
          v37[1] = v21;
          ++*(_DWORD *)(v21 + 8);
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout((struct tagWND *)v21, a2, a3, (__int64)a4, 0, 0, 0LL, v13, 1);
            goto LABEL_29;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v21 + 104) )
                PostTransformableMessageIL((struct tagWND *)v21, a2, a3, (__int64)a4, v13);
              goto LABEL_29;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v21,
                a2,
                a3,
                *(_QWORD *)a6,
                *((_QWORD *)a6 + 1),
                *((_DWORD *)a6 + 4),
                v13,
                1);
              goto LABEL_29;
            }
            if ( a5 != 4 )
            {
              if ( a5 == 5 )
              {
                v32 = *(_QWORD *)(v21 + 16);
                if ( *(_QWORD *)(v32 + 376) != CurrentProcessWin32Process || (*(_DWORD *)(v32 + 440) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v21, a2, a3, a4, v13);
                }
                else
                {
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout((struct tagWND *)v21, a2, a3, (__int64)a4, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_29;
              }
              if ( a5 != 6 )
                goto LABEL_29;
            }
            if ( xxxSendTransformableMessageTimeout(
                   (struct tagWND *)v21,
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
LABEL_29:
              ThreadUnlock1(v24, v23);
              goto LABEL_30;
            }
          }
          v25 = 0LL;
          if ( a2 < 0x1A )
            goto LABEL_35;
          if ( a2 <= 0x1B )
          {
            if ( !a4 )
              goto LABEL_27;
            v26 = (_WORD *)*((_QWORD *)a4 + 1);
            if ( !*v26 )
            {
              v25 = -1LL;
LABEL_27:
              if ( !(unsigned int)PostEventMessageEx(
                                    *(_QWORD *)(v21 + 16),
                                    *(_QWORD *)(*(_QWORD *)(v21 + 16) + 384LL),
                                    9u,
                                    v21,
                                    a2,
                                    a3,
                                    v25,
                                    0LL)
                && (unsigned __int64)(v25 + 1) > 1 )
              {
                UserDeleteAtom((unsigned __int16)v25);
              }
              goto LABEL_28;
            }
            v27 = UserAddAtomEx(v26, 0LL, 2LL);
            v25 = v27;
            if ( v27 )
              goto LABEL_27;
LABEL_28:
            v19 = v12;
            goto LABEL_29;
          }
          if ( a2 == 126 )
          {
            v28 = (unsigned __int16)GetSystemMetricsForWindow(v21, 1u) << 16;
            SystemMetricsForWindow = GetSystemMetricsForWindow(v21, 0);
            v30 = 126LL;
            v31 = v28 | (unsigned __int64)SystemMetricsForWindow;
          }
          else
          {
LABEL_35:
            v31 = (unsigned __int64)a4;
            v30 = a2;
          }
          xxxSendNotifyMessage(v21, v30, a3, v31, v13);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    v17 = *++v16;
  }
  while ( *v16 != 1 );
  v15 = v34;
LABEL_9:
  FreeHwndList(v15);
  return 1LL;
}
