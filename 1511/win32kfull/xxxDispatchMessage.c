/*
 * XREFs of xxxDispatchMessage @ 0x1C0054E2C
 * Callers:
 *     NtUserDispatchMessage @ 0x1C0054D50 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D037C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C0055244 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C005CF50 (SfnDWORD.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ValidateTimerCallback @ 0x1C00DFFB4 (ValidateTimerCallback.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0148DC4 (RtlWCSMessageWParamCharToMB.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D5C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall xxxDispatchMessage(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  _QWORD *i; // rcx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // r8
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(int, int, int, int, __int64, __int64, int); // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  __int64 *v17; // r14
  unsigned int v18; // r10d
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD v23[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v24 = *((_DWORD *)a1 + 2);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  LOBYTE(v5) = *(_BYTE *)(v3 + 1084);
  EtwTraceBeginDispatchMessage(v5, v24);
  v6 = 0LL;
  if ( *a1 )
  {
    v6 = ValidateHwnd(*a1);
    if ( !v6 )
      goto LABEL_61;
  }
  v7 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v7 < 0x400 && ((MessageTable[v7] & 0x200) != 0 || (_DWORD)v7 == 537 && (a1[2] & 0x8000LL) != 0)
    || (_DWORD)v7 == 536 && (a1[2] & 0x8000LL) != 0 )
  {
    UserSetLastError(1159);
    goto LABEL_61;
  }
  i = (_QWORD *)gptiCurrent;
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = v6;
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
        for ( i = (_QWORD *)gtmrListHead; i != (_QWORD *)gtmrListHead; i = (_QWORD *)*i )
        {
          v7 = (unsigned __int64)(i - 9);
          if ( (*(_DWORD *)(i - 3) & 2) != 0
            && a1[2] == *(_QWORD *)(v7 + 96)
            && v6 == *(_QWORD *)(v7 + 88)
            && *(_QWORD *)(v7 + 32) )
          {
            goto LABEL_26;
          }
        }
        v7 = 0LL;
LABEL_26:
        if ( v7 )
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v7 + 32))(
            v6,
            280LL,
            *((unsigned int *)a1 + 4),
            (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
        goto LABEL_60;
      }
      i = (_QWORD *)gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
      {
        v11 = SfnDWORD(
                v6,
                275,
                a1[2],
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                a1[3],
                *(_QWORD *)(gpsi + 744LL));
LABEL_32:
        v10 = v11;
        goto LABEL_60;
      }
LABEL_29:
      v10 = 0LL;
LABEL_60:
      ThreadUnlock1(i, v7);
      v2 = v10;
      goto LABEL_61;
    }
  }
  if ( !v6 )
    goto LABEL_29;
  if ( v9 == 15 )
    SetOrClrWF(1LL, v6, 576LL, 1LL);
  v12 = *(_BYTE *)(v6 + 42);
  if ( (v12 & 4) == 0 )
  {
    v16 = *(_QWORD *)(v6 + 144);
    if ( (v12 & 8) != 0 )
    {
      v17 = a1 + 2;
      RtlWCSMessageWParamCharToMB(*((unsigned int *)a1 + 2), a1 + 2);
      v18 = *((_DWORD *)a1 + 2);
      if ( v18 != 576 && v18 != 281 )
      {
        v19 = *v17;
LABEL_49:
        v20 = SfnDWORD(v6, v18, v19, a1[3], v16, *(_QWORD *)(gpsi + 744LL));
LABEL_56:
        v10 = v20;
        if ( *((_DWORD *)a1 + 2) == 15 )
        {
          LOBYTE(v7) = 1;
          if ( HMValidateHandleNoSecure(*a1, v7) )
          {
            if ( (*(_BYTE *)(v6 + 42) & 0x40) != 0 )
            {
              SetOrClrWF(0LL, v6, 1025LL, 1LL);
              xxxSimpleDoSyncPaint((struct tagWND *)v6);
            }
          }
        }
        goto LABEL_60;
      }
      v21 = *v17;
    }
    else
    {
      v18 = *((_DWORD *)a1 + 2);
      if ( v18 != 576 && v18 != 281 )
      {
        v19 = a1[2];
        goto LABEL_49;
      }
      v21 = a1[2];
    }
    v20 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v18]])(
            v6,
            v18,
            v21,
            a1[3],
            v16,
            *(_QWORD *)(gpsi + 744LL),
            1,
            0LL);
    goto LABEL_56;
  }
  v13 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v13 < 0x400 )
    v14 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, int))gapfnScSendMessage[(unsigned __int8)MessageTable[v13]];
  else
    v14 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, int))SfnDWORD;
  if ( v14 == SfnINWPARAMCHAR && (v12 & 8) != 0 )
    RtlMBMessageWParamCharToWCS(v13, a1 + 2);
  v15 = *(_QWORD *)(v6 + 144);
  if ( v15 < 7 )
  {
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v15))(
            v6,
            *((unsigned int *)a1 + 2),
            a1[2],
            a1[3]);
    goto LABEL_32;
  }
LABEL_61:
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v24);
  return v2;
}
