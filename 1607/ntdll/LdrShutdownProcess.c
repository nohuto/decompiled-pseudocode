/*
 * XREFs of LdrShutdownProcess @ 0x180006F20
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 * Callees:
 *     RtlProcessFlsData @ 0x180007190 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180007500 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180007560 (RtlDetectHeapLeaks.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     RtlpInitializeActivationContextStackFrameList @ 0x180069650 (RtlpInitializeActivationContextStackFrameList.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  char v3; // r14
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r9
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  int v10; // [rsp+58h] [rbp-B0h]
  _BYTE v11[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-68h] BYREF
  int v13; // [rsp+A8h] [rbp-60h]
  _BYTE v14[56]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_180152408 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5717,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &CommandLine);
    qword_180152410 = (__int64)v0->ClientId.UniqueThread;
    byte_180152408 = 1;
    if ( g_ShimsEnabled )
      _guard_dispatch_icall_fptr();
    if ( v0->FlsData )
      RtlProcessFlsData();
    if ( !v0->ActivationContextStackPointer )
    {
      dword_1801531D8 = 0;
      qword_1801531C0 = 0LL;
      qword_1801531D0 = (__int64)&qword_1801531C8;
      qword_1801531C8 = (__int64)(&qword_1801531C0 + 1);
      dword_1801531DC = 1;
      dword_1801531E0 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      RtlpInitializeActivationContextStackFrameList(&unk_180153570);
      if ( *(_QWORD *)(qword_1801531C8 + 8) != v7 )
        __fastfail(3u);
      qword_180153578 = qword_1801531C8;
      qword_180153580 = v7;
      *(_QWORD *)(qword_1801531C8 + 8) = &qword_180153578;
      qword_1801531C8 = (__int64)&qword_180153578;
      v0->ActivationContextStackPointer = (_ACTIVATION_CONTEXT_STACK *)&qword_1801531C0;
    }
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v3 = 0;
      v4 = (__int64 *)qword_1801523F8;
      while ( v4 != &qword_1801523F0 )
      {
        v5 = v4 - 4;
        v4 = (__int64 *)v4[1];
        v6 = v5[7];
        if ( v6 && (v5[13] & 0x80000) != 0 )
        {
          v9 = 72LL;
          v10 = 1;
          memset(v11, 0, sizeof(v11));
          RtlActivateActivationContextUnsafeFast(&v9, v5[17]);
          if ( *((_WORD *)v5 + 55) )
            LdrpCallTlsInitializers(0LL, v5);
          LdrpCallInitRoutine(v6, v5[6], 0LL, 1LL);
          RtlDeactivateActivationContextUnsafeFast(&v9);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v12 = 72LL;
        v13 = 1;
        memset(v14, 0, sizeof(v14));
        RtlActivateActivationContextUnsafeFast(&v12, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(&v12);
      }
    }
    else
    {
      v3 = 1;
    }
    if ( (__int64 *)v0->ActivationContextStackPointer == &qword_1801531C0 )
      v0->ActivationContextStackPointer = 0LL;
    if ( !v3 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
