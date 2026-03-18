/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00691AC (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0069D54 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0091DF0 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C001D27C (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004F948 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00693CC (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v5; // rbp
  bool v8; // di
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  void *v14; // rax
  ADAPTER_RENDER *v15; // rcx
  _QWORD v16[12]; // [rsp+20h] [rbp-78h] BYREF
  _DXGKARG_STOPCAPTURE v17; // [rsp+A8h] [rbp+10h] BYREF

  v4 = a4;
  v5 = (int)a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 504LL) & 0x40000000) != 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(a1);
    WdLogEvent5_WdWarning(v13);
    return 0;
  }
  else
  {
    v8 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
      v8 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, v4 == 0);
    }
    if ( (v5 & 2) != 0 && v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v9 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, a2, a3, a4);
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 32) = v5;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(**(_QWORD **)a2 + 164LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 48);
          if ( (*(_DWORD *)(v11 + 4) & 0x20) != 0 )
          {
            v17.hAllocation = 0LL;
            v14 = *(void **)(v11 + 16);
            v15 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
            v17.hAllocation = v14;
            ADAPTER_RENDER::DdiStopCapture(v15, &v17);
          }
        }
      }
      if ( !(*(_BYTE *)(a2 + 25) & 1 | *(_DWORD *)(a2 + 168)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a1 + 8LL) )
        {
          LOBYTE(a3) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (__int64 **)a2, a3, a4);
        }
        else
        {
          memset(v16, 0, 0x58uLL);
          LODWORD(v16[0]) = 205;
          v16[2] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v16);
        }
      }
    }
    return v8;
  }
}
