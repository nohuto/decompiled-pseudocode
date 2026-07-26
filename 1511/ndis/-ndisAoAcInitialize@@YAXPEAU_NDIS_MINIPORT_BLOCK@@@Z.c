/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D6B8C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0016F70 (NdisInitializeTimer.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisAoAcInitialize(_QWORD *FunctionContext)
{
  char *PoolWithTag; // rbx

  PoolWithTag = (char *)FunctionContext[565];
  if ( PoolWithTag || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3B0uLL, 0x6D61444Eu)) != 0LL )
  {
    memset(PoolWithTag, 0, 0x3B0uLL);
    KeInitializeSpinLock((PKSPIN_LOCK)PoolWithTag);
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 32;
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 32;
    KeInitializeEvent((PRKEVENT)PoolWithTag + 16, NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)PoolWithTag + 17, NotificationEvent, 1u);
    *((_DWORD *)PoolWithTag + 92) = 0;
    *((_DWORD *)PoolWithTag + 93) |= 0x100u;
    PoolWithTag[280] = 0;
    PoolWithTag[378] = 1;
    *((_DWORD *)PoolWithTag + 69) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)(PoolWithTag + 64), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, FunctionContext);
    *((_QWORD *)PoolWithTag + 24) = FunctionContext;
    *((_QWORD *)PoolWithTag + 25) = ndisAoAcTempRefWorkItem;
    *((_QWORD *)PoolWithTag + 37) = ndisAoAcWakeWorkItem;
    *((_QWORD *)PoolWithTag + 36) = FunctionContext;
    FunctionContext[565] = PoolWithTag;
  }
  else if ( (unsigned __int8)byte_1C0083715 >= 2u )
  {
    WPP_SF_q(0xAu, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, (__int64)FunctionContext);
  }
}
