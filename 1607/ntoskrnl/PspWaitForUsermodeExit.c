/*
 * XREFs of PspWaitForUsermodeExit @ 0x14067FDFC
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x140680FE0 (PspWaitOnAllProcessesJobCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x140510350 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = NextProcessThread )
  {
    NextProcessThread = PsGetNextProcessThread(a1, i);
    v4 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 && !*((_BYTE *)NextProcessThread + 4) )
    {
      ObfReferenceObject(NextProcessThread);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v4);
      goto LABEL_1;
    }
  }
  return 0LL;
}
