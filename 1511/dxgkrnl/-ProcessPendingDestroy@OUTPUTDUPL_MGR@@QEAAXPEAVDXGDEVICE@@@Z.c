/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009E730
 * Callers:
 *     sub_1C009DF90 @ 0x1C009DF90 (sub_1C009DF90.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009E6E0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009EAC0 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     sub_1C01563F0 @ 0x1C01563F0 (sub_1C01563F0.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0020934 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01569AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C015BADC (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(PERESOURCE *this, struct DXGDEVICE *a2, __int64 a3)
{
  OUTPUTDUPL_MGR *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // r14
  _QWORD *v20; // rbx
  unsigned int i; // edi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct _KTHREAD **v24; // rbx
  struct _KTHREAD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KTHREAD **v29; // [rsp+30h] [rbp-28h] BYREF
  char v30; // [rsp+38h] [rbp-20h]

  v4 = (OUTPUTDUPL_MGR *)this;
  if ( *this )
  {
    this = (PERESOURCE *)(*this)->OwnerTable;
    if ( KeGetCurrentThread() != (struct _KTHREAD *)this[18] && !ExIsResourceAcquiredSharedLite(this[16]) )
    {
      v5 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v5 + 24) = 2137LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
  v29 = (struct _KTHREAD **)*((_QWORD *)v4 + 3);
  v30 = 0;
  if ( !v29 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *v29 == CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v8 + 24) = 458LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v30 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v9[5] = &v29;
    v9[3] = 275LL;
    v9[4] = 4LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v10 = v29;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)v10 + 2) > 1 )
  {
    if ( *v10 == KeGetCurrentThread() )
    {
      if ( *((int *)v10 + 3) <= 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v14 + 24) = 328LL;
        WdLogEvent5_WdAssertion(v14);
      }
      ++*((_DWORD *)v10 + 3);
      goto LABEL_26;
    }
    if ( bTracingEnabled )
    {
      v15 = *((_DWORD *)v10 + 14);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v12, &EventBlockThread, v13, v15);
    }
    ExInterlockedAddLargeInteger((PLARGE_INTEGER)v10 + 2, (LARGE_INTEGER)1LL, (PKSPIN_LOCK)v10 + 6);
    KeWaitForSingleObject(v10 + 3, Executive, 0, 0, 0LL);
  }
  if ( *v10 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v16 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)v10 + 3) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v17 + 24) = 355LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *v10 = KeGetCurrentThread();
  *((_DWORD *)v10 + 3) = 1;
LABEL_26:
  v18 = (_QWORD *)*((_QWORD *)v4 + 4);
  v19 = (_QWORD *)((char *)v4 + 32);
  v30 = 1;
  if ( v18 == (_QWORD *)((char *)v4 + 32) )
    goto LABEL_37;
  do
  {
    v20 = v18;
    v18 = (_QWORD *)*v18;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v20) )
      {
        for ( i = 0; i < *((_DWORD *)v20 + 10); ++i )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v20[i + 6]);
      }
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v20) )
    {
      v22 = *v20;
      v23 = (_QWORD *)v20[1];
      if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v23 != v20 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v20);
    }
  }
  while ( v18 != v19 );
  if ( v30 )
  {
LABEL_37:
    v24 = v29;
    v30 = 0;
    v25 = KeGetCurrentThread();
    if ( *v29 != v25 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v11, v13);
      v26[3] = 275LL;
      v26[4] = 4LL;
      v26[5] = v24;
      v26[6] = 0LL;
      v26[7] = 0LL;
      WdLogEvent5_WdCriticalError(v26);
    }
    if ( *((int *)v24 + 3) <= 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v27 + 24) = 374LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( (*((_DWORD *)v24 + 3))-- == 1 )
    {
      *v24 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 2, 0xFFFFFFFF) != 1 )
        KeSetEvent((PRKEVENT)v24 + 1, 0, 0);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)v24 + 2);
    }
    KeLeaveCriticalRegion();
  }
}
