/*
 * XREFs of HvpMarkDirty @ 0x1405137E0
 * Callers:
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     HvpAddBin @ 0x14047DF10 (HvpAddBin.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404802D0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404DAA3C (CmpTransMgrSyncHive.c)
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140514194 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
 *     HvFoldBackDirtyData @ 0x140605E40 (HvFoldBackDirtyData.c)
 *     HvSyncHive @ 0x14060635C (HvSyncHive.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     RtlSetBits @ 0x140028420 (RtlSetBits.c)
 *     CmpArmLazyWriter @ 0x1400F0130 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpLogDirtyVectorUse @ 0x1404819CC (CmpLogDirtyVectorUse.c)
 *     CmpIssueNewDirtyCallback @ 0x1404EC660 (CmpIssueNewDirtyCallback.c)
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 *     CmpForceFlushForCoalescing @ 0x1406036B8 (CmpForceFlushForCoalescing.c)
 */

char __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  int v4; // eax
  int v7; // edi
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // esi
  unsigned int v14; // edi
  ULONG v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // r14d
  ULONG v18; // ecx
  unsigned int v20; // edi
  int v21; // r12d
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-49h] BYREF
  int v28; // [rsp+34h] [rbp-45h] BYREF
  ULONG_PTR v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-39h] BYREF
  ULONG_PTR *v31; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-21h]
  int v33; // [rsp+68h] [rbp-11h]
  int v34; // [rsp+6Ch] [rbp-Dh]

  v4 = *(_DWORD *)(BugCheckParameter2 + 144);
  v28 = a4;
  v27 = a3;
  if ( (v4 & 1) != 0 || a2 < 0 )
    return 1;
  v7 = a2 - 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 120);
  v10 = (unsigned int)(a3 + v7) >> 9;
  v11 = (unsigned int)a2 >> 9;
  if ( v9 <= 1 )
  {
    v13 = v11;
  }
  else
  {
    v12 = ~(v9 - 1);
    v13 = v11 & v12;
    v10 = (v12 & (v9 + v10)) - 1;
  }
  v14 = ((v10 + 16) & 0xFFFFFFF8) - 9;
  v15 = (v13 + 8) & 0xFFFFFFF8;
  if ( v15 )
    v15 -= 8;
  v16 = *(_DWORD *)(BugCheckParameter2 + 1400) >> 9;
  if ( v14 >= v16 )
    v14 = v16 - 1;
  v17 = 0;
  v18 = v15;
  if ( v15 > v14 )
    goto LABEL_14;
  do
  {
    if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), v18) )
      ++v17;
    ++v18;
  }
  while ( v18 <= v14 );
  if ( !v17 )
  {
LABEL_14:
    if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 2) == 0 )
    {
      v30 = *(_QWORD *)(BugCheckParameter2 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
      CmpArmLazyWriter(0LL, (__int64)&v30, 0);
    }
    return 1;
  }
  v20 = v14 - v15;
  if ( (unsigned __int8)HvpSetRangeProtection(BugCheckParameter2) )
  {
    v21 = *(_DWORD *)(BugCheckParameter2 + 88);
    *(_DWORD *)(BugCheckParameter2 + 88) = v21 + v17;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v15, v20 + 1);
    CmpLogDirtyVectorUse(BugCheckParameter2, 0, a2, v27);
    v29 = BugCheckParameter2;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v31 = &v29;
      LOWORD(v27) = 0;
      v32[0] = 8LL;
      v22 = 1;
      v23 = *(_QWORD *)(BugCheckParameter2 + 3032);
      if ( v23 )
      {
        v22 = 2;
        v33 = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
        v32[1] = v23;
        v34 = 0;
      }
      v24 = 2LL * v22;
      v25 = v22 + 1;
      v32[v24 - 1] = &v27;
      v32[v24] = 2LL;
      v26 = 2LL * v25;
      v32[v26 - 1] = &v28;
      v32[v26] = 4LL;
      EtwTraceKernelEvent((int)&v31, v25 + 1, 0x41000000u, 2344, 5249282);
    }
    if ( !v21 )
    {
      *(_QWORD *)(BugCheckParameter2 + 5384) = KiQueryUnbiasedInterruptTime();
      CmpIssueNewDirtyCallback();
    }
    if ( (int)(v17 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v17)) >= 0x8000 )
      CmpForceFlushForCoalescing();
    goto LABEL_14;
  }
  return 0;
}
