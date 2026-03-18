/*
 * XREFs of PiDqIrpCancel @ 0x1401BFF8C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     PiDqQueryUnlock @ 0x14045E710 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14045E768 (PiDqQueryLock.c)
 */

__int64 __fastcall PiDqIrpCancel(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rbx
  __int64 result; // rax

  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL) + 32LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  PiDqQueryLock(v4);
  if ( *(_QWORD *)(v4 + 176) )
  {
    *(_DWORD *)(v4 + 216) &= ~0x10u;
    v3 = 1;
    *(_QWORD *)(v4 + 176) = 0LL;
  }
  result = PiDqQueryUnlock(v4);
  if ( v3 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741536;
    return pIofCompleteRequest(a2, 0LL);
  }
  return result;
}
