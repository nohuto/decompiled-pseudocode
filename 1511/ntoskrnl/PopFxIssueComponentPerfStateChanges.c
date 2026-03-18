/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x1401EA3E4
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1401E95B8 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     PopFxQueueWorkOrder @ 0x1400DC96C (PopFxQueueWorkOrder.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1401E9CD4 (PopFxCompleteComponentPerfState.c)
 *     PopPluginRequestComponentPerfState @ 0x1401EBF64 (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x1401EFDFC (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1401EFFC4 (PopDiagTraceFxPerfRequestProgress.c)
 */

NTSTATUS __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v6; // rbx
  void *v11; // r15
  char v12; // r14
  int v13; // edx
  char v14; // al
  char v15; // cl
  NTSTATUS result; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  char v18; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 248);
  if ( !v6 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  if ( a4 > *(_DWORD *)(v6 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v6 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v6 + 80));
  v11 = Src;
  if ( *(_BYTE *)(v6 + 74) )
  {
    memmove(*(void **)(v6 + 48), Src, 16LL * a4);
    *(_DWORD *)(v6 + 56) = a4;
    *(_BYTE *)(v6 + 72) = 0;
    *(_QWORD *)(v6 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v6 + 80) = a6;
  KeResetEvent((PRKEVENT)(v6 + 8));
  PopDiagTraceFxPerfRequest(v6, a4, v11);
  v12 = 1;
  if ( (a3 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v6 + 40), 0x88000000);
  }
  else if ( (a3 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v6 + 40), 0x10000000u);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 40), 4u);
  _InterlockedOr(v17, 0);
  if ( *(_BYTE *)(v6 + 73) )
  {
    v13 = *(_DWORD *)(a2 + 16);
    v18 = 0;
    v14 = PopPluginRequestComponentPerfState(BugCheckParameter2, v13, a4, (_DWORD)v11, (__int64)&v18);
    v15 = v18;
    v12 = v14;
  }
  else
  {
    v15 = 1;
    v18 = 1;
  }
  if ( v12 )
  {
    if ( v15 )
      _InterlockedOr((volatile signed __int32 *)(v6 + 40), 0x60000000u);
    else
      _InterlockedOr((volatile signed __int32 *)(v6 + 40), 0x20000000u);
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 40));
  }
  result = PopDiagTraceFxPerfRequestProgress(
             v6,
             ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 40), 0xFFFFFFFF) - 1) & 7);
  if ( v12 )
  {
    if ( (a3 & 2) != 0 )
    {
      return PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(v6 + 88), BugCheckParameter2, 0);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 40), 0x80000000);
      return PopFxCompleteComponentPerfState(BugCheckParameter2, *(_DWORD *)(a2 + 16), v6, v18);
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    return KeWaitForSingleObject((PVOID)(v6 + 8), Executive, 0, 0, 0LL);
  }
  return result;
}
