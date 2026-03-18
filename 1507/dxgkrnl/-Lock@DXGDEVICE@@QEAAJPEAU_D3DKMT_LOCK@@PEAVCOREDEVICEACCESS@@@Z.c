/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0
 * Callers:
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C005DEE0 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock @ 0x1C0077AF0 (DxgkLock.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A904 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Lock(PERESOURCE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3, __int64 a4)
{
  PERESOURCE *v5; // r15
  int v6; // r12d
  _BOOL8 v7; // rcx
  struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC v8; // eax
  unsigned int v9; // esi
  PERESOURCE v10; // rbp
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  struct _LIST_ENTRY *Blink; // r8
  int v16; // edx
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 OwnerTable; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR Count; // r14
  D3DKMT_HANDLE v24; // ebp
  PERESOURCE v25; // rax
  KSPIN_LOCK SpinLock; // r12
  _QWORD *Address; // r13
  struct DXGPROCESS *Current; // rax
  char *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // r13d
  char *v34; // rcx
  PERESOURCE v35; // rax
  KSPIN_LOCK v36; // rbp
  _QWORD *v37; // r14
  ULONG_PTR v38; // r12
  struct DXGPROCESS *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r12d
  PERESOURCE v43; // r14
  D3DKMT_HANDLE v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // r8
  D3DKMT_HANDLE v47; // ebp
  unsigned int v48; // r8d
  struct _LIST_ENTRY *v49; // rdx
  int v50; // ecx
  __int64 v51; // rcx
  struct _EX_RUNDOWN_REF *v52; // rcx
  struct DXGGLOBAL *v53; // rax
  struct _KTHREAD *v54; // rbx
  int v55; // edi
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  struct _KTHREAD *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // edi
  __int64 v66; // r8
  __int64 *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  char *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  struct DXGGLOBAL *v75; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v79; // rax
  struct _KTHREAD *v80; // rbx
  int v81; // esi
  __int64 *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  _QWORD *v85; // rax
  int Flink; // r9d
  int v87; // r9d
  int v88; // r9d
  int v89; // r9d
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 Value; // rcx
  struct DXGPROCESS *v107; // [rsp+50h] [rbp-58h] BYREF
  int v108; // [rsp+B0h] [rbp+8h]
  UINT PrivateDriverData; // [rsp+B8h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v111; // [rsp+C8h] [rbp+20h] BYREF

  v5 = this;
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[10]);
  v6 = 1;
  v108 = 1;
  if ( (a2->Flags.Value & 0xFFFFF800) != 0 )
  {
LABEL_148:
    v105 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v105[3] = v5;
    Value = a2->Flags.Value;
LABEL_149:
    v105[4] = Value;
    v105[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v105);
    return 3221225485LL;
  }
  while ( 1 )
  {
    v7 = a2->NumPages == 0;
    if ( v7 != (a2->pPages == 0LL) )
    {
      v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
      v105[3] = v5;
      Value = a2->NumPages;
      goto LABEL_149;
    }
    v8 = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
    v9 = ((unsigned __int8)~*(_BYTE *)&a2->Flags.0 >> 2) & 1;
    if ( (*(_BYTE *)&v8 & 8) != 0 )
      v9 |= 2u;
    if ( (*(_BYTE *)&v8 & 0x20) != 0 )
      v9 |= 4u;
    if ( (*(_BYTE *)&v8 & 0x40) != 0 )
      v9 |= 8u;
    if ( *(_BYTE *)&v8 < 0 )
      v9 |= 0x10u;
    if ( (*(_WORD *)&v8 & 0x100) != 0 )
      v9 |= 0x20u;
    if ( (*(_WORD *)&v8 & 0x200) != 0 )
      v9 |= 0x48u;
    if ( (*(_WORD *)&v8 & 0x400) != 0 )
      v9 |= 0x80u;
    if ( (*(_BYTE *)&v8 & 1) != 0 )
      v9 |= 0x200u;
    v10 = v5[5];
    hAllocation = a2->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v10[1].Address, 0LL) )
    {
      if ( bTracingEnabled )
      {
        Flink = (int)v10[2].SystemResourcesList.Flink;
        if ( Flink != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v12, &EventBlockThread, v13, Flink);
      }
      ExAcquirePushLockSharedEx(&v10[1].Address, 0LL);
    }
    v14 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)&v10[2].ActiveCount
      && (Blink = v10[2].SystemResourcesList.Blink,
          v16 = (int)Blink[(unsigned int)v14].Blink,
          ((hAllocation >> 26) & 0x30) == ((__int64)Blink[(unsigned int)v14].Blink & 0x30))
      && (v16 & 0x1000) == 0
      && (v16 & 0xF) != 0
      && (v17 = v14, ((__int64)Blink[v17].Blink & 0xF) == 5) )
    {
      v18 = (struct _EX_RUNDOWN_REF *)Blink[v17].Flink;
    }
    else
    {
      v18 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v111, v18);
    ExReleasePushLockSharedEx(&v10[1].Address, 0LL);
    KeLeaveCriticalRegion();
    if ( !v111 )
    {
LABEL_118:
      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(OwnerTable, v19, v21, v22);
      v85[3] = v5;
      v85[4] = a2->hAllocation;
      v85[5] = -1073741811LL;
LABEL_119:
      WdLogEvent5_WdWarning(v85);
      v33 = -1073741811;
      goto LABEL_53;
    }
    Count = v111[3].Count;
    if ( !Count )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(OwnerTable, v19, v21, v22);
      v85[3] = v5;
      v85[4] = a2->hAllocation;
      v85[5] = v111;
      v85[6] = -1073741811LL;
      goto LABEL_119;
    }
    OwnerTable = v111[6].Count;
    v19 = *(unsigned int *)(OwnerTable + 4);
    if ( (v19 & 2) == 0 )
    {
      OwnerTable = v111[5].Count;
      if ( OwnerTable )
      {
        if ( (*(_DWORD *)(OwnerTable + 4) & 3) == 1 )
        {
          OwnerTable = (__int64)v5[2]->OwnerTable;
          if ( (*(_DWORD *)(OwnerTable + 284) & 8) == 0 )
            goto LABEL_118;
        }
      }
    }
    v24 = a2->hAllocation & 0x3F;
    if ( v6 == 1 )
      v9 |= 0x100u;
    v25 = v5[2];
    SpinLock = v25[3].SpinLock;
    Address = v25[3].Address;
    PrivateDriverData = a2->PrivateDriverData;
    Current = DXGPROCESS::GetCurrent(OwnerTable);
    v107 = Current;
    if ( Current )
    {
      v29 = (char *)Current + 120;
      if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
      {
        v107 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v87 = *((_DWORD *)v29 + 4);
            if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v30, &EventBlockThread, v31, v87);
          }
          ExAcquirePushLockExclusiveEx(v29, 0LL);
        }
        *((_QWORD *)v29 + 1) = KeGetCurrentThread();
      }
    }
    v33 = (*(__int64 (__fastcall **)(KSPIN_LOCK, ULONG_PTR, _QWORD, _QWORD, UINT, _QWORD, struct DXGPROCESS **, void **))(Address[1] + 248LL))(
            SpinLock,
            Count,
            v24,
            v9,
            PrivateDriverData,
            0LL,
            &v107,
            &a2->pData);
    if ( v107 )
    {
      v34 = (char *)v107 + 120;
      *((_QWORD *)v107 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v34, 0LL);
      KeLeaveCriticalRegion();
    }
    v35 = v5[2];
    v36 = v35[3].SpinLock;
    v37 = v35[3].Address;
    v38 = v111[3].Count;
    v39 = DXGPROCESS::GetCurrent(v32);
    if ( v39 )
    {
      if ( *((struct _KTHREAD **)v39 + 16) == KeGetCurrentThread() )
      {
        v39 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v39 + 120, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v88 = *((_DWORD *)v39 + 34);
            if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v40, &EventBlockThread, v41, v88);
          }
          ExAcquirePushLockExclusiveEx((char *)v39 + 120, 0LL);
        }
        *((_QWORD *)v39 + 16) = KeGetCurrentThread();
      }
    }
    v42 = (*(__int64 (__fastcall **)(KSPIN_LOCK, ULONG_PTR))(v37[1] + 264LL))(v36, v38);
    if ( v39 )
    {
      *((_QWORD *)v39 + 16) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v39 + 120, 0LL);
      KeLeaveCriticalRegion();
    }
    v43 = v5[5];
    v44 = a2->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(&v43[1].Address, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v89 = (int)v43[2].SystemResourcesList.Flink;
        if ( v89 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v45, &EventBlockThread, v46, v89);
      }
      ExAcquirePushLockExclusiveEx(&v43[1].Address, 0LL);
    }
    v47 = 0;
    v48 = (v44 >> 6) & 0xFFFFFF;
    v43[1].SpinLock = (KSPIN_LOCK)KeGetCurrentThread();
    if ( v48 < *(_DWORD *)&v43[2].ActiveCount )
    {
      v49 = v43[2].SystemResourcesList.Blink;
      v50 = (int)v49[v48].Blink;
      if ( ((v44 >> 26) & 0x30) == ((__int64)v49[v48].Blink & 0x30) && (v50 & 0x1000) == 0 && (v50 & 0xF) != 0 )
      {
        LODWORD(v49[v48].Blink) ^= (LODWORD(v49[v48].Blink) ^ (v42 << 6)) & 0xFC0;
        v47 = (LODWORD(v43[2].SystemResourcesList.Blink[v48].Blink) >> 6) & 0x3F | (((LODWORD(v43[2].SystemResourcesList.Blink[v48].Blink) << 20) ^ (v48 ^ (LODWORD(v43[2].SystemResourcesList.Blink[v48].Blink) << 20)) & 0xFFFFFF) << 6);
      }
    }
    v43[1].SpinLock = 0LL;
    ExReleasePushLockExclusiveEx(&v43[1].Address, 0LL);
    KeLeaveCriticalRegion();
    a2->hAllocation = v47;
    if ( v33 != -1071775484 )
      goto LABEL_53;
    if ( *((_BYTE *)a3 + 64) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
    v71 = (char *)a3 + 8;
    if ( !*((_BYTE *)a3 + 24) )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, a2, a3);
      v90[3] = 275LL;
      v90[4] = 4LL;
      v90[5] = v71;
      v90[6] = 0LL;
      v90[7] = 0LL;
      WdLogEvent5_WdCriticalError(v90);
    }
    v72 = *((_QWORD *)a3 + 2);
    *((_BYTE *)a3 + 24) = 0;
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v72 + 144) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v72);
    v33 = (*(__int64 (__fastcall **)(KSPIN_LOCK, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(v5[2][3].CreatorBackTraceIndex
                                                                                        + 8)
                                                                            + 592LL))(
            v5[2][3].SpinLock,
            v111[3].Count,
            a2->hAllocation & 0x3F,
            2LL);
    if ( v33 < 0 )
      goto LABEL_53;
    if ( *((_BYTE *)a3 + 24) )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v73, a2, a3);
      v91[3] = 275LL;
      v91[4] = 4LL;
      v91[5] = v71;
      v91[6] = 0LL;
      v91[7] = 0LL;
      WdLogEvent5_WdCriticalError(v91);
    }
    v74 = *((_QWORD *)a3 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v74 + 144) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v74 + 32)) )
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a3 + 2) + 32LL), Executive, 0, 0, 0LL);
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a3 + 2));
    }
    *((_BYTE *)a3 + 24) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a3 + 7) + 352LL) != 1 )
      goto LABEL_143;
    if ( *((_BYTE *)a3 + 64) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 32));
      if ( *(_DWORD *)(*((_QWORD *)a3 + 5) + 160LL) != 1 )
        break;
    }
    a2->Flags.Value &= ~0x80u;
    v33 = 0;
    if ( v108 != 1 )
      goto LABEL_53;
    this = (PERESOURCE *)v111;
    v6 = 2;
    v108 = 2;
    if ( v111 )
      ExReleaseRundownProtection(v111 + 11);
    v75 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v97 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v97 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v97);
      v75 = DXGGLOBAL::m_pGlobal;
    }
    if ( *((_DWORD *)v75 + 195) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v98 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
        *(_QWORD *)(v98 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v98);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
      if ( CurrentProcessSessionId )
      {
        if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v79 = *ThreadWin32Thread;
            if ( v79 )
            {
              if ( *(_QWORD *)(v79 + 80) )
              {
                v80 = KeGetCurrentThread();
                if ( !v80 )
                {
                  v99 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
                  *(_QWORD *)(v99 + 24) = 92LL;
                  WdLogEvent5_WdAssertion(v99);
                }
                v81 = PsGetCurrentProcessSessionId(this, a2, a3, a4);
                if ( v81
                  && (unsigned int)PsGetThreadSessionId(v80) == v81
                  && (v82 = (__int64 *)PsGetThreadWin32Thread(v80)) != 0LL
                  && (v83 = *v82) != 0 )
                {
                  v84 = *(_QWORD *)(v83 + 80);
                }
                else
                {
                  v84 = 0LL;
                }
                if ( *(_DWORD *)(v84 + 136) )
                {
                  v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
                  v100[3] = 275LL;
                  v100[4] = 25LL;
                  v100[5] = *(int *)(v84 + 136);
                  v100[6] = 0LL;
                  v100[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v100);
                }
              }
            }
          }
        }
      }
    }
    if ( (a2->Flags.Value & 0xFFFFF800) != 0 )
      goto LABEL_148;
  }
  COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
LABEL_143:
  COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
  v96 = WdLogNewEntry5_WdEvent(v93, v92, v94, v95);
  v33 = -1073741130;
  *(_QWORD *)(v96 + 24) = -1073741130LL;
  WdLogEvent5_WdEvent(v96);
LABEL_53:
  v52 = v111;
  if ( v111 )
    ExReleaseRundownProtection(v111 + 11);
  v53 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v101 = WdLogNewEntry5_WdAssertion(v52, a2, a3, a4);
    *(_QWORD *)(v101 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v101);
    v53 = DXGGLOBAL::m_pGlobal;
  }
  if ( *((_DWORD *)v53 + 195) )
  {
    v54 = KeGetCurrentThread();
    if ( !v54 )
    {
      v102 = WdLogNewEntry5_WdAssertion(v52, a2, a3, a4);
      *(_QWORD *)(v102 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v102);
    }
    v55 = PsGetCurrentProcessSessionId(v52, a2, a3, a4);
    if ( v55 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v54) == v55 )
      {
        v56 = (__int64 *)PsGetThreadWin32Thread(v54);
        if ( v56 )
        {
          v61 = *v56;
          if ( v61 )
          {
            if ( *(_QWORD *)(v61 + 80) )
            {
              v62 = KeGetCurrentThread();
              if ( !v62 )
              {
                v103 = WdLogNewEntry5_WdAssertion(v58, v57, v59, v60);
                *(_QWORD *)(v103 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v103);
              }
              v65 = PsGetCurrentProcessSessionId(v58, v57, v59, v60);
              if ( v65
                && (unsigned int)PsGetThreadSessionId(v62) == v65
                && (v67 = (__int64 *)PsGetThreadWin32Thread(v62)) != 0LL
                && (v68 = *v67) != 0 )
              {
                v69 = *(_QWORD *)(v68 + 80);
              }
              else
              {
                v69 = 0LL;
              }
              if ( *(_DWORD *)(v69 + 136) )
              {
                v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63, v66);
                v104[3] = 275LL;
                v104[4] = 25LL;
                v104[5] = *(int *)(v69 + 136);
                v104[6] = 0LL;
                v104[7] = 0LL;
                WdLogEvent5_WdCriticalError(v104);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v33;
}
