/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x1403EB244
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspSendJobNotification @ 0x140117780 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspAddAccountingValues @ 0x1403EBE98 (PspAddAccountingValues.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1403EC4EC (PspGetEffectiveNoWakeCharge.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1403EC7C8 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1403EC81C (PspLockJobMemoryLimitsShared.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendReliableJobNotification @ 0x140487C50 (PspSendReliableJobNotification.c)
 *     PspRateControlLimitFlag @ 0x140642398 (PspRateControlLimitFlag.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406424AC (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v7; // r15
  LIST_ENTRY WaitListHead; // xmm1
  struct _LIST_ENTRY *v9; // r12
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v12; // rcx
  int v13; // esi
  struct _LIST_ENTRY *v14; // r15
  struct _LIST_ENTRY *v15; // r14
  __int64 v16; // rcx
  char *v17; // r9
  char *v18; // r10
  _DWORD *v19; // rdx
  __int64 v20; // r8
  struct _ERESOURCE *p_WaitListHead; // r12
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rcx
  void *v25; // r10
  struct _LIST_ENTRY *v26; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // edx
  char *v32; // r8
  struct _LIST_ENTRY *v33; // rax
  char *p_Blink; // rax
  __int64 v35; // rcx
  char *v36; // r8
  char *v37; // r9
  _DWORD *v38; // rdx
  _DWORD *v39; // rdx
  int v40; // ecx
  struct _KPROCESS *v41; // rcx
  int Blink_high; // [rsp+20h] [rbp-B9h]
  struct _LIST_ENTRY *v43; // [rsp+28h] [rbp-B1h]
  __int64 v44; // [rsp+30h] [rbp-A9h] BYREF
  struct _LIST_ENTRY *v45; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v46; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v47[3]; // [rsp+48h] [rbp-91h] BYREF
  LIST_ENTRY v48; // [rsp+60h] [rbp-79h]
  LIST_ENTRY v49; // [rsp+90h] [rbp-49h]
  __int128 v50; // [rsp+A0h] [rbp-39h]
  _OWORD v51[4]; // [rsp+B0h] [rbp-29h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
  Blink = Event[40].Header.WaitListHead.Blink;
  if ( Blink )
  {
    v28 = *(_OWORD *)&Blink[1].Blink;
    v51[0] = *(_OWORD *)&Blink->Blink;
    v29 = *(_OWORD *)&Blink[2].Blink;
    v51[1] = v28;
    v30 = *(_OWORD *)&Blink[3].Blink;
    v51[2] = v29;
    v51[3] = v30;
  }
  else
  {
    memset(v51, 0, sizeof(v51));
  }
  Flink = Event[21].Header.WaitListHead.Flink;
  v7 = Event[21].Header.WaitListHead.Blink;
  WaitListHead = Event[48].Header.WaitListHead;
  v9 = Event[6].Header.WaitListHead.Blink;
  v48 = Event[46].Header.WaitListHead;
  v10 = *(_OWORD *)&Event[49].Header.Lock;
  v45 = Event[7].Header.WaitListHead.Blink;
  Blink_high = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v11 = (int)Event[10].Header.WaitListHead.Blink;
  v49 = WaitListHead;
  v50 = v10;
  if ( (v11 & 4) != 0 )
    v43 = Event[9].Header.WaitListHead.Blink;
  else
    v43 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, &v46, &v44);
  PspUnlockJob(v12, CurrentThread);
  v13 = 0;
  if ( *(_QWORD *)&v51[0] && (unsigned __int64)Flink + (unsigned __int64)v49.Blink > *(_QWORD *)&v51[0] )
    v13 = 0x10000;
  if ( *((_QWORD *)&v51[0] + 1) && (unsigned __int64)((unsigned __int64)v7 + v50) > *((_QWORD *)&v51[0] + 1) )
    v13 |= 0x20000u;
  if ( *(_QWORD *)&v51[1] && (unsigned __int64)v9 + (unsigned __int64)v48.Blink > *(_QWORD *)&v51[1] )
    v13 |= 4u;
  v14 = *(struct _LIST_ENTRY **)&v51[2];
  v15 = (struct _LIST_ENTRY *)*((_QWORD *)&v51[1] + 1);
  if ( *(_OWORD *)((char *)&v51[1] + 8) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread);
    if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x200000) != 0 )
    {
      v31 = 1;
      v32 = (char *)Event[40].Header.WaitListHead.Flink + (unsigned __int64)Event[54].Header.WaitListHead.Blink;
      v14 = *(struct _LIST_ENTRY **)&v51[2];
      v15 = (struct _LIST_ENTRY *)*((_QWORD *)&v51[1] + 1);
    }
    else
    {
      v31 = 0;
      v32 = 0LL;
    }
    if ( v14 )
    {
      if ( v31 )
      {
LABEL_48:
        if ( v32 > (char *)v14 )
          goto LABEL_49;
LABEL_50:
        if ( v15 )
        {
          if ( v31 )
          {
LABEL_54:
            if ( v32 > (char *)v15 )
              goto LABEL_56;
LABEL_55:
            v13 |= 0x8000u;
            goto LABEL_56;
          }
          if ( Event[40].Header.WaitListHead.Flink <= v15 )
            goto LABEL_55;
        }
        if ( !v31 )
          goto LABEL_56;
        goto LABEL_54;
      }
      if ( Event[40].Header.WaitListHead.Flink > v14 )
      {
LABEL_49:
        v13 |= 0x200u;
LABEL_56:
        PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
        goto LABEL_11;
      }
    }
    if ( !v31 )
      goto LABEL_50;
    goto LABEL_48;
  }
LABEL_11:
  v16 = 0LL;
  v17 = (char *)&v51[2] - a2 + 8;
  v18 = (char *)v51 - a2 + 8;
  v19 = (_DWORD *)(a2 + 44);
  do
  {
    v20 = *(unsigned int *)((char *)v19 + (_QWORD)v17 - 44);
    if ( (_DWORD)v20 && *(v19 - 3) == *(_DWORD *)((char *)v19 + (_QWORD)v18) && *v19 >= (unsigned int)v20 )
      v13 |= PspRateControlLimitFlag(v16, v19, v20, v17);
    v16 = (unsigned int)(v16 + 1);
    ++v19;
  }
  while ( (int)v16 < 3 );
  if ( v13 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    p_WaitListHead = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
    ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
    v33 = Event[40].Header.WaitListHead.Blink;
    if ( v33 )
    {
      HIDWORD(v33->Flink) |= v13;
      p_Blink = (char *)&Event[40].Header.WaitListHead.Blink[4].Blink;
      if ( (v13 & 0x10000) != 0 )
        *(_QWORD *)p_Blink = *(_QWORD *)&v51[0];
      if ( (v13 & 0x20000) != 0 )
        *((_QWORD *)p_Blink + 1) = *((_QWORD *)&v51[0] + 1);
      if ( (v13 & 4) != 0 )
        *((_QWORD *)p_Blink + 2) = *(_QWORD *)&v51[1];
      if ( (v13 & 0x200) != 0 )
        *((_QWORD *)p_Blink + 4) = v14;
      if ( (v13 & 0x8000) != 0 )
        *((_QWORD *)p_Blink + 3) = v15;
      v35 = 0LL;
      v36 = (char *)((char *)&v51[2] + 8 - p_Blink);
      v37 = (char *)((char *)v51 - p_Blink);
      v38 = p_Blink + 52;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v35, v38, v36, v37) & v13) != 0 )
        {
          *(v39 - 3) = *(_DWORD *)((char *)v39 + (_QWORD)v36 - 52);
          *v39 = *(_DWORD *)((char *)v39 + (_QWORD)v37);
        }
        v35 = (unsigned int)(v40 + 1);
        v38 = v39 + 1;
      }
      while ( (int)v35 < 3 );
    }
    if ( *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Blink) & 0x800) != 0
      && (Event[54].Header.LockNV & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJob(Event, CurrentThread);
  }
  else
  {
    p_WaitListHead = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
  }
  v22 = *(_QWORD *)(a2 + 16);
  if ( v22 )
  {
    if ( (*(_DWORD *)(v22 + 768) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v22 + 768), 0xFFFFFFDF);
      v41 = *(struct _KPROCESS **)(a2 + 16);
      v47[0] = *(_QWORD *)(a2 + 8);
      v47[1] = 2LL;
      v47[2] = v41[1].Header.WaitListHead.Blink;
      PspRemoveProcessFromJobChain(v41, v47, 0xEu, 0x718u);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v43 && (struct _LIST_ENTRY *)((char *)v45 + (unsigned __int64)v48.Blink) > v43 )
  {
    if ( Blink_high )
    {
      if ( Blink_high != 1 )
        goto LABEL_18;
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite(p_WaitListHead, 1u);
      if ( !*(_QWORD *)&Event[19].Header.Lock || (HIDWORD(Event[36].Header.WaitListHead.Blink) & 2) == 0 )
      {
        PspUnlockJob(Event, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy(Event);
        goto LABEL_18;
      }
      if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
      {
        LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
        Event[9].Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
        goto LABEL_18;
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[19].Header.Lock
        && (HIDWORD(Event[36].Header.WaitListHead.Blink) & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
    }
    PspUnlockJob(Event, CurrentThread);
  }
LABEL_18:
  v23 = *(_QWORD *)(a2 + 24) + v44;
  *(_QWORD *)(a2 + 24) = v23;
  if ( !*(_BYTE *)(a2 + 56) )
  {
    if ( v23 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v46 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event);
    }
  }
  v24 = Event[44].Header.WaitListHead.Flink;
  if ( v24 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&v24[3].Blink, 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
    PspAddAccountingValues(&Event[44].Header.WaitListHead.Flink[69].Blink, &Event[46].Header.WaitListHead);
    memset(v25, 0, 0x50uLL);
    PspUnlockJob(Event, CurrentThread);
    v26 = Event[44].Header.WaitListHead.Flink;
  }
  else
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
    memset(&Event[46].Header.WaitListHead, 0, 0x50uLL);
    v26 = (struct _LIST_ENTRY *)Event;
  }
  PspUnlockJob(v26, CurrentThread);
  return 0LL;
}
