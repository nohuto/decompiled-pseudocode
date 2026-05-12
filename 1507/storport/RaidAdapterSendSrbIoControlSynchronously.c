/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0
 * Callers:
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0020C30 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C0020D90 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0021630 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002172C (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0021864 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0023E54 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0023F9C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0024148 (RaidGetStorageAdapterTemperatureProperty.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000EC64 (RaidXrbDeallocateResources.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C000EF40 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C000EF88 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C000F054 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaidPauseAdapterQueue @ 0x1C0011978 (RaidPauseAdapterQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0021D20 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0024998 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C0025988 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0034C28 (StorSetIoGatewayEmptyEvent.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C003AED4 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidBuildMdlForXrb @ 0x1C004EF94 (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  __int64 v10; // rsi
  unsigned int v11; // ebx
  _BYTE *v12; // r15
  _BYTE *Srb; // rdi
  __int64 ContiguousNodeMemory; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // r13
  int v18; // r14d
  char v19; // r12
  int v20; // eax
  int v21; // eax
  IRP *v22; // r14
  __int64 v23; // rbx
  PIRP v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  KIRQL v27; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h]
  __int64 v32; // [rsp+B0h] [rbp+18h]
  unsigned int v33; // [rsp+B8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  Irp = a2;
  v10 = 0LL;
  v11 = ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1040;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 402), 0);
  ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                           v11,
                           *(_QWORD *)(a1 + 4392),
                           *(_QWORD *)(a1 + 4400),
                           *(_QWORD *)(a1 + 4384),
                           4,
                           0x80000000);
  v17 = (void *)ContiguousNodeMemory;
  if ( Srb && ContiguousNodeMemory )
  {
    v10 = ContiguousNodeMemory + 16;
    RaidZeroXrb(ContiguousNodeMemory + 16, v15, 0, 0LL);
    v18 = RaidBuildMdlForXrb(v10, a3, a4);
    if ( v18 >= 0 )
    {
      v19 = a6;
      v20 = a7;
      if ( !a6 )
        v20 = a7 | 0x102;
      v21 = v20 | 1;
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        v22 = Irp;
        v12 = Srb;
        *((_DWORD *)Srb + 8) = -1;
        v23 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 6) = v21;
        *((_QWORD *)Srb + 8) = v32;
        *((_DWORD *)Srb + 15) = v33;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(v22);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 12) = v10;
        *((_QWORD *)Srb + 10) = v22;
        *(_WORD *)&Srb[v23 + 8] = 0;
        Srb[v23 + 10] = 0;
        v24 = v22;
        *(_QWORD *)(v10 + 160) = Srb;
        *(_QWORD *)(v10 + 176) = *((_QWORD *)Srb + 8);
        *(_QWORD *)(v10 + 168) = *((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v21;
        *((_QWORD *)Srb + 3) = v32;
        *((_DWORD *)Srb + 4) = v33;
        *(_WORD *)Srb = 88;
        Srb[2] = 2;
        Srb[8] = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        v24 = Irp;
        *((_QWORD *)Srb + 6) = v10;
        *(_QWORD *)(v10 + 160) = Srb;
        *(_QWORD *)(v10 + 176) = *((_QWORD *)Srb + 3);
        *(_QWORD *)(v10 + 168) = v24;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v17 + 1040);
      if ( v19 )
        *(_BYTE *)(v10 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v10 + 656), NotificationEvent, 0);
      *(_QWORD *)(v10 + 648) = RaidXrbSignalCompletion;
      if ( v19
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 768, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        v24->IoStatus.Information = 0LL;
        v18 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 402) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
              v10,
              v12,
              *((_QWORD *)v12 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
            v10,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v10);
        else
          v25 = RaidAdapterExecuteXrb(a1, v10);
        v18 = v25;
        KeWaitForSingleObject((PVOID)(v10 + 656), Executive, 0, 0, 0LL);
        if ( v19 )
        {
          v27 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v27);
        }
        if ( (*(_BYTE *)(v10 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v10 + 732));
          *(_BYTE *)(v10 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v18 >= 0 )
        {
          if ( a5 )
            v18 = a5(*(unsigned int *)(v32 + 20));
          if ( v18 >= 0 )
          {
            LOBYTE(v26) = Srb[3];
            v18 = PortSrbTranslateSrbToNtStatus(v26);
          }
        }
      }
    }
  }
  else
  {
    v18 = -1073741801;
  }
  if ( v17 )
  {
    RaidXrbDeallocateResources(v10, 0, v16);
    MmFreeContiguousMemory(v17);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( !v12 )
        v12 = Srb;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v18;
}
