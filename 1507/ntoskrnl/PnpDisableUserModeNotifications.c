/*
 * XREFs of PnpDisableUserModeNotifications @ 0x1401FB4EC
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall PnpDisableUserModeNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  void **v9; // rsi
  __int64 v10; // r15
  char *v11; // rbp
  char *v12; // rbx
  ULONG_PTR v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int8 v16; // r12
  ULONG_PTR v17; // rdi
  unsigned __int8 v18; // r14
  signed __int32 v19; // eax
  unsigned __int8 v20; // bl
  signed __int32 v21; // eax
  void **v23; // [rsp+70h] [rbp+18h]
  __int64 v24; // [rsp+78h] [rbp+20h]

  v5 = KeAbPreAcquire((ULONG_PTR)&PiUEventClientRegistrationListLock, 0LL, 0LL, a4);
  v7 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventClientRegistrationListLock, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = (void **)&PiUEventDevHandleClientList;
  qword_14034AB68 = (__int64)KeGetCurrentThread();
  v10 = 14LL;
  v11 = (char *)&PiUEventDevHandleClientList;
  dword_14034AB90 = CurrentIrql;
  v23 = (void **)&PiUEventDevHandleClientList;
  v24 = 14LL;
  do
  {
    v12 = (char *)*v9;
    if ( *v9 != v11 )
    {
      do
      {
        v13 = *((_QWORD *)v12 + 2);
        v14 = KeAbPreAcquire(v13, 0LL, 0LL, v6);
        v15 = v14;
        v16 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v13, 0) )
          ExpAcquireFastMutexContended(v13, v14);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v13 + 48) = v16;
        if ( *((_QWORD *)v12 + 6) == *(_QWORD *)(a2 + 744) && *((_QWORD *)v12 + 4) == a1 )
          v12[40] = 1;
        v17 = *((_QWORD *)v12 + 2);
        *(_QWORD *)(v17 + 8) = 0LL;
        v18 = *(_BYTE *)(v17 + 48);
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
        if ( v19 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v19);
        __writecr8(v18);
        KeAbPostRelease(v17);
        v12 = *(char **)v12;
      }
      while ( v12 != v11 );
      v9 = v23;
      v10 = v24;
    }
    v9 += 2;
    v11 += 16;
    --v10;
    v23 = v9;
    v24 = v10;
  }
  while ( v10 );
  qword_14034AB68 = 0LL;
  v20 = dword_14034AB90;
  v21 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
  if ( v21 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v21);
  __writecr8(v20);
  KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
}
