/*
 * XREFs of PfTCleanup @ 0x14063154C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 *     PfpParametersPropagate @ 0x140631C58 (PfpParametersPropagate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PfFbBufferListInsertInFree @ 0x1400FAAE8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 *     PfFbBufferListShutdown @ 0x1401E6624 (PfFbBufferListShutdown.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1403E767C (PfTTraceListFree.c)
 *     PfTCleanupBuffers @ 0x1406316F8 (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x140631784 (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x140631F3C (PfFbBufferListCleanup.c)
 */

LONG_PTR __fastcall PfTCleanup(__int64 a1, __int64 a2)
{
  bool v3; // bp
  __int64 v4; // rdx
  PSLIST_ENTRY v5; // rbx
  PSLIST_ENTRY v6; // rdx
  LONG_PTR result; // rax
  void *v8; // rcx
  __int64 *v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v9[1] = (__int64 *)v9;
  v9[0] = (__int64 *)v9;
  v3 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 104);
  PfTAccessTracingCleanup(a1, a2, 1);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 548) = 0;
  PfTTraceListTrim(0LL, 0LL, v9);
  PfTTraceListTrim(1LL, 0LL, v9);
  *(_DWORD *)(a1 + 552) = 0;
  PfTAccessTracingCleanup(a1, v4, 2);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  PfTTraceListFree(v9);
  *(_DWORD *)(a1 + 496) = 0;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 480));
  while ( v5 )
  {
    v6 = v5;
    v5 = v5->Next;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 352),
      v6,
      LODWORD(v6[2].Next) - (_DWORD)v6,
      *((_DWORD *)&v6[2].Next + 3),
      1);
  }
  PfFbBufferListShutdown((PEX_RUNDOWN_REF)(a1 + 224));
  PfFbBufferListShutdown((PEX_RUNDOWN_REF)(a1 + 352));
  if ( !v3 && *(_QWORD *)(a1 + 104) )
  {
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 104), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  PfTCleanupBuffers(&unk_140302498);
  PfTCleanupBuffers(&unk_1403024C0);
  PfFbBufferListCleanup(a1 + 224);
  result = PfFbBufferListCleanup(a1 + 352);
  v8 = *(void **)(a1 + 616);
  if ( v8 )
  {
    result = ObfDereferenceObject(v8);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
