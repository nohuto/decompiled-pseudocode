/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0026308 (RaAdapterProtocolCommandIoctl.c)
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
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002A2DC (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C002B17C (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C0039B30 (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C003B3FC (StorEtwProtocolCommandCompletion.c)
 *     RaidBuildMdlForXrb @ 0x1C00575CC (RaidBuildMdlForXrb.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v4; // rsi
  _IRP *MasterIrp; // r13
  char v7; // r8
  unsigned int Length; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  _BYTE *v12; // r15
  _BYTE *Srb; // rdi
  __int64 ContiguousNodeMemory; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rbx
  int v18; // r14d
  bool v19; // zf
  int v20; // eax
  char v21; // r14
  __int64 v22; // rbx
  int Blink; // eax
  unsigned int LowPart; // eax
  int v25; // eax
  int v26; // eax
  KIRQL v27; // bl
  unsigned __int64 v28; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  void *v32; // [rsp+98h] [rbp+10h]
  char v33; // [rsp+A0h] [rbp+18h]

  v33 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = *(_BYTE *)(a1 + 402);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1056;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options > Length )
    Length = CurrentStackLocation->Parameters.Create.Options;
  Timeout.LowPart = Length;
  Srb = RaidAllocateSrb(v11, 9u, v7, 0);
  ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                           v10,
                           *(_QWORD *)(a1 + 4392),
                           *(_QWORD *)(a1 + 4400),
                           *(_QWORD *)(a1 + 4384),
                           4,
                           0x80000000);
  v32 = (void *)ContiguousNodeMemory;
  v17 = (void *)ContiguousNodeMemory;
  if ( Srb && ContiguousNodeMemory )
  {
    v4 = ContiguousNodeMemory + 16;
    RaidZeroXrb(ContiguousNodeMemory + 16, v15, 0, 0LL);
    v18 = RaidBuildMdlForXrb(v4, MasterIrp, Length);
    if ( v18 >= 0 )
    {
      v19 = LODWORD(MasterIrp->ThreadListEntry.Flink) == 0;
      v20 = 1;
      MasterIrp->Flags = 255;
      if ( !v19 )
        v20 = 129;
      if ( HIDWORD(MasterIrp->ThreadListEntry.Flink) )
        v20 |= 0x40u;
      v21 = v33;
      if ( !v33 )
      {
        v20 |= 0x102u;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        v22 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 8) = -1;
        v12 = Srb;
        *((_DWORD *)Srb + 6) = v20;
        *((_DWORD *)Srb + 15) = Timeout.LowPart;
        *((_DWORD *)Srb + 5) = 9;
        *((_QWORD *)Srb + 8) = MasterIrp;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        Blink = (int)MasterIrp->ThreadListEntry.Blink;
        if ( !Blink )
          Blink = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 10) = Blink;
        *((_QWORD *)Srb + 12) = v4;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)&Srb[v22 + 8] = 0;
        Srb[v22 + 10] = 0;
        v17 = v32;
        *(_QWORD *)(v4 + 168) = Srb;
        *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 8);
        *(_QWORD *)(v4 + 176) = *((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v20;
        LowPart = Timeout.LowPart;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 4) = LowPart;
        Srb[2] = 9;
        Srb[8] = -1;
        *((_QWORD *)Srb + 3) = MasterIrp;
        v25 = (int)MasterIrp->ThreadListEntry.Blink;
        if ( !v25 )
          v25 = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 5) = v25;
        *((_QWORD *)Srb + 6) = v4;
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        *(_QWORD *)(v4 + 168) = Srb;
        *(_QWORD *)(v4 + 184) = *((_QWORD *)Srb + 3);
        *(_QWORD *)(v4 + 176) = a2;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, (__int64)v17 + 1056);
      if ( v21 )
        *(_BYTE *)(v4 + 17) |= 8u;
      KeInitializeEvent((PRKEVENT)(v4 + 664), NotificationEvent, 0);
      *(_QWORD *)(v4 + 656) = RaidXrbSignalCompletion;
      if ( v21
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 768, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
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
              65LL,
              &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
              v4,
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
            66LL,
            &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
            v4,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v26 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v4);
        else
          v26 = RaidAdapterExecuteXrb(a1, v4);
        v18 = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v4 + 664), Executive, 0, 0, 0LL);
          v18 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v33 )
        {
          v27 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v27);
          v17 = v32;
        }
        if ( (*(_BYTE *)(v4 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v4 + 748));
          *(_BYTE *)(v4 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v18 >= 0 )
        {
          if ( MasterIrp->Flags == 255 )
            v18 = -1073741637;
          if ( v18 >= 0 )
          {
            if ( *(_BYTE *)(a1 + 402) == 1 )
              v28 = *((unsigned int *)v12 + 15);
            else
              v28 = *((unsigned int *)Srb + 4);
            a2->IoStatus.Information = v28;
          }
        }
      }
    }
  }
  else
  {
    v18 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v16) = v33;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v16);
  }
  if ( v17 )
  {
    RaidXrbDeallocateResources(v4, 0, v16);
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
