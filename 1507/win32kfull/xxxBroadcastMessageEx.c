/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C004D864
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0039450 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C004E0FC (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxBroadcastMessage @ 0x1C0100D88 (xxxBroadcastMessage.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C004DF0C (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C004E0FC (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C004E7D4 (_PostTransformableMessageIL.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C00FBC68 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
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
  __int64 v15; // rbx
  _QWORD *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int16 v23; // ax
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
  __int64 v34; // [rsp+58h] [rbp-70h]
  _BYTE v35[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  _QWORD v37[3]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v38[24]; // [rsp+88h] [rbp-40h] BYREF

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
          PushW32ThreadLock(v36, v38, Win32FreePool);
          a4 = (struct _LARGE_STRING *)v35;
        }
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v13, a8);
        if ( a4 )
          PopAndFreeAlwaysW32ThreadLock(v38);
        return 1LL;
      }
      if ( a2 == 30 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 448LL) & 4) == 0 )
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
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL);
    if ( !a1 )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  v34 = BuildHwndList(*(_QWORD *)(a1 + 96), 2LL, 0LL);
  v15 = v34;
  if ( !v34 )
    return 0LL;
  v16 = (_QWORD *)(v34 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v18 = *(_QWORD *)(v34 + 32);
  if ( v18 == 1 )
    goto LABEL_9;
  v20 = v12;
  do
  {
    LOBYTE(v17) = 1;
    v21 = HMValidateHandleNoSecure(v18, v17);
    v22 = v21;
    if ( v21 )
    {
      if ( (*(_WORD *)(v21 + 66) & 0x3FFF) != 0x29C )
      {
        v23 = *(_WORD *)(*(_QWORD *)(v21 + 152) + 8LL);
        v17 = gpsi;
        if ( *(_WORD *)(gpsi + 892LL) != v23
          && gaOleMainThreadWndClass != v23
          && (!v20 || (*(_BYTE *)(v22 + 45) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v22 + 55) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v22 + 16) + 448LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v22 + 304) == 1)
          && (a8 != 2 || *(_DWORD *)(v22 + 304) != 1 || (*(_BYTE *)(v22 + 290) & 0x40) != 0) )
        {
          v24 = gptiCurrent;
          v37[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v37;
          v37[1] = v22;
          ++*(_DWORD *)(v22 + 8);
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout((struct tagWND *)v22, a2, a3, (__int64)a4, 0, 0, 0LL, v13, 1);
            goto LABEL_29;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v22 + 104) )
                PostTransformableMessageIL((struct tagWND *)v22, a2, a3, (__int64)a4, v13);
              goto LABEL_29;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v22,
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
                v32 = *(_QWORD *)(v22 + 16);
                if ( *(_QWORD *)(v32 + 384) != CurrentProcessWin32Process || (*(_DWORD *)(v32 + 448) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v22, a2, a3, a4, v13);
                }
                else
                {
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout((struct tagWND *)v22, a2, a3, (__int64)a4, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_29;
              }
              if ( a5 != 6 )
                goto LABEL_29;
            }
            if ( xxxSendTransformableMessageTimeout(
                   (struct tagWND *)v22,
                   a2,
                   a3,
                   (__int64)a4,
                   *(_DWORD *)a6,
                   *((_DWORD *)a6 + 1),
                   *((_QWORD *)a6 + 1),
                   v13,
                   1)
              || a5 != 6 )
            {
LABEL_29:
              ThreadUnlock1(v24, v17);
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
                                    *(_QWORD *)(v22 + 16),
                                    *(_QWORD *)(*(_QWORD *)(v22 + 16) + 392LL),
                                    9,
                                    v22,
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
            v20 = v12;
            goto LABEL_29;
          }
          if ( a2 == 126 )
          {
            v28 = (unsigned __int16)GetSystemMetricsForWindow(v22, 1LL) << 16;
            SystemMetricsForWindow = GetSystemMetricsForWindow(v22, 0LL);
            v30 = 126LL;
            v31 = v28 | (unsigned __int64)SystemMetricsForWindow;
          }
          else
          {
LABEL_35:
            v31 = (unsigned __int64)a4;
            v30 = a2;
          }
          xxxSendNotifyMessage(v22, v30, a3, v31, v13);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    v18 = *++v16;
  }
  while ( *v16 != 1LL );
  v15 = v34;
LABEL_9:
  FreeHwndList(v15);
  return 1LL;
}
