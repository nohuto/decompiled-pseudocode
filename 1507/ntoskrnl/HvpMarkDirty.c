/*
 * XREFs of HvpMarkDirty @ 0x14049F900
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404A0584 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404ADF1C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 *     HvFoldBackDirtyData @ 0x14065DD48 (HvFoldBackDirtyData.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpLogDirtyVectorUse @ 0x14044DBE0 (CmpLogDirtyVectorUse.c)
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     CmpIssueNewDirtyCallback @ 0x140558308 (CmpIssueNewDirtyCallback.c)
 */

char __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  int v4; // eax
  int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int v12; // ebx
  ULONG v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // r15d
  ULONG v16; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int16 v28; // [rsp+30h] [rbp-A8h] BYREF
  int v29; // [rsp+34h] [rbp-A4h] BYREF
  ULONG_PTR v30; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR *v32; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-80h]
  int v34; // [rsp+68h] [rbp-70h]
  int v35; // [rsp+6Ch] [rbp-6Ch]

  v4 = *(_DWORD *)(BugCheckParameter2 + 144);
  v29 = a4;
  if ( (v4 & 1) != 0 || a2 < 0 )
    return 1;
  v8 = a3 - 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 120);
  v10 = (unsigned int)(a2 + v8) >> 9;
  if ( v9 > 1 )
  {
    v18 = ~(v9 - 1);
    v11 = ((unsigned int)a2 >> 9) & v18;
    v10 = (v18 & (v9 + v10)) - 1;
  }
  else
  {
    v11 = (unsigned int)a2 >> 9;
  }
  v12 = ((v10 + 16) & 0xFFFFFFF8) - 9;
  v13 = (v11 + 8) & 0xFFFFFFF8;
  if ( v13 )
    v13 -= 8;
  v14 = *(_DWORD *)(BugCheckParameter2 + 1400) >> 9;
  if ( v12 >= v14 )
    v12 = v14 - 1;
  v15 = 0;
  v16 = v13;
  if ( v13 <= v12 )
  {
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), v16) )
        ++v15;
      ++v16;
    }
    while ( v16 <= v12 );
    if ( v15 )
    {
      v19 = v12 - v13;
      if ( !HvpSetRangeProtection(BugCheckParameter2, v13 << 9, (v19 + 1) << 9, 4u) )
        return 0;
      v20 = *(_DWORD *)(BugCheckParameter2 + 88);
      *(_DWORD *)(BugCheckParameter2 + 88) = v20 + v15;
      RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v13, v19 + 1);
      CmpLogDirtyVectorUse(BugCheckParameter2, 0, a2, a3);
      v30 = BugCheckParameter2;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v23 = 1;
        v28 = 0;
        v32 = &v30;
        v33[0] = 8LL;
        v24 = *(_QWORD *)(BugCheckParameter2 + 3032);
        if ( v24 )
        {
          v23 = 2;
          v34 = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
          v33[1] = v24;
          v35 = 0;
        }
        v25 = 2LL * v23;
        v26 = v23 + 1;
        v33[v25 - 1] = &v28;
        v33[v25] = 2LL;
        v27 = 2LL * v26;
        v33[v27 - 1] = &v29;
        v33[v27] = 4LL;
        EtwTraceKernelEvent((int)&v32, v26 + 1, 0x41000000u, 0x928u, 5249282);
      }
      if ( !v20 )
      {
        v21 = MEMORY[0xFFFFF780000003B0];
        v22 = MEMORY[0xFFFFF780000003B0];
        *(_QWORD *)(BugCheckParameter2 + 5384) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        CmpIssueNewDirtyCallback(v22, v21, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
      }
      if ( (int)(v15 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v15)) >= 0x8000
        && !CmpNoWrite
        && CmpWorkerDataInitialized
        && !CmpForceFlushPending
        && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
      {
        ExQueueWorkItem(&CmpForceFlushWorkItem, DelayedWorkQueue);
      }
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 2) == 0 )
  {
    v31 = *(_QWORD *)(BugCheckParameter2 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v31, 0);
  }
  return 1;
}
