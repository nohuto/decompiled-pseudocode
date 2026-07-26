/*
 * XREFs of ndis5QueuedMiniportDpcWorkItem @ 0x1C005C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMDpc @ 0x1C005C334 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C005C578 (ndisMDpcX.c)
 */

void __fastcall ndis5QueuedMiniportDpcWorkItem(__int64 a1)
{
  __int64 v1; // rbp
  KIRQL v3; // si
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 120) &= ~0x2000000u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
    ndisMDpcX(v4, v1);
  else
    ndisMDpc(v4, v1);
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceMiniport(a1, 0x4Cu);
}
