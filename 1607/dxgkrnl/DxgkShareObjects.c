/*
 * XREFs of DxgkShareObjects @ 0x1C00D0730
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0007628 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0009A6C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00113D4 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0025664 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00A3194 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

__int64 __fastcall DxgkShareObjects(__int64 a1, const void *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  ULONG64 v17; // rcx
  __int64 v18; // r12
  unsigned int v19; // ebx
  unsigned int v20; // edx
  int EntryType; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  struct DXGGLOBAL *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 *v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rsi
  DXGSYNCOBJECT *v35; // rsi
  __int64 v36; // rax
  void *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  DXGSYNCOBJECT **v44; // rbx
  DXGSYNCOBJECT *v45; // rsi
  struct DXGGLOBAL *Global; // rax
  DXGRESOURCEREFERENCE *ResourceUnsafe; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // r14
  unsigned int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // r10
  __int64 v58; // rax
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  DXGGLOBAL *v67; // rax
  struct _LIST_ENTRY *v68; // r12
  _QWORD *v69; // rax
  _QWORD *v70; // rbx
  NTSTATUS inserted; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r9
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v79; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v5 + 60) = a4;
  *(_QWORD *)(v5 + 104) = a3;
  v8 = (unsigned int)a1;
  *(_DWORD *)(v5 + 56) = a1;
  *(_QWORD *)(v5 + 128) = a5;
  *(_DWORD *)(v5 + 112) = 2074;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2074);
  *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v9 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
  *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
    goto LABEL_5;
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    v77 = WdLogNewEntry5_WdError(v12);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v77 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v77);
    goto LABEL_109;
  }
  v17 = (ULONG64)a2 + 4 * v8;
  if ( v17 < (unsigned __int64)a2 || v17 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove((void *)(v5 + 184), a2, 4 * v8);
  if ( !a3 || (v18 = *(unsigned int *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8), !(_DWORD)v18) )
  {
LABEL_5:
    v14 = WdLogNewEntry5_WdError(v12);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_110;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)(v5 + 160),
    (struct _KTHREAD **)ProcessDxgProcess);
  v19 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
  *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = (unsigned int)v18 >> 30;
  if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v20 = *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 16LL * v19 + 8),
        (unsigned int)v18 >> 30 == ((v20 >> 4) & 3))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType(ProcessDxgProcess + 208, v19);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v5 + 160));
  if ( EntryType == 4 )
  {
    v45 = 0LL;
    *(_QWORD *)v5 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v23);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16), Global);
    if ( (unsigned int)v8 > 1 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v5 + 16));
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)(v5 + 64),
      *(struct _KTHREAD ***)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
    ResourceUnsafe = DXGPROCESS::GetResourceUnsafe(
                       *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                       (DXGRESOURCEREFERENCE *)(v5 + 120),
                       v18);
    DXGRESOURCEREFERENCE::MoveAssign((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL, ResourceUnsafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v5 + 120));
    v52 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( (*(_DWORD *)(v52 + 4) & 1) != 0 )
      {
        v54 = *(_QWORD *)(v52 + 56);
        if ( v54 )
        {
          if ( (*(_BYTE *)(v54 + 12) & 8) == 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
            v53[3] = *(_QWORD *)(v52 + 56);
            goto LABEL_52;
          }
          v55 = *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          if ( v55 <= 1 )
            goto LABEL_83;
          if ( v55 == 3 )
          {
            v56 = *(unsigned int *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC);
            v49 = (*(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) >> 6) & 0xFFFFFF;
            v51 = *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) >> 30;
            v50 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            if ( (unsigned int)v49 < *(_DWORD *)(v50 + 224)
              && (v57 = *(_QWORD *)(v50 + 208),
                  v48 = *(unsigned int *)(v57 + 16LL * (unsigned int)v49 + 8),
                  (_DWORD)v51 == ((*(_DWORD *)(v57 + 16LL * (unsigned int)v49 + 8) >> 4) & 3))
              && (v48 & 0x1000) == 0
              && (v48 & 0xF) != 0
              && (*(_BYTE *)(v57 + 16LL * (unsigned int)v49 + 8) & 0xF) == 9 )
            {
              v9 = *(_QWORD *)(v57 + 16LL * (unsigned int)v49);
            }
            else
            {
              v9 = 0LL;
            }
            if ( !v9 )
            {
LABEL_69:
              v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
              v53[3] = v56;
              goto LABEL_52;
            }
            if ( (*(_DWORD *)(v9 + 148) & 1) == 0 )
            {
              _InterlockedAdd(&dword_1C00573FC, 1u);
              v58 = WdLogNewEntry5_WdError(v49);
              *(_QWORD *)(v58 + 24) = v9;
LABEL_72:
              LODWORD(v15) = -1073741811;
              *(_QWORD *)(v58 + 32) = -1073741811LL;
              WdLogEvent5_WdError(v58);
              goto LABEL_53;
            }
            v56 = *(unsigned int *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            v49 = (*(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) >> 6) & 0xFFFFFF;
            v51 = *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) >> 30;
            if ( (unsigned int)v49 < *(_DWORD *)(v50 + 224) )
            {
              v50 = *(_QWORD *)(v50 + 208);
              v48 = *(unsigned int *)(v50 + 16LL * (unsigned int)v49 + 8);
              if ( (_DWORD)v51 == ((*(_DWORD *)(v50 + 16LL * (unsigned int)v49 + 8) >> 4) & 3)
                && (v48 & 0x1000) == 0
                && (v48 & 0xF) != 0 )
              {
                if ( (*(_BYTE *)(v50 + 16LL * (unsigned int)v49 + 8) & 0xF) == 8 )
                  v45 = *(DXGSYNCOBJECT **)(v50 + 16LL * (unsigned int)v49);
                else
                  v45 = 0LL;
              }
            }
            if ( !v45 )
              goto LABEL_69;
            if ( (*((_DWORD *)v45 + 33) & 2) == 0 )
            {
              _InterlockedAdd(&dword_1C00573FC, 1u);
              v58 = WdLogNewEntry5_WdError(v49);
              *(_QWORD *)(v58 + 24) = v45;
              goto LABEL_72;
            }
LABEL_83:
            _m_prefetchw((const void *)(v54 + 60));
            v59 = *(_DWORD *)(v54 + 60);
            do
            {
              if ( !v59 )
              {
                v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
                v53[3] = *(unsigned int *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
                v53[5] = 240LL;
                goto LABEL_52;
              }
              v49 = (unsigned int)(v59 + 1);
              v60 = v59;
              v59 = _InterlockedCompareExchange((volatile signed __int32 *)(v54 + 60), v49, v59);
            }
            while ( v60 != v59 );
            if ( v9 && _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 0 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v49);
              *(_QWORD *)(v61 + 24) = 540LL;
              WdLogEvent5_WdAssertion(v61);
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v5 + 64));
            if ( v45 )
              DXGSYNCOBJECT::AddReference(v45, v62, v64, v65);
            LOBYTE(v65) = 1;
            LOBYTE(v63) = 1;
            LODWORD(v15) = ObCreateObject(
                             v63,
                             g_pDxgkSharedAllocationObjectType,
                             *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                             v65,
                             0LL,
                             40,
                             0,
                             0,
                             v5 + 8);
            if ( (int)v15 >= 0 )
            {
              v68 = *(struct _LIST_ENTRY **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v54 + 72), v68);
              v69 = (_QWORD *)(v54 + 128);
              v70 = *(_QWORD **)(v54 + 128);
              while ( v70 != v69 )
              {
                if ( (*((_DWORD *)v70 - 11) & 0x4000) != 0 )
                  _guard_dispatch_icall_fptr();
                v70 = (_QWORD *)*v70;
                v69 = (_QWORD *)(v54 + 128);
              }
              v68[1].Flink = (struct _LIST_ENTRY *)v54;
              _InterlockedAdd((volatile signed __int32 *)(v54 + 56), 1u);
              v68[1].Blink = (struct _LIST_ENTRY *)v9;
              v68[2].Flink = (struct _LIST_ENTRY *)v45;
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16));
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL));
              v28 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
LABEL_103:
              inserted = ObInsertObject(
                           *(PVOID *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                           0LL,
                           *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
                           0,
                           0LL,
                           (PHANDLE)(v5 + 48));
              v15 = inserted;
              if ( inserted >= 0 )
              {
                v37 = (void *)MmUserProbeAddress;
                v76 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
                if ( (unsigned __int64)v76 >= MmUserProbeAddress )
                  v76 = (_QWORD *)MmUserProbeAddress;
                *v76 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              }
              else
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, v16, v74);
                v75[3] = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                v75[4] = v28;
                v75[5] = v15;
                WdLogEvent5_WdWarning(v75);
              }
LABEL_109:
              if ( (int)v15 >= 0 )
                goto LABEL_112;
              goto LABEL_110;
            }
            DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v54, 0LL, 0);
            if ( v9 )
              DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v9);
            if ( v45 )
            {
              v67 = DXGGLOBAL::GetGlobal(v66);
              DXGGLOBAL::DestroySyncObject(v67, v45, 0, 0);
            }
LABEL_54:
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16));
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL));
            goto LABEL_109;
          }
        }
      }
    }
    v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
    v53[3] = v18;
LABEL_52:
    LODWORD(v15) = -1073741811;
    v53[4] = -1073741811LL;
    WdLogEvent5_WdWarning(v53);
LABEL_53:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v5 + 64));
    goto LABEL_54;
  }
  if ( EntryType == 8 || EntryType == 11 )
  {
    if ( (_DWORD)v8 != 1 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      LODWORD(v15) = -1073741811;
      v26[4] = -1073741811LL;
      goto LABEL_22;
    }
    v27 = DXGGLOBAL::GetGlobal(v23);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88), v27);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v5 + 88));
    v28 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136), (struct _KTHREAD **)v28);
    v32 = (__int64 *)(v28 + 208);
    if ( EntryType == 11 )
    {
      if ( v19 >= *(_DWORD *)(v28 + 224) )
        goto LABEL_33;
      v33 = *v32;
      v30 = *(unsigned int *)(*v32 + 16LL * v19 + 8);
      if ( *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) != ((*(_DWORD *)(*v32 + 16LL * v19 + 8) >> 4) & 3) )
        goto LABEL_33;
      if ( (v30 & 0x1000) != 0 )
        goto LABEL_33;
      if ( (v30 & 0xF) == 0 )
        goto LABEL_33;
      v30 = 2LL * v19;
      if ( (*(_BYTE *)(v33 + 16LL * v19 + 8) & 0xF) != 0xB )
        goto LABEL_33;
      v34 = *(_QWORD *)(v33 + 16LL * v19);
      if ( !v34 )
        goto LABEL_33;
      v35 = *(DXGSYNCOBJECT **)(v34 + 32);
    }
    else if ( v19 < *(_DWORD *)(v28 + 224)
           && (v29 = *v32,
               v30 = *(unsigned int *)(*v32 + 16LL * v19 + 8),
               *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) == ((*(_DWORD *)(*v32 + 16LL * v19 + 8) >> 4) & 3))
           && (v30 & 0x1000) == 0
           && (v30 & 0xF) != 0
           && (v30 = 2LL * v19, EntryType == (*(_DWORD *)(v29 + 16LL * v19 + 8) & 0xF)) )
    {
      v35 = *(DXGSYNCOBJECT **)(v29 + 16LL * v19);
    }
    else
    {
      v35 = 0LL;
    }
    if ( v35 )
    {
      if ( (*((_DWORD *)v35 + 33) & 2) == 0 )
      {
        _InterlockedAdd(&dword_1C00573FC, 1u);
        v38 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v38 + 24) = v35;
        LODWORD(v15) = -1073741811;
        *(_QWORD *)(v38 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v38);
        goto LABEL_34;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v5 + 136));
      LOBYTE(v39) = 1;
      LOBYTE(v40) = 1;
      LODWORD(v15) = ObCreateObject(
                       v40,
                       g_pDxgkSharedSyncObjectType,
                       *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                       v39,
                       0LL,
                       8,
                       0,
                       0,
                       v5 + 8);
      if ( (int)v15 < 0 )
        goto LABEL_35;
      v44 = *(DXGSYNCOBJECT ***)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      DXGSYNCOBJECT::AddReference(v35, v41, v42, v43);
      *v44 = v35;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88));
      goto LABEL_103;
    }
LABEL_33:
    v36 = WdLogNewEntry5_WdWarning(v30, v29, v32, v31);
    *(_QWORD *)(v36 + 24) = v18;
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v36);
LABEL_34:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v5 + 136));
LABEL_35:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88));
    goto LABEL_109;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  v26[4] = EntryType;
  LODWORD(v15) = -1073741811;
  v26[5] = -1073741811LL;
LABEL_22:
  v26[3] = v18;
  WdLogEvent5_WdWarning(v26);
LABEL_110:
  v37 = *(void **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( v37 )
    NtClose(v37);
LABEL_112:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v37, &EventProfilerExit, v16, 2074);
  return (unsigned int)v15;
}
