/*
 * XREFs of MiExpandPtes @ 0x1400A1590
 * Callers:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiObtainSystemVa @ 0x1400A194C (MiObtainSystemVa.c)
 *     MiObtainSessionVa @ 0x1400A22A4 (MiObtainSessionVa.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiSplitBitmapPages @ 0x1400FFBD4 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  int v4; // r8d
  unsigned int v5; // r12d
  unsigned int v6; // eax
  BOOL v7; // r15d
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v17; // rdi
  int v18; // eax
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  char v23; // r10
  volatile signed __int32 *v24; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  volatile signed __int64 *v28; // rdi
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // [rsp+20h] [rbp-88h]
  unsigned __int64 v33; // [rsp+28h] [rbp-80h]
  unsigned __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+10h]
  int v40; // [rsp+C0h] [rbp+18h]
  volatile signed __int32 *v41; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v42; // [rsp+C8h] [rbp+20h]

  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 7);
  v6 = 1;
  if ( (v4 & 4) != 0 )
    v6 = 16;
  v39 = 16;
  v7 = 0;
  if ( a2 >= 0x200 )
    v7 = a1 == &qword_1403278B0;
  v8 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v33 = v6;
  v9 = v8 >> 9;
  v32 = v8 / v6;
  v10 = v32;
  if ( (v4 & 2) != 0 )
  {
    v11 = v5;
    if ( v7 )
      v11 = 15LL;
    v12 = MiObtainSystemVa(v9, v11);
  }
  else
  {
    v39 = 1;
    v12 = MiObtainSessionVa(v9);
  }
  v42 = v12;
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v14 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = (unsigned int)((v14 - a1[2]) >> 3);
  v34 = v15;
  if ( !v7 )
  {
    CurrentThread = KeGetCurrentThread();
    v37 = (__int64)CurrentThread;
    v17 = v15 / v33;
    v36 = a1[1] + ((v15 / v33) >> 3);
    if ( (a1[3] & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v41 = (volatile signed __int32 *)a1[6];
      v27 = KeAbPreAcquire((ULONG_PTR)v41, 0LL, 0);
      v35 = v27;
      if ( _interlockedbittestandset64(v41, 0LL) )
      {
        ExfAcquirePushLockExclusiveEx(v41, v27, v41);
        v27 = v35;
      }
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
    }
    v18 = MiSplitBitmapPages(v5, v36, v32 + (v17 & 7));
    v19 = *((_DWORD *)a1 + 6);
    v40 = v18;
    if ( (v19 & 2) != 0 )
    {
      if ( v18 == 1 )
      {
        v20 = (v8 + v34) / v33;
        if ( v20 > *a1 )
          *a1 = v20;
        if ( (v17 & 0x3F) != 0 )
          v17 &= 0xFFFFFFFFFFFFFFC0uLL;
        if ( v17 < a1[10] || (v19 & 8) == 0 )
        {
          a1[10] = v17;
          *((_DWORD *)a1 + 6) = v19 | 8;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      v28 = (volatile signed __int64 *)a1[6];
      if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v28);
      KeAbPostRelease((ULONG_PTR)v28);
      KiLeaveGuardedRegionUnsafe(v37);
    }
    if ( !v40 )
    {
      v29 = v14 << 25;
      v30 = v42;
LABEL_51:
      MiReturnSystemVa(v30, (__int64)(v29 + (v8 << 28)) >> 16, v5, 0LL);
      return 0LL;
    }
    v13 = v42;
    v10 = v32;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v14, v14 + 8 * (v8 - 1), v39, v5) )
  {
    if ( v7 )
      v5 = 15;
    v29 = v14 << 25;
    v30 = v13;
    goto LABEL_51;
  }
  _InterlockedExchangeAdd64(a1 + 12, v10);
  _InterlockedExchangeAdd64(a1 + 8, v10);
  if ( (dword_1403A913C & 2) != 0 && a1 == &qword_1403278B0 )
  {
    v31 = qword_140327508 + ((2 * v34) >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v5, v31, ((2 * (_BYTE)v34) & 7) + 2 * v32) )
      dword_1403A913C &= ~2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( !v7 && a2 != v8 )
  {
    v21 = (v8 - a2) / v33;
    v22 = (a2 + v34) / v33;
    v23 = v22 & 0x1F;
    v24 = (volatile signed __int32 *)(a1[1] + 4 * (v22 >> 5));
    if ( (v22 & 0x1F) + v21 > 0x20 )
    {
      if ( (v22 & 0x1F) != 0 )
      {
        _InterlockedAnd(v24, ~(((1 << (32 - (v22 & 0x1F))) - 1) << v23));
        v21 -= 32 - (unsigned int)(v22 & 0x1F);
        ++v24;
      }
      if ( v21 >= 0x20 )
      {
        v26 = v21 >> 5;
        v21 += -32LL * (v21 >> 5);
        do
        {
          *v24++ = 0;
          --v26;
        }
        while ( v26 );
      }
      if ( v21 )
        _InterlockedAnd(v24, ~((1 << v21) - 1));
    }
    else if ( v21 == 32 )
    {
      *v24 = 0;
    }
    else
    {
      _InterlockedAnd(v24, ~(((1 << v21) - 1) << v23));
    }
  }
  return v14;
}
