/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C000E6FC
 * Callers:
 *     RaUnitQueryCapabilitiesIrp @ 0x1C004E658 (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C0053008 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0053274 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000EC64 (RaidXrbDeallocateResources.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C000EF40 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C000EF88 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000EFC8 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C000F054 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0021D20 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0024A58 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 *     WPP_SF_qDD @ 0x1C00257BC (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C0025988 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  _BYTE *v6; // r13
  _BYTE *v7; // r14
  _BYTE *v8; // r12
  _BYTE *v9; // rbp
  __int64 ContiguousNodeMemory; // rax
  int v11; // r15d
  _BYTE *Srb; // rbx
  __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // rcx
  char v16; // r9
  char v17; // al
  PDEVICE_OBJECT v18; // r10
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // ecx
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // r9
  char *BaseAddress; // [rsp+30h] [rbp-58h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-50h] BYREF
  int v33; // [rsp+98h] [rbp+10h]
  unsigned int v34; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  LOBYTE(v34) = a3;
  v33 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_DWORD *)v5 == 1 )
  {
    v9 = *(_BYTE **)(a1 + 64);
    v5 = *(_QWORD *)(v5 + 24);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !*(_QWORD *)(v5 + 528) || !*(_QWORD *)(v5 + 536) )
    return 0LL;
  ContiguousNodeMemory = 0LL;
  Interval.QuadPart = -1000LL;
  v11 = *(_DWORD *)(v5 + 444);
  Srb = 0LL;
  v34 = 0;
  BaseAddress = 0LL;
  v13 = 0LL;
  v14 = ((v11 + 7) & 0xFFFFFFF8) + 1040;
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
                               v14,
                               *(_QWORD *)(v5 + 4392),
                               *(_QWORD *)(v5 + 4400),
                               *(_QWORD *)(v5 + 4384),
                               4,
                               0x80000000);
      BaseAddress = (char *)ContiguousNodeMemory;
    }
    if ( Srb && ContiguousNodeMemory )
      break;
    v24 = v34++;
    if ( v24 >= 3 )
    {
      v19 = -1073741801;
      goto LABEL_33;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    ContiguousNodeMemory = (__int64)BaseAddress;
  }
  v13 = ContiguousNodeMemory + 16;
  RaidZeroXrb(ContiguousNodeMemory + 16, a2, 0LL, 0LL);
  v15 = v35;
  *(_QWORD *)(v13 + 160) = Srb;
  *(_QWORD *)(v13 + 168) = *((_QWORD *)Srb + 6);
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v25 = *((unsigned int *)Srb + 13);
    v6 = Srb;
    *((_DWORD *)Srb + 15) = a5;
    v7 = &Srb[v25];
    *((_QWORD *)Srb + 8) = v15;
    *((_QWORD *)Srb + 12) = v13;
    *((_DWORD *)Srb + 5) = 37;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = 10;
    v8 = &Srb[*((unsigned int *)Srb + 30)];
    *(_DWORD *)v8 = 98;
    *((_DWORD *)v8 + 1) = 16;
    *((_DWORD *)v8 + 3) = v33;
    v8[8] = 0;
    *(_QWORD *)(v13 + 176) = *((_QWORD *)Srb + 8);
  }
  else
  {
    *((_DWORD *)Srb + 4) = a5;
    *((_QWORD *)Srb + 6) = v13;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 2) = v33;
    Srb[2] = 37;
    *((_QWORD *)Srb + 3) = v15;
    Srb[4] = 0;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = 10;
    *(_QWORD *)(v13 + 176) = v15;
  }
  RaSrbSetMiniportContext(v5, Srb, BaseAddress + 1040, 0LL);
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    v17 = v9[88];
    if ( *(_BYTE *)(v5 + 402) == 1 )
    {
      v7[8] = v17;
      v7[9] = v9[89];
      v7[10] = v9[90];
    }
    else
    {
      Srb[5] = v17;
      Srb[6] = v9[89];
      Srb[7] = v9[90];
    }
  }
  else if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    *((_DWORD *)v8 + 4) = 1;
    *((_WORD *)v7 + 4) = 0;
    v7[10] = v16;
  }
  else
  {
    *((_DWORD *)Srb + 16) = 1;
    *(_WORD *)(Srb + 5) = 0;
    Srb[7] = v16;
  }
  KeInitializeEvent((PRKEVENT)(v13 + 656), NotificationEvent, 0);
  *(_QWORD *)(v13 + 648) = RaidXrbSignalCompletion;
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          58LL,
          &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
          v13,
          v6,
          *((_QWORD *)v6 + 13));
        v18 = WPP_GLOBAL_Control;
      }
      if ( v18 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v18->Timer) & 2) != 0 && BYTE1(v18->Timer) >= 4u )
      {
        v26 = (unsigned __int8)v7[10];
        v27 = 59LL;
        v28 = (unsigned __int8)v7[9];
        v29 = (unsigned __int8)v7[8];
LABEL_61:
        WPP_SF_ddd(v18->AttachedDevice, v27, &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids, v29, v28, v26);
      }
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          60LL,
          &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
          v13,
          Srb,
          *((_QWORD *)Srb + 7));
        v18 = WPP_GLOBAL_Control;
      }
      if ( v18 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v18->Timer) & 2) != 0 && BYTE1(v18->Timer) >= 4u )
      {
        v26 = (unsigned __int8)Srb[7];
        v27 = 61LL;
        v28 = (unsigned __int8)Srb[6];
        v29 = (unsigned __int8)Srb[5];
        goto LABEL_61;
      }
    }
  }
  if ( v9 )
  {
    RaidUnitPoFxActivateComponent(v9, 0LL, 1LL, &v34);
  }
  else if ( *(_QWORD *)(v5 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v5, 0LL, 1LL);
  }
  if ( *(_BYTE *)(v5 + 4450) )
    RaidAdapterRaiseIrqlAndExecuteXrb(v5, v13);
  else
    RaidAdapterExecuteXrb(v5, v13);
  v19 = 0;
  KeWaitForSingleObject((PVOID)(v13 + 656), Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(v13 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(v13 + 732), v21, v22);
    *(_BYTE *)(v13 + 17) &= ~1u;
  }
  if ( v9 )
  {
    RaidUnitPoFxIdleComponent(v9, 0LL, 0LL, &v34);
    if ( (*(_BYTE *)(v13 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(v13 + 732));
      *(_BYTE *)(v13 + 17) &= ~2u;
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
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v20, v21, v5);
  }
LABEL_33:
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v13, 0LL);
    MmFreeContiguousMemory(BaseAddress);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v5 + 402) == 1 )
    {
      if ( !v6 )
        v6 = Srb;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v19;
}
