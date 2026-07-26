/*
 * XREFs of ndisFreeNblToNPagedPool @ 0x1C0007030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(__int64 a1)
{
  void *v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rcx
  _QWORD *v5; // r8

  v2 = *(void **)(a1 + 360);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 - 32) + 8LL));
  v4 = *(_QWORD *)(a1 - 24);
  v5 = *(_QWORD **)(a1 - 24 + 8);
  if ( *(_QWORD *)(v4 + 8) != a1 - 24 || *v5 != a1 - 24 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 - 32) + 8LL), v3);
  ExFreePoolWithTag((PVOID)(a1 - 32), 0);
}
