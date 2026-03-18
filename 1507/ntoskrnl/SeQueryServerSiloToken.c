/*
 * XREFs of SeQueryServerSiloToken @ 0x14054D97C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406D5084 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SeQueryServerSiloToken(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225659LL;
  }
  else
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    v5 = KeGetCurrentThread();
    v6 = v5->KernelApcDisable + 1;
    v5->KernelApcDisable = v6;
    if ( !v6
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
      && !v5->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
}
