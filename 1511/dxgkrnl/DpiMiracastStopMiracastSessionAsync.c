/*
 * XREFs of DpiMiracastStopMiracastSessionAsync @ 0x1C0024BC0
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x1C000B3D0 (DpiProcessMiracastNotifyDpc.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, char a2, _QWORD *a3, int a4)
{
  _QWORD *v8; // rax
  ULONG v10; // eax
  char *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  unsigned int v17; // edi
  _QWORD *v18; // rax
  PDRIVER_OBJECT v19; // rcx

  if ( !a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v10 = IoSizeofWorkItem();
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v10 + 32LL, 0x74727044u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = P;
      PoolWithTag[8] = a2;
      if ( a3 )
        *((_QWORD *)PoolWithTag + 2) = *a3;
      v19 = g_pDriverObject;
      *((_DWORD *)PoolWithTag + 6) = a4;
      IoInitializeWorkItem(v19, (PIO_WORKITEM)(PoolWithTag + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v16 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, v16);
      return 0;
    }
    else
    {
      v17 = -1073741801;
      v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      v18[4] = ExAllocatePoolWithTag;
      v18[3] = DpiMiracastStopMiracastSessionAsync;
      v18[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v18);
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    }
    return v17;
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
