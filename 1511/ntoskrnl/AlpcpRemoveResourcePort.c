/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1403F4AAC
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1403F4A08 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404B1F24 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1404B474C (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1404BF96C (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  v4 = KeAbPreAcquire(a1 + 328, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (ULONG_PTR)v2);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
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
  KeAbPostRelease((ULONG_PTR)v2);
}
