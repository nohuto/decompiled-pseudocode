/*
 * XREFs of MiModifiedPageWriter @ 0x1401384BC
 * Callers:
 *     <none>
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14011529C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiInitializePagefileBitmapsCache @ 0x14013A068 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // r12d
  struct _KEVENT *v6; // r15
  struct _KEVENT *v7; // rsi
  struct _KEVENT *v8; // r14
  __int64 *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  signed __int32 v12; // r11d
  int v13; // eax
  __int64 v14; // r8
  int v15; // r15d
  unsigned int v16; // r14d
  __int64 v17; // rsi
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  __int64 v23; // rdx
  char v24; // al
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 **v27; // rcx
  __int64 **v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rsi
  char v34; // al
  __int64 v35; // r8
  unsigned int v36; // eax
  _QWORD *v37; // rsi
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // r12
  _QWORD *v41; // r15
  signed __int32 v43[8]; // [rsp+8h] [rbp-100h] BYREF
  KPROCESSOR_MODE WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  _QWORD *v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+50h] [rbp-B8h]
  PVOID Object[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK v52; // [rsp+88h] [rbp-80h] BYREF
  PVOID v53[6]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KWAIT_BLOCK v54; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 864) = CurrentThread;
  LODWORD(CurrentThread[1].Queue) |= 2u;
  v5 = 0;
  LODWORD(v49) = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3);
  *(_QWORD *)(a1 + 760) = 0LL;
  Object[0] = (PVOID)(a1 + 136);
  Object[1] = (PVOID)(a1 + 656);
  v6 = (struct _KEVENT *)(a1 + 800);
  v53[0] = (PVOID)(a1 + 136);
  v53[2] = (PVOID)(a1 + 840);
  v7 = (struct _KEVENT *)(a1 + 616);
  v53[1] = (PVOID)(a1 + 800);
  WaitBlockArray = &v52;
  v8 = (struct _KEVENT *)(a1 + 928);
  Timeout = 0LL;
  Alertable[0] = 0;
  WaitMode = 0;
  v53[3] = (PVOID)(a1 + 616);
  v53[4] = (PVOID)(a1 + 928);
  *(_DWORD *)(a1 + 768) = 0;
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, WaitMode, Alertable[0], Timeout, WaitBlockArray) )
  {
    while ( !*(_DWORD *)(a1 + 140) )
    {
      if ( *(_QWORD *)(a1 + 6128) )
      {
        --CurrentThread->SpecialApcDisable;
        v9 = (__int64 *)(a1 + 824);
        if ( (__int64 *)*v9 == v9 )
        {
          *(_BYTE *)(a1 + 593) = 1;
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          if ( !KeWaitForMultipleObjects(5u, v53, WaitAny, WrPageOut, 0, 0, 0LL, &v54) )
            break;
          --CurrentThread->SpecialApcDisable;
          *(_BYTE *)(a1 + 593) = 0;
        }
        if ( *(_DWORD *)(a1 + 620) )
        {
          KeResetEvent(v7);
          if ( *(_DWORD *)(a1 + 612) )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        }
        if ( *(_DWORD *)(a1 + 804) )
        {
          KeResetEvent(v6);
          _InterlockedOr(v43, 0);
          v21 = *(_DWORD *)(a1 + 5720);
          v22 = 0;
          if ( v21 )
          {
            v23 = a1 + 5728;
            do
            {
              v24 = *(_BYTE *)(*(_QWORD *)v23 + 206LL);
              if ( (v24 & 1) != 0 )
              {
                v25 = 0;
                *(_BYTE *)(*(_QWORD *)v23 + 206LL) = v24 & 0xFE;
                v26 = 64LL;
                do
                {
                  v27 = *(__int64 ***)(v26 + *(_QWORD *)v23);
                  if ( v27 && *v27 == (__int64 *)2575857425LL )
                  {
                    v28 = *(__int64 ***)(a1 + 832);
                    *v27 = v9;
                    v27[1] = (__int64 *)v28;
                    if ( *v28 != v9 )
                      __fastfail(3u);
                    *v28 = (__int64 *)v27;
                    *(_QWORD *)(a1 + 832) = v27;
                  }
                  ++v25;
                  v26 += 8LL;
                }
                while ( v25 < 2 );
              }
              ++v22;
              v23 += 8LL;
            }
            while ( v22 < v21 );
          }
        }
        if ( *(_DWORD *)(a1 + 932) )
        {
          KeResetEvent(v8);
          MiStoreUpdateMemoryConditions(a1);
        }
        v10 = *(_QWORD *)(a1 + 5952);
        v11 = *(_QWORD *)(a1 + 6128);
        if ( v10 < 0 )
          v10 = 0LL;
        if ( *(_QWORD *)(a1 + 752) >= 0x800uLL
          || v11 <= *(_QWORD *)(a1 + 5712) >> 2 && v11 <= (unsigned __int64)v10 >> 2
          || (v29 = *(_DWORD *)(a1 + 768), v29 < 0x40)
          || *(_DWORD *)(a1 + 760) / v29 >= (unsigned int)dword_140381108 >> 3 )
        {
          v12 = 1;
        }
        else
        {
          v30 = *(_DWORD *)(a1 + 5720);
          LOBYTE(v5) = *(_QWORD *)(a1 + 2176) > 3 * (v11 >> 2);
          v12 = 1;
          if ( v30 )
          {
            v31 = a1 + 5728;
            v32 = v30;
            do
            {
              v33 = *(_QWORD *)v31;
              if ( (*(_BYTE *)(*(_QWORD *)v31 + 204LL) & 0x40) == 0 )
              {
                if ( v5 )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v33 + 232), &LockHandle);
                  v34 = *(_BYTE *)(v33 + 207);
                  if ( (v34 & 1) == 0 )
                  {
                    *(_BYTE *)(v33 + 207) = v34 | 1;
                    MiInitializePagefileBitmapsCache(v33);
                    *(_DWORD *)(v33 + 124) = dword_140381108;
                  }
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                }
                MiFreeModifiedReservations(v33, 0LL);
                v12 = 1;
              }
              v31 += 8LL;
              --v32;
            }
            while ( v32 );
            v9 = (__int64 *)(a1 + 824);
            v7 = (struct _KEVENT *)(a1 + 616);
            v6 = (struct _KEVENT *)(a1 + 800);
          }
          ++*(_DWORD *)(a1 + 776);
          if ( v5 )
          {
            *(_QWORD *)(a1 + 784) = KiQueryUnbiasedInterruptTime();
            v5 = 0;
            _InterlockedOr(v43, 0);
            *(_WORD *)(a1 + 796) |= v12;
            *(_DWORD *)(a1 + 772) += v12;
          }
          else
          {
            v5 = 0;
          }
          *(_DWORD *)(a1 + 768) = 0;
          *(_QWORD *)(a1 + 760) = 0LL;
        }
        if ( (__int64 *)*v9 == v9 )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          goto LABEL_3;
        }
        v13 = *(_DWORD *)(a1 + 1072);
        if ( ((unsigned __int8)v13 & (unsigned __int8)v12) != 0
          && (v13 & 0xFFFFFFFE) == 0
          && v12 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1072), 0, v12) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeResetEvent((PRKEVENT)(a1 + 656));
        }
        else
        {
          if ( !MiUseLowIoPriorityForModifiedPages(a1) )
          {
            if ( *(_DWORD *)(a1 + 612) )
              IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
            v15 = 2;
            v16 = -1;
            goto LABEL_23;
          }
          if ( *(_QWORD *)(a1 + 6128) >= *(_QWORD *)(a1 + 648) )
          {
            v15 = 0;
            *(_DWORD *)(a1 + 640) = 4;
            v16 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL, v14);
LABEL_23:
            v17 = *v9;
            v18 = *(_QWORD **)*v9;
            if ( *(__int64 **)(*v9 + 8) != v9 || v18[1] != v17 )
              __fastfail(3u);
            *v9 = (__int64)v18;
            v18[1] = v9;
            v19 = (*(_DWORD *)(v17 + 40) ^ (4 * v15)) & 0x1C;
            *(_QWORD *)v17 = 97LL;
            *(_DWORD *)(v17 + 40) ^= v19;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            MiGatherPagefilePages(v17);
            v7 = (struct _KEVENT *)(a1 + 616);
            v6 = (struct _KEVENT *)(a1 + 800);
            if ( v16 != -1 )
            {
              if ( KeQueryPriorityThread(CurrentThread) != 18 )
                KeSetActualBasePriorityThread((__int64)CurrentThread, v16, v20);
              *(_DWORD *)(a1 + 640) = 18;
              v7 = (struct _KEVENT *)(a1 + 616);
              v6 = (struct _KEVENT *)(a1 + 800);
            }
            goto LABEL_3;
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(a1 + 760) = 0LL;
      *(_DWORD *)(a1 + 768) = 0;
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &v52) )
        break;
LABEL_3:
      v8 = (struct _KEVENT *)(a1 + 928);
    }
  }
  if ( *(_DWORD *)(a1 + 612) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 872));
  v36 = *(_DWORD *)(a1 + 5720);
  if ( v36 )
  {
    v37 = (_QWORD *)(a1 + 5728);
    Object[0] = (PVOID)*(unsigned int *)(a1 + 5720);
    v38 = v36;
    v48 = (_QWORD *)(a1 + 5728);
    do
    {
      if ( *v37 )
      {
        --CurrentThread->SpecialApcDisable;
        v39 = 64LL;
        v40 = 2LL;
        do
        {
          v41 = *(_QWORD **)(v39 + *v37);
          if ( v41 )
          {
            while ( *v41 == 97LL )
            {
              *(_BYTE *)(a1 + 593) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 840), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
            v37 = v48;
          }
          v39 += 8LL;
          --v40;
        }
        while ( v40 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v38 = (unsigned __int64)Object[0];
      }
      ++v37;
      --v38;
      v48 = v37;
      Object[0] = (PVOID)v38;
    }
    while ( v38 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, (unsigned int)v49, v35);
  return KeSetEvent((PRKEVENT)(a1 + 680), 0, 0);
}
