/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008DE80
 * Callers:
 *     _lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_ @ 0x1C008D8B0 (_lambda_8b89794ce108b1133e9a3853d0f5c408_--_helper_func_cdecl_.c)
 *     _lambda_01e55edfa3d0a32d4fa785aa2dca734f_::_helper_func_cdecl_ @ 0x1C008D970 (_lambda_01e55edfa3d0a32d4fa785aa2dca734f_--_helper_func_cdecl_.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C008DE2C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008E1D4 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_78f17609e85a038b4e728ba8797581f2_::_helper_func_cdecl_ @ 0x1C0152180 (_lambda_78f17609e85a038b4e728ba8797581f2_--_helper_func_cdecl_.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0020A40 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C015270C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01577C4 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(PERESOURCE *this, struct DXGDEVICE *a2, __int64 a3, __int64 a4)
{
  OUTPUTDUPL_MGR *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  unsigned int i; // edi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-28h] BYREF
  char v31; // [rsp+28h] [rbp-20h]

  v5 = (OUTPUTDUPL_MGR *)this;
  if ( *this )
  {
    this = (PERESOURCE *)(*this)->OwnerTable;
    if ( KeGetCurrentThread() != (struct _KTHREAD *)this[18] && !ExIsResourceAcquiredSharedLite(this[16]) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v6 + 24) = 2137LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  v30 = *((_QWORD *)v5 + 3);
  v31 = 0;
  if ( !v30 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v7);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v30 + 8) == CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v31 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v10[5] = &v30;
    v10[3] = 275LL;
    v10[4] = 4LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  v11 = v30;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v11 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v11 + 24) <= 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v16 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v16);
    }
    ++*(_DWORD *)(v11 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *(_DWORD *)(v11 + 28);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v13, &EventBlockThread, v14, v17);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11);
      ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
    }
    if ( *(_QWORD *)(v11 + 8) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( *(_DWORD *)(v11 + 24) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v19 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v19);
    }
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v11 + 24) = 1;
  }
  v20 = (_QWORD *)*((_QWORD *)v5 + 4);
  v21 = (_QWORD *)((char *)v5 + 32);
  v31 = 1;
  if ( v20 == (_QWORD *)((char *)v5 + 32) )
    goto LABEL_37;
  do
  {
    v22 = v20;
    v20 = (_QWORD *)*v20;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v22) )
      {
        for ( i = 0; i < *((_DWORD *)v22 + 10); ++i )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v22[i + 6]);
      }
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v22) )
    {
      v24 = *v22;
      v25 = (_QWORD *)v22[1];
      if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v25 != v22 )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v22);
    }
  }
  while ( v20 != v21 );
  if ( v31 )
  {
LABEL_37:
    v26 = v30;
    v31 = 0;
    if ( *(struct _KTHREAD **)(v30 + 8) != KeGetCurrentThread() )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
      v27[3] = 275LL;
      v27[4] = 4LL;
      v27[5] = v26;
      v27[6] = 0LL;
      v27[7] = 0LL;
      WdLogEvent5_WdCriticalError(v27);
    }
    if ( *(int *)(v26 + 24) <= 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v28 + 24) = 363LL;
      WdLogEvent5_WdAssertion(v28);
    }
    if ( (*(_DWORD *)(v26 + 24))-- == 1 )
    {
      *(_QWORD *)(v26 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
