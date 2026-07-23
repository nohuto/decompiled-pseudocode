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

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r15
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v7; // r12
  _RTL_DYNAMIC_HASH_TABLE *v8; // rbx
  __int64 v9; // r9
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+58h] [rbp-B0h]
  _BYTE v13[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-68h] BYREF
  int v15; // [rsp+A8h] [rbp-60h]
  _BYTE v16[56]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
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
        (__int64)"Process 0x%p (%wZ) exiting\n",
        v0->ClientId.UniqueProcess,
        &CommandLine);
    qword_180146210 = (__int64)v0->ClientId.UniqueThread;
    byte_180146208 = 1;
    if ( g_ShimsEnabled )
    {
      v8 = (_RTL_DYNAMIC_HASH_TABLE *)(__ROR8__(
                                         g_pfnSE_ProcessDying,
                                         64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]);
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        v8,
        (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)(unsigned int)MEMORY[0x7FFE0330]);
      ((void (*)(void))v8)();
    }
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( !v0->ActivationContextStackPointer )
    {
      dword_180146FE8 = 0;
      qword_180146FD0 = 0LL;
      qword_180146FE0 = (__int64)&qword_180146FD8;
      qword_180146FD8 = (__int64)&qword_180146FD8;
      dword_180146FEC = 1;
      dword_180146FF0 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      RtlpInitializeActivationContextStackFrameList(&unk_180147780);
      qword_180147788 = qword_180146FD8;
      qword_180147790 = v9;
      if ( *(_QWORD *)(qword_180146FD8 + 8) != v9 )
        __fastfail(3u);
      *(_QWORD *)(qword_180146FD8 + 8) = &qword_180147788;
      qword_180146FD8 = (__int64)&qword_180147788;
      v0->ActivationContextStackPointer = (_ACTIVATION_CONTEXT_STACK *)&qword_180146FD0;
    }
    if ( (ProcessEnvironmentBlock->BitField & 0x10) == 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_1801461F8;
      while ( v5 != &qword_1801461F0 )
      {
        v6 = v5 - 4;
        v5 = (__int64 *)v5[1];
        v7 = (_RTL_DYNAMIC_HASH_TABLE *)v6[7];
        if ( v7 && (v6[13] & 0x80000) != 0 )
        {
          v11 = 72LL;
          v12 = 1;
          memset(v13, 0, sizeof(v13));
          RtlActivateActivationContextUnsafeFast((__int64)&v11, v6[17]);
          if ( *((_WORD *)v6 + 55) )
            LdrpCallTlsInitializers(0LL, v6);
          LdrpCallInitRoutine(v7, (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)v6[6], 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v11);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v14 = 72LL;
        v15 = 1;
        memset(v16, 0, sizeof(v16));
        RtlActivateActivationContextUnsafeFast((__int64)&v14, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( (__int64 *)v0->ActivationContextStackPointer == &qword_180146FD0 )
      v0->ActivationContextStackPointer = 0LL;
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
