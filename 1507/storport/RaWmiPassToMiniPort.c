/*
 * XREFs of RaWmiPassToMiniPort @ 0x1C004EBFC
 * Callers:
 *     RaWmiIrpRegisterRequest @ 0x1C004EFE0 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C00548BC (RaWmiIrpNormalRequest.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C0005C44 (RaidXrbSetCompletionRoutine.c)
 *     RaidXrbDeallocateResources @ 0x1C000EC64 (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000EDE4 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C000EF40 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C000EF88 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000EFC8 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C000F054 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaidFreeSrb @ 0x1C000F3C8 (RaidFreeSrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F3D4 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0021D20 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0024A58 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 *     WPP_SF_qqq @ 0x1C0025988 (WPP_SF_qqq.c)
 *     WPP_SF_qD @ 0x1C0025AB4 (WPP_SF_qD.c)
 *     RaidBuildMdlForXrb @ 0x1C004EF94 (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE *v4; // rbp
  _BYTE *v5; // r12
  unsigned int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdx
  _BYTE *Srb; // rbx
  __int64 v12; // r8
  void *ContiguousIoResources; // rax
  __int64 v14; // rdx
  int v15; // esi
  _BYTE *v16; // rsi
  __int64 v17; // rcx
  __int16 v18; // r9
  int v19; // r10d
  __int64 v20; // rcx
  char v21; // al
  char v22; // al
  PDEVICE_OBJECT v23; // r10
  int v24; // eax
  int v25; // eax
  PVOID v26; // rbp
  _BYTE *v28; // rcx
  char v29; // al
  __int64 v30; // rbp
  char v31; // al
  char v32; // al
  int v33; // eax
  unsigned __int16 v34; // dx
  int v35; // ecx
  int v36; // r9d
  __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  char v41; // [rsp+98h] [rbp+10h] BYREF
  _BYTE *v42; // [rsp+A0h] [rbp+18h]
  PVOID BaseAddress; // [rsp+A8h] [rbp+20h]

  v41 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  BaseAddress = 0LL;
  v4 = 0LL;
  v42 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)v3 == 1 )
  {
    v39 = v3;
    v3 = *(_QWORD *)(v3 + 24);
  }
  else
  {
    v39 = 0LL;
  }
  v7 = *(_DWORD *)(a3 + 16);
  v8 = 0LL;
  if ( a2 == 9 )
  {
    v9 = **(_DWORD **)(a3 + 24);
    if ( v7 > v9 )
      v9 = *(_DWORD *)(a3 + 16);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 16);
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0x17u, *(_BYTE *)(v3 + 402), 0);
  if ( !Srb
    || (ContiguousIoResources = (void *)StorAllocateContiguousIoResources(
                                          ((*(_DWORD *)(v3 + 444) + 7) & 0xFFFFFFF8) + 1040,
                                          v10,
                                          (_QWORD *)v3),
        (BaseAddress = ContiguousIoResources) == 0LL) )
  {
    v15 = -1073741801;
    goto LABEL_42;
  }
  v8 = (__int64)ContiguousIoResources + 16;
  RaidZeroXrb((__int64)ContiguousIoResources + 16, v14, 0, 0LL);
  *(_QWORD *)(v8 + 168) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v8 + 160) = Srb;
  v15 = RaidBuildMdlForXrb(v8, *(_QWORD *)(a3 + 24), v9);
  if ( v15 < 0 )
  {
LABEL_42:
    *(_DWORD *)(a3 + 16) = 0;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v3 + 402) == 1 )
  {
    v30 = *((unsigned int *)Srb + 13);
    v16 = Srb;
    *((_QWORD *)Srb + 12) = v8;
    v4 = &Srb[v30];
    *((_DWORD *)Srb + 5) = 23;
    *((_QWORD *)Srb + 8) = *(_QWORD *)(a3 + 24);
    v31 = v41;
    *((_DWORD *)Srb + 15) = v7;
    *((_DWORD *)Srb + 6) = 320;
    *((_DWORD *)Srb + 10) = 10;
    v5 = &Srb[*((unsigned int *)Srb + 30)];
    v42 = Srb;
    *(_DWORD *)v5 = 96;
    *((_DWORD *)v5 + 1) = 16;
    v5[8] = v31;
    *((_QWORD *)v5 + 2) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v8 + 176) = *((_QWORD *)Srb + 8);
  }
  else
  {
    *((_QWORD *)Srb + 6) = v8;
    Srb[2] = 23;
    v16 = 0LL;
    v17 = *(_QWORD *)(a3 + 24);
    *(_WORD *)Srb = 88;
    Srb[4] = v41;
    *((_QWORD *)Srb + 3) = v17;
    *((_DWORD *)Srb + 4) = v7;
    *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
    *((_DWORD *)Srb + 3) = 320;
    *((_DWORD *)Srb + 5) = 10;
    *(_QWORD *)(v8 + 176) = v17;
  }
  RaSrbSetMiniportContext(v3, (__int64)Srb, (__int64)BaseAddress + 1040);
  v20 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v20 == v19 )
  {
    v21 = *(_BYTE *)(v20 + 88);
    if ( *(_BYTE *)(v3 + 402) != (_BYTE)v19 )
    {
      Srb[5] = v21;
      Srb[6] = *(_BYTE *)(v20 + 89);
      v22 = *(_BYTE *)(v20 + 90);
LABEL_13:
      Srb[7] = v22;
      goto LABEL_14;
    }
    v4[8] = v21;
    v4[9] = *(_BYTE *)(v20 + 89);
    v32 = *(_BYTE *)(v20 + 90);
LABEL_63:
    v4[10] = v32;
    goto LABEL_14;
  }
  v28 = *(_BYTE **)(v3 + 120);
  if ( *(_BYTE *)(v3 + 402) == (_BYTE)v19 )
    v5[9] = v19;
  else
    Srb[9] = v19;
  if ( v28 != (_BYTE *)(v3 + 120) )
  {
    v29 = v28[40];
    if ( *(_BYTE *)(v3 + 402) != (_BYTE)v19 )
    {
      Srb[5] = v29;
      Srb[6] = v28[41];
      v22 = v28[42];
      goto LABEL_13;
    }
    v4[8] = v29;
    v4[9] = v28[41];
    v32 = v28[42];
    goto LABEL_63;
  }
  if ( *(_BYTE *)(v3 + 402) == (_BYTE)v19 )
  {
    *((_WORD *)v4 + 4) = v18;
    v4[10] = v18;
  }
  else
  {
    *(_WORD *)(Srb + 5) = v18;
    Srb[7] = v18;
  }
LABEL_14:
  KeInitializeEvent((PRKEVENT)(v8 + 656), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v8, (__int64)RaidXrbSignalCompletion);
  if ( Srb[2] == 40 )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_2a11bdf443fd2b5e7057f3f9330d1120_Traceguids,
          v8,
          v16,
          *((_QWORD *)v16 + 13));
        v23 = WPP_GLOBAL_Control;
      }
      if ( v23 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v23->Timer) & 0x40) != 0 && BYTE1(v23->Timer) >= 4u )
      {
        v33 = (unsigned __int8)v4[10];
        v34 = 12;
        v35 = (unsigned __int8)v4[9];
        v36 = (unsigned __int8)v4[8];
LABEL_77:
        LODWORD(v38) = v33;
        LODWORD(v37) = v35;
        WPP_SF_ddd(
          (__int64)v23->AttachedDevice,
          v34,
          (__int64)&WPP_2a11bdf443fd2b5e7057f3f9330d1120_Traceguids,
          v36,
          v37,
          v38);
      }
    }
  }
  else
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_2a11bdf443fd2b5e7057f3f9330d1120_Traceguids,
          v8,
          Srb,
          *((_QWORD *)Srb + 7));
        v23 = WPP_GLOBAL_Control;
      }
      if ( v23 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v23->Timer) & 0x40) != 0 && BYTE1(v23->Timer) >= 4u )
      {
        v33 = (unsigned __int8)Srb[7];
        v34 = 14;
        v35 = (unsigned __int8)Srb[6];
        v36 = (unsigned __int8)Srb[5];
        goto LABEL_77;
      }
    }
  }
  if ( v39 )
  {
    RaidUnitPoFxActivateComponent(v39, 0, 1LL, &v41);
  }
  else if ( *(_QWORD *)(v3 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v3, 0LL, 1LL);
  }
  if ( *(_BYTE *)(v3 + 4450) )
    v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v3, v8);
  else
    v24 = RaidAdapterExecuteXrb(v3, v8);
  v15 = v24;
  if ( v24 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 656), Executive, 0, 0, 0LL);
    v15 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( v39 )
  {
    if ( (*(_BYTE *)(v8 + 17) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v39, *(_DWORD *)(v8 + 732));
      *(_BYTE *)(v8 + 17) &= ~2u;
    }
    RaidUnitPoFxIdleComponent(v39, 0, 0, &v41);
  }
  else if ( *(_QWORD *)(v3 + 5088) )
  {
    if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(v3, *(unsigned int *)(v8 + 732));
      *(_BYTE *)(v8 + 17) &= ~1u;
    }
    RaidAdapterPoFxIdleComponent(v3, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v37) = v15;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_2a11bdf443fd2b5e7057f3f9330d1120_Traceguids,
      v8,
      v37);
  }
  if ( v15 < 0 )
    goto LABEL_42;
  if ( Srb[2] == 40 )
    v25 = *((_DWORD *)v42 + 15);
  else
    v25 = *((_DWORD *)Srb + 4);
  *(_DWORD *)(a3 + 16) = v25;
LABEL_35:
  v26 = BaseAddress;
  if ( BaseAddress )
  {
    RaidXrbDeallocateResources(v8, 0, v12);
    MmFreeContiguousMemory(v26);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return (unsigned int)v15;
}
