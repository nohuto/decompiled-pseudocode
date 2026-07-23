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

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  void *FlsData; // rcx
  char v3; // r15
  __int64 *v4; // rsi
  __int64 v5; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v6; // r12
  _RTL_DYNAMIC_HASH_TABLE *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  int v10; // [rsp+58h] [rbp-B0h]
  _BYTE v11[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-68h] BYREF
  int v13; // [rsp+A8h] [rbp-60h]
  _BYTE v14[56]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_180145248 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5632,
        (unsigned int)"LdrShutdownProcess",
        2,
        (__int64)"Process 0x%p (%wZ) exiting\n");
    qword_180145250 = (__int64)v0->ClientId.UniqueThread;
    byte_180145248 = 1;
    if ( g_ShimsEnabled )
    {
      v7 = (_RTL_DYNAMIC_HASH_TABLE *)(__ROR8__(
                                         g_pfnSE_ProcessDying,
                                         64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]);
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        v7,
        (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)(unsigned int)MEMORY[0x7FFE0330]);
      ((void (*)(void))v7)();
    }
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData);
    if ( !v0->ActivationContextStackPointer )
    {
      dword_180146098 = 0;
      qword_180146080 = 0LL;
      qword_180146090 = (__int64)&qword_180146088;
      qword_180146088 = (__int64)&qword_180146088;
      dword_18014609C = 1;
      dword_1801460A0 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      RtlpInitializeActivationContextStackFrameList(dword_180146440);
      qword_180146448 = qword_180146088;
      qword_180146450 = v8;
      if ( *(_QWORD *)(qword_180146088 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)(qword_180146088 + 8) = &qword_180146448;
      qword_180146088 = (__int64)&qword_180146448;
      v0->ActivationContextStackPointer = (_ACTIVATION_CONTEXT_STACK *)&qword_180146080;
    }
    if ( (ProcessEnvironmentBlock->BitField & 0x10) == 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
    {
      v3 = 0;
      v4 = (__int64 *)qword_180145238;
      while ( v4 != &qword_180145230 )
      {
        v5 = (__int64)(v4 - 4);
        v4 = (__int64 *)v4[1];
        v6 = *(_RTL_DYNAMIC_HASH_TABLE **)(v5 + 56);
        if ( v6 && (*(_DWORD *)(v5 + 104) & 0x80000) != 0 )
        {
          v9 = 72LL;
          v10 = 1;
          memset(v11, 0, sizeof(v11));
          RtlActivateActivationContextUnsafeFast((__int64)&v9, *(_QWORD *)(v5 + 136));
          if ( *(_WORD *)(v5 + 110) )
            LdrpCallTlsInitializers(0LL, v5);
          LdrpCallInitRoutine(v6, *(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR **)(v5 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v9);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v12 = 72LL;
        v13 = 1;
        memset(v14, 0, sizeof(v14));
        RtlActivateActivationContextUnsafeFast((__int64)&v12, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
      }
    }
    else
    {
      v3 = 1;
    }
    if ( (__int64 *)v0->ActivationContextStackPointer == &qword_180146080 )
      v0->ActivationContextStackPointer = 0LL;
    if ( !v3 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
