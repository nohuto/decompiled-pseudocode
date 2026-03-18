/*
 * XREFs of ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C008F660
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C008FF48 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C005D0C8 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C008F5EC (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C0090C14 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0098B60 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

unsigned __int64 VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(__int64 *a1, __int64 a2, VIDMM_DEVICE *a3, ...)
{
  __int64 *v3; // r11
  VIDMM_DEVICE *v4; // r10
  __int64 v6; // r9
  unsigned __int64 result; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  bool v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rsi
  unsigned int v19; // r13d
  unsigned __int64 v20; // rdi
  int *v21; // r14
  int v22; // eax
  unsigned int v23; // r14d
  struct VIDMM_DEVICE *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  VIDMM_DEVICE *v27; // r10
  _QWORD *v28; // r15
  _QWORD *v29; // rax
  VIDMM_DEVICE *v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // r14
  _QWORD *v33; // rsi
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // r15
  VIDMM_DEVICE *v37; // rsi
  struct VIDMM_DEVICE *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 LargestGap; // rdi
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  int v62; // [rsp+48h] [rbp-59h]
  unsigned int v63; // [rsp+4Ch] [rbp-55h]
  int v64; // [rsp+50h] [rbp-51h]
  unsigned int v65; // [rsp+54h] [rbp-4Dh]
  __int64 v66; // [rsp+58h] [rbp-49h]
  unsigned int v67; // [rsp+60h] [rbp-41h] BYREF
  _QWORD *v68; // [rsp+68h] [rbp-39h]
  unsigned int v69; // [rsp+70h] [rbp-31h]
  int v70; // [rsp+74h] [rbp-2Dh]
  unsigned __int64 v71; // [rsp+78h] [rbp-29h] BYREF
  _DWORD v72[2]; // [rsp+80h] [rbp-21h] BYREF
  _QWORD *v73; // [rsp+88h] [rbp-19h]
  _DWORD *v74; // [rsp+90h] [rbp-11h]
  __int64 v75; // [rsp+98h] [rbp-9h]
  _QWORD *v77; // [rsp+100h] [rbp+5Fh] BYREF
  VIDMM_DEVICE *v78; // [rsp+108h] [rbp+67h]
  __int64 v79; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v81; // [rsp+118h] [rbp+77h]
  _BYTE *v82; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _BYTE *);
  v78 = a3;
  v3 = a1;
  v4 = a3;
  v62 = *(_DWORD *)(a2 + 68);
  *v82 = 0;
  v6 = 0LL;
  v65 = 0;
  result = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
  v63 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
  if ( !v62 )
    return result;
  v8 = v62;
  v9 = 6 * result;
  v64 = 6 * result;
  while ( (unsigned int)result <= 5 )
  {
    result = (unsigned int)(result + 1);
    v63 = result;
    v10 = *(_DWORD *)(a2 + 72) >> v9;
    v9 += 6;
    v64 = v9;
    v11 = v10 & 0x1F;
    if ( v11 )
    {
      v12 = v11 - 1;
      v13 = ((*(_DWORD *)(a2 + 72) >> v9) & 0x20) == 0;
      goto LABEL_8;
    }
LABEL_85:
    if ( !v8 )
      return result;
  }
  v14 = v6;
  v12 = v6;
  v6 = (unsigned int)(v6 + 1);
  v65 = v6;
  if ( !_bittest(&v8, v14) )
  {
LABEL_84:
    result = v63;
    goto LABEL_85;
  }
  v13 = 1;
LABEL_8:
  v15 = *v3;
  v62 &= ~(1 << v12);
  v69 = v12 + *(_DWORD *)(456LL * (*(_DWORD *)(a2 + 76) & 0x3F) + *(_QWORD *)(*v3 + 40136) + 4);
  v16 = *(_QWORD *)(v15 + 3712);
  v75 = v69;
  v17 = *(_QWORD *)(v16 + 8LL * v69);
  v66 = v17;
  if ( (*(_DWORD *)(v17 + 56) & 0x1001) != 0 )
  {
LABEL_83:
    v8 = v62;
    v9 = v64;
    goto LABEL_84;
  }
  v18 = (_QWORD *)(v17 + 128);
  v68 = (_QWORD *)(v17 + 128);
LABEL_10:
  v19 = 2013265919;
  v20 = *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2);
  v72[0] = 0;
  v71 = v20;
  v72[1] = 2;
LABEL_11:
  v67 = 0;
  v21 = v72;
  v70 = 0;
  v74 = v72;
  while ( 1 )
  {
    v22 = *v21;
    v23 = v19;
    LODWORD(v79) = v22;
    if ( v22 == 2 )
      break;
    v32 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 != v18 )
    {
      do
      {
        v33 = v32 - 3;
        v32 = (_QWORD *)*v32;
        v34 = (_QWORD *)*v33;
        v73 = v33;
        if ( !(unsigned __int8)PsIsSystemProcess(*v34) )
        {
          v35 = v33 + 5;
          v36 = (_QWORD *)v33[5];
          while ( v36 != v35 )
          {
            v37 = (VIDMM_DEVICE *)v36[4];
            v36 = (_QWORD *)*v36;
            if ( VIDMM_DEVICE::CanSuspendThisDevice(v37, v78, v79, v81) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v39, v38, v40, v6) + 24) = v37;
              LOBYTE(v77) = 0;
              VIDMM_DEVICE::FaultAllDemotableAllocations(v37, v38, v69, v6, v19, &v67, &v71, (bool *)&v77);
              if ( !(_BYTE)v77 )
                goto LABEL_44;
              if ( g_IsInternalReleaseOrDbg )
              {
                v44 = WdLogNewEntry5_WdTrace(v42, v41, v43, v6);
                *(_QWORD *)(v44 + 24) = v37;
                *(_QWORD *)(v44 + 32) = v19;
              }
              v45 = v73 + 3;
              if ( v73[3] )
              {
                v46 = *v45;
                v47 = (_QWORD *)v73[4];
                if ( *(_QWORD **)(*v45 + 8LL) != v45 || (_QWORD *)*v47 != v45 )
                  __fastfail(3u);
                v18 = v68;
                *v47 = v46;
                *(_QWORD *)(v46 + 8) = v47;
                v48 = (_QWORD *)v18[1];
                if ( (_QWORD *)*v48 != v18 )
                  __fastfail(3u);
                *v45 = v18;
                v45[1] = v48;
                *v48 = v45;
                v18[1] = v45;
              }
              else
              {
LABEL_44:
                v18 = v68;
              }
              v20 = v71;
              if ( !v71 )
              {
                LOBYTE(v6) = v13;
                LargestGap = VIDMM_SEGMENT::GetLargestGap(v66, a2, v43, v6);
                if ( g_IsInternalReleaseOrDbg )
                {
                  v56 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v53, v55, v6);
                  *(_QWORD *)(v56 + 24) = LargestGap;
                  *(_QWORD *)(v56 + 32) = *(_QWORD *)(a2 + 16);
                }
                if ( LargestGap >= *(_QWORD *)(a2 + 16) )
                  goto LABEL_68;
LABEL_64:
                v17 = v66;
                v4 = v78;
                v3 = a1;
                goto LABEL_10;
              }
            }
            v35 = v73 + 5;
          }
        }
        v18 = v68;
      }
      while ( v32 != v68 );
LABEL_49:
      v3 = a1;
      goto LABEL_50;
    }
LABEL_51:
    v4 = v78;
    v21 = v74 + 1;
    ++v70;
    ++v74;
    if ( (unsigned __int64)v70 >= 2 )
    {
      if ( v67 - 1 <= 0xC7FFFFFE )
      {
        if ( v19 == 2013265919 )
        {
          v19 = -939524097;
          if ( v67 <= 0x9FFFFFFF )
            v19 = -1610612737;
          goto LABEL_59;
        }
        if ( v19 == -1610612737 )
        {
          v19 = -939524097;
LABEL_59:
          v4 = v78;
          goto LABEL_11;
        }
      }
      if ( v20 != *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2) )
      {
        LOBYTE(v6) = v13;
        v58 = VIDMM_SEGMENT::GetLargestGap(v17, a2, v17, v6);
        if ( g_IsInternalReleaseOrDbg )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v57, v59, v60);
          v61[3] = v75;
          v61[4] = v58;
          v61[5] = *(_QWORD *)(a2 + 16);
        }
        if ( v58 >= *(_QWORD *)(a2 + 16) )
          goto LABEL_68;
      }
      if ( (VIDMM_GLOBAL::_Config & 0x40) != 0
        && (_DWORD)v81 != 2
        && (*(_DWORD *)(a2 + 392) >= 0xA0000000 || (*(_DWORD *)(a2 + 76) & 0x40) == 0)
        && !*v82
        && !g_DemotedHighPriAllocDebugMode
        && !KdRefreshDebuggerNotPresent() )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\nCouldn't find preferred memory for a high priority allocation 0x%p.\n",
          (const void *)a2);
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "\n"
          "To disable debug breaks on high priority allocation page-in failures, run \"?? dxgmms2!g_DemotedHighPriAllocDe"
          "bugMode=1\"\n"
          "or \"ed 0x%p 1\"\n"
          "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_DemotedHighPriAllocDebugMode=2\"\n"
          "or \"ed 0x%p 2\"\n"
          "\n",
          (const void *)&g_DemotedHighPriAllocDebugMode,
          (const void *)&g_DemotedHighPriAllocDebugMode);
        __debugbreak();
      }
      v3 = a1;
      v4 = v78;
      v6 = v65;
      goto LABEL_83;
    }
  }
  if ( (*(_DWORD *)(a2 + 76) & 0x40) != 0 && v19 >= *(_DWORD *)(a2 + 392) - 1 )
    v23 = *(_DWORD *)(a2 + 392) - 1;
  v77 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                             *((VIDMM_PROCESS **)v4 + 1),
                             *(_DWORD *)(*(_QWORD *)(*v3 + 24) + 200LL),
                             *(_DWORD *)(v17 + 20))
                 + 40);
  v28 = (_QWORD *)*v77;
  if ( (_QWORD *)*v77 == v77 )
  {
LABEL_50:
    v17 = v66;
    goto LABEL_51;
  }
  while ( 1 )
  {
    v29 = v28 - 2;
    v28 = (_QWORD *)*v28;
    v30 = (VIDMM_DEVICE *)v29[6];
    if ( v30 == v27
      && ((VIDMM_GLOBAL::_Config & 0x40) == 0 || *(_DWORD *)(a2 + 392) < 0xA0000000
                                              && (*(_DWORD *)(a2 + 76) & 0x40) != 0) )
    {
      goto LABEL_28;
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, v24, v26, v6) + 24) = v30;
    LOBYTE(v79) = 0;
    VIDMM_DEVICE::FaultAllDemotableAllocations(v30, v24, v69, v6, v23, &v67, &v71, (bool *)va);
    if ( (_BYTE)v79 && g_IsInternalReleaseOrDbg )
    {
      v31 = WdLogNewEntry5_WdTrace(v25, v24, v26, v6);
      v25 = v23;
      *(_QWORD *)(v31 + 24) = v30;
      *(_QWORD *)(v31 + 32) = v23;
    }
    v20 = v71;
    if ( !v71 )
      break;
    v27 = v78;
LABEL_28:
    if ( v28 == v77 )
    {
      v18 = v68;
      goto LABEL_49;
    }
  }
  LOBYTE(v6) = v13;
  v50 = VIDMM_SEGMENT::GetLargestGap(v66, a2, v26, v6);
  if ( g_IsInternalReleaseOrDbg )
  {
    v52 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v49, v51, v6);
    *(_QWORD *)(v52 + 24) = v50;
    *(_QWORD *)(v52 + 32) = *(_QWORD *)(a2 + 16);
  }
  if ( v50 < *(_QWORD *)(a2 + 16) )
  {
    v18 = v68;
    goto LABEL_64;
  }
LABEL_68:
  result = (unsigned __int64)v82;
  *v82 = 1;
  return result;
}
