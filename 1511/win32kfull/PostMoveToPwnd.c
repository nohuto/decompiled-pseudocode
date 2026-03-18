/*
 * XREFs of PostMoveToPwnd @ 0x1C0065C2C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0066AD8 (CoalesceInputSourceMouseMoves.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 * Callees:
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 */

__int64 __fastcall PostMoveToPwnd(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v7; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax

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
  if ( !(_DWORD)result || (v11 = *(_QWORD *)(*(_QWORD *)(v9 + 376) + 784LL), (*(_DWORD *)(v11 + 100) & 2) == 0) )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent, v11, v12) )
      v13 = *(_QWORD *)(a1 + 144);
    else
      v13 = *(_QWORD *)(gpsi + 3976LL);
    result = PostInputMessage(
               a1,
               a2,
               0x200u,
               0LL,
               (unsigned __int16)v13 | (WORD2(v13) << 16),
               v3,
               v7.QuadPart,
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
