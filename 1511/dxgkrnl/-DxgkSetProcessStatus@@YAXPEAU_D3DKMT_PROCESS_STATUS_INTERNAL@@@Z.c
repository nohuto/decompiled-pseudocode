/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C00BE7B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  __int64 v1; // rbp
  __int64 ProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // edx
  bool v8; // zf
  signed __int32 v9; // eax
  __int64 v10; // rcx
  signed __int32 v11; // ett
  signed __int32 v12; // ett
  __int64 v13; // rax
  __int64 v14; // rax

  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 2269LL;
    WdLogEvent5_WdAssertion(v13);
  }
  ProcessWin32Process = PsGetProcessWin32Process(v1);
  if ( !ProcessWin32Process )
    return;
  v6 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v6 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 2338LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a1 + 2) != 1 )
  {
    if ( *((_DWORD *)a1 + 2) == 2 )
    {
      v7 = 2;
      goto LABEL_7;
    }
    v14 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)a1 + 2) - 1));
    *(_QWORD *)(v14 + 24) = 2298LL;
LABEL_24:
    WdLogEvent5_WdAssertion(v14);
    return;
  }
  v7 = 1;
LABEL_7:
  v8 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(v6 + 316));
  v9 = *(_DWORD *)(v6 + 316);
  if ( v8 )
  {
    v5 = (unsigned int)~v7;
    do
    {
      v10 = (unsigned int)v5 & v9;
      v12 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 316), v10, v9);
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
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 316), v10, v9);
    }
    while ( v11 != v9 );
    if ( (v9 & v7) != 0 )
      return;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_xq(v10, &SetProcessStatus, v5, v1, *(_DWORD *)(v6 + 316));
  _InterlockedAdd((volatile signed __int32 *)(v6 + 324), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(v6 + 320), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 324));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(v6 + 72) + 40LL), CriticalWorkQueue);
}
