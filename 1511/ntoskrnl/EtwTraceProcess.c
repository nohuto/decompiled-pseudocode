/*
 * XREFs of EtwTraceProcess @ 0x1404497E4
 * Callers:
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     PsGetProcessSessionId @ 0x14003AF8C (PsGetProcessSessionId.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     _TlgCreateWsz @ 0x140092310 (_TlgCreateWsz.c)
 *     TraceLoggingProviderEnabled @ 0x1400923A4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     MmGetSessionCreateTime @ 0x1404A3628 (MmGetSessionCreateTime.c)
 *     EtwpLogProcessPerfCtrs @ 0x140661640 (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(__int64 BugCheckParameter1, __int16 a2)
{
  unsigned __int64 v2; // rbp
  char v5; // r15
  char v6; // al
  BOOLEAN v7; // bl
  UCHAR v8; // dl
  unsigned __int64 v9; // r15
  __int128 v10; // xmm0
  signed __int64 v11; // r9
  __int64 v12; // r12
  unsigned int LevelPlus1; // r10d
  void *v14; // r14
  void *v15; // rbx
  unsigned int v16; // r10d
  int ProcessSessionId; // eax
  unsigned __int16 *v18; // r13
  __int64 v19; // r10
  unsigned __int8 v20; // cl
  int v21; // eax
  __int64 v22; // r9
  char v23; // r11
  char v24; // [rsp+A0h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = 0;
  if ( a2 == 770 )
  {
    v6 = PerfGlobalGroupMask;
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v7 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(BugCheckParameter1, 0LL, (__int64)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v7);
      v6 = PerfGlobalGroupMask;
    }
    if ( (v6 & 8) != 0 )
      EtwpLogProcessPerfCtrs(BugCheckParameter1);
  }
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1
    && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, v2 + 312);
    v5 = 1;
  }
  *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  EtwpBuildProcessEvent(
    (PEPROCESS)BugCheckParameter1,
    v2 + 24,
    v2 + 1360,
    v2 + 16,
    (PSIZE_T)(v2 + 368),
    (PANSI_STRING)(v2 + 160),
    v2 + 40,
    (PVOID)(v2 + 56));
  if ( v5 )
  {
    KiUnstackDetachProcess(($D4FCF91253F76F57393CBFE908971F67 *)(v2 + 312), 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
  if ( (dword_1402D84A0 & 1) != 0 )
    EtwpPsProvTraceProcess((PEPROCESS)BugCheckParameter1, a2);
  if ( TraceLoggingProviderEnabled(&stru_1402D1A00, v8, 0x400000000003uLL) && a2 == 769 )
  {
    memset((void *)(v2 + 176), 0, 0x60uLL);
    v9 = *(_QWORD *)(BugCheckParameter1 + 1840) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
    *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *(_DWORD *)(BugCheckParameter1 + 744);
    *(_WORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC) = PsGetProcessSessionId(BugCheckParameter1);
    *(_WORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCE) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *(_QWORD *)(BugCheckParameter1 + 776);
    v10 = *(_OWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
    *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0LL;
    *(_OWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = v10;
    *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v9;
    v11 = _InterlockedExchangeAdd64(&EtwpAppStateChangeSequenceNumber, 1uLL);
    v12 = *(_QWORD *)(BugCheckParameter1 + 1840);
    LevelPlus1 = stru_1402D1A00.LevelPlus1;
    v14 = *(void **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v15 = *(void **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = v11 + 1;
    *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = v12;
    if ( LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_1402D1A00, 3uLL) )
      {
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_QWORD *)(BugCheckParameter1 + 776);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_DWORD *)(BugCheckParameter1 + 744);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(BugCheckParameter1 + 992);
        ProcessSessionId = PsGetProcessSessionId(BugCheckParameter1);
        v18 = *(unsigned __int16 **)(BugCheckParameter1 + 1128);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = ProcessSessionId;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(BugCheckParameter1 + 1848);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v9;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v12;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = MmGetSessionCreateTime(BugCheckParameter1);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x18);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1C);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x448) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x440) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 136;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x458) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x450) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 32;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x468) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x460) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 8;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x470) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 20;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x480) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 1176;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x490) = *((_QWORD *)v18 + 1);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x498) = *v18;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 88;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 80;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 64;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 96;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 36;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4F0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 12;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x478) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x488) = 2LL;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x49C) = 0;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E8) = 4LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4F8) = 4LL;
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)(v2 + 1280), (LPCWSTR)(v2 + 384));
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)(v2 + 1296), (LPCWSTR)(v2 + 640));
        v20 = *(_BYTE *)(v19 + 1);
        v21 = 15;
        if ( v20 <= 0xFu )
          v21 = v20;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x520) = v19;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x528) = 4 * v21 + 8;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x530) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 1352;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = *(unsigned __int16 *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x52C) = 0;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x538) = 2LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x540) = v14;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54C) = 0;
        TlgWrite(&stru_1402D1A00, &unk_14025521A, 0LL, 0LL, 0x13u, (EVENT_DATA_DESCRIPTOR *)(v2 + 1056));
        v16 = stru_1402D1A00.LevelPlus1;
        v12 = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
      }
      if ( v16 > 5 && TlgKeywordOn(&stru_1402D1A00, 0x400000000001uLL) )
      {
        *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xB0);
        *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0xB4);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xD8);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xE0);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xE8);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xF0);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0xF8);
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x330) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 4;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x340) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 2;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x350) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 184;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = (unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 1;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x380) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 3;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x390) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 200;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 152;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 112;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 144;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 128;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 104;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 5;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x400) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 120;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x410) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 72;
        *(_BYTE *)v2 = v23;
        *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = v23;
        *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 3) = v23;
        *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 5) = v23;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v22;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v12;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x338) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x348) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x358) = 16LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x388) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x398) = 16LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E8) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F8) = 1LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x408) = 8LL;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x418) = 8LL;
        TlgWrite(&stru_1402D1A00, &unk_14025501B, 0LL, 0LL, 0x11u, (EVENT_DATA_DESCRIPTOR *)(v2 + 784));
      }
    }
  }
  else
  {
    v14 = *(void **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v15 = *(void **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  }
  EtwTraceKernelEvent(v2 + 1360, *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), 1u, a2, 5249284);
  RtlFreeAnsiString((PUNICODE_STRING)(v2 + 160));
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
