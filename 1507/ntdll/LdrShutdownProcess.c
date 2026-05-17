/*
 * XREFs of LdrShutdownProcess @ 0x180044620
 * Callers:
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     SbCleanupTrace @ 0x1800444F0 (SbCleanupTrace.c)
 *     RtlProcessFlsData @ 0x180044AA0 (RtlProcessFlsData.c)
 *     RtlDetectHeapLeaks @ 0x180044C20 (RtlDetectHeapLeaks.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     RtlpInitializeActivationContextStackFrameList @ 0x180053FF0 (RtlpInitializeActivationContextStackFrameList.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

_UNKNOWN **LdrShutdownProcess()
{
  _UNKNOWN **result; // rax
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v5; // r15
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // r12
  void (*v9)(void); // rbx
  __int64 v10; // r9
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  int v13; // [rsp+58h] [rbp-B0h]
  _BYTE v14[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-68h] BYREF
  int v16; // [rsp+A8h] [rbp-60h]
  _BYTE v17[56]; // [rsp+B0h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( !byte_180146208 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (unsigned __int16 *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5633,
        (unsigned int)"LdrShutdownProcess",
        2,
        "Process 0x%p (%wZ) exiting\n",
        v1->ClientId.UniqueProcess,
        &CommandLine);
    qword_180146210 = (__int64)v1->ClientId.UniqueThread;
    byte_180146208 = 1;
    if ( g_ShimsEnabled )
    {
      v9 = (void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
      _guard_check_icall_fptr();
      v9();
    }
    FlsData = v1->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( !v1->ActivationContextStackPointer )
    {
      dword_180146FE8 = 0;
      qword_180146FD0 = 0LL;
      qword_180146FE0 = (__int64)&qword_180146FD8;
      qword_180146FD8 = (__int64)&qword_180146FD8;
      dword_180146FEC = 1;
      dword_180146FF0 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      RtlpInitializeActivationContextStackFrameList(&unk_180147780);
      qword_180147788 = qword_180146FD8;
      qword_180147790 = v10;
      if ( *(_QWORD *)(qword_180146FD8 + 8) != v10 )
        __fastfail(3u);
      *(_QWORD *)(qword_180146FD8 + 8) = &qword_180147788;
      qword_180146FD8 = (__int64)&qword_180147788;
      v1->ActivationContextStackPointer = (_ACTIVATION_CONTEXT_STACK *)&qword_180146FD0;
    }
    if ( (ProcessEnvironmentBlock->BitField & 0x10) == 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v5 = 0;
      v6 = (__int64 *)qword_1801461F8;
      while ( v6 != &qword_1801461F0 )
      {
        v7 = v6 - 4;
        v6 = (__int64 *)v6[1];
        v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))v7[7];
        if ( v8 && (v7[13] & 0x80000) != 0 )
        {
          v12 = 72LL;
          v13 = 1;
          memset(v14, 0, sizeof(v14));
          RtlActivateActivationContextUnsafeFast((__int64)&v12, v7[17]);
          if ( *((_WORD *)v7 + 55) )
            LdrpCallTlsInitializers(0LL, v7);
          LdrpCallInitRoutine(v8, v7[6], 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v15 = 72LL;
        v16 = 1;
        memset(v17, 0, sizeof(v17));
        RtlActivateActivationContextUnsafeFast((__int64)&v15, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v15);
      }
    }
    else
    {
      v5 = 1;
    }
    if ( (__int64 *)v1->ActivationContextStackPointer == &qword_180146FD0 )
      v1->ActivationContextStackPointer = 0LL;
    if ( !v5 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)SbCleanupTrace();
  }
  return result;
}
