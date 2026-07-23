/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x140220F04
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x140221054 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmQueryWorkingSetInformation @ 0x14009EE10 (MmQueryWorkingSetInformation.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1401E296C (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rsi
  int v9; // esi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v19[6]; // [rsp+48h] [rbp-30h] BYREF
  int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v7, (ULONG_PTR)BugCheckParameter2);
  if ( v8 )
    v8[26] |= 1u;
  if ( a3 >= BugCheckParameter2[2] )
  {
    do
    {
      v9 = MmQueryWorkingSetInformation(v19, &v18, &v17, &v21, &v16, &v20);
      if ( v9 < 0 )
        break;
      v10 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v11 = v10 + v21;
      if ( v10 + v21 <= v21 )
      {
        v9 = -1073741675;
        break;
      }
      v12 = v16;
      v21 += v10;
      if ( v11 > v16 )
        v12 = v11;
      v16 = v12;
      v13 = MmAdjustWorkingSetSize(v11, v12, 0, 1);
      v9 = v13;
      if ( v13 >= 0 )
      {
        v14 = BugCheckParameter2[2];
        if ( v14 + v10 > v14 )
          BugCheckParameter2[2] = v14 + v10;
        v9 = 0;
        break;
      }
    }
    while ( v13 == -1073741748 );
  }
  else
  {
    v9 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
