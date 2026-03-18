/*
 * XREFs of PfTCleanup @ 0x14058E034
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     PfpParametersPropagate @ 0x1406B0108 (PfpParametersPropagate.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PfFbBufferListInsertInFree @ 0x1400D7A08 (PfFbBufferListInsertInFree.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PfFbBufferListShutdown @ 0x14015CAC8 (PfFbBufferListShutdown.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1404F91E4 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1405648F0 (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x14058E1EC (PfFbBufferListCleanup.c)
 *     PfTCleanupBuffers @ 0x14058EB58 (PfTCleanupBuffers.c)
 */

LONG_PTR __fastcall PfTCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // bp
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int8 v12; // si
  signed __int32 v13; // eax
  PSLIST_ENTRY v14; // rdi
  LONG_PTR result; // rax
  void *v16; // rcx
  PSLIST_ENTRY v17; // rdx
  __int64 *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v18[1] = (__int64 *)v18;
  v18[0] = (__int64 *)v18;
  v5 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 104);
  PfTAccessTracingCleanup(a1, a2, 1, a4);
  v7 = KeAbPreAcquire(a1 + 560, 0LL, 0LL, v6);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 560), 0) )
    ExpAcquireFastMutexContended(a1 + 560, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(a1 + 568) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 608) = CurrentIrql;
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 548) = 0;
  PfTTraceListTrim(0, 0, (__int64)v18);
  PfTTraceListTrim(1, 0, (__int64)v18);
  *(_DWORD *)(a1 + 552) = 0;
  PfTAccessTracingCleanup(a1, v10, 2, v11);
  v12 = *(_BYTE *)(a1 + 608);
  *(_QWORD *)(a1 + 568) = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 560), 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(a1 + 560), v13);
  __writecr8(v12);
  KeAbPostRelease(a1 + 560);
  PfTTraceListFree(v18);
  *(_DWORD *)(a1 + 496) = 0;
  v14 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 480));
  while ( v14 )
  {
    v17 = v14;
    v14 = v14->Next;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 352),
      v17,
      LODWORD(v17[2].Next) - (_DWORD)v17,
      *((_DWORD *)&v17[2].Next + 3),
      1);
  }
  PfFbBufferListShutdown((volatile signed __int64 *)(a1 + 224));
  PfFbBufferListShutdown((volatile signed __int64 *)(a1 + 352));
  if ( !v5 && *(_QWORD *)(a1 + 104) )
  {
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 104), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  PfTCleanupBuffers(&unk_140350218);
  PfTCleanupBuffers(&unk_140350240);
  PfFbBufferListCleanup(a1 + 224);
  result = PfFbBufferListCleanup(a1 + 352);
  v16 = *(void **)(a1 + 616);
  if ( v16 )
  {
    result = ObfDereferenceObject(v16);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
