/*
 * XREFs of CmpRemoveFromDelayedDeref @ 0x14054DEEC
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

char __fastcall CmpRemoveFromDelayedDeref(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
  *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v9 = (_QWORD *)(a1 + 216);
    v10 = *(_QWORD *)(a1 + 216);
    v11 = *(_QWORD **)(a1 + 224);
    if ( *(_QWORD *)(v10 + 8) != a1 + 216 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *v9 = v9;
    _InterlockedOr(v15, 0);
    *(_DWORD *)(a1 + 8) &= ~1u;
    v5 = 1;
  }
  *(&CmpDelayDerefKCBLock + 1) = 0LL;
  v12 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
  return v5;
}
