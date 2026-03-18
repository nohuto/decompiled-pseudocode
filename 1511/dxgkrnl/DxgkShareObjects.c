/*
 * XREFs of DxgkShareObjects @ 0x1C00621B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00017FC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001EE8 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C000712C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010EB4 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00943C8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkShareObjects(__int64 a1, const void *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  ULONG64 v15; // rcx
  __int64 v16; // r12
  unsigned int v17; // ebx
  unsigned int v18; // edx
  int EntryType; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  struct DXGGLOBAL *v25; // rax
  __int64 *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rax
  DXGSYNCOBJECTLOCK *v35; // rcx
  void *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rsi
  struct DXGGLOBAL *Global; // rax
  DXGRESOURCEREFERENCE *ResourceUnsafe; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // r13
  unsigned int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // r10
  __int64 v54; // rax
  signed __int32 v55; // eax
  signed __int32 v56; // ett
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r9
  DXGGLOBAL *v60; // rax
  struct _LIST_ENTRY *v61; // rbx
  NTSTATUS inserted; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r9
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v70; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v5 + 56) = a4;
  *(_QWORD *)(v5 + 104) = a3;
  v8 = (unsigned int)a1;
  *(_DWORD *)(v5 + 60) = a1;
  *(_QWORD *)(v5 + 120) = a5;
  *(_DWORD *)(v5 + 128) = 2074;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2074);
  *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v9 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = Current;
  if ( !Current )
    goto LABEL_5;
  if ( (unsigned int)(v8 - 1) > 2 )
  {
    v68 = WdLogNewEntry5_WdError(v10);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v68 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    goto LABEL_104;
  }
  v15 = (ULONG64)a2 + 4 * v8;
  if ( v15 < (unsigned __int64)a2 || v15 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove((void *)(v5 + 184), a2, 4 * v8);
  if ( !a3 || (v16 = *(unsigned int *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8), !(_DWORD)v16) )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdError(v10);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_105;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 160), Current);
  v17 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = (unsigned int)v16 >> 30;
  if ( v17 < *((_DWORD *)Current + 58)
    && (v18 = *(_DWORD *)(*((_QWORD *)Current + 27) + 16LL * v17 + 8), (unsigned int)v16 >> 30 == ((v18 >> 4) & 3))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 216, v17);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 160));
  if ( EntryType == 4 )
  {
    v41 = 0LL;
    *(_QWORD *)v5 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16), Global);
    if ( (unsigned int)v8 > 1 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v5 + 16));
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)(v5 + 64),
      *(struct DXGPROCESS **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    ResourceUnsafe = DXGPROCESS::GetResourceUnsafe(
                       *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                       (DXGRESOURCEREFERENCE *)(v5 + 112),
                       v16);
    DXGRESOURCEREFERENCE::Assign(
      (DXGRESOURCEREFERENCE *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL),
      ResourceUnsafe);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)(v5 + 112));
    v48 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( (*(_DWORD *)(v48 + 4) & 1) != 0 )
      {
        v50 = *(_QWORD *)(v48 + 56);
        if ( v50 )
        {
          if ( (*(_BYTE *)(v50 + 12) & 8) == 0 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
            v49[3] = *(_QWORD *)(v48 + 56);
            goto LABEL_52;
          }
          v51 = *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
          if ( v51 <= 1 )
            goto LABEL_83;
          if ( v51 == 3 )
          {
            v52 = *(unsigned int *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC);
            v45 = (*(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) >> 6) & 0xFFFFFF;
            v47 = *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) >> 30;
            v46 = *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            if ( (unsigned int)v45 < *(_DWORD *)(v46 + 232)
              && (v53 = *(_QWORD *)(v46 + 216),
                  v44 = *(unsigned int *)(v53 + 16LL * (unsigned int)v45 + 8),
                  (_DWORD)v47 == ((*(_DWORD *)(v53 + 16LL * (unsigned int)v45 + 8) >> 4) & 3))
              && (v44 & 0x1000) == 0
              && (v44 & 0xF) != 0
              && (*(_BYTE *)(v53 + 16LL * (unsigned int)v45 + 8) & 0xF) == 9 )
            {
              v9 = *(_QWORD *)(v53 + 16LL * (unsigned int)v45);
            }
            else
            {
              v9 = 0LL;
            }
            if ( !v9 )
            {
LABEL_69:
              v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
              v49[3] = v52;
              goto LABEL_52;
            }
            if ( (*(_DWORD *)(v9 + 172) & 1) == 0 )
            {
              _InterlockedAdd(&dword_1C00471F4, 1u);
              v54 = WdLogNewEntry5_WdError(v45);
              *(_QWORD *)(v54 + 24) = v9;
LABEL_72:
              LODWORD(v13) = -1073741811;
              *(_QWORD *)(v54 + 32) = -1073741811LL;
              WdLogEvent5_WdError(v54);
              goto LABEL_53;
            }
            v52 = *(unsigned int *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            v45 = (*(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) >> 6) & 0xFFFFFF;
            v47 = *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) >> 30;
            if ( (unsigned int)v45 < *(_DWORD *)(v46 + 232) )
            {
              v46 = *(_QWORD *)(v46 + 216);
              v44 = *(unsigned int *)(v46 + 16LL * (unsigned int)v45 + 8);
              if ( (_DWORD)v47 == ((*(_DWORD *)(v46 + 16LL * (unsigned int)v45 + 8) >> 4) & 3)
                && (v44 & 0x1000) == 0
                && (v44 & 0xF) != 0 )
              {
                if ( (*(_BYTE *)(v46 + 16LL * (unsigned int)v45 + 8) & 0xF) == 8 )
                  v41 = *(_QWORD *)(v46 + 16LL * (unsigned int)v45);
                else
                  v41 = 0LL;
              }
            }
            if ( !v41 )
              goto LABEL_69;
            if ( (*(_DWORD *)(v41 + 156) & 2) == 0 )
            {
              _InterlockedAdd(&dword_1C00471F4, 1u);
              v54 = WdLogNewEntry5_WdError(v45);
              *(_QWORD *)(v54 + 24) = v41;
              goto LABEL_72;
            }
LABEL_83:
            _m_prefetchw((const void *)(v50 + 60));
            v55 = *(_DWORD *)(v50 + 60);
            do
            {
              if ( !v55 )
              {
                v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
                v49[3] = *(unsigned int *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
                v49[5] = 241LL;
                goto LABEL_52;
              }
              v45 = (unsigned int)(v55 + 1);
              v56 = v55;
              v55 = _InterlockedCompareExchange((volatile signed __int32 *)(v50 + 60), v45, v55);
            }
            while ( v56 != v55 );
            if ( v9 && _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 0 )
            {
              v57 = WdLogNewEntry5_WdAssertion(v45);
              *(_QWORD *)(v57 + 24) = 499LL;
              WdLogEvent5_WdAssertion(v57);
            }
            DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 64));
            if ( v41 )
              _InterlockedAdd((volatile signed __int32 *)(v41 + 24), 1u);
            LOBYTE(v59) = 1;
            LOBYTE(v58) = 1;
            LODWORD(v13) = ObCreateObject(
                             v58,
                             g_pDxgkSharedAllocationObjectType,
                             *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                             v59,
                             0LL,
                             40,
                             0,
                             0,
                             v5 + 8);
            if ( (int)v13 >= 0 )
            {
              v61 = *(struct _LIST_ENTRY **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v50 + 72), v61);
              v61[1].Flink = (struct _LIST_ENTRY *)v50;
              _InterlockedAdd((volatile signed __int32 *)(v50 + 56), 1u);
              v61[1].Blink = (struct _LIST_ENTRY *)v9;
              v61[2].Flink = (struct _LIST_ENTRY *)v41;
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16));
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL));
              v26 = *(__int64 **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
LABEL_98:
              inserted = ObInsertObject(
                           *(PVOID *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                           0LL,
                           *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                           0,
                           0LL,
                           (PHANDLE)(v5 + 48));
              v13 = inserted;
              if ( inserted >= 0 )
              {
                v36 = (void *)MmUserProbeAddress;
                v67 = *(_QWORD **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
                if ( (unsigned __int64)v67 >= MmUserProbeAddress )
                  v67 = (_QWORD *)MmUserProbeAddress;
                *v67 = *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              }
              else
              {
                v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v63, v14, v65);
                v66[3] = *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                v66[4] = v26;
                v66[5] = v13;
                WdLogEvent5_WdWarning(v66);
              }
LABEL_104:
              if ( (int)v13 >= 0 )
                goto LABEL_107;
              goto LABEL_105;
            }
            DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v50, 0LL, 0);
            if ( v9 )
              DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v9);
            if ( v41 )
            {
              v60 = DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(v60, (struct DXGSYNCOBJECT *)v41, 0);
            }
LABEL_54:
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 16));
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL));
            goto LABEL_104;
          }
        }
      }
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
    v49[3] = v16;
LABEL_52:
    LODWORD(v13) = -1073741811;
    v49[4] = -1073741811LL;
    WdLogEvent5_WdWarning(v49);
LABEL_53:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 64));
    goto LABEL_54;
  }
  if ( EntryType == 8 || EntryType == 11 )
  {
    if ( (_DWORD)v8 != 1 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      LODWORD(v13) = -1073741811;
      v24[4] = -1073741811LL;
      goto LABEL_22;
    }
    v25 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v5 + 88), v25);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v5 + 88));
    v26 = *(__int64 **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136), (struct DXGPROCESS *)v26);
    v30 = v26 + 27;
    if ( EntryType == 11 )
    {
      if ( v17 >= *((_DWORD *)v26 + 58) )
        goto LABEL_33;
      v31 = *v30;
      v28 = *(unsigned int *)(*v30 + 16LL * v17 + 8);
      if ( *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) != ((*(_DWORD *)(*v30 + 16LL * v17 + 8) >> 4) & 3) )
        goto LABEL_33;
      if ( (v28 & 0x1000) != 0 )
        goto LABEL_33;
      if ( (v28 & 0xF) == 0 )
        goto LABEL_33;
      v28 = 2LL * v17;
      if ( (*(_BYTE *)(v31 + 16LL * v17 + 8) & 0xF) != 0xB )
        goto LABEL_33;
      v32 = *(_QWORD *)(v31 + 16LL * v17);
      if ( !v32 )
        goto LABEL_33;
      v33 = *(_QWORD *)(v32 + 32);
    }
    else if ( v17 < *((_DWORD *)v26 + 58)
           && (v27 = *v30,
               v28 = *(unsigned int *)(*v30 + 16LL * v17 + 8),
               *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) == ((*(_DWORD *)(*v30 + 16LL * v17 + 8) >> 4) & 3))
           && (v28 & 0x1000) == 0
           && (v28 & 0xF) != 0
           && (v28 = 2LL * v17, EntryType == (*(_DWORD *)(v27 + 16LL * v17 + 8) & 0xF)) )
    {
      v33 = *(_QWORD *)(v27 + 16LL * v17);
    }
    else
    {
      v33 = 0LL;
    }
    if ( v33 )
    {
      if ( (*(_DWORD *)(v33 + 156) & 2) == 0 )
      {
        _InterlockedAdd(&dword_1C00471F4, 1u);
        v37 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v37 + 24) = v33;
        LODWORD(v13) = -1073741811;
        *(_QWORD *)(v37 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v37);
        goto LABEL_34;
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136));
      LOBYTE(v38) = 1;
      LOBYTE(v39) = 1;
      LODWORD(v13) = ObCreateObject(
                       v39,
                       g_pDxgkSharedSyncObjectType,
                       *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                       v38,
                       0LL,
                       8,
                       0,
                       0,
                       v5 + 8);
      v35 = (DXGSYNCOBJECTLOCK *)(v5 + 88);
      if ( (int)v13 < 0 )
        goto LABEL_35;
      v40 = *(_QWORD **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      _InterlockedAdd((volatile signed __int32 *)(v33 + 24), 1u);
      *v40 = v33;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v35);
      goto LABEL_98;
    }
LABEL_33:
    v34 = WdLogNewEntry5_WdWarning(v28, v27, v30, v29);
    *(_QWORD *)(v34 + 24) = v16;
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
LABEL_34:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v5 + 136));
    v35 = (DXGSYNCOBJECTLOCK *)(v5 + 88);
LABEL_35:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v35);
    goto LABEL_104;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
  v24[4] = EntryType;
  LODWORD(v13) = -1073741811;
  v24[5] = -1073741811LL;
LABEL_22:
  v24[3] = v16;
  WdLogEvent5_WdWarning(v24);
LABEL_105:
  v36 = *(void **)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( v36 )
    NtClose(v36);
LABEL_107:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v36, &EventProfilerExit, v14, 2074);
  return (unsigned int)v13;
}
