/*
 * XREFs of PspRemoveProcessFromSilo @ 0x1406C2778
 * Callers:
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

LONG_PTR __fastcall PspRemoveProcessFromSilo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  bool v8; // zf
  struct _KEVENT *v9; // rcx
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 48), 1u);
  *(_QWORD *)(a2 + 1832) = 0LL;
  v5 = (_QWORD *)(a2 + 1840);
  v6 = *v5;
  v7 = (_QWORD *)v5[1];
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (*(_DWORD *)(a1 + 180))-- == 1;
  if ( v8 && !*(_DWORD *)(a1 + 176) )
  {
    v9 = (struct _KEVENT *)a1;
    if ( *(_QWORD *)(a1 + 256) )
      v9 = (struct _KEVENT *)(a1 + 232);
    KeSetEvent(v9, 0, 0);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 48));
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable + 1;
  v10->SpecialApcDisable = v11;
  if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return PspDereferenceSiloObject((void *)a1);
}
