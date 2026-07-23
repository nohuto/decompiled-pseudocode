/*
 * XREFs of RtlCreateTimerQueue @ 0x180064240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18003A000 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180064D68 (RtlpTpRevertCapture.c)
 */

NTSTATUS __cdecl RtlCreateTimerQueue(PHANDLE TimerQueueHandle)
{
  NTSTATUS v2; // ebx
  _QWORD *Heap; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  HANDLE TokenHandle; // [rsp+40h] [rbp+18h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+20h]

  TokenHandle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *TimerQueueHandle = 0LL;
  v2 = RtlpTpRevertCapture(&TokenHandle);
  if ( v2 >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
    v4 = Heap;
    v8 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      Heap[1] = 0LL;
      Heap[2] = 0LL;
      v5 = Heap + 3;
      v5[1] = v5;
      *v5 = v5;
      v4[5] = 0LL;
      *TimerQueueHandle = v4;
      v2 = 0;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v2;
}
