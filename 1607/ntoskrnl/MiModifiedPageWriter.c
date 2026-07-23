/*
 * XREFs of MiModifiedPageWriter @ 0x140142A78
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400BCED8 (MiStoreUpdateMemoryConditions.c)
 *     KeQueryPriorityThread @ 0x1400C5260 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140124794 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiInitializePagefileBitmapsCache @ 0x140143274 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiFreeModifiedReservations @ 0x1401EE664 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v3; // r12d
  struct _KEVENT *v4; // r15
  struct _KEVENT *v5; // rsi
  struct _KEVENT *v6; // r14
  __int64 *v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  signed __int32 v10; // r11d
  int v11; // eax
  int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // rsi
  _QWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // r9d
  __int64 v22; // r8
  __int64 **v23; // rcx
  __int64 **v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rsi
  char v30; // al
  unsigned int v31; // eax
  _QWORD *v32; // rsi
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // r12
  _QWORD *v36; // r15
  signed __int32 v38[8]; // [rsp+8h] [rbp-100h] BYREF
  KPROCESSOR_MODE WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  __int64 v43; // [rsp+48h] [rbp-C0h]
  _QWORD *v44; // [rsp+50h] [rbp-B8h]
  PVOID Object[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK v47; // [rsp+88h] [rbp-80h] BYREF
  PVOID v48[6]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KWAIT_BLOCK v49; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 856) = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v3 = 0;
  LODWORD(v43) = KeSetActualBasePriorityThread((__int64)CurrentThread, 0x12u);
  *(_QWORD *)(a1 + 752) = 0LL;
  Object[0] = (PVOID)(a1 + 144);
  Object[1] = (PVOID)(a1 + 648);
  v4 = (struct _KEVENT *)(a1 + 792);
  v48[0] = (PVOID)(a1 + 144);
  v48[2] = (PVOID)(a1 + 832);
  v5 = (struct _KEVENT *)(a1 + 608);
  v48[1] = (PVOID)(a1 + 792);
  WaitBlockArray = &v47;
  v6 = (struct _KEVENT *)(a1 + 920);
  Timeout = 0LL;
  Alertable[0] = 0;
  WaitMode = 0;
  v48[3] = (PVOID)(a1 + 608);
  v48[4] = (PVOID)(a1 + 920);
  *(_DWORD *)(a1 + 760) = 0;
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, WaitMode, Alertable[0], Timeout, WaitBlockArray) )
  {
    while ( !*(_DWORD *)(a1 + 148) )
    {
      if ( *(_QWORD *)(a1 + 7344) )
      {
        --CurrentThread->SpecialApcDisable;
        v7 = (__int64 *)(a1 + 816);
        if ( (__int64 *)*v7 == v7 )
        {
          *(_BYTE *)(a1 + 585) = 1;
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          if ( !KeWaitForMultipleObjects(5u, v48, WaitAny, WrPageOut, 0, 0, 0LL, &v49) )
            break;
          --CurrentThread->SpecialApcDisable;
          *(_BYTE *)(a1 + 585) = 0;
        }
        if ( *(_DWORD *)(a1 + 612) )
        {
          KeResetEvent(v5);
          if ( *(_DWORD *)(a1 + 604) )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        }
        if ( *(_DWORD *)(a1 + 796) )
        {
          KeResetEvent(v4);
          _InterlockedOr(v38, 0);
          v17 = *(_DWORD *)(a1 + 6296);
          v18 = 0;
          if ( v17 )
          {
            v19 = a1 + 6304;
            do
            {
              v20 = *(_BYTE *)(*(_QWORD *)v19 + 206LL);
              if ( (v20 & 1) != 0 )
              {
                v21 = 0;
                *(_BYTE *)(*(_QWORD *)v19 + 206LL) = v20 & 0xFE;
                v22 = 64LL;
                do
                {
                  v23 = *(__int64 ***)(v22 + *(_QWORD *)v19);
                  if ( v23 && *v23 == (__int64 *)2575857425LL )
                  {
                    v24 = *(__int64 ***)(a1 + 824);
                    if ( *v24 != v7 )
                      __fastfail(3u);
                    *v23 = v7;
                    v23[1] = (__int64 *)v24;
                    *v24 = (__int64 *)v23;
                    *(_QWORD *)(a1 + 824) = v23;
                  }
                  ++v21;
                  v22 += 8LL;
                }
                while ( v21 < 2 );
              }
              ++v18;
              v19 += 8LL;
            }
            while ( v18 < v17 );
          }
        }
        if ( *(_DWORD *)(a1 + 924) )
        {
          KeResetEvent(v6);
          MiStoreUpdateMemoryConditions(a1);
        }
        v8 = *(_QWORD *)(a1 + 6528);
        v9 = *(_QWORD *)(a1 + 7344);
        if ( v8 < 0 )
          v8 = 0LL;
        if ( *(_QWORD *)(a1 + 744) >= 0x800uLL
          || v9 <= *(_QWORD *)(a1 + 6288) >> 2 && v9 <= (unsigned __int64)v8 >> 2
          || (v25 = *(_DWORD *)(a1 + 760), v25 < 0x40)
          || *(_DWORD *)(a1 + 752) / v25 >= (unsigned int)dword_1403A9150 >> 3 )
        {
          v10 = 1;
        }
        else
        {
          v26 = *(_DWORD *)(a1 + 6296);
          LOBYTE(v3) = *(_QWORD *)(a1 + 2304) > 3 * (v9 >> 2);
          v10 = 1;
          if ( v26 )
          {
            v27 = a1 + 6304;
            v28 = v26;
            do
            {
              v29 = *(_QWORD *)v27;
              if ( (*(_BYTE *)(*(_QWORD *)v27 + 204LL) & 0x60) == 0 )
              {
                if ( v3 )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v29 + 232), &LockHandle);
                  v30 = *(_BYTE *)(v29 + 207);
                  if ( (v30 & 1) == 0 )
                  {
                    *(_BYTE *)(v29 + 207) = v30 | 1;
                    MiInitializePagefileBitmapsCache(v29);
                    *(_DWORD *)(v29 + 124) = dword_1403A9150;
                  }
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                }
                MiFreeModifiedReservations(v29, 0LL);
                v10 = 1;
              }
              v27 += 8LL;
              --v28;
            }
            while ( v28 );
            v7 = (__int64 *)(a1 + 816);
            v5 = (struct _KEVENT *)(a1 + 608);
            v4 = (struct _KEVENT *)(a1 + 792);
          }
          ++*(_DWORD *)(a1 + 768);
          if ( v3 )
          {
            *(_QWORD *)(a1 + 776) = KiQueryUnbiasedInterruptTime();
            v3 = 0;
            _InterlockedOr(v38, 0);
            *(_WORD *)(a1 + 788) |= v10;
            *(_DWORD *)(a1 + 764) += v10;
          }
          else
          {
            v3 = 0;
          }
          *(_DWORD *)(a1 + 760) = 0;
          *(_QWORD *)(a1 + 752) = 0LL;
        }
        if ( (__int64 *)*v7 == v7 )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          goto LABEL_24;
        }
        v11 = *(_DWORD *)(a1 + 1056);
        if ( ((unsigned __int8)v11 & (unsigned __int8)v10) != 0
          && (v11 & 0xFFFFFFFE) == 0
          && v10 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1056), 0, v10) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeResetEvent((PRKEVENT)(a1 + 648));
        }
        else
        {
          if ( !MiUseLowIoPriorityForModifiedPages(a1) )
          {
            if ( *(_DWORD *)(a1 + 604) )
              IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
            v12 = 2;
            v13 = -1;
            goto LABEL_21;
          }
          if ( *(_QWORD *)(a1 + 7344) >= *(_QWORD *)(a1 + 640) )
          {
            v12 = 0;
            *(_DWORD *)(a1 + 632) = 4;
            v13 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4u);
LABEL_21:
            v14 = *v7;
            v15 = *(_QWORD **)*v7;
            if ( *(__int64 **)(*v7 + 8) != v7 || v15[1] != v14 )
              __fastfail(3u);
            *v7 = (__int64)v15;
            v15[1] = v7;
            v16 = (*(_DWORD *)(v14 + 40) ^ (4 * v12)) & 0x1C;
            *(_QWORD *)v14 = 97LL;
            *(_DWORD *)(v14 + 40) ^= v16;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            MiGatherPagefilePages(v14);
            v5 = (struct _KEVENT *)(a1 + 608);
            v4 = (struct _KEVENT *)(a1 + 792);
            if ( v13 != -1 )
            {
              if ( KeQueryPriorityThread(CurrentThread) != 18 )
                KeSetActualBasePriorityThread((__int64)CurrentThread, v13);
              *(_DWORD *)(a1 + 632) = 18;
              v5 = (struct _KEVENT *)(a1 + 608);
              v4 = (struct _KEVENT *)(a1 + 792);
            }
            goto LABEL_24;
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(a1 + 752) = 0LL;
      *(_DWORD *)(a1 + 760) = 0;
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &v47) )
        break;
LABEL_24:
      v6 = (struct _KEVENT *)(a1 + 920);
    }
  }
  if ( *(_DWORD *)(a1 + 604) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 864));
  v31 = *(_DWORD *)(a1 + 6296);
  if ( v31 )
  {
    v32 = (_QWORD *)(a1 + 6304);
    Object[0] = (PVOID)*(unsigned int *)(a1 + 6296);
    v33 = v31;
    v44 = (_QWORD *)(a1 + 6304);
    do
    {
      if ( *v32 )
      {
        --CurrentThread->SpecialApcDisable;
        v34 = 64LL;
        v35 = 2LL;
        do
        {
          v36 = *(_QWORD **)(v34 + *v32);
          if ( v36 )
          {
            while ( *v36 == 97LL )
            {
              *(_BYTE *)(a1 + 585) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 832), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
            v32 = v44;
          }
          v34 += 8LL;
          --v35;
        }
        while ( v35 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v33 = (unsigned __int64)Object[0];
      }
      ++v32;
      --v33;
      v44 = v32;
      Object[0] = (PVOID)v33;
    }
    while ( v33 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v43);
  return KeSetEvent((PRKEVENT)(a1 + 672), 0, 0);
}
