/*
 * XREFs of DpiMiracastStopMiracastSessionAsync @ 0x1C0025080
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C0009000 (DpiProcessMiracastNotifyDpc.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, char a2, _QWORD *a3, int a4)
{
  _QWORD *v8; // rax
  ULONG v10; // eax
  char *PoolWithTag; // rax
  __int64 v12; // rcx
  char *v13; // rdi
  unsigned int v14; // edi
  _QWORD *v15; // rax
  PDRIVER_OBJECT v16; // rcx

  if ( !a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v10 = IoSizeofWorkItem();
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v10 + 32LL, 0x74727044u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = P;
      PoolWithTag[8] = a2;
      if ( a3 )
        *((_QWORD *)PoolWithTag + 2) = *a3;
      v16 = g_pDriverObject;
      *((_DWORD *)PoolWithTag + 6) = a4;
      IoInitializeWorkItem(v16, (PIO_WORKITEM)(PoolWithTag + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v13 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, v13);
      return 0;
    }
    else
    {
      v14 = -1073741801;
      v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
      v15[4] = ExAllocatePoolWithTag;
      v15[3] = DpiMiracastStopMiracastSessionAsync;
      v15[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v15);
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    }
    return v14;
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(P);
    v8[4] = P;
    v8[5] = -1073741811LL;
    v8[3] = DpiMiracastStopMiracastSessionAsync;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
