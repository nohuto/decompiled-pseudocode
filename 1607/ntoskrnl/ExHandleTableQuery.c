/*
 * XREFs of ExHandleTableQuery @ 0x14051B084
 * Callers:
 *     ObGetProcessHandleCount @ 0x14051B034 (ObGetProcessHandleCount.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall ExHandleTableQuery(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int *v8; // r15
  int v9; // eax
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  _BYTE *v12; // rax
  _BYTE *v13; // rbx
  unsigned int v14; // ebp
  unsigned __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0;
  v8 = a2;
  --CurrentThread->KernelApcDisable;
  v9 = dword_140757700;
  v10 = 0;
  if ( dword_140757700 )
  {
    do
    {
      v11 = (unsigned __int64)v10 << 6;
      v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)a1 + v11 + 64, 0LL, 0);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)((char *)a1 + v11 + 64), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)((char *)a1 + v11 + 64), v12, (ULONG_PTR)a1 + v11 + 64);
      if ( v13 )
        v13[26] |= 1u;
      v5 += *(unsigned int *)((char *)a1 + v11 + 88);
      ++v10;
      v6 += *(unsigned int *)((char *)a1 + v11 + 92);
      v9 = dword_140757700;
    }
    while ( v10 < dword_140757700 );
    v8 = a2;
  }
  v14 = 0;
  if ( v9 )
  {
    do
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1[16 * v14 + 16], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1[16 * v14 + 16]);
      KeAbPostRelease((ULONG_PTR)&a1[16 * ++v14]);
    }
    while ( v14 < dword_140757700 );
    v8 = a2;
  }
  KeLeaveCriticalRegion();
  result = (unsigned __int64)*a1 >> 2;
  if ( v5 > (unsigned int)((255 * result) >> 8) )
    v5 = (255 * result) >> 8;
  if ( v6 > v5 )
    v6 = v5;
  if ( v8 )
    *v8 = v5;
  if ( a3 )
    *a3 = v6;
  return result;
}
