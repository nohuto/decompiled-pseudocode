/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C00034B8
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C000344C (IsShellFrameHangResilient.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00454B4 (IsDebuggerAttached.c)
 */

_BOOL8 __fastcall IsAdaptiveQueueDetachExempted(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BOOL8 result; // rax

  v1 = a1[154];
  result = 1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 96);
    if ( (!v3 || *(_QWORD *)(v3 + 16) != *(_QWORD *)(a1[52] + 280LL)) && !(unsigned int)IsDebuggerAttached(a1[48]) )
    {
      v4 = *(_QWORD *)(a1[154] + 96LL);
      if ( !v4 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 384LL)) )
        return 0;
    }
  }
  return result;
}
