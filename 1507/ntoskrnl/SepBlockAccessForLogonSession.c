/*
 * XREFs of SepBlockAccessForLogonSession @ 0x140568F80
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140568F58 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rsi
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

  v2 = *a1 & 0xF;
  v3 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    if ( PsEqualCurrentServerSilo(*(_QWORD *)(v3 + 160)) && *a1 == *(_DWORD *)(v3 + 8) && a1[1] == *(_DWORD *)(v3 + 12) )
    {
      *(_DWORD *)(v3 + 32) |= 0x20u;
      ExReleaseResourceLite(v5);
      v6 = KeGetCurrentThread();
      v7 = v6->KernelApcDisable + 1;
      v6->KernelApcDisable = v7;
      if ( !v7
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
        && !v6->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 0LL;
    }
  }
  ExReleaseResourceLite(v5);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225567LL;
}
