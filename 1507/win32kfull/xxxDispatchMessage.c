/*
 * XREFs of xxxDispatchMessage @ 0x1C007C9DC
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C007C660 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDispatchMessage @ 0x1C007C900 (NtUserDispatchMessage.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02321DC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C006D4F0 (SfnDWORD.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C007CDF8 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     xxxSimpleDoSyncPaint @ 0x1C007CE24 (xxxSimpleDoSyncPaint.c)
 *     ValidateTimerCallback @ 0x1C007CF04 (ValidateTimerCallback.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C011F0F4 (RtlWCSMessageWParamCharToMB.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D9C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall xxxDispatchMessage(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 i; // rcx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // r8
  __int64 (__fastcall *v13)(__int64 *, unsigned int, __int64, __int64, __int64, unsigned __int64); // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // r14
  unsigned int v17; // r10d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  _QWORD v22[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v23 = *((_DWORD *)a1 + 2);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  LOBYTE(v5) = *(_BYTE *)(v3 + 1092);
  EtwTraceBeginDispatchMessage(v5, v23);
  v6 = 0LL;
  if ( !*a1 || (v6 = ValidateHwnd(*a1)) != 0 )
  {
    v7 = *((unsigned int *)a1 + 2);
    if ( (unsigned int)v7 < 0x400 && ((MessageTable[v7] & 0x200) != 0 || (_DWORD)v7 == 537 && (a1[2] & 0x8000LL) != 0)
      || (_DWORD)v7 == 536 && (a1[2] & 0x8000LL) != 0 )
    {
      UserSetLastError(1159);
      goto LABEL_61;
    }
    i = gptiCurrent;
    v22[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v22;
    v22[1] = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v9 = *((_DWORD *)a1 + 2);
    if ( v9 == 275 || v9 == 280 )
    {
      v7 = a1[3];
      if ( v7 )
      {
        if ( v9 == 280 )
        {
          v10 = 0LL;
          for ( i = gtmrListHead[0]; i != gtmrListHead[0]; i = *(_QWORD *)i )
          {
            v7 = i - 72;
            if ( (*(_DWORD *)(i - 72 + 48) & 2) != 0 && a1[2] == *(_QWORD *)(v7 + 96) && v6 == *(_QWORD *)(v7 + 88) )
              goto LABEL_25;
          }
          v7 = 0LL;
LABEL_25:
          if ( v7 && *(_QWORD *)(v7 + 32) )
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v7 + 32))(
              v6,
              280LL,
              *((unsigned int *)a1 + 4),
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          goto LABEL_60;
        }
        i = gptiCurrent;
        if ( (*(_DWORD *)(gptiCurrent + 448LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
        {
          v11 = SfnDWORD(
                  (__int64 *)v6,
                  0x113u,
                  a1[2],
                  (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
                  a1[3],
                  *(_QWORD *)(gpsi + 744LL));
LABEL_32:
          v10 = v11;
          goto LABEL_60;
        }
        goto LABEL_29;
      }
    }
    if ( !v6 )
      goto LABEL_29;
    if ( v9 == 15 )
      SetOrClrWF(1, (_DWORD *)v6, 0x240u, 1);
    v12 = *(_BYTE *)(v6 + 42);
    if ( (v12 & 4) != 0 )
    {
      i = *((unsigned int *)a1 + 2);
      if ( (unsigned int)i < 0x400 )
        v13 = (__int64 (__fastcall *)(__int64 *, unsigned int, __int64, __int64, __int64, unsigned __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[i]];
      else
        v13 = SfnDWORD;
      v7 = (unsigned __int64)SfnINWPARAMCHAR;
      if ( (char *)v13 == (char *)SfnINWPARAMCHAR && (v12 & 8) != 0 )
        RtlMBMessageWParamCharToWCS(i, a1 + 2);
      v14 = *(_QWORD *)(v6 + 144);
      if ( v14 < 7 )
      {
        v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v14))(
                v6,
                *((unsigned int *)a1 + 2),
                a1[2],
                a1[3]);
        goto LABEL_32;
      }
LABEL_29:
      v10 = 0LL;
LABEL_60:
      ThreadUnlock1(i, v7);
      v2 = v10;
      goto LABEL_61;
    }
    v15 = *(_QWORD *)(v6 + 144);
    if ( (v12 & 8) != 0 )
    {
      v16 = a1 + 2;
      RtlWCSMessageWParamCharToMB(*((unsigned int *)a1 + 2), a1 + 2);
      v17 = *((_DWORD *)a1 + 2);
      if ( v17 != 576 && v17 != 281 )
      {
        v18 = *v16;
LABEL_49:
        v19 = SfnDWORD((__int64 *)v6, v17, v18, a1[3], v15, *(_QWORD *)(gpsi + 744LL));
LABEL_56:
        v10 = v19;
        if ( *((_DWORD *)a1 + 2) == 15 && HMValidateHandleNoSecure(*a1, 1) && (*(_BYTE *)(v6 + 42) & 0x40) != 0 )
        {
          SetOrClrWF(0, (_DWORD *)v6, 0x401u, 1);
          xxxSimpleDoSyncPaint((struct tagWND *)v6);
        }
        goto LABEL_60;
      }
      v20 = *v16;
    }
    else
    {
      v17 = *((_DWORD *)a1 + 2);
      if ( v17 != 576 && v17 != 281 )
      {
        v18 = a1[2];
        goto LABEL_49;
      }
      v20 = a1[2];
    }
    v19 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v17]])(
            v6,
            v17,
            v20,
            a1[3],
            v15,
            *(_QWORD *)(gpsi + 744LL),
            1,
            0LL);
    goto LABEL_56;
  }
LABEL_61:
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v23);
  return v2;
}
