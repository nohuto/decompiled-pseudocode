/*
 * XREFs of ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C007E640
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C007EDB4 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0054AC0 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C007E5CC (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C007F8C4 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C008499C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

unsigned __int64 VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc(__int64 a1, __int64 a2, VIDMM_DEVICE *a3, ...)
{
  __int64 v3; // r11
  VIDMM_DEVICE *v4; // r10
  unsigned __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  int v9; // edx
  char v10; // cl
  int v11; // r8d
  int v12; // r8d
  bool v13; // si
  unsigned int v14; // eax
  __int64 v15; // r8
  _QWORD *v16; // rdi
  unsigned int v17; // r13d
  unsigned __int64 v18; // r15
  int *v19; // r12
  int v20; // eax
  unsigned int v21; // r12d
  struct VIDMM_DEVICE *v22; // rdx
  unsigned int v23; // r9d
  VIDMM_DEVICE *v24; // r10
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  VIDMM_DEVICE *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r9
  _QWORD *v31; // r12
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  VIDMM_DEVICE *v36; // rdi
  struct VIDMM_DEVICE *v37; // rdx
  unsigned int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  _QWORD *v44; // rcx
  unsigned __int64 v45; // rdi
  int v46; // [rsp+48h] [rbp-59h]
  unsigned int v47; // [rsp+4Ch] [rbp-55h]
  unsigned int v48; // [rsp+50h] [rbp-51h]
  unsigned int v49; // [rsp+54h] [rbp-4Dh]
  __int64 v50; // [rsp+58h] [rbp-49h]
  unsigned int v51; // [rsp+60h] [rbp-41h] BYREF
  _QWORD *v52; // [rsp+68h] [rbp-39h]
  int v53; // [rsp+70h] [rbp-31h]
  unsigned __int64 v54; // [rsp+78h] [rbp-29h] BYREF
  _QWORD *v55; // [rsp+80h] [rbp-21h]
  _DWORD *v56; // [rsp+88h] [rbp-19h]
  _DWORD v57[2]; // [rsp+90h] [rbp-11h] BYREF
  _QWORD *v58; // [rsp+98h] [rbp-9h]
  int v60; // [rsp+100h] [rbp+5Fh] BYREF
  VIDMM_DEVICE *v61; // [rsp+108h] [rbp+67h]
  _QWORD *v62; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v64; // [rsp+118h] [rbp+77h]
  _BYTE *v65; // [rsp+120h] [rbp+7Fh]
  va_list va1; // [rsp+128h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v62 = va_arg(va1, _QWORD *);
  v64 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _BYTE *);
  v61 = a3;
  v3 = a1;
  v4 = a3;
  v46 = *(_DWORD *)(a2 + 68);
  *v65 = 0;
  result = (unsigned int)-*(_DWORD *)(a2 + 72);
  v7 = 0;
  v48 = 0;
  v8 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
  if ( !v46 )
    return result;
  v9 = v46;
  LODWORD(result) = 6 * v8;
  v47 = 6 * v8;
  while ( 1 )
  {
    if ( v8 <= 5 )
    {
      v10 = result;
      result = (unsigned int)(result + 6);
      ++v8;
      v47 = result;
      v11 = (*(_DWORD *)(a2 + 72) >> v10) & 0x1F;
      if ( v11 )
      {
        v12 = v11 - 1;
        v13 = ((*(_DWORD *)(a2 + 72) >> result) & 0x20) == 0;
        goto LABEL_8;
      }
LABEL_72:
      v7 = v48;
      goto LABEL_73;
    }
    v14 = v7;
    v12 = v7++;
    v48 = v7;
    if ( _bittest(&v9, v14) )
      break;
    result = v47;
LABEL_73:
    if ( !v9 )
      return result;
  }
  v13 = 1;
LABEL_8:
  v46 &= ~(1 << v12);
  v49 = v12 + *(_DWORD *)(456LL * (*(_DWORD *)(a2 + 76) & 0x3F) + *(_QWORD *)(*(_QWORD *)v3 + 40048LL) + 4);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 3712LL) + 8LL * v49);
  v50 = v15;
  if ( (*(_DWORD *)(v15 + 56) & 0x1001) != 0 )
  {
LABEL_71:
    result = v47;
    v9 = v46;
    goto LABEL_72;
  }
  v57[0] = 0;
  v16 = (_QWORD *)(v15 + 128);
  v52 = (_QWORD *)(v15 + 128);
  v57[1] = 2;
LABEL_10:
  v17 = 2013265919;
  v18 = *(_QWORD *)(a2 + 16) + (*(_QWORD *)(a2 + 16) >> 2);
  v54 = v18;
LABEL_11:
  v51 = 0;
  v19 = v57;
  v53 = 0;
  v56 = v57;
  while ( 1 )
  {
    v20 = *v19;
    v21 = v17;
    v60 = v20;
    if ( v20 == 2 )
      break;
    v31 = (_QWORD *)*v16;
    if ( (_QWORD *)*v16 == v16 )
      goto LABEL_27;
    do
    {
      v32 = v31 - 3;
      v31 = (_QWORD *)*v31;
      v33 = (_QWORD *)*v32;
      v55 = v32;
      if ( !(unsigned __int8)PsIsSystemProcess(*v33) )
      {
        v34 = v32 + 5;
        v35 = (_QWORD *)v32[5];
        while ( v35 != v34 )
        {
          v36 = (VIDMM_DEVICE *)v35[4];
          v58 = (_QWORD *)*v35;
          if ( VIDMM_DEVICE::CanSuspendThisDevice(v36, v61, v60, v64) )
          {
            LOBYTE(v62) = 0;
            VIDMM_DEVICE::FaultAllDemotableAllocations(v36, v37, v49, v38, v17, &v51, &v54, (bool *)va);
            if ( (_BYTE)v62 && (v41 = v55 + 3, v55[3]) )
            {
              v42 = *v41;
              v43 = (_QWORD *)v55[4];
              if ( *(_QWORD **)(*v41 + 8LL) != v41 || (_QWORD *)*v43 != v41 )
                __fastfail(3u);
              v16 = v52;
              *v43 = v42;
              *(_QWORD *)(v42 + 8) = v43;
              v44 = (_QWORD *)v16[1];
              *v41 = v16;
              v41[1] = v44;
              if ( (_QWORD *)*v44 != v16 )
                __fastfail(3u);
              *v44 = v41;
              v16[1] = v41;
            }
            else
            {
              v16 = v52;
            }
            v18 = v54;
            if ( !v54 )
            {
              LOBYTE(v40) = v13;
              if ( (unsigned __int64)VIDMM_SEGMENT::GetLargestGap(v50, a2, v39, v40) >= *(_QWORD *)(a2 + 16) )
                goto LABEL_57;
LABEL_55:
              v15 = v50;
              v4 = v61;
              v3 = a1;
              goto LABEL_10;
            }
          }
          v35 = v58;
          v34 = v55 + 5;
        }
      }
      v16 = v52;
    }
    while ( v31 != v52 );
LABEL_25:
    v3 = a1;
LABEL_26:
    v15 = v50;
LABEL_27:
    v30 = v49;
    v19 = v56 + 1;
    v4 = v61;
    ++v53;
    ++v56;
    if ( (unsigned __int64)v53 >= 2 )
    {
      if ( v51 - 1 <= 0xC7FFFFFE )
      {
        if ( v17 == 2013265919 )
        {
          v17 = -939524097;
          if ( v51 <= 0x9FFFFFFF )
            v17 = -1610612737;
          goto LABEL_52;
        }
        if ( v17 == -1610612737 )
        {
          v17 = -939524097;
LABEL_52:
          v4 = v61;
          goto LABEL_11;
        }
      }
      v45 = *(_QWORD *)(a2 + 16);
      if ( v18 != v45 + (v45 >> 2) )
      {
        LOBYTE(v30) = v13;
        if ( VIDMM_SEGMENT::GetLargestGap(v15, a2, v15, v30) >= v45 )
          goto LABEL_57;
      }
      if ( (dword_1C002F104 & 0x40) != 0
        && (_DWORD)v64 != 2
        && (*(_DWORD *)(a2 + 376) >= 0xA0000000 || (*(_DWORD *)(a2 + 76) & 0x40) == 0)
        && !*v65
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
      v4 = v61;
      goto LABEL_71;
    }
  }
  if ( (*(_DWORD *)(a2 + 76) & 0x40) != 0 && v17 >= *(_DWORD *)(a2 + 376) - 1 )
    v21 = *(_DWORD *)(a2 + 376) - 1;
  v62 = (_QWORD *)((char *)VIDMM_PROCESS::GetCommitmentInformation(
                             *((VIDMM_PROCESS **)v4 + 1),
                             *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 24LL) + 184LL),
                             *(_DWORD *)(v15 + 20))
                 + 40);
  v25 = (_QWORD *)*v62;
  if ( (_QWORD *)*v62 == v62 )
  {
    v16 = v52;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v26 = v25 - 2;
    v25 = (_QWORD *)*v25;
    v27 = (VIDMM_DEVICE *)v26[6];
    if ( v27 == v24
      && ((dword_1C002F104 & 0x40) == 0 || *(_DWORD *)(a2 + 376) < 0xA0000000 && (*(_DWORD *)(a2 + 76) & 0x40) != 0) )
    {
      goto LABEL_23;
    }
    LOBYTE(v60) = 0;
    VIDMM_DEVICE::FaultAllDemotableAllocations(v27, v22, v23, v23, v21, &v51, &v54, (bool *)&v60);
    v18 = v54;
    if ( !v54 )
      break;
    v23 = v49;
    v24 = v61;
LABEL_23:
    if ( v25 == v62 )
    {
      v16 = v52;
      goto LABEL_25;
    }
  }
  LOBYTE(v29) = v13;
  if ( (unsigned __int64)VIDMM_SEGMENT::GetLargestGap(v50, a2, v28, v29) < *(_QWORD *)(a2 + 16) )
  {
    v16 = v52;
    goto LABEL_55;
  }
LABEL_57:
  result = (unsigned __int64)v65;
  *v65 = 1;
  return result;
}
