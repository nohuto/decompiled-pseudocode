/*
 * XREFs of ndisFreeToNPagedPool @ 0x1C000FF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeToNPagedPool(__int64 a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // r8

  v1 = (_QWORD *)(a1 - 32);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 - 32) + 8LL));
  v3 = v1[1];
  v4 = (_QWORD *)v1[2];
  if ( *(_QWORD **)(v3 + 8) != v1 + 1 || (_QWORD *)*v4 != v1 + 1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(*v1 + 8LL), v2);
  ExFreePoolWithTag(v1, 0);
}
