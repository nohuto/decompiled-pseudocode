/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x14006ED10
 * Callers:
 *     CcCopyReadEx @ 0x140032C70 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x14006DB6C (CcAsyncCopyRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14006EA30 (MiCheckAndUpdateIoAttribution.c)
 *     CcScheduleReadAheadEx @ 0x14006EE10 (CcScheduleReadAheadEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x14005E874 (PsGetWorkOnBehalfThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14006ED78 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, __int64 a2)
{
  _KPROCESS **WorkOnBehalfThread; // rax
  _KPROCESS **v5; // rbx
  _KPROCESS *Process; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  WorkOnBehalfThread = (_KPROCESS **)PsGetWorkOnBehalfThread(a1, &v9);
  v5 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    Process = WorkOnBehalfThread[68];
  else
    Process = a1->Process;
  v7 = IopReferenceIoAttributionFromProcess(Process, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
