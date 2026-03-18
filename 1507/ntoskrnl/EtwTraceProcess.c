/*
 * XREFs of EtwTraceProcess @ 0x14050C208
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PsGetProcessSessionId @ 0x1400EFD94 (PsGetProcessSessionId.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1400EFF88 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400EFFDC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     MmGetSessionCreateTime @ 0x140508F04 (MmGetSessionCreateTime.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     EtwpLogProcessPerfCtrs @ 0x1406E4678 (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(PEPROCESS Process, __int16 a2)
{
  unsigned __int64 v2; // rbp
  char v5; // r15
  char v6; // al
  BOOLEAN v7; // bl
  unsigned __int64 v8; // rtt
  UCHAR v9; // dl
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // r15
  __int128 v12; // xmm0
  signed __int64 v13; // r9
  unsigned __int64 v14; // r12
  unsigned int LevelPlus1; // r10d
  void *v16; // r14
  void *v17; // rbx
  unsigned int v18; // r10d
  int ProcessSessionId; // eax
  unsigned __int16 *v20; // r13
  __int64 v21; // r10
  unsigned __int8 v22; // cl
  int v23; // eax
  __int64 v24; // r9
  char v25; // r11
  char v26; // [rsp+A0h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = 0;
  if ( a2 == 770 )
  {
    v6 = PerfGlobalGroupMask;
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v7 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace((__int64)Process, 0LL, (__int64)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v7);
      v6 = PerfGlobalGroupMask;
    }
    if ( (v6 & 8) != 0 )
      EtwpLogProcessPerfCtrs(Process);
  }
  if ( KeGetCurrentThread()->ApcState.Process != Process )
  {
    _m_prefetchw(&Process[1].Header.WaitListHead);
    v8 = (unsigned __int64)Process[1].Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.WaitListHead, v8 + 2, v8)
      || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead) )
    {
      KiStackAttachProcess(Process, 0, v2 + 328);
      v5 = 1;
    }
  }
  *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  EtwpBuildProcessEvent(Process, v2 + 24, v2 + 1376, v2 + 16, v2 + 384, (PANSI_STRING)(v2 + 168), v2 + 40, v2 + 56);
  if ( v5 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)(v2 + 328), 0);
    v9 = (_BYTE)Process - 32;
    _m_prefetchw(&Process[1].Header.WaitListHead);
    v10 = (unsigned __int64)Process[1].Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.WaitListHead, v10 - 2, v10) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
  }
  if ( (dword_1403277E0 & 1) != 0 )
    EtwpPsProvTraceProcess(
      Process,
      *(unsigned int *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140),
      (unsigned int *)(v2 + 384),
      v2 + 24,
      a2);
  if ( TraceLoggingProviderEnabled(&stru_140320BA0, v9, 0x400000000003uLL) && a2 == 769 )
  {
    memset((void *)(v2 + 192), 0, 0x60uLL);
    v11 = Process[2].ActiveProcessors.Bitmap[15] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
    *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = Process[1].Header.WaitListHead.Blink;
    *(_WORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC) = PsGetProcessSessionId(Process);
    *(_WORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDE) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = Process[1].ThreadListHead.Flink;
    v12 = *(_OWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0LL;
    *(_OWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v12;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v11;
    v13 = _InterlockedExchangeAdd64(&EtwpAppStateChangeSequenceNumber, 1uLL);
    v14 = Process[2].ActiveProcessors.Bitmap[15];
    LevelPlus1 = stru_140320BA0.LevelPlus1;
    v16 = *(void **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v17 = *(void **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = v13 + 1;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = v14;
    if ( LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_140320BA0, 3uLL) )
      {
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = Process[1].ThreadListHead.Flink;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = Process[1].Header.WaitListHead.Blink;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Process[1].SwapListEntry.Next;
        ProcessSessionId = PsGetProcessSessionId(Process);
        v20 = (unsigned __int16 *)Process[1].ActiveProcessors.Bitmap[14];
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = ProcessSessionId;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = Process[2].ActiveProcessors.Bitmap[16];
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v11;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v14;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = MmGetSessionCreateTime(Process);
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x18);
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1C);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x458) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x450) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 88;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x468) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x460) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 32;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x478) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x470) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 8;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x480) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 20;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x490) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 1192;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A0) = *((_QWORD *)v20 + 1);
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A8) = *v20;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 96;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 128;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 64;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 144;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4F0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 36;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x500) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 12;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x488) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x498) = 2LL;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4AC) = 0;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4F8) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x508) = 4LL;
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)(v2 + 1296), (LPCWSTR)(v2 + 400));
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)(v2 + 1312), (LPCWSTR)(v2 + 656));
        v22 = *(_BYTE *)(v21 + 1);
        v23 = 15;
        if ( v22 <= 0xFu )
          v23 = v22;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x530) = v21;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x538) = 4 * v23 + 8;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x540) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 1368;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x558) = *(unsigned __int16 *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x53C) = 0;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = 2LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) = v16;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x55C) = 0;
        TlgWrite(&stru_140320BA0, &unk_1402A5217, 0LL, 0LL, 0x13u, (EVENT_DATA_DESCRIPTOR *)(v2 + 1072));
        v18 = stru_140320BA0.LevelPlus1;
        v14 = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
      }
      if ( v18 > 5 && TlgKeywordOn(&stru_140320BA0, 0x400000000001uLL) )
      {
        *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xC0);
        *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xC4);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xE8);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xF0);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xF8);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x100);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x108);
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x340) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 4;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x350) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 2;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 200;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x380) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 1;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x390) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 3;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 216;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 104;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 160;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 120;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 152;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 136;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x400) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 5;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x410) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 112;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x420) = ((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 72;
        *(_BYTE *)v2 = v25;
        *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = v25;
        *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 3) = v25;
        *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 5) = v25;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v24;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v14;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x348) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x358) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = 16LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x388) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x398) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A8) = 16LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x408) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x418) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x428) = 8LL;
        TlgWrite(&stru_140320BA0, &unk_1402A50D4, 0LL, 0LL, 0x11u, (EVENT_DATA_DESCRIPTOR *)(v2 + 800));
      }
    }
  }
  else
  {
    v16 = *(void **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v17 = *(void **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  }
  EtwTraceKernelEvent(v2 + 1376, *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), 1u, a2, 5249284);
  RtlFreeAnsiString((PUNICODE_STRING)(v2 + 168));
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
}
