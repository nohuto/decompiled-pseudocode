/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC
 * Callers:
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0026390 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C002650C (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002705C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0027158 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0027290 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0029D7C (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0029EC4 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002A0C4 (RaidGetStorageAdapterTemperatureProperty.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0002F38 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x1C000356C (RaidXrbDeallocateResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00038DC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003924 (RaidAdapterExecuteXrb.c)
 *     RaidPauseAdapterQueue @ 0x1C000C138 (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002A2DC (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C002B17C (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0039B30 (StorSetIoGatewayEmptyEvent.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00436B8 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidBuildMdlForXrb @ 0x1C00575CC (RaidBuildMdlForXrb.c)
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
  __int64 v11; // rsi
  unsigned int v12; // ebx
  _BYTE *v13; // r15
  _BYTE *Srb; // rdi
  __int64 ContiguousNodeMemory; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  void *v18; // rbx
  int v19; // r14d
  char v20; // r12
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  KIRQL v26; // bl
  void *v28; // [rsp+30h] [rbp-58h]
  struct _KEVENT Event; // [rsp+38h] [rbp-50h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h]
  unsigned int v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v11 = 0LL;
  v12 = ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1056;
  v13 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 402), 0);
  ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                           v12,
                           *(_QWORD *)(a1 + 4392),
                           *(_QWORD *)(a1 + 4400),
                           *(_QWORD *)(a1 + 4384),
                           4,
                           0x80000000);
  v28 = (void *)ContiguousNodeMemory;
  v18 = (void *)ContiguousNodeMemory;
  if ( Srb && ContiguousNodeMemory )
  {
    v11 = ContiguousNodeMemory + 16;
    RaidZeroXrb(ContiguousNodeMemory + 16, v16, 0, 0LL);
    v19 = RaidBuildMdlForXrb(v11, a3, a4);
    if ( v19 >= 0 )
    {
      v20 = a6;
      v21 = a7;
      if ( !a6 )
      {
        v21 = a7 | 0x102;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      v22 = v21 | 1;
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        *((_DWORD *)Srb + 8) = -1;
        v23 = *((unsigned int *)Srb + 13);
        v13 = Srb;
        *((_DWORD *)Srb + 6) = v22;
        *((_QWORD *)Srb + 8) = v31;
        *((_DWORD *)Srb + 15) = v32;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 12) = v11;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)&Srb[v23 + 8] = 0;
        Srb[v23 + 10] = 0;
        v18 = v28;
        *(_QWORD *)(v11 + 168) = Srb;
        *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 8);
        *(_QWORD *)(v11 + 176) = *((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v22;
        *((_QWORD *)Srb + 3) = v31;
        *((_DWORD *)Srb + 4) = v32;
        *(_WORD *)Srb = 88;
        Srb[2] = 2;
        Srb[8] = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
        *((_QWORD *)Srb + 6) = v11;
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        *(_QWORD *)(v11 + 168) = Srb;
        *(_QWORD *)(v11 + 184) = *((_QWORD *)Srb + 3);
        *(_QWORD *)(v11 + 176) = a2;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v18 + 1056);
      if ( v20 )
        *(_BYTE *)(v11 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v11 + 664), NotificationEvent, 0);
      *(_QWORD *)(v11 + 656) = RaidXrbSignalCompletion;
      if ( v20
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 768, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v19 = -1073741823;
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
              &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
              v11,
              v13,
              *((_QWORD *)v13 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
            v11,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v24 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v11);
        else
          v24 = RaidAdapterExecuteXrb(a1, v11);
        v19 = v24;
        if ( v24 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v11 + 664), Executive, 0, 0, 0LL);
          v19 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v20 )
        {
          v26 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v26);
          v18 = v28;
        }
        if ( (*(_BYTE *)(v11 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v11 + 748));
          *(_BYTE *)(v11 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v19 >= 0 )
        {
          if ( a5 )
            v19 = a5(*(unsigned int *)(v31 + 20));
          if ( v19 >= 0 )
          {
            LOBYTE(v25) = Srb[3];
            v19 = PortSrbTranslateSrbToNtStatus(v25);
          }
        }
      }
    }
  }
  else
  {
    v19 = -1073741801;
  }
  if ( v18 )
  {
    RaidXrbDeallocateResources(v11, 0, v17);
    MmFreeContiguousMemory(v18);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( !v13 )
        v13 = Srb;
      *((_QWORD *)v13 + 10) = 0LL;
      *((_QWORD *)v13 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v19;
}
