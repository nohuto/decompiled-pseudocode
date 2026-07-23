/*
 * XREFs of _PnpCtxCloseMachine @ 0x1406D6FDC
 * Callers:
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     _SysCtxCloseMachine @ 0x1406DFA24 (_SysCtxCloseMachine.c)
 */

__int64 __fastcall PnpCtxCloseMachine(PERESOURCE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v3; // rcx
  PERESOURCE v4; // rcx
  PERESOURCE v5; // rcx
  PERESOURCE v6; // rcx
  PERESOURCE v7; // rcx
  PERESOURCE v8; // rcx
  PERESOURCE v9; // rcx
  PERESOURCE v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _ERESOURCE *v14; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(P[10], 1u);
  v3 = P[2];
  if ( v3 )
    ZwClose(v3);
  v4 = P[3];
  if ( v4 )
    ZwClose(v4);
  v5 = P[4];
  if ( v5 )
    ZwClose(v5);
  v6 = P[5];
  if ( v6 )
    ZwClose(v6);
  v7 = P[6];
  if ( v7 )
    ZwClose(v7);
  v8 = P[7];
  if ( v8 )
    ZwClose(v8);
  v9 = P[8];
  if ( v9 )
    ZwClose(v9);
  v10 = P[9];
  if ( v10 )
    ZwClose(v10);
  if ( *P )
    SysCtxCloseMachine(*P);
  ExReleaseResourceLite(P[10]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  v14 = P[10];
  ExDeleteResourceLite(v14);
  ExFreePoolWithTag(v14, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
