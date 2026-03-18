/*
 * XREFs of PostMoveToPwnd @ 0x1C0056F40
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C005873C (CoalesceInputSourceMouseMoves.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
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
  v9 = *(_QWORD *)(a1 + 56);
  result = HasHidTable(v9);
  if ( !(_DWORD)result || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 376) + 776LL) + 100LL) & 2) == 0 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      v11 = *(_QWORD *)(a1 + 152);
    else
      v11 = *(_QWORD *)(gpsi + 5368LL);
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
               a1 + 372,
               0LL,
               0LL);
  }
  *(_DWORD *)(a1 + 340) &= ~0x20u;
  *(_DWORD *)(a1 + 372) = 0;
  gdwMouseMoveTimeStamp = 0;
  gqpcMouseMoveTimeStamp = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  return result;
}
