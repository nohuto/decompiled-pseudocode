/*
 * XREFs of MiExpandPtes @ 0x140068530
 * Callers:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiObtainSystemVa @ 0x140067684 (MiObtainSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400688D0 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiObtainSessionVa @ 0x140129230 (MiObtainSessionVa.c)
 */

__int64 __fastcall MiExpandPtes(__int64 a1, unsigned __int64 a2)
{
  int v4; // r9d
  unsigned int v5; // r12d
  unsigned __int64 v6; // rcx
  int v7; // r15d
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned int v10; // ecx
  int v11; // edx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 **v18; // rdi
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  char v23; // r10
  volatile signed __int32 *v24; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  volatile signed __int64 *v28; // rdi
  __int16 v29; // ax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // [rsp+20h] [rbp-88h]
  unsigned __int64 v33; // [rsp+28h] [rbp-80h]
  unsigned __int64 v34; // [rsp+30h] [rbp-78h]
  unsigned __int64 v35; // [rsp+38h] [rbp-70h]
  unsigned __int64 v36; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *v37; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+10h]
  int v40; // [rsp+C0h] [rbp+18h]
  volatile signed __int32 *v41; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v42; // [rsp+C8h] [rbp+20h]

  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = 1LL;
  v7 = 0;
  if ( (v4 & 4) != 0 )
    v6 = 16LL;
  v39 = 16;
  if ( a2 >= 0x200 && (__int64 *)a1 == &qword_14034FC70 )
    v7 = 1;
  v8 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v33 = v6;
  v32 = v8 / v6;
  v9 = v8 / v6;
  v10 = v8 >> 9;
  if ( (v4 & 2) != 0 )
  {
    v11 = v5;
    if ( v7 == 1 )
      v11 = 15;
    v12 = MiObtainSystemVa(v10, v11);
  }
  else
  {
    v39 = 1;
    v12 = MiObtainSessionVa(v10);
  }
  v42 = v12;
  v14 = v12;
  if ( !v12 )
    return 0LL;
  v15 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = (unsigned int)((v15 - *(_QWORD *)(a1 + 16)) >> 3);
  v34 = v16;
  if ( !v7 )
  {
    CurrentThread = KeGetCurrentThread();
    v37 = CurrentThread;
    v35 = v16 / v33;
    v36 = *(_QWORD *)(a1 + 8) + ((v16 / v33) >> 3);
    if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
    {
      v18 = (volatile signed __int64 **)(a1 + 48);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v41 = *(volatile signed __int32 **)(a1 + 48);
      v27 = KeAbPreAcquire((ULONG_PTR)v41, 0LL, 0LL, v13);
      if ( _interlockedbittestandset64(v41, 0LL) )
        ExfAcquirePushLockExclusiveEx(v41, v27, v41);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v18 = (volatile signed __int64 **)(a1 + 48);
    }
    v19 = MiSplitBitmapPages(v5, v36, (v35 & 7) + v32);
    v40 = v19;
    if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
    {
      if ( v19 == 1 )
      {
        v20 = (v8 + v34) / v33;
        if ( v20 > *(_QWORD *)a1 )
          *(_QWORD *)a1 = v20;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      v28 = *v18;
      if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v28);
      KeAbPostRelease((ULONG_PTR)v28);
      v29 = v37->SpecialApcDisable + 1;
      v37->SpecialApcDisable = v29;
      if ( !v29 && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery(v37);
    }
    if ( !v40 )
    {
      v30 = v42;
LABEL_50:
      MiReturnSystemVa(v30, (__int64)((v15 << 25) + (v8 << 28)) >> 16, v5, 0LL);
      return 0LL;
    }
    v14 = v42;
    v9 = v32;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v15, v15 + 8 * (v8 - 1), v39, v5) )
  {
    v30 = v14;
    if ( v7 == 1 )
      v5 = 15;
    goto LABEL_50;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v9);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), v9);
  if ( (dword_1403D00E0 & 2) != 0 && (__int64 *)a1 == &qword_14034FC70 )
  {
    v31 = qword_14034F588 + ((2 * v34) >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v5, v31, ((2 * (_BYTE)v34) & 7) + 2 * v32) )
      dword_1403D00E0 &= ~2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( a2 != v8 && v7 != 1 )
  {
    v21 = (v8 - a2) / v33;
    v22 = (a2 + v34) / v33;
    v23 = v22 & 0x1F;
    v24 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v22 >> 5));
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
  return v15;
}
