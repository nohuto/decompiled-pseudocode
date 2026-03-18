/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406D62B4
 * Callers:
 *     SeShutdownServerSilo @ 0x1406D0480 (SeShutdownServerSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 */

void __fastcall SepDeleteUnreferencedLogonSessionsInSilo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rbx
  struct _ERESOURCE *v11; // rbp
  _QWORD *i; // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v5 = PsAttachSiloToCurrentThread(a1, a2, a3, a4);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v10 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v11 = &SepRmDbLock + (v6 & 3);
    ExAcquireResourceExclusiveLite(v11, 1u);
    for ( i = *(_QWORD **)(v7 + v10); i; i = (_QWORD *)*i )
    {
      if ( i[20] == a1 && !i[3] )
      {
        v18 = i[1];
        ExReleaseResourceLite(v11);
        v13 = KeGetCurrentThread();
        v14 = v13->KernelApcDisable + 1;
        v13->KernelApcDisable = v14;
        if ( !v14
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
          && !v13->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        SepDeleteLogonSessionTrack(&v18, 0);
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquireResourceExclusiveLite(v11, 1u);
        i = (_QWORD *)(SepLogonSessions + 8 * v6);
      }
    }
    ExReleaseResourceLite(v11);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ++v6;
    v7 += 8LL;
    --v8;
  }
  while ( v8 );
  PsDetachSiloFromCurrentThread(v5);
}
