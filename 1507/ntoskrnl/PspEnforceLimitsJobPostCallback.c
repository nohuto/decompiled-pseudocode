/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140506F48
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspSendJobNotification @ 0x14013A2C4 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1405072C4 (PspGetEffectiveNoWakeCharge.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendReliableJobNotification @ 0x140553D20 (PspSendReliableJobNotification.c)
 *     PspRateControlLimitFlag @ 0x1406C4944 (PspRateControlLimitFlag.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406C4A58 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *v3; // rsi
  struct _ERESOURCE *p_WaitListHead; // r12
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // r14
  LIST_ENTRY WaitListHead; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // r9
  __int16 v12; // ax
  __int64 v13; // r13
  int v14; // esi
  __int64 v15; // r15
  __int64 v16; // r14
  char *v17; // r9
  __int64 v18; // rcx
  char *v19; // r10
  _DWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rcx
  struct _LIST_ENTRY **v25; // rdx
  struct _LIST_ENTRY **v26; // rcx
  signed __int64 v27; // r8
  __int64 v28; // r12
  _QWORD *v29; // rdx
  __int64 v30; // r9
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v34; // ax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // r14
  int v39; // edx
  char *v40; // r8
  __int16 v41; // ax
  struct _LIST_ENTRY *v42; // rax
  char *p_Blink; // rcx
  char *v44; // r9
  char *v45; // rdx
  __int64 v46; // r8
  _DWORD *v47; // rdx
  int v48; // r8d
  __int64 v49; // r10
  __int64 v50; // r11
  __int16 v51; // ax
  __int64 v52; // rcx
  __int16 v53; // ax
  __int16 v54; // ax
  __int16 v55; // ax
  struct _LIST_ENTRY *v56; // [rsp+20h] [rbp-E0h]
  int Blink_high; // [rsp+28h] [rbp-D8h]
  struct _LIST_ENTRY *v59; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *v60; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v63; // [rsp+58h] [rbp-A8h]
  _QWORD v64[4]; // [rsp+60h] [rbp-A0h] BYREF
  LIST_ENTRY v65; // [rsp+80h] [rbp-80h]
  LIST_ENTRY v66; // [rsp+B0h] [rbp-50h]
  __int128 v67; // [rsp+C0h] [rbp-40h]
  _OWORD v68[4]; // [rsp+D0h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  p_WaitListHead = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
  ExAcquireResourceSharedLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
  Blink = Event[40].Header.WaitListHead.Blink;
  if ( Blink )
  {
    v35 = *(_OWORD *)&Blink[1].Blink;
    v68[0] = *(_OWORD *)&Blink->Blink;
    v36 = *(_OWORD *)&Blink[2].Blink;
    v68[1] = v35;
    v37 = *(_OWORD *)&Blink[3].Blink;
    v68[2] = v36;
    v68[3] = v37;
  }
  else
  {
    memset(v68, 0, sizeof(v68));
  }
  Flink = Event[21].Header.WaitListHead.Flink;
  WaitListHead = Event[48].Header.WaitListHead;
  v65 = Event[46].Header.WaitListHead;
  v9 = *(_OWORD *)&Event[49].Header.Lock;
  v63 = Event[21].Header.WaitListHead.Blink;
  v56 = Event[6].Header.WaitListHead.Blink;
  v60 = Event[7].Header.WaitListHead.Blink;
  Blink_high = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v10 = (int)Event[10].Header.WaitListHead.Blink;
  v66 = WaitListHead;
  v67 = v9;
  if ( (v10 & 4) != 0 )
    v3 = Event[9].Header.WaitListHead.Blink;
  v59 = v3;
  PspGetEffectiveNoWakeCharge(Event, &v61, &v62);
  ExReleaseResourceLite(p_WaitListHead);
  if ( CurrentThread )
  {
    v12 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v13 = *(_QWORD *)&v68[0];
  v14 = 0;
  if ( *(_QWORD *)&v68[0] && (unsigned __int64)Flink + (unsigned __int64)v66.Blink > *(_QWORD *)&v68[0] )
    v14 = 0x10000;
  v15 = *((_QWORD *)&v68[0] + 1);
  if ( *((_QWORD *)&v68[0] + 1) && (unsigned __int64)((unsigned __int64)v63 + v67) > *((_QWORD *)&v68[0] + 1) )
    v14 |= 0x20000u;
  v16 = *(_QWORD *)&v68[1];
  if ( *(_QWORD *)&v68[1] && (unsigned __int64)v65.Blink + (unsigned __int64)v56 > *(_QWORD *)&v68[1] )
    v14 |= 4u;
  if ( *(_OWORD *)((char *)&v68[1] + 8) != 0LL )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    v38 = KeAbPreAcquire((ULONG_PTR)&Event[42].Header.WaitListHead.Blink, 0LL, 0LL, v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Event[42].Header.WaitListHead.Blink, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (unsigned __int64 *)&Event[42].Header.WaitListHead.Blink,
        v38,
        (ULONG_PTR)&Event[42].Header.WaitListHead.Blink,
        17LL);
    if ( v38 )
      *(_BYTE *)(v38 + 26) |= 1u;
    if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x200000) != 0 )
    {
      v39 = 1;
      v40 = (char *)Event[40].Header.WaitListHead.Flink + (unsigned __int64)Event[54].Header.WaitListHead.Blink;
    }
    else
    {
      v39 = 0;
      v40 = 0LL;
    }
    if ( *(_QWORD *)&v68[2] )
    {
      if ( v39 )
      {
LABEL_67:
        if ( (unsigned __int64)v40 > *(_QWORD *)&v68[2] )
          goto LABEL_68;
LABEL_69:
        if ( *((_QWORD *)&v68[1] + 1) )
        {
          if ( v39 )
          {
LABEL_73:
            if ( (unsigned __int64)v40 > *((_QWORD *)&v68[1] + 1) )
              goto LABEL_75;
LABEL_74:
            v14 |= 0x8000u;
            goto LABEL_75;
          }
          if ( Event[40].Header.WaitListHead.Flink <= (struct _LIST_ENTRY *)*((_QWORD *)&v68[1] + 1) )
            goto LABEL_74;
        }
        if ( !v39 )
          goto LABEL_75;
        goto LABEL_73;
      }
      if ( Event[40].Header.WaitListHead.Flink > (struct _LIST_ENTRY *)*(_QWORD *)&v68[2] )
      {
LABEL_68:
        v14 |= 0x200u;
LABEL_75:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Event[42].Header.WaitListHead.Blink, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Event[42].Header.WaitListHead.Blink);
        KeAbPostRelease((ULONG_PTR)&Event[42].Header.WaitListHead.Blink);
        if ( CurrentThread )
        {
          v41 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v41;
          if ( !v41
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v15 = *((_QWORD *)&v68[0] + 1);
        v13 = *(_QWORD *)&v68[0];
        v16 = *(_QWORD *)&v68[1];
        goto LABEL_15;
      }
    }
    if ( !v39 )
      goto LABEL_69;
    goto LABEL_67;
  }
LABEL_15:
  v17 = (char *)&v68[2] - a2 + 8;
  v18 = 0LL;
  v19 = (char *)v68 - a2 + 8;
  v20 = (_DWORD *)(a2 + 44);
  do
  {
    v21 = *(unsigned int *)((char *)v20 + (_QWORD)v17 - 44);
    if ( (_DWORD)v21 && *(v20 - 3) == *(_DWORD *)((char *)v20 + (_QWORD)v19) && *v20 >= (unsigned int)v21 )
      v14 |= PspRateControlLimitFlag(v18, v20, v21, v17);
    v18 = (unsigned int)(v18 + 1);
    ++v20;
  }
  while ( (int)v18 < 3 );
  if ( v14 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
    v42 = Event[40].Header.WaitListHead.Blink;
    if ( v42 )
    {
      HIDWORD(v42->Flink) |= v14;
      p_Blink = (char *)&Event[40].Header.WaitListHead.Blink[4].Blink;
      if ( (v14 & 0x10000) != 0 )
        *(_QWORD *)p_Blink = v13;
      if ( (v14 & 0x20000) != 0 )
        *((_QWORD *)p_Blink + 1) = v15;
      if ( (v14 & 4) != 0 )
        *((_QWORD *)p_Blink + 2) = v16;
      if ( (v14 & 0x200) != 0 )
        *((_QWORD *)p_Blink + 4) = *(_QWORD *)&v68[2];
      if ( (v14 & 0x8000) != 0 )
        *((_QWORD *)p_Blink + 3) = *((_QWORD *)&v68[1] + 1);
      v44 = (char *)((char *)&v68[2] + 8 - p_Blink);
      v45 = p_Blink + 52;
      v46 = 0LL;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag((unsigned int)v46, v45, v46, v44) & v14) != 0 )
        {
          *(v47 - 3) = *(_DWORD *)((char *)v47 + (_QWORD)v44 - 52);
          *v47 = *(_DWORD *)((char *)v47 + v49);
        }
        v46 = (unsigned int)(v48 + 1);
        v45 = (char *)v47 + v50;
      }
      while ( (int)v46 < 3 );
    }
    else
    {
      LOBYTE(v50) = 4;
    }
    if ( *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Blink) & 0x800) != 0
      && ((unsigned __int8)Event[54].Header.Lock & (unsigned __int8)v50) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    ExReleaseResourceLite(p_WaitListHead);
    if ( CurrentThread )
    {
      v51 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v51;
      if ( !v51
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  v22 = *(_QWORD *)(a2 + 16);
  if ( v22 )
  {
    if ( (*(_DWORD *)(v22 + 768) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v22 + 768), 0xFFFFFFDF);
      v52 = *(_QWORD *)(a2 + 16);
      v64[0] = *(_QWORD *)(a2 + 8);
      v64[1] = 2LL;
      v64[2] = *(_QWORD *)(v52 + 744);
      PspRemoveProcessFromJobChain((volatile signed __int32 *)v52, v64, 0xEu, 0x718u);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v59 && (struct _LIST_ENTRY *)((char *)v60 + (unsigned __int64)v65.Blink) > v59 )
  {
    if ( Blink_high )
    {
      if ( Blink_high != 1 )
        goto LABEL_21;
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite(p_WaitListHead, 1u);
      if ( *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Blink) & 2) != 0 )
      {
        if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
        {
          LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
          Event[9].Header.WaitListHead.Blink = 0LL;
        }
        ExReleaseResourceLite(p_WaitListHead);
        if ( CurrentThread )
        {
          v53 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v53;
          if ( !v53 )
          {
LABEL_141:
            if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              KiCheckForKernelApcDelivery();
          }
        }
      }
      else
      {
        ExReleaseResourceLite(p_WaitListHead);
        if ( CurrentThread )
        {
          v54 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v54;
          if ( !v54
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        PspTerminateAllProcessesInJobHierarchy(Event);
      }
    }
    else if ( (unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[19].Header.Lock
        && (HIDWORD(Event[36].Header.WaitListHead.Blink) & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
      ExReleaseResourceLite(p_WaitListHead);
      if ( CurrentThread )
      {
        v55 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v55;
        if ( !v55 )
          goto LABEL_141;
      }
    }
  }
LABEL_21:
  v23 = *(_QWORD *)(a2 + 24) + v62;
  *(_QWORD *)(a2 + 24) = v23;
  if ( !*(_BYTE *)(a2 + 56) )
  {
    if ( v23 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v61 >= (unsigned int)PspJobNoWakeChargeLimit )
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
    v25 = &Event[44].Header.WaitListHead.Flink[69].Blink;
    v26 = v25;
    v27 = (char *)Event - (char *)Event[44].Header.WaitListHead.Flink;
    v28 = 4LL;
    do
    {
      *v26 = (struct _LIST_ENTRY *)((char *)*v26 + *(_QWORD *)((char *)v26 + v27));
      ++v26;
      --v28;
    }
    while ( v28 );
    v29 = v25 + 4;
    v30 = 6LL;
    do
    {
      *v29 += *(_QWORD *)((char *)v29 + v27);
      ++v29;
      --v30;
    }
    while ( v30 );
    memset(&Event[46].Header.WaitListHead, 0, 0x50uLL);
    ExReleaseResourceLite((PERESOURCE)&Event[2].Header.WaitListHead);
    if ( CurrentThread )
    {
      v31 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v31;
      if ( !v31
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    ExReleaseResourceLite((PERESOURCE)&Event[44].Header.WaitListHead.Flink[3].Blink);
    if ( CurrentThread )
    {
      v32 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v32;
      if ( !v32 )
      {
LABEL_38:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(p_WaitListHead, 1u);
    memset(&Event[46].Header.WaitListHead, 0, 0x50uLL);
    ExReleaseResourceLite(p_WaitListHead);
    if ( CurrentThread )
    {
      v34 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v34;
      if ( !v34 )
        goto LABEL_38;
    }
  }
  return 0LL;
}
