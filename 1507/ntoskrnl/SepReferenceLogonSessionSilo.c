/*
 * XREFs of SepReferenceLogonSessionSilo @ 0x14046E22C
 * Callers:
 *     SepReferenceLogonSession @ 0x14046E1E4 (SepReferenceLogonSession.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepSetServerSiloToken @ 0x1406D1220 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1406D5518 (SeGetLinkedToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SepReferenceLogonSessionSilo(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v9; // rsi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  v4 = *a1 & 0xF;
  v7 = SepLogonSessions + 8 * v4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v9, 1u);
  while ( 1 )
  {
    v7 = *(_QWORD *)v7;
    if ( !v7 )
      break;
    if ( *(_QWORD *)(v7 + 160) == a2 && *a1 == *(_DWORD *)(v7 + 8) && a1[1] == *(_DWORD *)(v7 + 12) )
    {
      _m_prefetchw((const void *)(v7 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 8u) & 8) != 0
        && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
      {
        __fastfail(0xEu);
      }
      ExReleaseResourceLite(v9);
      v10 = KeGetCurrentThread();
      v11 = v10->KernelApcDisable + 1;
      v10->KernelApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
        && !v10->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      *a3 = v7;
      return 0LL;
    }
  }
  ExReleaseResourceLite(v9);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225567LL;
}
