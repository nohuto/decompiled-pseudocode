/*
 * XREFs of NdisMWanIndicateReceiveComplete @ 0x1C0058B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanIndicateReceiveComplete(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // bp
  __int64 v6; // rsi

  v2 = (KSPIN_LOCK *)(a1 + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 725444;
  while ( 1 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    if ( !v6 )
      break;
    KeReleaseSpinLockFromDpcLevel(v2);
    (*(void (__fastcall **)(__int64))(v6 + 136))(a2);
    KeAcquireSpinLockAtDpcLevel(v2);
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 725458;
    v6 = *(_QWORD *)(v6 + 392);
  }
  KeReleaseSpinLock(v2, v5);
}
