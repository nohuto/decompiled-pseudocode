/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DD23C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001BB70 (NdisInitializeTimer.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
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
  else if ( (unsigned __int8)byte_1C0085315 >= 2u )
  {
    WPP_SF_q(0xAu, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, (__int64)FunctionContext);
  }
}
