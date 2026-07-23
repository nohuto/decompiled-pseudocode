/*
 * XREFs of VmpPauseResumeNotify @ 0x14069B6B8
 * Callers:
 *     VmPauseResumeNotify @ 0x14069B610 (VmPauseResumeNotify.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r12d
  unsigned __int64 *v6; // rsi
  char v7; // di
  _BYTE *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // r14
  int v13; // eax
  NTSTATUS v14; // r14d
  _BYTE *v15; // rax
  _BYTE *v16; // r15
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+28h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 80);
  v7 = 3;
  v8 = (_BYTE *)KeAbPreAcquire(a1 + 80, 0LL, 0);
  v12 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
  if ( v12 )
    v12[26] |= 1u;
  v13 = *(_DWORD *)(a1 + 88);
  if ( (v13 & 1) != 0 )
  {
    v14 = -1073740682;
    goto LABEL_24;
  }
  if ( a2 )
  {
    if ( (v13 & 6) != 0 )
    {
      v14 = -1073741811;
      goto LABEL_24;
    }
  }
  else if ( (v13 & 6) == 0 )
  {
    v14 = 1075380276;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 + 88) = v13 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v7 = 6;
  v18 = 3LL;
  v19 = 0;
  if ( a2 )
  {
    if ( a2 >= 1 )
    {
      v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[44] << 12 >> 20;
      if ( v9 <= (unsigned int)VmPauseOutswapSizeCapMB )
      {
        HIDWORD(v18) = 0;
        v19 = 0;
        v14 = MmProcessWorkingSetControl((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v18, 0xCu, 0);
        if ( v14 < 0 )
          goto LABEL_24;
        v5 = 1;
      }
    }
    if ( a2 >= 2 && MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process)[266] )
    {
      HIDWORD(v18) = 1;
      v19 = 3;
      MmProcessWorkingSetControl((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v18, 0xCu, 0);
      v5 = 2;
    }
  }
  else
  {
    HIDWORD(v18) = 0;
    v19 = 1;
    MmProcessWorkingSetControl((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v18, 0xCu, 0);
    v5 = 0;
  }
  v14 = 0;
LABEL_24:
  if ( (v7 & 4) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v7 |= 1u;
      v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v15, (ULONG_PTR)v6);
      if ( v16 )
        v16[26] |= 1u;
    }
    *(_DWORD *)(a1 + 88) &= ~1u;
    if ( v5 != 4 )
      *(_DWORD *)(a1 + 88) ^= ((unsigned __int8)*(_DWORD *)(a1 + 88) ^ (unsigned __int8)(2 * v5)) & 6;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
  }
  if ( (v7 & 2) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  return (unsigned int)v14;
}
