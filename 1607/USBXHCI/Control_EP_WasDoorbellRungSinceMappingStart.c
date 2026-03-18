/*
 * XREFs of Control_EP_WasDoorbellRungSinceMappingStart @ 0x1C0029810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Control_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 88);
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_BYTE *)(v2 + 96) = v3;
  LODWORD(v2) = *(_DWORD *)(v2 + 304) & 1;
  KeReleaseSpinLock(v1, v3);
  return (_DWORD)v2 == 1;
}
