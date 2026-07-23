/*
 * XREFs of RtlFlsAlloc @ 0x180041220
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x180041400 (RtlFindClearBitsAndSet.c)
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  struct _TEB *v2; // r15
  _LIST_ENTRY *v5; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  struct _FLS_CALLBACK_INFO *v7; // rbp
  NTSTATUS v8; // ebx
  ULONG ClearBitsAndSet; // eax
  ULONG v10; // r14d
  struct _FLS_CALLBACK_INFO *v12; // rax
  __int64 v13; // rcx
  _LIST_ENTRY *Heap; // rax
  _LIST_ENTRY *Blink; // rcx

  v2 = NtCurrentTeb();
  if ( v2->FlsData )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  Heap = (_LIST_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8, 0x410uLL);
  v5 = Heap;
  if ( Heap )
  {
    v2->FlsData = Heap;
LABEL_3:
    ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->FlsCallback )
    {
      v7 = 0LL;
    }
    else
    {
      v12 = (struct _FLS_CALLBACK_INFO *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 2883584, 0x800uLL);
      v7 = v12;
      if ( !v12 )
      {
        v8 = -1073741801;
        goto LABEL_29;
      }
      v13 = 128LL;
      do
      {
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        v12 = (struct _FLS_CALLBACK_INFO *)((char *)v12 + 16);
        --v13;
      }
      while ( v13 );
    }
    v8 = 0;
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    if ( v7 && !ProcessEnvironmentBlock->FlsCallback )
    {
      ProcessEnvironmentBlock->FlsCallback = v7;
      v7 = 0LL;
    }
    if ( v5 )
    {
      Blink = ProcessEnvironmentBlock->FlsListHead.Blink;
      v5->Flink = &ProcessEnvironmentBlock->FlsListHead;
      v5->Blink = Blink;
      if ( Blink->Flink != &ProcessEnvironmentBlock->FlsListHead )
        __fastfail(3u);
      Blink->Flink = v5;
      ProcessEnvironmentBlock->FlsListHead.Blink = v5;
      v5 = 0LL;
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)ProcessEnvironmentBlock->FlsBitmap, 1u, 1u);
    v10 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      v8 = -1073741801;
    }
    else
    {
      *((_QWORD *)ProcessEnvironmentBlock->FlsCallback + 2 * ClearBitsAndSet) = Callback;
      *((_QWORD *)v2->FlsData + ClearBitsAndSet + 2) = 0LL;
      if ( ClearBitsAndSet > ProcessEnvironmentBlock->FlsHighIndex )
        ProcessEnvironmentBlock->FlsHighIndex = ClearBitsAndSet;
    }
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    if ( v8 >= 0 )
    {
      *FlsIndex = v10;
      return v8;
    }
LABEL_29:
    if ( v5 )
    {
      v2->FlsData = 0LL;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    return v8;
  }
  return -1073741801;
}
