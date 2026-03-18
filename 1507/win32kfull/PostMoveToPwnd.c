/*
 * XREFs of PostMoveToPwnd @ 0x1C008BBEC
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0090AE8 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 */

__int64 __fastcall PostMoveToPwnd(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v7; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rax

  LODWORD(v3) = gdwMouseMoveTimeStamp;
  if ( !gdwMouseMoveTimeStamp )
  {
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    gdwMouseMoveTimeStamp = v3;
  }
  v7.QuadPart = gqpcMouseMoveTimeStamp;
  if ( !gqpcMouseMoveTimeStamp )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    LODWORD(v3) = gdwMouseMoveTimeStamp;
    v7 = PerformanceCounter;
    gqpcMouseMoveTimeStamp = PerformanceCounter.QuadPart;
  }
  v9 = *(_QWORD *)(a1 + 48);
  result = HasHidTable(v9);
  if ( !(_DWORD)result || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 384) + 784LL) + 100LL) & 2) == 0 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      v11 = *(_QWORD *)(a1 + 144);
    else
      v11 = *(_QWORD *)(gpsi + 3976LL);
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))PostInputMessage)(
               a1,
               a2,
               512LL,
               0LL,
               (unsigned __int16)v11 | (WORD2(v11) << 16),
               v3,
               (LARGE_INTEGER)v7.QuadPart,
               gdwMouseMoveExtraInfo,
               a3,
               a1 + 364,
               0LL,
               0LL);
  }
  *(_DWORD *)(a1 + 332) &= ~0x20u;
  *(_DWORD *)(a1 + 364) = 0;
  gdwMouseMoveTimeStamp = 0;
  gqpcMouseMoveTimeStamp = 0LL;
  *(_DWORD *)(a1 + 368) = 0;
  return result;
}
