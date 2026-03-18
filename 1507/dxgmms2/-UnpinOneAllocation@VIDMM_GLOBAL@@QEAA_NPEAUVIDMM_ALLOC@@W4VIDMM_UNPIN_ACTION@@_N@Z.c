/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0054128
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C005411C (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C005B3AC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0070634 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C000E14C (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D098 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059860 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(VIDMM_GLOBAL *a1, struct VIDMM_ALLOC *a2, __int64 a3, char a4)
{
  char v4; // bp
  __int64 v7; // rax
  bool v9; // di
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // rax
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF
  _DXGKARG_STOPCAPTURE v16; // [rsp+98h] [rbp+10h] BYREF

  v4 = a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 472LL) & 0x40000000) != 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    WdLogEvent5_WdWarning(v7);
    return 0;
  }
  else
  {
    v9 = 1;
    if ( (a3 & 1) != 0 )
      v9 = VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)a2 + 1), a2, a4 == 0);
    if ( (v4 & 2) != 0 && v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(**(_QWORD **)a2 + 156LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *((_QWORD *)a2 + 2);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 48);
          if ( (*(_DWORD *)(v11 + 4) & 0x20) != 0 )
          {
            v16.hAllocation = 0LL;
            v12 = *(void **)(v11 + 16);
            v13 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
            v16.hAllocation = v12;
            ADAPTER_RENDER::DdiStopCapture(v13, &v16);
          }
        }
      }
      if ( !(*((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a1 + 8LL) )
        {
          LOBYTE(a3) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (__int64 **)a2, a3);
        }
        else
        {
          memset(v15, 0, sizeof(v15));
          v14 = *(_QWORD *)a2;
          LODWORD(v15[0]) = 205;
          v15[2] = a2;
          VIDMM_GLOBAL::QueueDeferredCommand(
            a1,
            (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 64LL)
                                        + 152LL * (*(_DWORD *)(*(_QWORD *)v14 + 76LL) & 0x3F)),
            (struct _VIDMM_DEFERRED_COMMAND *)v15,
            1,
            0LL);
        }
      }
    }
    return v9;
  }
}
