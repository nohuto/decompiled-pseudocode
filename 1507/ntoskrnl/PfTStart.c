/*
 * XREFs of PfTStart @ 0x1405B6200
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x1406B0108 (PfpParametersPropagate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PfFbBufferListUpdateMax @ 0x140131CB8 (PfFbBufferListUpdateMax.c)
 *     PfFbBufferListAllocate @ 0x140171050 (PfFbBufferListAllocate.c)
 *     PfTAccessTracingStart @ 0x1403EBE7C (PfTAccessTracingStart.c)
 *     PsEnumProcesses @ 0x14041C0E4 (PsEnumProcesses.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     PfTAllocateBuffers @ 0x1405C4EB8 (PfTAllocateBuffers.c)
 */

__int64 __fastcall PfTStart(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  NTSTATUS v7; // esi
  __int64 v8; // r8
  HANDLE v9; // rcx
  _SLIST_ENTRY *v10; // rcx
  _SLIST_ENTRY *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v16; // r14
  signed __int32 v17; // eax
  __int64 v18; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  signed __int32 v22[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  ThreadHandle = a2;
  v4 = a3;
  if ( (a3 & 1) != 0 && (xmmword_1403532F4 & 1) == 0 )
    v4 = a3 & 0xFFFFFFFE;
  if ( (v4 & 2) != 0 && (xmmword_1403532F4 & 1) == 0 && (_DWORD)qword_140353310 != 1 && HIDWORD(qword_140353310) != 1 )
    v4 &= ~2u;
  if ( (v4 & 1) != 0 )
  {
    v7 = PfTAllocateBuffers(a1 + 24, 0x8000LL, 8LL, 1112303184LL);
    if ( v7 < 0 )
      goto LABEL_36;
    v7 = PfTAllocateBuffers(a1 + 64, 81960LL, 2LL, 1413834320LL);
    if ( v7 < 0 )
      goto LABEL_36;
    v7 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, PfTLoggingWorker, (PVOID)(a1 + 104));
    if ( v7 < 0 )
      goto LABEL_36;
    ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v9 = ThreadHandle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v9, 0);
  }
  if ( (v4 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    v7 = PfpCreateEvent(&DestinationString, 1LL, a1 + 616);
    if ( v7 < 0 )
    {
LABEL_36:
      PfTCleanup(a1, v6, v8, a4);
      LOBYTE(v20) = 1;
      PfTInitialize(a1, v21, v20);
      return (unsigned int)v7;
    }
  }
  if ( (v4 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v10, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v11, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  v12 = KeAbPreAcquire(a1 + 560, 0LL, 0LL, a4);
  v14 = v12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 560), 0) )
    ExpAcquireFastMutexContended(a1 + 560, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_QWORD *)(a1 + 568) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 608) = CurrentIrql;
  if ( (v4 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_1403532F4);
    if ( dword_140350418 < (unsigned int)dword_14035041C )
      PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 2, v13);
  }
  if ( (v4 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_1403532F4);
  *(_QWORD *)(a1 + 568) = 0LL;
  v16 = *(_BYTE *)(a1 + 608);
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 560), 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(a1 + 560), v17);
  __writecr8(v16);
  KeAbPostRelease(a1 + 560);
  *(_DWORD *)(a1 + 8) |= v4;
  if ( (v4 & 1) != 0 )
  {
    _InterlockedOr(v22, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 1, v18);
  }
  return 0;
}
