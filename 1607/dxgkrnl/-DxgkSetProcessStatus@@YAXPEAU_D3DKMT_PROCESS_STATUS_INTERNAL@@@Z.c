/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C00D53A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v6; // r8
  int v7; // edx
  bool v8; // zf
  signed __int32 v9; // eax
  __int64 v10; // rcx
  signed __int32 v11; // ett
  signed __int32 v12; // ett
  __int64 v13; // rax

  v2 = *(_QWORD *)a1;
  ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1, a2);
  if ( !ProcessDxgProcess )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 2602LL;
    goto LABEL_21;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 2562LL;
LABEL_21:
    WdLogEvent5_WdAssertion(v13);
    return;
  }
  v7 = 2;
LABEL_4:
  v8 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(ProcessDxgProcess + 292));
  v9 = *(_DWORD *)(ProcessDxgProcess + 292);
  if ( v8 )
  {
    v6 = (unsigned int)~v7;
    do
    {
      v10 = (unsigned int)v6 & v9;
      v12 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 292), v10, v9);
    }
    while ( v12 != v9 );
    if ( (v9 & v7) == 0 )
      return;
  }
  else
  {
    do
    {
      v10 = v7 | (unsigned int)v9;
      v11 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 292), v10, v9);
    }
    while ( v11 != v9 );
    if ( (v9 & v7) != 0 )
      return;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_xq(v10, &SetProcessStatus, v6, v2, *(_DWORD *)(ProcessDxgProcess + 292));
  _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 300), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 296), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 300));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 64) + 40LL), CriticalWorkQueue);
}
