/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1403F4B54
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x1403F4A08 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404B1F24 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1404B474C (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1404BF96C (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

char __fastcall AlpcDeleteBlobByHandle(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  unsigned __int64 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rsi

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = (unsigned __int64 *)(a1 + 16);
  v7 = a2 - 16;
  v8 = KeAbPreAcquire(a1 + 16, 0LL, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( v7 < *(_DWORD *)(a1 + 8) && *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) == a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v3;
}
