/*
 * XREFs of DxgkShareObjects @ 0x1C008FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0004C5C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00053F8 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0005728 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C000F810 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C001E7D8 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0084860 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkShareObjects(__int64 a1, const void *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  ULONG64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r9
  char *v18; // r13
  unsigned int v19; // ebx
  __int64 v20; // r8
  unsigned int v21; // edx
  int EntryType; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  struct DXGGLOBAL *v28; // rax
  _DWORD *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rsi
  DXGSYNCOBJECT *v36; // rsi
  __int64 v37; // rax
  void *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  DXGSYNCOBJECT **v41; // rbx
  DXGSYNCOBJECT *v42; // rsi
  struct DXGGLOBAL *Global; // rax
  DXGRESOURCEREFERENCE *ResourceUnsafe; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // r13
  __int64 v52; // rbx
  _QWORD *v53; // r10
  __int64 v54; // rax
  signed __int32 v55; // eax
  signed __int32 v56; // ett
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  PERESOURCE *v63; // rax
  __int64 v64; // r9
  struct _LIST_ENTRY *v65; // rbx
  NTSTATUS inserted; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r9
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v74; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v5 + 56) = a4;
  *(_QWORD *)(v5 + 104) = a3;
  v8 = (unsigned int)a1;
  *(_QWORD *)(v5 + 120) = a5;
  *(_DWORD *)(v5 + 128) = 2074;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2074);
  *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v9 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = Current;
  if ( !Current )
    goto LABEL_5;
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    v72 = WdLogNewEntry5_WdError(v10);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v72 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    goto LABEL_105;
  }
  v15 = (ULONG64)a2 + 4 * v8;
  if ( v15 < (unsigned __int64)a2 || v15 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove((void *)(v5 + 184), a2, 4 * v8);
  if ( !a3 || (v16 = *(unsigned int *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8), !(_DWORD)v16) )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdError(v10);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_106;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 160), Current);
  v18 = (char *)Current + 216;
  v19 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  v20 = (unsigned int)v16 >> 30;
  *(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v20;
  if ( v19 < *((_DWORD *)Current + 58)
    && (v21 = *(_DWORD *)(*(_QWORD *)v18 + 16LL * v19 + 8), (_DWORD)v20 == ((v21 >> 4) & 3))
    && (v21 & 0x1000) == 0
    && (v21 & 0xF) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((__int64)Current + 216, v19, v20, v17);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 160));
  if ( EntryType == 4 )
  {
    v42 = 0LL;
    *(_QWORD *)v5 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v24, v23, v25, v26);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16), Global);
    if ( (unsigned int)v8 > 1 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v5 + 16));
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)(v5 + 64),
      *(struct DXGPROCESS **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    ResourceUnsafe = DXGPROCESS::GetResourceUnsafe(
                       *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                       (DXGRESOURCEREFERENCE *)(v5 + 112),
                       v16);
    DXGRESOURCEREFERENCE::MoveAssign((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL, ResourceUnsafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(v5 + 112));
    v49 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( (*(_DWORD *)(v49 + 4) & 1) != 0 )
      {
        v51 = *(_QWORD *)(v49 + 56);
        if ( v51 )
        {
          if ( (*(_BYTE *)(v51 + 12) & 8) == 0 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
            v50[3] = *(_QWORD *)(v49 + 56);
            goto LABEL_52;
          }
          if ( (unsigned int)v8 <= 1 )
          {
            v29 = *(_DWORD **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            goto LABEL_84;
          }
          if ( (_DWORD)v8 == 3 )
          {
            v52 = *(unsigned int *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC);
            v46 = (*(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) >> 6) & 0xFFFFFF;
            v48 = *(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) >> 30;
            v29 = *(_DWORD **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            v47 = v29 + 54;
            if ( (unsigned int)v46 < v29[58]
              && (v53 = (_QWORD *)*v47,
                  v45 = *(unsigned int *)(*v47 + 16LL * (unsigned int)v46 + 8),
                  (_DWORD)v48 == ((*(_DWORD *)(*v47 + 16LL * (unsigned int)v46 + 8) >> 4) & 3))
              && (v45 & 0x1000) == 0
              && (v45 & 0xF) != 0
              && (v53[2 * (unsigned int)v46 + 1] & 0xF) == 9 )
            {
              v9 = v53[2 * (unsigned int)v46];
            }
            else
            {
              v9 = 0LL;
            }
            if ( !v9 )
            {
LABEL_69:
              v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
              v50[3] = v52;
              goto LABEL_52;
            }
            if ( (*(_DWORD *)(v9 + 148) & 1) == 0 )
            {
              _InterlockedIncrement(&dword_1C0047174);
              v54 = WdLogNewEntry5_WdError(v46);
              *(_QWORD *)(v54 + 24) = v9;
LABEL_72:
              LODWORD(v13) = -1073741811;
              *(_QWORD *)(v54 + 32) = -1073741811LL;
              WdLogEvent5_WdError(v54);
              goto LABEL_53;
            }
            v52 = *(unsigned int *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            v46 = (*(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) >> 6) & 0xFFFFFF;
            v48 = *(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) >> 30;
            if ( (unsigned int)v46 < v29[58] )
            {
              v47 = (_QWORD *)*v47;
              v45 = LODWORD(v47[2 * (unsigned int)v46 + 1]);
              if ( (_DWORD)v48 == ((LODWORD(v47[2 * (unsigned int)v46 + 1]) >> 4) & 3)
                && (v45 & 0x1000) == 0
                && (v45 & 0xF) != 0 )
              {
                if ( (v47[2 * (unsigned int)v46 + 1] & 0xF) == 8 )
                  v42 = (DXGSYNCOBJECT *)v47[2 * (unsigned int)v46];
                else
                  v42 = 0LL;
              }
            }
            if ( !v42 )
              goto LABEL_69;
            if ( (*((_DWORD *)v42 + 33) & 2) == 0 )
            {
              _InterlockedIncrement(&dword_1C0047174);
              v54 = WdLogNewEntry5_WdError(v46);
              *(_QWORD *)(v54 + 24) = v42;
              goto LABEL_72;
            }
LABEL_84:
            _m_prefetchw((const void *)(v51 + 60));
            v55 = *(_DWORD *)(v51 + 60);
            do
            {
              if ( !v55 )
              {
                v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
                v50[3] = *(unsigned int *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
                v50[5] = 241LL;
                goto LABEL_52;
              }
              v46 = (unsigned int)(v55 + 1);
              v56 = v55;
              v55 = _InterlockedCompareExchange((volatile signed __int32 *)(v51 + 60), v46, v55);
            }
            while ( v56 != v55 );
            if ( v9 && _InterlockedAdd64((volatile signed __int64 *)(v9 + 24), 1uLL) <= 0 )
            {
              v57 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
              *(_QWORD *)(v57 + 24) = 540LL;
              WdLogEvent5_WdAssertion(v57);
            }
            DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 64));
            if ( v42 )
              DXGSYNCOBJECT::AddReference(v42);
            LOBYTE(v58) = 1;
            LODWORD(v13) = ObCreateObject(
                             v58,
                             g_pDxgkSharedAllocationObjectType,
                             *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
            if ( (int)v13 >= 0 )
            {
              v65 = *(struct _LIST_ENTRY **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v51 + 72), v65);
              v65[1].Flink = (struct _LIST_ENTRY *)v51;
              _InterlockedIncrement((volatile signed __int32 *)(v51 + 56));
              v65[1].Blink = (struct _LIST_ENTRY *)v9;
              v65[2].Flink = (struct _LIST_ENTRY *)v42;
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16));
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_99:
              inserted = ObInsertObject(
                           *(PVOID *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                           0LL,
                           *(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                           0,
                           0LL,
                           (PHANDLE)(v5 + 48));
              v13 = inserted;
              if ( inserted >= 0 )
              {
                v38 = (void *)MmUserProbeAddress;
                v71 = *(_QWORD **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
                if ( (unsigned __int64)v71 >= MmUserProbeAddress )
                  v71 = (_QWORD *)MmUserProbeAddress;
                *v71 = *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              }
              else
              {
                v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v67, v14, v69);
                v70[3] = *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                v70[4] = v29;
                v70[5] = v13;
                WdLogEvent5_WdWarning(v70);
              }
LABEL_105:
              if ( (int)v13 >= 0 )
                goto LABEL_108;
              goto LABEL_106;
            }
            DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v51, 0LL, 0);
            if ( v9 )
              DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v9);
            if ( v42 )
            {
              v63 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v60, v59, v61, v62);
              DXGGLOBAL::DestroySyncObject(v63, v42, 0LL, v64);
            }
LABEL_54:
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16));
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL));
            goto LABEL_105;
          }
        }
      }
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
    v50[3] = v16;
LABEL_52:
    LODWORD(v13) = -1073741811;
    v50[4] = -1073741811LL;
    WdLogEvent5_WdWarning(v50);
LABEL_53:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 64));
    goto LABEL_54;
  }
  if ( EntryType == 8 || EntryType == 11 )
  {
    if ( (_DWORD)v8 != 1 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      LODWORD(v13) = -1073741811;
      v27[4] = -1073741811LL;
      goto LABEL_22;
    }
    v28 = DXGGLOBAL::GetGlobal(v24, v23, v25, v26);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88), v28);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v5 + 88));
    v29 = *(_DWORD **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136), (struct DXGPROCESS *)v29);
    if ( EntryType == 11 )
    {
      if ( v19 >= *((_DWORD *)v18 + 4) )
        goto LABEL_33;
      v34 = *(_QWORD *)v18;
      v31 = *(unsigned int *)(*(_QWORD *)v18 + 16LL * v19 + 8);
      if ( *(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) != ((*(_DWORD *)(*(_QWORD *)v18
                                                                                               + 16LL * v19
                                                                                               + 8) >> 4) & 3) )
        goto LABEL_33;
      if ( (v31 & 0x1000) != 0 )
        goto LABEL_33;
      if ( (v31 & 0xF) == 0 )
        goto LABEL_33;
      v31 = 2LL * v19;
      if ( (*(_BYTE *)(v34 + 16LL * v19 + 8) & 0xF) != 0xB )
        goto LABEL_33;
      v35 = *(_QWORD *)(v34 + 16LL * v19);
      if ( !v35 )
        goto LABEL_33;
      v36 = *(DXGSYNCOBJECT **)(v35 + 32);
    }
    else if ( v19 < *((_DWORD *)v18 + 4)
           && (v30 = *(_QWORD *)v18,
               v31 = *(unsigned int *)(*(_QWORD *)v18 + 16LL * v19 + 8),
               *(_DWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) == ((*(_DWORD *)(*(_QWORD *)v18 + 16LL * v19 + 8) >> 4) & 3))
           && (v31 & 0x1000) == 0
           && (v31 & 0xF) != 0
           && (v31 = 2LL * v19, EntryType == (*(_DWORD *)(v30 + 16LL * v19 + 8) & 0xF)) )
    {
      v36 = *(DXGSYNCOBJECT **)(v30 + 16LL * v19);
    }
    else
    {
      v36 = 0LL;
    }
    if ( v36 )
    {
      if ( (*((_DWORD *)v36 + 33) & 2) == 0 )
      {
        _InterlockedIncrement(&dword_1C0047174);
        v39 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v39 + 24) = v36;
        LODWORD(v13) = -1073741811;
        *(_QWORD *)(v39 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v39);
        goto LABEL_34;
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136));
      LOBYTE(v40) = 1;
      LODWORD(v13) = ObCreateObject(
                       v40,
                       g_pDxgkSharedSyncObjectType,
                       *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
      if ( (int)v13 < 0 )
        goto LABEL_35;
      v41 = *(DXGSYNCOBJECT ***)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      DXGSYNCOBJECT::AddReference(v36);
      *v41 = v36;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88));
      goto LABEL_99;
    }
LABEL_33:
    v37 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(_QWORD *)(v37 + 24) = v16;
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
LABEL_34:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136));
LABEL_35:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88));
    goto LABEL_105;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
  v27[4] = EntryType;
  LODWORD(v13) = -1073741811;
  v27[5] = -1073741811LL;
LABEL_22:
  v27[3] = v16;
  WdLogEvent5_WdWarning(v27);
LABEL_106:
  v38 = *(void **)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( v38 )
    NtClose(v38);
LABEL_108:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v38, &EventProfilerExit, v14, 2074);
  return (unsigned int)v13;
}
