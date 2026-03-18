/*
 * XREFs of xxxDispatchMessage @ 0x1C0078FD0
 * Callers:
 *     NtUserDispatchMessage @ 0x1C0078EF0 (NtUserDispatchMessage.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00DFFA0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C00793EC (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ValidateTimerCallback @ 0x1C00FE148 (ValidateTimerCallback.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0246070 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C02461D8 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall xxxDispatchMessage(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rcx
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  char v15; // r8
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64, int); // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  __int64 *v19; // r14
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  _QWORD v25[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v26 = *((_DWORD *)a1 + 2);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  LOBYTE(v8) = *(_BYTE *)(v6 + 1108);
  EtwTraceBeginDispatchMessage(v8, v26);
  v9 = 0LL;
  if ( !*a1 || (v9 = ValidateHwnd(*a1)) != 0 )
  {
    v10 = *((unsigned int *)a1 + 2);
    if ( (unsigned int)v10 < 0x400
      && ((MessageTable[v10] & 0x200) != 0 || (_DWORD)v10 == 537 && (a1[2] & 0x8000LL) != 0)
      || (_DWORD)v10 == 536 && (a1[2] & 0x8000LL) != 0 )
    {
      UserSetLastError(1159LL);
      goto LABEL_61;
    }
    i = gptiCurrent;
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v12 = *((_DWORD *)a1 + 2);
    if ( v12 == 275 || v12 == 280 )
    {
      v10 = a1[3];
      if ( v10 )
      {
        if ( v12 == 280 )
        {
          v13 = 0LL;
          for ( i = gtmrListHead; i != gtmrListHead; i = *(_QWORD *)i )
          {
            v10 = i - 72;
            if ( (*(_DWORD *)(i - 72 + 48) & 2) != 0 && a1[2] == *(_QWORD *)(v10 + 96) && v9 == *(_QWORD *)(v10 + 88) )
              goto LABEL_25;
          }
          v10 = 0LL;
LABEL_25:
          if ( v10 && *(_QWORD *)(v10 + 32) )
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v10 + 32))(
              v9,
              280LL,
              *((unsigned int *)a1 + 4),
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          goto LABEL_60;
        }
        i = gptiCurrent;
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
        {
          v14 = SfnDWORD(
                  v9,
                  275,
                  a1[2],
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                  a1[3],
                  *(_QWORD *)(gpsi + 744LL));
LABEL_32:
          v13 = v14;
          goto LABEL_60;
        }
        goto LABEL_29;
      }
    }
    if ( !v9 )
      goto LABEL_29;
    if ( v12 == 15 )
      SetOrClrWF(1LL, v9, 576LL, 1LL);
    v15 = *(_BYTE *)(v9 + 42);
    if ( (v15 & 4) != 0 )
    {
      i = *((unsigned int *)a1 + 2);
      if ( (unsigned int)i < 0x400 )
        v16 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, int))gapfnScSendMessage[(unsigned __int8)MessageTable[i]];
      else
        v16 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, int))SfnDWORD;
      v10 = (unsigned __int64)SfnINWPARAMCHAR;
      if ( v16 == SfnINWPARAMCHAR && (v15 & 8) != 0 )
        RtlMBMessageWParamCharToWCS(i, a1 + 2);
      v17 = *(_QWORD *)(v9 + 144);
      if ( v17 < 7 )
      {
        v14 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v17))(
                v9,
                *((unsigned int *)a1 + 2),
                a1[2],
                a1[3]);
        goto LABEL_32;
      }
LABEL_29:
      v13 = 0LL;
LABEL_60:
      ThreadUnlock1(i, v10);
      v5 = v13;
      goto LABEL_61;
    }
    v18 = *(_QWORD *)(v9 + 144);
    if ( (v15 & 8) != 0 )
    {
      v19 = a1 + 2;
      RtlWCSMessageWParamCharToMB(*((unsigned int *)a1 + 2), a1 + 2);
      v20 = *((_DWORD *)a1 + 2);
      if ( v20 != 576 && v20 != 281 )
      {
        v21 = *v19;
LABEL_49:
        v22 = SfnDWORD(v9, v20, v21, a1[3], v18, *(_QWORD *)(gpsi + 744LL));
LABEL_56:
        v13 = v22;
        if ( *((_DWORD *)a1 + 2) == 15 )
        {
          LOBYTE(v10) = 1;
          if ( HMValidateHandleNoSecure(*a1, v10) )
          {
            if ( (*(_BYTE *)(v9 + 42) & 0x40) != 0 )
            {
              SetOrClrWF(0LL, v9, 1025LL, 1LL);
              xxxSimpleDoSyncPaint((struct tagWND *)v9);
            }
          }
        }
        goto LABEL_60;
      }
      v23 = *v19;
    }
    else
    {
      v20 = *((_DWORD *)a1 + 2);
      if ( v20 != 576 && v20 != 281 )
      {
        v21 = a1[2];
        goto LABEL_49;
      }
      v23 = a1[2];
    }
    v22 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v20]])(
            v9,
            v20,
            v23,
            a1[3],
            v18,
            *(_QWORD *)(gpsi + 744LL),
            1,
            0LL);
    goto LABEL_56;
  }
LABEL_61:
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v26);
  return v5;
}
