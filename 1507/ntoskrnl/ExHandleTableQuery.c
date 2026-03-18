/*
 * XREFs of ExHandleTableQuery @ 0x1405086B0
 * Callers:
 *     ObGetProcessHandleCount @ 0x140508648 (ObGetProcessHandleCount.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall ExHandleTableQuery(unsigned int *a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // r13
  unsigned int *v7; // r14
  unsigned int v8; // edi
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // ebp
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ebp
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  unsigned __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = dword_14077E03C;
  v11 = 0;
  if ( dword_14077E03C )
  {
    do
    {
      v12 = (unsigned __int64)v11 << 6;
      v13 = KeAbPreAcquire((ULONG_PTR)a1 + v12 + 64, 0LL, 0LL, a4);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)((char *)a1 + v12 + 64), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)((char *)a1 + v12 + 64), v13, (ULONG_PTR)a1 + v12 + 64, a4);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v8 += *(unsigned int *)((char *)a1 + v12 + 88);
      ++v11;
      v9 += *(unsigned int *)((char *)a1 + v12 + 92);
      v10 = dword_14077E03C;
    }
    while ( v11 < dword_14077E03C );
    v6 = a3;
    v7 = a2;
  }
  v15 = 0;
  if ( v10 )
  {
    do
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1[16 * v15 + 16], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1[16 * v15 + 16]);
      KeAbPostRelease((ULONG_PTR)&a1[16 * ++v15]);
    }
    while ( v15 < dword_14077E03C );
  }
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  result = (unsigned __int64)*a1 >> 2;
  if ( v8 > (unsigned int)((255 * result) >> 8) )
    v8 = (255 * result) >> 8;
  if ( v9 > v8 )
    v9 = v8;
  if ( v7 )
    *v7 = v8;
  if ( v6 )
    *v6 = v9;
  return result;
}
