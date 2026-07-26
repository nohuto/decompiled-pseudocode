/*
 * XREFs of EthFilterDprIndicateReceiveComplete @ 0x1C00610E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000DF90 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000E320 (NdisAcquireRWLockRead.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EthFilterDprIndicateReceiveComplete(__int64 a1)
{
  unsigned int Number; // r14d
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _LOCK_STATE_EX LockState; // [rsp+50h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  if ( a1 )
  {
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState, 0);
    v3 = (__int64 *)a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = Number << 12;
        do
        {
          v6 = *(_QWORD *)(v4 + 816);
          v7 = *(_QWORD *)(v4 + 424);
          if ( *(_BYTE *)(v6 + v5) )
          {
            *(_BYTE *)(v6 + v5) = 0;
            (*(void (__fastcall **)(_QWORD))(v4 + 136))(*(_QWORD *)(v4 + 32));
          }
          v4 = v7;
        }
        while ( v7 );
      }
      if ( v3 == (__int64 *)(a1 + 8) )
        v3 = 0LL;
      if ( v3 == (__int64 *)(a1 + 16) )
        v3 = (__int64 *)(a1 + 8);
      if ( v3 == (__int64 *)a1 )
        v3 = (__int64 *)(a1 + 16);
    }
    while ( v3 && *v3 );
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState);
  }
}
