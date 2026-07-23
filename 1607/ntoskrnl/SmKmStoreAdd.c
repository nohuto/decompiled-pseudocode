/*
 * XREFs of SmKmStoreAdd @ 0x1403E54A4
 * Callers:
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmKmEtwLogStoreChange @ 0x140697CA4 (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r13
  unsigned int v5; // eax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // rsi
  struct _KTHREAD *v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // r14
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // rsi
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  unsigned int v17; // r14d
  int v18; // eax
  ULONGLONG *v19; // rax
  char *v22; // rax
  struct _PRIVILEGE_SET *v23; // rbp
  unsigned __int64 v24; // rsi
  struct _EX_RUNDOWN_REF *v25; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v27; // rax
  _BYTE *v28; // rsi
  unsigned int v29; // [rsp+20h] [rbp-48h]
  _DWORD *v30; // [rsp+28h] [rbp-40h]

  v30 = *(_DWORD **)a3;
  v4 = 0LL;
  v5 = 0;
  v29 = 0;
  do
  {
    if ( !*(_QWORD *)(a1 + 8 * v4) )
    {
      v22 = (char *)SmAlloc(0x500uLL, 0x61536D73u);
      v23 = (struct _PRIVILEGE_SET *)v22;
      if ( !v22 )
        return (unsigned int)-1073741670;
      v24 = (unsigned __int64)(v22 + 1280);
      if ( v22 < v22 + 1280 )
      {
        v25 = (struct _EX_RUNDOWN_REF *)(v22 + 8);
        do
        {
          memset(&v25[-1], 0, 0x28uLL);
          v25->Count = 0LL;
          ExWaitForRundownProtectionRelease(v25);
          v25[1].Count = 0LL;
          v25 += 5;
        }
        while ( (unsigned __int64)&v25[-1] < v24 );
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v27 = (_BYTE *)KeAbPreAcquire(a1 + 416, 0LL, 0);
      v28 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v27, a1 + 416);
      if ( v28 )
        v28[26] |= 1u;
      if ( !*(_QWORD *)(a1 + 8 * v4) )
      {
        *(_QWORD *)(a1 + 8 * v4) = v23;
        v23 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( v23 )
        MiDeleteSubsection(v23);
      v5 = v29;
    }
    v7 = *(_QWORD *)(a1 + 8 * v4);
    v8 = v7 + 1280;
    if ( v7 < v7 + 1280 )
    {
      v9 = (unsigned __int64 *)(v7 + 16);
      while ( *(_QWORD *)v7 )
      {
LABEL_6:
        ++v5;
        v7 += 40LL;
        v9 += 5;
        v29 = v5;
        if ( v7 >= v8 )
          goto LABEL_14;
      }
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9, v11, (ULONG_PTR)v9);
      if ( v12 )
        v12[26] |= 1u;
      if ( *(_QWORD *)v7 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v9);
        KeAbPostRelease((ULONG_PTR)v9);
        KeLeaveCriticalRegion();
        v5 = v29;
        goto LABEL_6;
      }
      v5 = v29;
LABEL_14:
      if ( v7 < v8 )
        break;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 0x20 );
  if ( v5 >= 0x400 )
  {
    return (unsigned int)-1073741671;
  }
  else
  {
    v13 = KeGetCurrentThread();
    v14 = (volatile signed __int64 *)(a1 + 416);
    --v13->KernelApcDisable;
    v15 = (_BYTE *)KeAbPreAcquire(a1 + 416, 0LL, 0);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v15, a1 + 416);
    if ( v16 )
      v16[26] |= 1u;
    if ( (*v30 & 0x100) == 0 )
    {
      v17 = v29;
      goto LABEL_22;
    }
    if ( *(_DWORD *)(a1 + 432) == -1 )
    {
      v17 = v29;
      *(_DWORD *)(a1 + 432) = v29;
LABEL_22:
      *(_BYTE *)(v7 + 34) &= 0xFCu;
      *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (*v30 >> 18 << 7)) & 0x80;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(a3 + 16);
      ++*(_DWORD *)(a1 + 424);
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      *(_QWORD *)v7 = a2;
      do
      {
        *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (*(_WORD *)(v7 + 32) + 1)) & 0x3F;
        v18 = v17 | ((*(_WORD *)(v7 + 32) & 0x3F) << 10);
        *a4 = v18;
      }
      while ( v18 == 66559 );
      v19 = SmEtwEnabled(0);
      if ( v19 )
        SmKmEtwLogStoreChange(v19, *(_QWORD *)v7, &SmEventStoreCreate);
      _InterlockedExchange64((volatile __int64 *)(v7 + 8), 0LL);
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16));
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return 0;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 16));
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return (unsigned int)-1073740757;
    }
  }
}
