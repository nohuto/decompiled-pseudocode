/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x140476B58
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x1404766CC (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x140533F94 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1405477A8 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x14054CAD8 (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned __int64 *v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi

  v4 = 0;
  if ( !a1 )
    return 0;
  v7 = a1 + 1;
  v8 = a2 - 16;
  v9 = KeAbPreAcquire((ULONG_PTR)(a1 + 1), 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v9, (ULONG_PTR)v7, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( (unsigned __int64)v8 < a1[2] && *(_QWORD *)(*a1 + 8LL * v8) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL * v8) = 0LL;
    v4 = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v4;
}
