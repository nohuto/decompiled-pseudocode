/*
 * XREFs of LdrShutdownProcess @ 0x18005B1A0
 * Callers:
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 * Callees:
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     RtlpInitializeActivationContextStackFrameList @ 0x1800428C0 (RtlpInitializeActivationContextStackFrameList.c)
 *     RtlProcessFlsData @ 0x18005B3E0 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x18005B770 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x18005B7E0 (RtlDetectHeapLeaks.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

_UNKNOWN **LdrShutdownProcess()
{
  _UNKNOWN **result; // rax
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  void *FlsData; // rcx
  char v4; // r15
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // r12
  void (*v8)(void); // rbx
  __int64 v9; // r9
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
  if ( !byte_180145248 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5632,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n");
    qword_180145250 = (__int64)v1->ClientId.UniqueThread;
    byte_180145248 = 1;
    if ( g_ShimsEnabled )
    {
      v8 = (void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
      _guard_check_icall_fptr();
      v8();
    }
    FlsData = v1->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( !v1->ActivationContextStackPointer )
    {
      dword_180146098 = 0;
      qword_180146080 = 0LL;
      qword_180146090 = (__int64)&qword_180146088;
      qword_180146088 = (__int64)&qword_180146088;
      dword_18014609C = 1;
      dword_1801460A0 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      RtlpInitializeActivationContextStackFrameList(dword_180146440);
      qword_180146448 = qword_180146088;
      qword_180146450 = v9;
      if ( *(_QWORD *)(qword_180146088 + 8) != v9 )
        __fastfail(3u);
      *(_QWORD *)(qword_180146088 + 8) = &qword_180146448;
      qword_180146088 = (__int64)&qword_180146448;
      v1->ActivationContextStackPointer = (_ACTIVATION_CONTEXT_STACK *)&qword_180146080;
    }
    if ( (ProcessEnvironmentBlock->BitField & 0x10) == 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_180145238;
      while ( v5 != &qword_180145230 )
      {
        v6 = (__int64)(v5 - 4);
        v5 = (__int64 *)v5[1];
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v6 + 56);
        if ( v7 && (*(_DWORD *)(v6 + 104) & 0x80000) != 0 )
        {
          v10 = 72LL;
          v11 = 1;
          memset(v12, 0, sizeof(v12));
          RtlActivateActivationContextUnsafeFast((__int64)&v10, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) )
            LdrpCallTlsInitializers(0, v6);
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v10);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v13 = 72LL;
        v14 = 1;
        memset(v15, 0, sizeof(v15));
        RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( (__int64 *)v1->ActivationContextStackPointer == &qword_180146080 )
      v1->ActivationContextStackPointer = 0LL;
    if ( !v4 )
      RtlDetectHeapLeaks();
    return (_UNKNOWN **)SbCleanupTrace();
  }
  return result;
}
