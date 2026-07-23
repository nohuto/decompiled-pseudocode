/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1404B5E78
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x14005F270 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400A34AC (PsEncodeThreadWorkOnBehalfTicket.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v8);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v7 = (__int64)WorkOnBehalfThread;
  }
  else
  {
    if ( !*(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[12] )
    {
      v5 = 0LL;
      goto LABEL_4;
    }
    v7 = (__int64)CurrentThread;
  }
  PsEncodeThreadWorkOnBehalfTicket(v7, &v9);
  v5 = v9;
LABEL_4:
  if ( v8 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v5;
  return 0LL;
}
