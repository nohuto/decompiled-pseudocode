/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406542BC
 * Callers:
 *     SeShutdownServerSilo @ 0x14064D31C (SeShutdownServerSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 */

void __fastcall SepDeleteUnreferencedLogonSessionsInSilo(void *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // r15
  __int64 i; // rcx
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v8 = &SepRmDbLock + (v2 & 3);
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(_QWORD *)(v4 + v7); i; i = *(_QWORD *)i )
    {
      if ( *(void **)(i + 160) == a1 )
      {
        v10 = *(_QWORD *)(i + 24);
        if ( !v10 || (*(_DWORD *)(i + 32) & 8) == 0 && v10 == 1 )
        {
          v12 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          SepDeleteLogonSessionTrack(&v12, 0);
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = SepLogonSessions + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  PsDetachSiloFromCurrentThread(v3);
}
