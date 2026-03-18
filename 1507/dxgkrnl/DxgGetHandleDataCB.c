/*
 * XREFs of DxgGetHandleDataCB @ 0x1C0087D20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z @ 0x1C00E06F0 (--0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *v6; // rsi
  char *v7; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r9d
  unsigned int v15; // eax
  ULONG_PTR v16; // rdi
  ULONG_PTR Count; // r15
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8
  int v22; // edx
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _EX_RUNDOWN_REF **v27; // rcx
  __int64 v28; // r8
  int v29; // edx
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _EX_RUNDOWN_REF *v35; // rbx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  struct DXGGLOBAL *v53; // rax
  __int64 v54; // rax
  struct _KTHREAD *v55; // rbx
  __int64 v56; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  struct _KTHREAD *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // esi
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rbx
  _QWORD *v72; // rax
  unsigned int v73; // ebx
  int v74; // eax
  unsigned int v75; // ecx
  __int64 v76; // r8
  int v77; // edx
  struct DXGRESOURCE *v78; // rdx
  struct _EX_RUNDOWN_REF **v79; // rcx
  __int64 v80; // r8
  int v81; // edx
  struct DXGRESOURCE *v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  struct _EX_RUNDOWN_REF *v87; // rbx
  __int64 v88; // rcx
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  char v102[8]; // [rsp+20h] [rbp-38h] BYREF
  char v103[8]; // [rsp+28h] [rbp-30h] BYREF
  char v104[8]; // [rsp+30h] [rbp-28h] BYREF
  char *v105; // [rsp+38h] [rbp-20h]
  int v106; // [rsp+40h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v107; // [rsp+90h] [rbp+38h] BYREF
  struct _EX_RUNDOWN_REF *v108; // [rsp+98h] [rbp+40h] BYREF
  char v109; // [rsp+A0h] [rbp+48h] BYREF
  char v110; // [rsp+A8h] [rbp+50h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v6 = Current;
  v7 = (char *)Current + 192;
  v105 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 25) == CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(v3, CurrentThread, v4, v5);
      *(_QWORD *)(v9 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v7, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)v7 + 4);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v11, &EventBlockThread, v12, v14);
    }
    ExAcquirePushLockSharedEx(v7, 0LL);
  }
  v15 = a1[1];
  v16 = 0LL;
  v106 = 1;
  Count = 0LL;
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v73 = *a1;
      LOBYTE(v74) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
      v75 = (v73 >> 6) & 0xFFFFFF;
      if ( v74 )
      {
        if ( v75 < *((_DWORD *)v6 + 58)
          && (v76 = *((_QWORD *)v6 + 27),
              v77 = *(_DWORD *)(v76 + 16LL * v75 + 8),
              ((v73 >> 26) & 0x30) == (*(_BYTE *)(v76 + 16LL * v75 + 8) & 0x30))
          && ((v77 & 0x1000) == 0 || (v77 & 0x2000) != 0)
          && (v77 & 0xF) != 0
          && (*(_BYTE *)(v76 + 16LL * v75 + 8) & 0xF) == 4 )
        {
          v78 = *(struct DXGRESOURCE **)(v76 + 16LL * v75);
        }
        else
        {
          v78 = 0LL;
        }
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v102, v78);
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v107, v102);
        v79 = (struct _EX_RUNDOWN_REF **)v102;
      }
      else
      {
        if ( v75 < *((_DWORD *)v6 + 58)
          && (v80 = *((_QWORD *)v6 + 27),
              v81 = *(_DWORD *)(v80 + 16LL * v75 + 8),
              ((v73 >> 26) & 0x30) == (*(_BYTE *)(v80 + 16LL * v75 + 8) & 0x30))
          && (v81 & 0x1000) == 0
          && (v81 & 0xF) != 0
          && (*(_BYTE *)(v80 + 16LL * v75 + 8) & 0xF) == 4 )
        {
          v82 = *(struct DXGRESOURCE **)(v80 + 16LL * v75);
        }
        else
        {
          v82 = 0LL;
        }
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v103, v82);
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v107, v103);
        v79 = (struct _EX_RUNDOWN_REF **)v103;
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v79);
      v87 = v107;
      if ( v107 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v107[1].Count + 16) + 16LL) + 176LL) + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v88 + 28) >= 0x2003u )
          {
            v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v88, v83, v85);
            v89[3] = 275LL;
            v89[4] = 20LL;
            v89[5] = *(_QWORD *)(*(_QWORD *)(v87[1].Count + 16) + 16LL);
            v89[6] = 0LL;
            v89[7] = 0LL;
            WdLogEvent5_WdCriticalError(v89);
          }
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v87[1].Count + 16) + 16LL))
          && *((_DWORD *)DXGGLOBAL::GetGlobal(v91, v90, v92, v93) + 195) )
        {
          v98 = WdLogNewEntry5_WdAssertion(v95, v94, v96, v97);
          *(_QWORD *)(v98 + 24) = 125LL;
          WdLogEvent5_WdAssertion(v98);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v107);
          goto LABEL_95;
        }
        if ( (HIDWORD(v87->Ptr) & 1) != 0 )
          Count = *(_QWORD *)(v87[7].Count + 16);
        else
          Count = v87[7].Count;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v107);
      }
      else
      {
        v99 = WdLogNewEntry5_WdWarning(v84, v83, v85, v86);
        *(_QWORD *)(v99 + 24) = *a1;
        WdLogEvent5_WdWarning(v99);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v107);
      }
    }
    else
    {
      v100 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v100 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v100);
    }
LABEL_94:
    v16 = Count;
    goto LABEL_95;
  }
  v18 = *a1;
  LOBYTE(v19) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
  v20 = (v18 >> 6) & 0xFFFFFF;
  if ( v19 )
  {
    if ( v20 < *((_DWORD *)v6 + 58)
      && (v21 = *((_QWORD *)v6 + 27),
          v22 = *(_DWORD *)(v21 + 16LL * v20 + 8),
          ((v18 >> 26) & 0x30) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x30))
      && ((v22 & 0x1000) == 0 || (v22 & 0x2000) != 0)
      && (v22 & 0xF) != 0
      && (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0xF) == 5 )
    {
      v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * v20);
    }
    else
    {
      v23 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v109, v23);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v108, &v109);
    v27 = (struct _EX_RUNDOWN_REF **)&v109;
  }
  else
  {
    if ( v20 < *((_DWORD *)v6 + 58)
      && (v28 = *((_QWORD *)v6 + 27),
          v29 = *(_DWORD *)(v28 + 16LL * v20 + 8),
          ((v18 >> 26) & 0x30) == (*(_BYTE *)(v28 + 16LL * v20 + 8) & 0x30))
      && (v29 & 0x1000) == 0
      && (v29 & 0xF) != 0
      && (*(_BYTE *)(v28 + 16LL * v20 + 8) & 0xF) == 5 )
    {
      v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * v20);
    }
    else
    {
      v30 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v110, v30);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v108, &v110);
    v27 = (struct _EX_RUNDOWN_REF **)&v110;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v27, v24, v25, v26);
  v35 = v108;
  if ( !v108 )
  {
    v52 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    *(_QWORD *)(v52 + 24) = *a1;
    WdLogEvent5_WdWarning(v52);
LABEL_42:
    v53 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v54 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
      *(_QWORD *)(v54 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v54);
      v53 = DXGGLOBAL::m_pGlobal;
    }
    if ( *((_DWORD *)v53 + 195) )
    {
      v55 = KeGetCurrentThread();
      if ( !v55 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        *(_QWORD *)(v56 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v56);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v49, v48, v50, v51);
      if ( CurrentProcessSessionId )
      {
        if ( (unsigned int)PsGetThreadSessionId(v55) == CurrentProcessSessionId )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v55);
          if ( ThreadWin32Thread )
          {
            v63 = *ThreadWin32Thread;
            if ( v63 )
            {
              if ( *(_QWORD *)(v63 + 80) )
              {
                v64 = KeGetCurrentThread();
                if ( !v64 )
                {
                  v65 = WdLogNewEntry5_WdAssertion(v60, v59, v61, v62);
                  *(_QWORD *)(v65 + 24) = 92LL;
                  WdLogEvent5_WdAssertion(v65);
                }
                v68 = PsGetCurrentProcessSessionId(v60, v59, v61, v62);
                if ( v68
                  && (unsigned int)PsGetThreadSessionId(v64) == v68
                  && (v70 = PsGetThreadWin32Thread(v64)) != 0
                  && *(_QWORD *)v70 )
                {
                  v71 = *(_QWORD *)(*(_QWORD *)v70 + 80LL);
                }
                else
                {
                  v71 = 0LL;
                }
                if ( *(_DWORD *)(v71 + 136) )
                {
                  v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v67, v66, v69);
                  v72[3] = 275LL;
                  v72[4] = 25LL;
                  v72[5] = *(int *)(v71 + 136);
                  v72[6] = 0LL;
                  v72[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v72);
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_94;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v108[1].Count + 16) + 16LL) + 176LL) + 64LL) + 40LL);
    if ( *(_DWORD *)(v36 + 28) >= 0x2003u )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v31, v33);
      v37[3] = 275LL;
      v37[4] = 20LL;
      v37[5] = *(_QWORD *)(*(_QWORD *)(v35[1].Count + 16) + 16LL);
      v37[6] = 0LL;
      v37[7] = 0LL;
      WdLogEvent5_WdCriticalError(v37);
    }
  }
  v38 = *(_QWORD *)(v35[1].Count + 16);
  v39 = *(_QWORD *)(v38 + 16);
  if ( *(int *)(v39 + 1648) < 0x2000 && !*(_BYTE *)(v39 + 1932)
    || !*((_DWORD *)DXGGLOBAL::GetGlobal(v38, v31, v33, v34) + 195) )
  {
    if ( (a1[2] & 1) != 0 )
      Count = v35[4].Count;
    else
      Count = *(_QWORD *)(v35[6].Count + 16);
    ExReleaseRundownProtection(v35 + 11);
    goto LABEL_42;
  }
  v44 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
  *(_QWORD *)(v44 + 24) = 83LL;
  WdLogEvent5_WdAssertion(v44);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v108, v45, v46, v47);
LABEL_95:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v104);
  return v16;
}
