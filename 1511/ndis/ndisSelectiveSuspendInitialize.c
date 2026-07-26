/*
 * XREFs of ndisSelectiveSuspendInitialize @ 0x1C00D65CC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0016F70 (NdisInitializeTimer.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B800 (NdisNblTrackerRegisterComponent.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00D6394 (ndisReadSSTimeoutKeywords.c)
 *     ndisSelectiveSuspendFree @ 0x1C00D6518 (ndisSelectiveSuspendFree.c)
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
        *v5 = xmmword_1C0075970;
        v5[1] = xmmword_1C0075980;
        v5[2] = xmmword_1C0075990;
        v5[3] = xmmword_1C00759A0;
        v5[4] = xmmword_1C00759B0;
        v5[5] = xmmword_1C00759C0;
        v5[6] = xmmword_1C00759D0;
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
        if ( (unsigned __int8)byte_1C0083716 >= 2u )
          WPP_SF_q(0xBu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)FunctionContext);
        ndisSelectiveSuspendFree((__int64)FunctionContext);
      }
    }
    else if ( (unsigned __int8)byte_1C0083716 >= 2u )
    {
      WPP_SF_q(0xAu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)FunctionContext);
    }
  }
}
