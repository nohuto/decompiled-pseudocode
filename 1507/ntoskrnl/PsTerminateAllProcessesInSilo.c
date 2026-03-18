/*
 * XREFs of PsTerminateAllProcessesInSilo @ 0x1406C1334
 * Callers:
 *     PsTerminateServerSilo @ 0x1402443F4 (PsTerminateServerSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PspGetServerSiloForSilo @ 0x1400CEE80 (PspGetServerSiloForSilo.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 */

char __fastcall PsTerminateAllProcessesInSilo(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // r12
  struct _ERESOURCE *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbp
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  struct _KTHREAD *v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  struct _KTHREAD *v14; // rax
  __int64 i; // rcx
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  struct _KTHREAD *v19; // rax
  _QWORD *ServerSiloForSilo; // rax
  int *ServerSiloGlobals; // rax
  __int64 v22; // rbx
  int v23; // r15d
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  unsigned int SessionId; // eax
  __int64 v28; // r9
  struct _KTHREAD *v29; // rax
  struct _KTHREAD *v30; // rdx
  __int16 v31; // cx
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (struct _ERESOURCE *)(a1 + 48);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 48), 1u);
  v7 = *(_QWORD *)(v4 + 192);
  v8 = v4 + 184;
  if ( v4 + 184 != v7 )
  {
    do
    {
      if ( (*(_DWORD *)(v7 - 1840 + 1716) & 0x100) == 0
        && (*(_DWORD *)(v7 - 1840 + 772) & 8) == 0
        && ObReferenceObjectSafe(v7 - 1840) )
      {
        ExReleaseResourceLite(v6);
        v9 = KeGetCurrentThread();
        v10 = v9->SpecialApcDisable + 1;
        v9->SpecialApcDisable = v10;
        if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
          KiCheckForKernelApcDelivery();
        if ( (int)PsTerminateProcess(v7 - 1840, a2) >= 0 )
          v5 = 1;
        ObfDereferenceObject((PVOID)(v7 - 1840));
        v11 = KeGetCurrentThread();
        --v11->SpecialApcDisable;
        ExAcquireResourceSharedLite(v6, 1u);
        v7 = v4 + 184;
      }
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v8 != v7 );
    v4 = a1;
  }
  ExReleaseResourceLite(v6);
  v12 = KeGetCurrentThread();
  v13 = v12->SpecialApcDisable + 1;
  v12->SpecialApcDisable = v13;
  if ( !v13 && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  v14 = KeGetCurrentThread();
  --v14->SpecialApcDisable;
  ExAcquireResourceSharedLite(v6, 1u);
  for ( i = *(_QWORD *)(v4 + 192); v8 != i; i = *(_QWORD *)(i + 8) )
  {
    v16 = i - 1840;
    if ( (*(_DWORD *)(i - 1840 + 1716) & 0x100) == 0
      && (*(_DWORD *)(v16 + 772) & 8) != 0
      && (_KPROCESS *)v16 != KeGetCurrentThread()->ApcState.Process )
    {
      ExReleaseResourceLite(v6);
      v17 = KeGetCurrentThread();
      v18 = v17->SpecialApcDisable + 1;
      v17->SpecialApcDisable = v18;
      if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery();
      if ( (PspDebugFlags & 0x100) != 0 && (PspDebugFlags & 0x200) != 0 )
        __debugbreak();
      Interval.QuadPart = -30000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v19 = KeGetCurrentThread();
      --v19->SpecialApcDisable;
      ExAcquireResourceSharedLite(v6, 1u);
      i = v8;
    }
  }
  ServerSiloForSilo = (_QWORD *)PspGetServerSiloForSilo(v4);
  ServerSiloGlobals = (int *)PsGetServerSiloGlobals(ServerSiloForSilo);
  v22 = *(_QWORD *)(v4 + 192);
  v23 = *ServerSiloGlobals;
  while ( v8 != v22 )
  {
    if ( (unsigned int)MmGetSessionId((struct _KPROCESS *)(v22 - 1840)) != v23
      && (*(_DWORD *)(v22 - 1840 + 772) & 8) == 0
      && ObReferenceObjectSafe(v24) )
    {
      ExReleaseResourceLite(v6);
      v25 = KeGetCurrentThread();
      v26 = v25->SpecialApcDisable + 1;
      v25->SpecialApcDisable = v26;
      if ( !v26 && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery();
      SessionId = MmGetSessionId((struct _KPROCESS *)(v22 - 1840));
      CsrShutdownSynchronization(v4, SessionId, (_KPROCESS *)(v22 - 1840), v28);
      ObfDereferenceObject((PVOID)(v22 - 1840));
      v29 = KeGetCurrentThread();
      --v29->SpecialApcDisable;
      ExAcquireResourceSharedLite(v6, 1u);
      v22 = v8;
    }
    v22 = *(_QWORD *)(v22 + 8);
  }
  ExReleaseResourceLite(v6);
  v30 = KeGetCurrentThread();
  v31 = v30->SpecialApcDisable + 1;
  v30->SpecialApcDisable = v31;
  if ( !v31 && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
