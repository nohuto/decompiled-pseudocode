/*
 * XREFs of PfTStart @ 0x1405729E0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x140669EB0 (PfpParametersPropagate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PfFbBufferListUpdateMax @ 0x1400B3DB8 (PfFbBufferListUpdateMax.c)
 *     PfFbBufferListAllocate @ 0x140146B64 (PfFbBufferListAllocate.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PsEnumProcesses @ 0x1404993EC (PsEnumProcesses.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PfTAllocateBuffers @ 0x140572C40 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x140572DA0 (PfpCreateEvent.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 */

__int64 __fastcall PfTStart(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // edi
  NTSTATUS v5; // esi
  HANDLE v6; // rcx
  _SLIST_ENTRY *v7; // rcx
  _SLIST_ENTRY *v8; // rcx
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  HANDLE ThreadHandle; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  ThreadHandle = a2;
  v3 = a3;
  if ( (a3 & 1) != 0 && (xmmword_1403283C4 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_1403283C4 & 1) == 0 && (_DWORD)qword_1403283E0 != 1 && HIDWORD(qword_1403283E0) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    v5 = PfTAllocateBuffers(a1 + 24, 0x8000LL, 8LL, 1112303184LL);
    if ( v5 < 0 )
      goto LABEL_30;
    v5 = PfTAllocateBuffers(a1 + 64, 81960LL, 2LL, 1413834320LL);
    if ( v5 < 0 )
      goto LABEL_30;
    v5 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           0LL,
           0LL,
           (PKSTART_ROUTINE)PfTLoggingWorker,
           (PVOID)(a1 + 104));
    if ( v5 < 0 )
      goto LABEL_30;
    ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = ThreadHandle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v6, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    v5 = PfpCreateEvent(&DestinationString, 1LL, a1 + 616);
    if ( v5 < 0 )
    {
LABEL_30:
      PfTCleanup(a1);
      PfTInitialize(a1, v10, 1);
      return (unsigned int)v5;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v7, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v8, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_1403283C4);
    if ( dword_140328258 < (unsigned int)dword_14032825C )
      PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 2);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_1403283C4);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v11, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 1);
  }
  return 0;
}
