/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C00A5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000F8C4 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A6390 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00A92A8 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct DXGALLOCATION **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rdi
  struct DXGPROCESS *v14; // rbp
  __int64 v15; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // edi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  struct DXGALLOCATION *v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // edi
  struct DXGPROCESS *v37; // rbp
  int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _BYTE v43[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    *(_QWORD *)(v7 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  CurrentThread = KeGetCurrentThread();
  v14 = Current;
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v15 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, v14);
  v23 = a1[1];
  if ( v23 != 1 )
  {
    if ( v23 != 2 )
    {
      v30 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v31 = (int)a1[1];
      goto LABEL_55;
    }
    v36 = *a1;
    v37 = DXGPROCESS::GetCurrent(v20);
    LOBYTE(v38) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
    v29 = (v36 >> 6) & 0xFFFFFF;
    if ( v38 )
    {
      if ( (unsigned int)v29 >= *((_DWORD *)v37 + 58) )
        goto LABEL_17;
      v27 = *((_QWORD *)v37 + 27);
      v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v29 + 8);
      if ( ((v36 >> 26) & 0x30) != (*(_BYTE *)(v27 + 16LL * (unsigned int)v29 + 8) & 0x30)
        || (v26 & 0x1000) != 0 && (v26 & 0x2000) == 0 )
      {
        goto LABEL_17;
      }
    }
    else
    {
      if ( (unsigned int)v29 >= *((_DWORD *)v37 + 58) )
        goto LABEL_17;
      v27 = *((_QWORD *)v37 + 27);
      v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v29 + 8);
      if ( ((v36 >> 26) & 0x30) != (*(_BYTE *)(v27 + 16LL * (unsigned int)v29 + 8) & 0x30) || (v26 & 0x1000) != 0 )
        goto LABEL_17;
    }
    if ( (v26 & 0xF) != 0 && (*(_BYTE *)(v27 + 16LL * (unsigned int)v29 + 8) & 0xF) == 4 )
    {
      v39 = *(_QWORD *)(v27 + 16LL * (unsigned int)v29);
      if ( v39 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) + 16LL) + 16LL) + 176LL)
                                      + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v40 + 28) >= 0x2003u )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v26, v27);
            v41[3] = 275LL;
            v41[4] = 20LL;
            v41[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) + 16LL) + 16LL);
            v41[6] = 0LL;
            v41[7] = 0LL;
            WdLogEvent5_WdCriticalError(v41);
          }
        }
        DxgkReferenceDxgResource((struct DXGRESOURCE *)v39);
        if ( v18 )
          ++*(_DWORD *)(v18 + 136);
        DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v43);
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v39 + 80));
        *a2 = (struct DXGALLOCATION *)v39;
        if ( (*(_DWORD *)(v39 + 4) & 1) == 0 )
        {
          v4 = *(_QWORD *)(v39 + 56);
          goto LABEL_56;
        }
        v35 = *(_QWORD *)(v39 + 56);
        goto LABEL_32;
      }
    }
LABEL_17:
    v30 = WdLogNewEntry5_WdWarning(v29, v26, v27, v28);
    v31 = *a1;
LABEL_55:
    *(_QWORD *)(v30 + 24) = v31;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_56;
  }
  v24 = *a1;
  LOBYTE(v25) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
  v29 = (v24 >> 6) & 0xFFFFFF;
  if ( v25 )
  {
    if ( (unsigned int)v29 >= *((_DWORD *)v14 + 58) )
      goto LABEL_17;
    v27 = *((_QWORD *)v14 + 27);
    v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v29 + 8);
    if ( ((v24 >> 26) & 0x30) != (*(_BYTE *)(v27 + 16LL * (unsigned int)v29 + 8) & 0x30)
      || (v26 & 0x1000) != 0 && (v26 & 0x2000) == 0 )
    {
      goto LABEL_17;
    }
  }
  else
  {
    if ( (unsigned int)v29 >= *((_DWORD *)v14 + 58) )
      goto LABEL_17;
    v27 = *((_QWORD *)v14 + 27);
    v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v29 + 8);
    if ( ((v24 >> 26) & 0x30) != (*(_BYTE *)(v27 + 16LL * (unsigned int)v29 + 8) & 0x30) || (v26 & 0x1000) != 0 )
      goto LABEL_17;
  }
  if ( (v26 & 0xF) == 0 )
    goto LABEL_17;
  if ( (*(_BYTE *)(v27 + 16LL * (unsigned int)v29 + 8) & 0xF) != 5 )
    goto LABEL_17;
  v32 = *(struct DXGALLOCATION **)(v27 + 16LL * (unsigned int)v29);
  if ( !v32 )
    goto LABEL_17;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 16LL) + 176LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v33 + 28) >= 0x2003u )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v26, v27);
      v34[3] = 275LL;
      v34[4] = 20LL;
      v34[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 16LL);
      v34[6] = 0LL;
      v34[7] = 0LL;
      WdLogEvent5_WdCriticalError(v34);
    }
  }
  DxgkReferenceDxgAllocation(v32);
  if ( v18 )
    ++*(_DWORD *)(v18 + 136);
  *a2 = v32;
  if ( (a1[2] & 1) == 0 )
  {
    v35 = *((_QWORD *)v32 + 6);
LABEL_32:
    v4 = *(_QWORD *)(v35 + 16);
    goto LABEL_56;
  }
  v4 = *((_QWORD *)v32 + 4);
LABEL_56:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  return v4;
}
