/*
 * XREFs of ndisSelectiveSuspendInitialize @ 0x1C00DCC7C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x1C0019AD0 (NdisNblTrackerRegisterComponent.c)
 *     NdisInitializeTimer @ 0x1C001BB70 (NdisInitializeTimer.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00DCA44 (ndisReadSSTimeoutKeywords.c)
 *     ndisSelectiveSuspendFree @ 0x1C00DCBC8 (ndisSelectiveSuspendFree.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(_QWORD *FunctionContext)
{
  __int64 v1; // rax
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi
  _OWORD *v5; // rax
  __int64 v6; // rax

  v1 = FunctionContext[477];
  if ( *(_QWORD *)(v1 + 848) && *(_QWORD *)(v1 + 856) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A8uLL, 0x7373444Eu);
    FunctionContext[564] = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x2A8uLL);
      v4 = FunctionContext[564];
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x7373444Eu);
      *(_QWORD *)(v4 + 576) = v5;
      if ( v5 )
      {
        *v5 = xmmword_1C00768E0;
        v5[1] = xmmword_1C00768F0;
        v5[2] = xmmword_1C0076900;
        v5[3] = xmmword_1C0076910;
        v5[4] = xmmword_1C0076920;
        v5[5] = xmmword_1C0076930;
        v5[6] = xmmword_1C0076940;
        *((_QWORD *)v5 + 14) = 0LL;
        *(_QWORD *)(v4 + 520) = 0LL;
        *(_QWORD *)(v4 + 528) = v4 + 520;
        *(_QWORD *)(v4 + 536) = 0LL;
        *(_QWORD *)(v4 + 544) = v4 + 536;
        *(_QWORD *)(v4 + 568) = v4 + 560;
        *(_QWORD *)(v4 + 560) = v4 + 560;
        ndisReadSSTimeoutKeywords(FunctionContext);
        KeInitializeSpinLock((PKSPIN_LOCK)v4);
        NdisInitializeTimer((PNDIS_TIMER)(v4 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, FunctionContext);
        *(_QWORD *)(v4 + 272) = FunctionContext;
        *(_QWORD *)(v4 + 280) = ndisSSIdleTimerWorkItem;
        *(_QWORD *)(v4 + 352) = FunctionContext;
        *(_QWORD *)(v4 + 360) = ndisIdleCancelWorkItem;
        *(_QWORD *)(v4 + 432) = 0LL;
        *(_QWORD *)(v4 + 448) = ndisSetPowerResumeCompleteWorkItem;
        *(_QWORD *)(v4 + 456) = v4 + 432;
        KeInitializeEvent((PRKEVENT)(v4 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v4 + 224), NotificationEvent, 1u);
        *(_QWORD *)(v4 + 584) = NdisNblTrackerRegisterComponent(4, (__int64)FunctionContext, FunctionContext[489]);
        *(_QWORD *)(v4 + 592) = NdisNblTrackerRegisterComponent(5, (__int64)FunctionContext, FunctionContext[489]);
        v6 = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v4 + 484) |= 0x100u;
        *(_DWORD *)(v4 + 480) |= 0x200u;
        *(_QWORD *)(v4 + 632) = v6;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085316 >= 2u )
          WPP_SF_q(0xBu, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, (__int64)FunctionContext);
        ndisSelectiveSuspendFree((__int64)FunctionContext);
      }
    }
    else if ( (unsigned __int8)byte_1C0085316 >= 2u )
    {
      WPP_SF_q(0xAu, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, (__int64)FunctionContext);
    }
  }
}
