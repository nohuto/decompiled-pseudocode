/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C0001CBC
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0001C50 (IsShellFrameHangResilient.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C008D488 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x1C00D5B48 (IsIAMThread.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 1224);
  result = 1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 96);
    if ( (!v3 || !(unsigned int)IsIAMThread(*(_QWORD *)(v3 + 16)))
      && !(unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 376)) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1224) + 96LL);
      if ( !v4 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 376LL)) )
        return 0;
    }
  }
  return result;
}
