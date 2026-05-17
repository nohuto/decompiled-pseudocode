/*
 * XREFs of LdrShutdownProcess @ 0x180006F30
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 * Callees:
 *     RtlProcessFlsData @ 0x1800071A0 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180007510 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180007570 (RtlDetectHeapLeaks.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800188C4 (LdrpCallInitRoutine.c)
 *     RtlpInitializeActivationContextStackFrameList @ 0x180069660 (RtlpInitializeActivationContextStackFrameList.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

_UNKNOWN **LdrShutdownProcess()
{
  _UNKNOWN **result; // rax
  struct _TEB *v1; // rbx
  _PEB *ProcessEnvironmentBlock; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  char v4; // r14
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r9
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  int v11; // [rsp+58h] [rbp-B0h]
  _BYTE v12[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-68h] BYREF
  int v14; // [rsp+A8h] [rbp-60h]
  _BYTE v15[56]; // [rsp+B0h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
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
        v1->ClientId.UniqueProcess,
        &CommandLine);
    qword_180152410 = (__int64)v1->ClientId.UniqueThread;
    byte_180152408 = 1;
    if ( g_ShimsEnabled )
      _guard_dispatch_icall_fptr();
    if ( v1->FlsData )
      RtlProcessFlsData();
    if ( !v1->ActivationContextStackPointer )
    {
      dword_1801531D8 = 0;
      qword_1801531C0 = 0LL;
      qword_1801531D0 = (__int64)&qword_1801531C8;
      qword_1801531C8 = (__int64)(&qword_1801531C0 + 1);
      dword_1801531DC = 1;
      dword_1801531E0 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      RtlpInitializeActivationContextStackFrameList(&unk_180153570);
      if ( *(_QWORD *)(qword_1801531C8 + 8) != v8 )
        __fastfail(3u);
      qword_180153578 = qword_1801531C8;
      qword_180153580 = v8;
      *(_QWORD *)(qword_1801531C8 + 8) = &qword_180153578;
      qword_1801531C8 = (__int64)&qword_180153578;
      v1->ActivationContextStackPointer = (_ACTIVATION_CONTEXT_STACK *)&qword_1801531C0;
    }
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_1801523F8;
      while ( v5 != &qword_1801523F0 )
      {
        v6 = v5 - 4;
        v5 = (__int64 *)v5[1];
        v7 = v6[7];
        if ( v7 && (v6[13] & 0x80000) != 0 )
        {
          v10 = 72LL;
          v11 = 1;
          memset(v12, 0, sizeof(v12));
          RtlActivateActivationContextUnsafeFast(&v10, v6[17]);
          if ( *((_WORD *)v6 + 55) )
            LdrpCallTlsInitializers(0LL, v6);
          LdrpCallInitRoutine(v7, v6[6], 0LL, 1LL);
          RtlDeactivateActivationContextUnsafeFast(&v10);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v13 = 72LL;
        v14 = 1;
        memset(v15, 0, sizeof(v15));
        RtlActivateActivationContextUnsafeFast(&v13, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(&v13);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( (__int64 *)v1->ActivationContextStackPointer == &qword_1801531C0 )
      v1->ActivationContextStackPointer = 0LL;
    if ( !v4 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)SbCleanupTrace();
  }
  return result;
}
