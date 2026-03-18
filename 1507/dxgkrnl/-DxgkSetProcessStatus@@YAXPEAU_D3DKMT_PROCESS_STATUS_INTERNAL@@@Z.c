/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C00ACE30
 * Callers:
 *     <none>
 * Callees:
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // edx
  bool v13; // zf
  signed __int32 v14; // eax
  __int64 v15; // rcx
  signed __int32 v16; // ett
  signed __int32 v17; // ett
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 2156LL;
    WdLogEvent5_WdAssertion(v18);
  }
  ProcessWin32Process = PsGetProcessWin32Process(v4);
  if ( !ProcessWin32Process )
    return;
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v11 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v19 + 24) = 2225LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a1 + 2) != 1 )
  {
    if ( *((_DWORD *)a1 + 2) == 2 )
    {
      v12 = 2;
      goto LABEL_7;
    }
    v19 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)a1 + 2) - 1), v7, v9, v10);
    *(_QWORD *)(v19 + 24) = 2185LL;
LABEL_24:
    WdLogEvent5_WdAssertion(v19);
    return;
  }
  v12 = 1;
LABEL_7:
  v13 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(v11 + 316));
  v14 = *(_DWORD *)(v11 + 316);
  if ( v13 )
  {
    v9 = (unsigned int)~v12;
    do
    {
      v15 = (unsigned int)v9 & v14;
      v17 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 316), v15, v14);
    }
    while ( v17 != v14 );
    if ( (v14 & v12) == 0 )
      return;
  }
  else
  {
    do
    {
      v15 = v12 | (unsigned int)v14;
      v16 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 316), v15, v14);
    }
    while ( v16 != v14 );
    if ( (v14 & v12) != 0 )
      return;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_xq(v15, &SetProcessStatus, v9, v4, *(_DWORD *)(v11 + 316));
  _InterlockedAdd((volatile signed __int32 *)(v11 + 324), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(v11 + 320), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 324));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(v11 + 72) + 40LL), CriticalWorkQueue);
}
