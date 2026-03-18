/*
 * XREFs of ExHandleTableQuery @ 0x1403EC340
 * Callers:
 *     ObGetProcessHandleCount @ 0x1403E94CC (ObGetProcessHandleCount.c)
 *     ExpCopyProcessInfo @ 0x1403EBED0 (ExpCopyProcessInfo.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

unsigned __int64 __fastcall ExHandleTableQuery(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int *v4; // rbp
  unsigned int v5; // edi
  unsigned int v6; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // r14d
  int v10; // eax
  unsigned int v11; // esi
  unsigned int *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = dword_1406FB03C;
  v11 = 0;
  if ( dword_1406FB03C )
  {
    do
    {
      v12 = &a1[16 * (unsigned __int64)v11];
      v13 = KeAbPreAcquire((ULONG_PTR)(v12 + 16), 0LL, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 16, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 8, v13, (ULONG_PTR)(v12 + 16));
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v9 += v12[22];
      ++v11;
      v6 += v12[23];
      v10 = dword_1406FB03C;
    }
    while ( v11 < dword_1406FB03C );
    v4 = a2;
    v3 = a3;
  }
  if ( v10 )
  {
    do
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1[16 * v5 + 16], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1[16 * v5 + 16]);
      KeAbPostRelease((ULONG_PTR)&a1[16 * ++v5]);
    }
    while ( v5 < dword_1406FB03C );
  }
  KeLeaveCriticalRegion();
  result = (unsigned __int64)*a1 >> 2;
  if ( v9 > (unsigned int)((255 * result) >> 8) )
    v9 = (255 * result) >> 8;
  if ( v6 > v9 )
    v6 = v9;
  if ( v4 )
    *v4 = v9;
  if ( v3 )
    *v3 = v6;
  return result;
}
