/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C00166FC
 * Callers:
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C005E2C4 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C005E544 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0002F38 (RaSrbSetMiniportContext.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0002F60 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0003308 (RaidUnitPoFxActivateComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00038DC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 *     WPP_SF_qDD @ 0x1C002AFB0 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C002B17C (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  _BYTE *v6; // r14
  _BYTE *v7; // r12
  _BYTE *v8; // rbp
  __int64 ContiguousNodeMemory; // rax
  _BYTE *Srb; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r14
  _BYTE *v17; // r13
  char v18; // r9
  char v19; // al
  PDEVICE_OBJECT v20; // r10
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // r9
  unsigned int v25; // r14d
  int v26; // eax
  __int64 v27; // rdx
  _BYTE *v28; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-68h]
  _BYTE *v31; // [rsp+38h] [rbp-60h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-58h] BYREF
  int v34; // [rsp+A8h] [rbp+10h]
  char v35; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)v5 == 1 )
  {
    v8 = *(_BYTE **)(a1 + 64);
    v5 = *(_QWORD *)(v5 + 24);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !*(_QWORD *)(v5 + 528) || !*(_QWORD *)(v5 + 536) )
    return 0LL;
  ContiguousNodeMemory = 0LL;
  Interval.QuadPart = -1000LL;
  Srb = 0LL;
  BaseAddress = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = ((*(_DWORD *)(v5 + 444) + 7) & 0xFFFFFFF8) + 1056;
  while ( 1 )
  {
    if ( !Srb )
    {
      Srb = RaidAllocateSrb(*(_QWORD *)(v5 + 8), 0x25u, *(_BYTE *)(v5 + 402), 0);
      ContiguousNodeMemory = (__int64)BaseAddress;
    }
    if ( !ContiguousNodeMemory )
    {
      ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                               v13,
                               *(_QWORD *)(v5 + 4392),
                               *(_QWORD *)(v5 + 4400),
                               *(_QWORD *)(v5 + 4384),
                               4,
                               0x80000000);
      BaseAddress = (PVOID)ContiguousNodeMemory;
    }
    if ( Srb && ContiguousNodeMemory )
      break;
    v14 = v12++;
    if ( v14 >= 3 )
    {
      v25 = -1073741801;
      goto LABEL_64;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousNodeMemory = (__int64)BaseAddress;
  }
  v11 = ContiguousNodeMemory + 16;
  RaidZeroXrb(ContiguousNodeMemory + 16, a2, 0, 0LL);
  v15 = v36;
  *(_QWORD *)(v11 + 168) = Srb;
  *(_QWORD *)(v11 + 176) = *((_QWORD *)Srb + 6);
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v16 = *((unsigned int *)Srb + 13);
    v17 = Srb;
    *((_DWORD *)Srb + 15) = a5;
    v6 = &Srb[v16];
    *((_QWORD *)Srb + 8) = v15;
    *((_QWORD *)Srb + 12) = v11;
    *((_DWORD *)Srb + 5) = 37;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = 10;
    v7 = &Srb[*((unsigned int *)Srb + 30)];
    v31 = Srb;
    *(_DWORD *)v7 = 98;
    *((_DWORD *)v7 + 1) = 16;
    *((_DWORD *)v7 + 3) = v34;
    v7[8] = 0;
    *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 8);
  }
  else
  {
    v17 = 0LL;
    *((_DWORD *)Srb + 4) = a5;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 2) = v34;
    *((_QWORD *)Srb + 6) = v11;
    Srb[2] = 37;
    *((_QWORD *)Srb + 3) = v15;
    Srb[4] = 0;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = 10;
    *(_QWORD *)(v11 + 184) = v15;
  }
  RaSrbSetMiniportContext(v5, (__int64)Srb, (__int64)BaseAddress + 1056);
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    v19 = v8[88];
    if ( *(_BYTE *)(v5 + 402) == 1 )
    {
      v6[8] = v19;
      v6[9] = v8[89];
      v6[10] = v8[90];
    }
    else
    {
      Srb[5] = v19;
      Srb[6] = v8[89];
      Srb[7] = v8[90];
    }
  }
  else if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    *((_DWORD *)v7 + 4) = 1;
    *((_WORD *)v6 + 4) = 0;
    v6[10] = v18;
  }
  else
  {
    *(_WORD *)(Srb + 5) = 0;
    *((_DWORD *)Srb + 16) = 1;
    Srb[7] = v18;
  }
  KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
  *(_QWORD *)(v11 + 656) = RaidXrbSignalCompletion;
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          58LL,
          &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
          v11,
          v17,
          *((_QWORD *)v17 + 13));
        v20 = WPP_GLOBAL_Control;
      }
      if ( v20 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v20->Timer) & 2) != 0 && BYTE1(v20->Timer) >= 4u )
      {
        v21 = (unsigned __int8)v6[10];
        v22 = 59LL;
        v23 = (unsigned __int8)v6[9];
        v24 = (unsigned __int8)v6[8];
LABEL_42:
        WPP_SF_ddd(v20->AttachedDevice, v22, &WPP_222db84838ff3f85fffe5432ece91366_Traceguids, v24, v23, v21);
      }
    }
  }
  else
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          60LL,
          &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
          v11,
          Srb,
          *((_QWORD *)Srb + 7));
        v20 = WPP_GLOBAL_Control;
      }
      if ( v20 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v20->Timer) & 2) != 0 && BYTE1(v20->Timer) >= 4u )
      {
        v21 = (unsigned __int8)Srb[7];
        v22 = 61LL;
        v23 = (unsigned __int8)Srb[6];
        v24 = (unsigned __int8)Srb[5];
        goto LABEL_42;
      }
    }
  }
  v25 = 0;
  if ( v8 )
  {
    RaidUnitPoFxActivateComponent((__int64)v8, 0, 1LL, &v35);
  }
  else if ( *(_QWORD *)(v5 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v5, 0LL, 1LL);
  }
  if ( *(_BYTE *)(v5 + 4450) )
    v26 = RaidAdapterRaiseIrqlAndExecuteXrb(v5, v11);
  else
    v26 = RaidAdapterExecuteXrb(v5, v11);
  if ( v26 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v11 + 664), Executive, 0, 0, 0LL);
    v25 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(v11 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(v11 + 748));
    *(_BYTE *)(v11 + 17) &= ~1u;
  }
  if ( v8 )
  {
    RaidUnitPoFxIdleComponent((__int64)v8, 0, 0, &v35);
    if ( (*(_BYTE *)(v11 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(v11 + 748));
      *(_BYTE *)(v11 + 17) &= ~2u;
    }
  }
  else if ( *(_QWORD *)(v5 + 5088) )
  {
    RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v27, a3, v5);
  }
LABEL_64:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v11, 0, a3);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v5 + 402) == 1 )
    {
      v28 = v31;
      if ( !v31 )
        v28 = Srb;
      *((_QWORD *)v28 + 10) = 0LL;
      *((_QWORD *)v28 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v25;
}
