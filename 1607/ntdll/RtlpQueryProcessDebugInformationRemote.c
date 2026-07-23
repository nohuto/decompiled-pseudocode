/*
 * XREFs of RtlpQueryProcessDebugInformationRemote @ 0x1800D5840
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 */

void __fastcall __noreturn RtlpQueryProcessDebugInformationRemote(_RTL_DEBUG_INFORMATION *BaseAddress)
{
  int ProcessDebugInformation; // edi
  ULONG_PTR ViewBaseDelta; // rdx
  PRTL_PROCESS_MODULES Modules; // rcx
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  unsigned int *Heaps; // rcx
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  PRTL_PROCESS_LOCKS Locks; // rax
  PRTL_PROCESS_VERIFIER_OPTIONS VerifierOptions; // rax

  ProcessDebugInformation = RtlQueryProcessDebugInformation(
                              NtCurrentTeb()->ClientId.UniqueProcess,
                              BaseAddress->Flags,
                              BaseAddress);
  if ( ProcessDebugInformation >= 0 )
  {
    ViewBaseDelta = BaseAddress->ViewBaseDelta;
    if ( ViewBaseDelta )
    {
      Modules = BaseAddress->Modules;
      if ( Modules )
        BaseAddress->Modules = (PRTL_PROCESS_MODULES)((char *)Modules + ViewBaseDelta);
      BackTraces = BaseAddress->BackTraces;
      if ( BackTraces )
        BaseAddress->BackTraces = (PRTL_PROCESS_BACKTRACES)((char *)BackTraces + ViewBaseDelta);
      Heaps = (unsigned int *)BaseAddress->Heaps;
      if ( Heaps )
      {
        v7 = 0;
        for ( BaseAddress->Heaps = (char *)Heaps + ViewBaseDelta; v7 < *Heaps; ++v7 )
        {
          v8 = 22LL * v7;
          v9 = *(_QWORD *)&Heaps[v8 + 20];
          if ( v9 )
            *(_QWORD *)&Heaps[v8 + 20] = ViewBaseDelta + v9;
          v10 = *(_QWORD *)&Heaps[v8 + 22];
          if ( v10 )
            *(_QWORD *)&Heaps[v8 + 22] = ViewBaseDelta + v10;
        }
      }
      Locks = BaseAddress->Locks;
      if ( Locks )
        BaseAddress->Locks = (PRTL_PROCESS_LOCKS)((char *)Locks + ViewBaseDelta);
      VerifierOptions = BaseAddress->VerifierOptions;
      if ( VerifierOptions )
        BaseAddress->VerifierOptions = (PRTL_PROCESS_VERIFIER_OPTIONS)((char *)VerifierOptions + ViewBaseDelta);
    }
  }
  BaseAddress->ViewBaseTarget = 0LL;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  RtlExitUserThread(ProcessDebugInformation);
}
