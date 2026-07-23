/*
 * XREFs of AlpcpRemoveResourcePort @ 0x14042A214
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1404ACA94 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404ACB00 (AlpcSectionDeleteProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404ACB64 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1404BB540 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  v4 = (_BYTE *)KeAbPreAcquire(a1 + 328, 0LL, 0);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (ULONG_PTR)v2);
  if ( v5 )
    v5[26] |= 1u;
  v6 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    v7 = (_QWORD *)v3[1];
    if ( (_QWORD *)v6[1] != v3 || (_QWORD *)*v7 != v3 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
