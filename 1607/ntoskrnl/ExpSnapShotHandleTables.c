/*
 * XREFs of ExpSnapShotHandleTables @ 0x1406AD780
 * Callers:
 *     ObGetHandleInformation @ 0x1406660E0 (ObGetHandleInformation.c)
 *     ObGetHandleInformationEx @ 0x140666130 (ObGetHandleInformationEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(_DWORD **, _QWORD, volatile signed __int64 *, __int64, int, __int64),
        _DWORD *a2,
        int a3,
        __int64 a4,
        char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *v6; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 *v11; // rsi
  int v12; // r12d
  unsigned int *v13; // r15
  __int64 i; // rbx
  volatile signed __int64 *v15; // rax
  volatile signed __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+38h] [rbp-40h]
  _DWORD *v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  CurrentThread = KeGetCurrentThread();
  v6 = a2 + 2;
  v21 = (__int64)CurrentThread;
  v9 = 0;
  if ( a5 )
    v6 = a2 + 4;
  v23 = v6;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&HandleTableListLock, v10, (ULONG_PTR)&HandleTableListLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = (__int64 *)HandleTableListHead;
  v12 = v24;
  while ( (((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -1073741820) && v11 != &HandleTableListHead )
  {
    v13 = (unsigned int *)(v11 - 3);
    for ( i = 0LL; ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -1073741820; i += 4LL )
    {
      v15 = (volatile signed __int64 *)ExpLookupHandleTableEntry(v13, i);
      v16 = v15;
      if ( !v15 )
        break;
      if ( (i & 0x3FC) != 0 && *v15 )
      {
        if ( ExLockHandleTableEntry((__int64)v13, v15) )
        {
          ++*a2;
          v9 = a1(&v23, v13[10], v16, i, v12, a4);
          ExUnlockHandleTableEntry((__int64)v13, v16);
        }
      }
    }
    v11 = (__int64 *)*v11;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  KiLeaveCriticalRegionUnsafe(v21, v17, v18, v19);
  return v9;
}
