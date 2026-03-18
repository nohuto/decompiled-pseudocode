/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x140059968
 * Callers:
 *     IsShellFrameHangResilient @ 0x1400598D4 (IsShellFrameHangResilient.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     EditionMouseMoveShellResilience @ 0x1401BE890 (EditionMouseMoveShellResilience.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1400599F0 (IsDebuggerAttached.c)
 *     IsIAMThread @ 0x140059A4C (IsIAMThread.c)
 */

__int64 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 1584);
  if ( !v3 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 112);
  if ( v4 )
  {
    if ( (unsigned __int8)IsIAMThread(*(_QWORD *)(v4 + 16)) )
      return 1LL;
  }
  if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 456)) )
    return 1LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1584) + 112LL);
  if ( !v5 )
    return 0LL;
  LOBYTE(v2) = (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 456LL)) != 0;
  return v2;
}
