/*
 * XREFs of CmpRemoveFromDelayedDeref @ 0x1404BAD8C
 * Callers:
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

char __fastcall CmpRemoveFromDelayedDeref(__int64 a1)
{
  char v2; // di
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v3 = (_QWORD *)(a1 + 216);
    v4 = *(_QWORD *)(a1 + 216);
    v5 = *(_QWORD **)(a1 + 224);
    if ( *(_QWORD *)(v4 + 8) != a1 + 216 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *v3 = v3;
    _InterlockedOr(v7, 0);
    *(_DWORD *)(a1 + 8) &= ~1u;
    v2 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  return v2;
}
