/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1404ACC08
 * Callers:
 *     AlpcReserveDestroyProcedure @ 0x1404ACA94 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404ACB00 (AlpcSectionDeleteProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404ACB64 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1404BB540 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  unsigned __int64 *v6; // rbx
  unsigned int v7; // ebp
  _BYTE *v8; // rax
  _BYTE *v9; // rsi

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = a1 + 1;
  v7 = a2 - 16;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 1), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
  if ( v9 )
    v9[26] |= 1u;
  if ( (unsigned __int64)v7 < a1[2] && *(_QWORD *)(*a1 + 8LL * v7) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL * v7) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v3;
}
