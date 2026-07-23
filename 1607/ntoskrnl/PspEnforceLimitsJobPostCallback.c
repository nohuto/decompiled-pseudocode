/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140467790
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1404682AC (PspGetEffectiveNoWakeCharge.c)
 *     PspRateControlLimitFlag @ 0x14046833C (PspRateControlLimitFlag.c)
 *     PspAddAccountingValues @ 0x140468358 (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404683A0 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1404683F4 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x140468440 (PspLockJobMemoryLimitsShared.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspSendReliableJobNotification @ 0x140471FDC (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404C5E8C (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140680910 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v6; // r15
  struct _LIST_ENTRY *Blink; // r12
  struct _LIST_ENTRY *v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  struct _LIST_ENTRY *v12; // r15
  struct _LIST_ENTRY *v13; // r12
  struct _LIST_ENTRY *v14; // r13
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // r10
  unsigned int *v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  struct _ERESOURCE *p_WaitListHead; // rsi
  unsigned __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  void *v25; // r9
  PRKEVENT v26; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  int v35; // ecx
  __int64 v36; // r8
  __int64 v37; // r9
  ULONG_PTR v38; // rcx
  int Blink_high; // [rsp+20h] [rbp-E0h]
  struct _LIST_ENTRY *v40; // [rsp+28h] [rbp-D8h]
  struct _LIST_ENTRY *v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v43[4]; // [rsp+40h] [rbp-C0h] BYREF
  LIST_ENTRY WaitListHead; // [rsp+60h] [rbp-A0h]
  __int128 v45; // [rsp+A0h] [rbp-60h]
  _OWORD v46[4]; // [rsp+C0h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
  Flink = Event[40].Header.WaitListHead.Flink;
  if ( Flink )
  {
    v28 = *(_OWORD *)&Flink[1].Blink;
    v46[0] = *(_OWORD *)&Flink->Blink;
    v29 = *(_OWORD *)&Flink[2].Blink;
    v46[1] = v28;
    v30 = *(_OWORD *)&Flink[3].Blink;
    v46[2] = v29;
    v46[3] = v30;
  }
  else
  {
    memset(v46, 0, sizeof(v46));
  }
  v6 = Event[21].Header.WaitListHead.Flink;
  Blink = Event[21].Header.WaitListHead.Blink;
  v8 = Event[6].Header.WaitListHead.Blink;
  WaitListHead = Event[47].Header.WaitListHead;
  v41 = Event[7].Header.WaitListHead.Blink;
  Blink_high = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v9 = (int)Event[10].Header.WaitListHead.Blink;
  v45 = *(_OWORD *)&Event[50].Header.Lock;
  if ( (v9 & 4) != 0 )
    v40 = Event[9].Header.WaitListHead.Blink;
  else
    v40 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, v43, &v42);
  PspUnlockJob(v10, CurrentThread);
  v11 = 0;
  if ( *(_QWORD *)&v46[0] && (unsigned __int64)((unsigned __int64)v6 + v45) > *(_QWORD *)&v46[0] )
    v11 = 0x10000;
  if ( *((_QWORD *)&v46[0] + 1) && (unsigned __int64)Blink + *((_QWORD *)&v45 + 1) > *((_QWORD *)&v46[0] + 1) )
    v11 |= 0x20000u;
  v12 = *(struct _LIST_ENTRY **)&v46[1];
  if ( *(_QWORD *)&v46[1] && (unsigned __int64)v8 + (unsigned __int64)WaitListHead.Blink > *(_QWORD *)&v46[1] )
    v11 |= 4u;
  v13 = *(struct _LIST_ENTRY **)&v46[2];
  if ( *(_QWORD *)&v46[2] || (v14 = (struct _LIST_ENTRY *)*((_QWORD *)&v46[1] + 1)) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread);
    v11 |= PspGetJobMemoryUsageNotificationViolations(
             Event,
             *(_QWORD *)&Event[40].Header.Lock,
             *(_QWORD *)&Event[40].Header.Lock + *(_QWORD *)&Event[55].Header.Lock,
             33280LL);
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
    v13 = *(struct _LIST_ENTRY **)&v46[2];
    v14 = (struct _LIST_ENTRY *)*((_QWORD *)&v46[1] + 1);
    v12 = *(struct _LIST_ENTRY **)&v46[1];
  }
  v15 = 0LL;
  v16 = (char *)&v46[2] - a2 + 8;
  v17 = (char *)v46 - a2 + 8;
  v18 = (unsigned int *)(a2 + 44);
  do
  {
    v19 = *(unsigned int *)((char *)v18 + (_QWORD)v16 - 44);
    if ( v19 && *(v18 - 3) == *(unsigned int *)((char *)v18 + (_QWORD)v17) && *v18 >= v19 )
      v11 |= PspRateControlLimitFlag(v15);
    v15 = (unsigned int)(v15 + 1);
    ++v18;
  }
  while ( (int)v15 < 3 );
  if ( v11 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
    v31 = Event[40].Header.WaitListHead.Flink;
    if ( v31 )
    {
      HIDWORD(v31->Flink) |= v11;
      p_Blink = &Event[40].Header.WaitListHead.Flink[4].Blink;
      if ( (v11 & 0x10000) != 0 )
        *p_Blink = *(struct _LIST_ENTRY **)&v46[0];
      if ( (v11 & 0x20000) != 0 )
        p_Blink[1] = (struct _LIST_ENTRY *)*((_QWORD *)&v46[0] + 1);
      if ( (v11 & 4) != 0 )
        p_Blink[2] = v12;
      if ( (v11 & 0x200) != 0 )
        p_Blink[4] = v13;
      if ( (v11 & 0x8000) != 0 )
        p_Blink[3] = v14;
      v33 = 0LL;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v33) & v11) != 0 )
        {
          *(v34 - 3) = *(_DWORD *)((char *)v34 + v36 - 52);
          *v34 = *(_DWORD *)((char *)v34 + v37);
        }
        v33 = (unsigned int)(v35 + 1);
      }
      while ( (int)v33 < 3 );
    }
    if ( *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x800) != 0
      && ((__int64)Event[54].Header.WaitListHead.Flink & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJob(Event, CurrentThread);
  }
  v20 = *(_QWORD *)(a2 + 16);
  if ( v20 )
  {
    if ( (*(_DWORD *)(v20 + 768) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v20 + 768), 0xFFFFFFDF);
      v38 = *(_QWORD *)(a2 + 16);
      v43[1] = *(_QWORD *)(a2 + 8);
      v43[2] = 2LL;
      v43[3] = *(_QWORD *)(v38 + 744);
      PspRemoveProcessFromJobChain(v38);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( !v40 || (struct _LIST_ENTRY *)((char *)v41 + (unsigned __int64)WaitListHead.Blink) <= v40 )
    goto LABEL_18;
  if ( !Blink_high )
  {
    if ( (unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      p_WaitListHead = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
      ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[19].Header.Lock
        && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
      goto LABEL_80;
    }
LABEL_18:
    p_WaitListHead = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
    goto LABEL_19;
  }
  if ( Blink_high != 1 )
    goto LABEL_18;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  p_WaitListHead = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
  ExAcquireResourceSharedLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
  if ( *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) != 0 )
  {
    if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
    {
      LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
      Event[9].Header.WaitListHead.Blink = 0LL;
    }
LABEL_80:
    PspUnlockJob(Event, CurrentThread);
    goto LABEL_19;
  }
  PspUnlockJob(Event, CurrentThread);
  PspTerminateAllProcessesInJobHierarchy(Event);
LABEL_19:
  v22 = *(_QWORD *)(a2 + 24) + v42;
  v23 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v22;
  if ( v23 )
  {
    if ( v22 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v43[0] >= (unsigned __int64)(unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event);
    }
  }
  v24 = *(_QWORD *)&Event[44].Header.Lock;
  if ( v24 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v24 + 56), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
    PspAddAccountingValues(*(_QWORD *)&Event[44].Header.Lock + 1136LL, &Event[47].Header.WaitListHead);
    memset(v25, 0, 0x58uLL);
    PspUnlockJob(Event, CurrentThread);
    v26 = *(PRKEVENT *)&Event[44].Header.Lock;
  }
  else
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
    memset(&Event[47].Header.WaitListHead, 0, 0x58uLL);
    v26 = Event;
  }
  PspUnlockJob(v26, CurrentThread);
  return 0LL;
}
