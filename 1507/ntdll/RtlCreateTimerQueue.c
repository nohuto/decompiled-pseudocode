/*
 * XREFs of RtlCreateTimerQueue @ 0x18007ADE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 */

__int64 __fastcall RtlCreateTimerQueue(__int64 *a1)
{
  int v2; // ebx
  __int64 Heap; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h]

  v7 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a1 = 0LL;
  v2 = RtlpTpRevertCapture(&v7, 0LL);
  if ( v2 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 48LL);
    v4 = Heap;
    v8 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 16) = 0LL;
      v5 = (_QWORD *)(Heap + 24);
      v5[1] = v5;
      *v5 = v5;
      *(_QWORD *)(v4 + 40) = 0LL;
      *a1 = v4;
      v2 = 0;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  RtlpTpResumeImpersonation(v7);
  return (unsigned int)v2;
}
