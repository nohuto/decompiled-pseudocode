/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGRESOURCE@@PEAE@Z @ 0x1C0073410
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00017FC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0001A4C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C000C310 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00629BC (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0068868 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00BCC80 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCE **a7,
        unsigned __int8 *a8)
{
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 *v14; // r13
  struct _EX_RUNDOWN_REF *v15; // rbx
  D3DKMT_HANDLE hResource; // esi
  __int64 v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // edx
  struct DXGRESOURCE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // edi
  _QWORD *v28; // rax
  ULONG_PTR Count; // r8
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // r14d
  SIZE_T v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  PVOID v41; // r15
  _QWORD *v42; // rax
  ULONG_PTR v43; // rax
  UINT v44; // esi
  _DWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 *v51; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v53; // r14d
  DXGRESOURCE *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  DXGRESOURCE *v59; // rsi
  DXGRESOURCE *PoolWithQuotaTag; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  struct _DXGSHAREDALLOCOBJECT *v68; // r15
  _QWORD *v69; // rax
  __int64 v70; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  _QWORD *v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  _QWORD *v85; // rax
  __int64 v86; // r8
  __int64 v87; // r15
  __int64 NumAllocations; // r9
  _QWORD *v89; // rdx
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  bool v94; // bl
  __int64 v95; // r8
  __int64 v96; // r9
  struct _EPROCESS *v97; // rdx
  __int64 v98; // rcx
  __int64 *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  unsigned __int64 v104; // r12
  unsigned int v105; // r15d
  char *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 *v111; // rcx
  __int64 v112; // rax
  __int64 **v113; // rdx
  SIZE_T v114; // rax
  PVOID v115; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  _QWORD *v119; // rax
  char *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  char *v125; // r15
  __int64 *v126; // rdi
  char *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  _QWORD *v132; // rax
  void *v133; // r15
  __int64 *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  struct DXGRESOURCE **v137; // rax
  __int64 v138; // rax
  struct DXGGLOBAL *v139; // rax
  __int64 v140; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v142; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  struct _KTHREAD *v147; // rbx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  int v151; // esi
  __int64 v152; // r8
  __int64 v153; // rax
  __int64 v154; // rbx
  _QWORD *v155; // rax
  _BYTE v157[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v158[72]; // [rsp+30h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v159; // [rsp+80h] [rbp+8h] BYREF
  struct DXGRESOURCE *v160; // [rsp+88h] [rbp+10h] BYREF

  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 128)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 1785LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a8;
  v15 = 0LL;
  v159 = 0LL;
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_159;
    v53 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v54 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x58uLL);
      v59 = v54;
      if ( !v54 )
        goto LABEL_158;
      DXGRESOURCE::DXGRESOURCE(v54, this);
      *((_DWORD *)v59 + 1) |= 4u;
      *((_QWORD *)v59 + 10) = 0LL;
    }
    else
    {
      PoolWithQuotaTag = (DXGRESOURCE *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x50uLL, 0x4B677844u);
      if ( !PoolWithQuotaTag )
        goto LABEL_158;
      v59 = DXGRESOURCE::DXGRESOURCE(PoolWithQuotaTag, this);
    }
    if ( v59 )
    {
      DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), v59);
      if ( !*((_DWORD *)v59 + 4) )
      {
LABEL_55:
        v64 = WdLogNewEntry5_WdWarning(v12, v61, v62, v63);
        *(_QWORD *)(v64 + 24) = this;
        *(_QWORD *)(v64 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v64);
        v53 = -1073741801;
LABEL_152:
        ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v12, v59, 0LL);
        DXGRESOURCE::`scalar deleting destructor'(v59);
        v27 = v53;
        goto LABEL_160;
      }
      *((_QWORD *)v59 + 6) = a2->hPrivateRuntimeResourceHandle;
      if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
      {
LABEL_157:
        v137 = a7;
        v27 = v53;
        *v14 = 1;
        *v137 = v59;
        goto LABEL_160;
      }
      *((_DWORD *)v59 + 1) |= 1u;
      if ( a4 )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v157);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v157);
        if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
        {
          v68 = a6;
          if ( !a6 )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v65, v66, v67);
            v69[3] = this;
            v69[4] = -1073741811LL;
LABEL_67:
            WdLogEvent5_WdWarning(v69);
            v53 = -1073741811;
LABEL_68:
            v73 = *((_QWORD *)v59 + 7);
            if ( !v73 )
              goto LABEL_95;
            *(_DWORD *)(v73 + 12) |= 0x100u;
            v74 = *((_QWORD *)v59 + 7);
            if ( *(_DWORD *)(v74 + 116) == a2->NumAllocations )
            {
              if ( *(_DWORD *)(v74 + 112) == a2->PrivateDriverDataSize )
              {
                v77 = *((_QWORD *)v59 + 7);
                if ( *(_DWORD *)(v77 + 64) != (unsigned int)PsGetCurrentProcessSessionId()
                  && (*(_DWORD *)(v77 + 12) & 8) == 0 )
                {
                  v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v78, v79, v80);
                  v81[3] = this;
                  v81[4] = *((_QWORD *)v59 + 7);
                  v81[5] = *(unsigned int *)(*((_QWORD *)v59 + 7) + 64LL);
                  v81[6] = (unsigned int)PsGetCurrentProcessSessionId();
                  v81[7] = -1073741811LL;
                  WdLogEvent5_WdWarning(v81);
                  goto LABEL_94;
                }
                if ( *(_QWORD *)(v77 + 72) == *((_QWORD *)this + 2) )
                {
                  if ( *(_QWORD *)(v77 + 80) == *((_QWORD *)this + 354) )
                  {
                    if ( (*(_DWORD *)(v77 + 12) & 1) != 0
                      && (!(unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
                       || (unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))) )
                    {
                      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v82, v83, v84);
                      v85[3] = this;
                      v85[4] = *((_QWORD *)v59 + 7);
                      v85[5] = -1073741811LL;
                      WdLogEvent5_WdWarning(v85);
                    }
                    else
                    {
                      v86 = *((_QWORD *)v59 + 7);
                      v87 = 0LL;
                      NumAllocations = a2->NumAllocations;
                      v89 = *(_QWORD **)(v86 + 120);
                      if ( (_DWORD)NumAllocations )
                      {
                        while ( 1 )
                        {
                          v12 = 96 * v87;
                          if ( *((_DWORD *)v89 - 2) != a3[v87].PrivateDriverDataSize )
                            break;
                          v89 = (_QWORD *)*v89;
                          v87 = (unsigned int)(v87 + 1);
                          if ( (unsigned int)v87 >= (unsigned int)NumAllocations )
                            goto LABEL_89;
                        }
                        v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v89, v86, NumAllocations);
                        v93[3] = this;
                        v93[4] = *((_QWORD *)v59 + 7);
                        v93[5] = (unsigned int)v87;
                        v93[6] = a3[v87].PrivateDriverDataSize;
                        v93[7] = -1073741811LL;
                        WdLogEvent5_WdWarning(v93);
                      }
                      else
                      {
LABEL_89:
                        if ( v53 < 0 )
                          goto LABEL_95;
                        _m_prefetchw((const void *)(v86 + 60));
                        v90 = *(_DWORD *)(v86 + 60);
                        if ( v90 )
                        {
                          while ( 1 )
                          {
                            v12 = (unsigned int)(v90 + 1);
                            v91 = v90;
                            v90 = _InterlockedCompareExchange((volatile signed __int32 *)(v86 + 60), v12, v90);
                            if ( v91 == v90 )
                              break;
                            if ( !v90 )
                              goto LABEL_93;
                          }
                          v12 = *(_QWORD *)(*((_QWORD *)v59 + 7) + 136LL);
                          if ( v12 )
                          {
                            if ( *(DXGDEVICE **)(v12 + 96) == this )
                              ++*(_DWORD *)(v12 + 88);
                            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157);
                            v94 = (*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 216LL))() != 0;
                            DXGAUTOMUTEX::DXGAUTOMUTEX(
                              (DXGAUTOMUTEX *)v158,
                              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v59 + 7) + 136LL) + 8LL));
                            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v158);
                            v97 = a5;
                            if ( !a5 )
                              v97 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 56LL);
                            v98 = *(_QWORD *)(*((_QWORD *)v59 + 7) + 136LL);
                            v99 = *(__int64 **)(v98 + 72);
                            v12 = v98 + 72;
                            if ( v99 == (__int64 *)v12 )
                            {
LABEL_109:
                              v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v97, v95, v96);
                              v100[3] = this;
                              v100[4] = *((_QWORD *)v59 + 7);
                              v100[5] = -1073741811LL;
                              WdLogEvent5_WdWarning(v100);
                              v53 = -1073741811;
                            }
                            else
                            {
                              while ( (!v94 || !*((_BYTE *)v99 + 16))
                                   && (*((_BYTE *)v99 + 16) || v97 != (struct _EPROCESS *)v99[3]) )
                              {
                                v99 = (__int64 *)*v99;
                                if ( v99 == (__int64 *)v12 )
                                  goto LABEL_109;
                              }
                            }
                            if ( v158[8] )
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v158);
                          }
                          if ( v53 >= 0 )
                          {
                            v12 = *((_QWORD *)v59 + 7);
                            v101 = *(_QWORD *)(v12 + 120);
                            if ( (*(_DWORD *)(v101 - 44) & 2) != 0 )
                            {
                              if ( *(_DWORD *)(v12 + 116) != 1 )
                              {
                                v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                                if ( *(_DWORD *)(v12 + 232) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v12) )
                                {
                                  v102 = WdLogNewEntry5_WdAssertion(v12);
                                  *(_QWORD *)(v102 + 24) = 2260LL;
                                  WdLogEvent5_WdAssertion(v102);
                                }
                              }
                              *((_QWORD *)this + ((*(_DWORD *)(v101 - 44) >> 6) & 0xF) + 51) = v59;
                            }
                          }
                          v15 = v159;
                          goto LABEL_95;
                        }
LABEL_93:
                        *((_QWORD *)v59 + 7) = 0LL;
                        v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v89, v86, NumAllocations);
                        v92[3] = this;
                        v92[4] = *((_QWORD *)v59 + 7);
                        v92[5] = -1073741811LL;
                        WdLogEvent5_WdWarning(v92);
                        v15 = v159;
                      }
                    }
LABEL_94:
                    v53 = -1073741811;
LABEL_95:
                    if ( v157[8] )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157);
LABEL_151:
                    if ( v53 < 0 )
                      goto LABEL_152;
                    goto LABEL_157;
                  }
                  v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v78, v79, v80);
                  v75[3] = this;
                  v75[4] = *((_QWORD *)v59 + 7);
                  v75[5] = *(_QWORD *)(*((_QWORD *)v59 + 7) + 80LL);
LABEL_72:
                  v75[6] = -1073741811LL;
                  WdLogEvent5_WdWarning(v75);
                  goto LABEL_94;
                }
                v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v78, v79, v80);
                v75[3] = this;
                v75[4] = *((_QWORD *)v59 + 7);
                PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v59 + 7) + 72LL) + 16LL);
              }
              else
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v65, v66, v67);
                v75[3] = this;
                v75[4] = *((_QWORD *)v59 + 7);
                PrivateDriverDataSize = a2->PrivateDriverDataSize;
              }
            }
            else
            {
              v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v65, v66, v67);
              v75[3] = this;
              v75[4] = *((_QWORD *)v59 + 7);
              PrivateDriverDataSize = a2->NumAllocations;
            }
            v75[5] = PrivateDriverDataSize;
            goto LABEL_72;
          }
          v70 = *((_QWORD *)a6 + 2);
          *((_QWORD *)v59 + 7) = v70;
          if ( v70 )
            goto LABEL_68;
          v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v65, v66, v67);
          v69[3] = this;
          v69[4] = v68;
        }
        else
        {
          Global = DXGGLOBAL::GetGlobal();
          ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
          *((_QWORD *)v59 + 7) = ObjectA;
          if ( ObjectA )
            goto LABEL_68;
          v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v65, v66, v67);
          v69[3] = this;
          v69[4] = a2->hGlobalShare;
        }
        v69[5] = -1073741811LL;
        goto LABEL_67;
      }
      SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                         *((DXGADAPTER ***)this + 2),
                         *((struct DXGADAPTER **)this + 354),
                         (*(_DWORD *)&a2->Flags & 0x800) != 0);
      *((_QWORD *)v59 + 7) = SharedResource;
      if ( !SharedResource )
        goto LABEL_55;
      v104 = a2->NumAllocations;
      v105 = 0;
      if ( (_DWORD)v104 )
      {
        while ( 1 )
        {
          v106 = (char *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
          if ( !v106 )
            break;
          v111 = (__int64 *)(v106 + 48);
          *((_DWORD *)v106 + 1) = 0;
          *((_QWORD *)v106 + 1) = 0LL;
          *((_QWORD *)v106 + 2) = 0LL;
          *((_QWORD *)v106 + 4) = 0LL;
          *((_DWORD *)v106 + 10) = 0;
          *((_QWORD *)v106 + 7) = 0LL;
          *((_QWORD *)v106 + 6) = 0LL;
          v112 = *((_QWORD *)v59 + 7) + 120LL;
          v113 = *(__int64 ***)(*((_QWORD *)v59 + 7) + 128LL);
          *v111 = v112;
          v111[1] = (__int64)v113;
          if ( *v113 != (__int64 *)v112 )
            __fastfail(3u);
          ++v105;
          *v113 = v111;
          *(_QWORD *)(v112 + 8) = v111;
          if ( v105 >= (unsigned int)v104 )
            goto LABEL_125;
        }
        v132 = (_QWORD *)WdLogNewEntry5_WdWarning(v108, v107, v109, v110);
        v132[3] = this;
        v132[4] = a2->NumAllocations;
        v132[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v132);
        v53 = -1073741801;
      }
      else
      {
LABEL_125:
        *(_DWORD *)(*((_QWORD *)v59 + 7) + 116LL) = v104;
        *((_DWORD *)v59 + 1) |= 2u;
      }
      v12 = *((_QWORD *)v59 + 7);
      *(_DWORD *)(v12 + 12) ^= (*(_DWORD *)(v12 + 12) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
      if ( v53 >= 0 && (unsigned int)v104 > 1 )
      {
        v114 = 8 * v104;
        if ( !is_mul_ok(v104, 8uLL) )
          v114 = -1LL;
        v115 = operator new[](v114, 0x4B677844u, PagedPool);
        v12 = *((_QWORD *)v59 + 7);
        *(_QWORD *)(v12 + 152) = v115;
        if ( !*(_QWORD *)(*((_QWORD *)v59 + 7) + 152LL) )
        {
          v119 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v116, v117, v118);
          v119[3] = this;
          v119[4] = v104;
          v119[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v119);
          v53 = -1073741801;
        }
      }
      if ( (*(_DWORD *)&a2->Flags & 4) == 0
        && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
        && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
      {
        *(_DWORD *)(*((_QWORD *)v59 + 7) + 12LL) |= 1u;
      }
      if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
        goto LABEL_149;
      if ( v53 >= 0 )
      {
        v120 = (char *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
        v125 = v120;
        if ( v120 )
        {
          DXGFASTMUTEX::DXGFASTMUTEX((__int64)(v120 + 8), 36, 32);
          *((_DWORD *)v125 + 22) = 1;
          v126 = (__int64 *)(v125 + 72);
          *((_QWORD *)v125 + 12) = this;
          *((_QWORD *)v125 + 10) = v125 + 72;
          *((_QWORD *)v125 + 9) = v125 + 72;
          *(_QWORD *)(*((_QWORD *)v59 + 7) + 136LL) = v125;
          if ( (*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 216LL))() )
          {
            v127 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
            if ( v127 )
            {
              v127[24] = 1;
              *((_QWORD *)v127 + 4) = 0LL;
LABEL_146:
              v12 = *v126;
              v134 = (__int64 *)(v127 + 8);
              *v134 = *v126;
              v134[1] = (__int64)v126;
              if ( *(__int64 **)(v12 + 8) != v126 )
                __fastfail(3u);
              *(_QWORD *)(v12 + 8) = v134;
              *v126 = (__int64)v134;
LABEL_149:
              if ( v53 >= 0 )
                goto LABEL_157;
              goto LABEL_150;
            }
          }
          else
          {
            v133 = *(void **)(*((_QWORD *)this + 5) + 56LL);
            ObfReferenceObject(v133);
            v127 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
            if ( v127 )
            {
              v127[24] = 0;
              *((_QWORD *)v127 + 4) = v133;
              goto LABEL_146;
            }
            if ( v133 )
              ObfDereferenceObject(v133);
          }
          v135 = WdLogNewEntry5_WdLowResource(v129, v128, v130, v131);
          *(_QWORD *)(v135 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v135);
          v53 = -1073741801;
        }
        else
        {
          v136 = WdLogNewEntry5_WdLowResource(v122, v121, v123, v124);
          *(_QWORD *)(v136 + 24) = this;
          *(_QWORD *)(v136 + 32) = -1073741801LL;
          WdLogEvent5_WdLowResource(v136);
          v53 = -1073741801;
        }
      }
LABEL_150:
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v59 + 7), 0LL, 0);
      *((_QWORD *)v59 + 7) = 0LL;
      goto LABEL_151;
    }
LABEL_158:
    v138 = WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
    *(_QWORD *)(v138 + 24) = this;
    *(_QWORD *)(v138 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v138);
    v27 = -1073741801;
    goto LABEL_160;
  }
  v17 = *((_QWORD *)this + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 192));
  v18 = (hResource >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v17 + 232)
    && (v19 = *(_QWORD *)(v17 + 216),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        ((hResource >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 4 )
  {
    v21 = *(struct DXGRESOURCE **)(v19 + 16LL * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v160, v21);
  ExReleasePushLockSharedEx(v17 + 192, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::Assign(&v159, &v160);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v160);
  v15 = v159;
  if ( !v159 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v22, v23, v24);
    v25[3] = this;
    v26 = a2->hResource;
    v27 = -1073741816;
    v25[4] = v26;
    v25[5] = -1073741816LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_160;
  }
  if ( (DXGDEVICE *)v159[1].Count != this )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v22, v23, v24);
    v28[3] = this;
    v28[4] = a2->hResource;
    v28[5] = v15[1].Count;
LABEL_30:
    v28[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    v27 = -1073741811;
    goto LABEL_160;
  }
  if ( (HIDWORD(v159->Ptr) & 1) == 0 )
    goto LABEL_159;
  Count = v159[7].Count;
  if ( !Count )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v22, 0LL, v24);
    v30[3] = this;
    v30[4] = v15;
    v30[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    v27 = -1073741811;
    goto LABEL_160;
  }
  if ( *(_DWORD *)(Count + 112) != a2->PrivateDriverDataSize )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v22, Count, v24);
    v28[3] = this;
    v28[4] = v15[7].Count;
    v28[5] = a2->PrivateDriverDataSize;
    goto LABEL_30;
  }
  v31 = a2->NumAllocations;
  v32 = 0LL;
  if ( !(_DWORD)v31 )
  {
LABEL_25:
    if ( (*(_DWORD *)(Count + 12) & 0x100) != 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v31, Count, v24);
      v33[3] = this;
      v33[4] = v15[7].Count;
      v33[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
      v27 = -1073741811;
      goto LABEL_160;
    }
    v35 = v31 + *(_DWORD *)(Count + 116);
    if ( v35 > 0x100 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v31, Count, v24);
      v28[3] = this;
      v28[4] = v15[7].Count;
      v28[5] = 256LL;
      goto LABEL_30;
    }
    *(_DWORD *)&a2->Flags |= 2u;
    if ( v35 > 1 )
    {
      v36 = 8LL * v35;
      if ( !is_mul_ok(v35, 8uLL) )
        v36 = -1LL;
      v41 = operator new[](v36, 0x4B677844u, PagedPool);
      if ( !v41 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
        v42[3] = this;
        v42[4] = v35;
LABEL_46:
        v42[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v42);
        v27 = -1073741801;
        goto LABEL_160;
      }
      v43 = v15[7].Count;
      v12 = *(_QWORD *)(v43 + 152);
      if ( v12 != v43 + 144 )
        operator delete((void *)v12);
      *(_QWORD *)(v15[7].Count + 152) = v41;
    }
    v44 = 0;
    if ( a2->NumAllocations )
    {
      while ( 1 )
      {
        v45 = operator new[](0x40uLL, 0x4B677844u, PagedPool);
        if ( !v45 )
          break;
        v45[1] = 0;
        v12 = (__int64)(v45 + 12);
        *((_QWORD *)v45 + 1) = 0LL;
        *((_QWORD *)v45 + 2) = 0LL;
        *((_QWORD *)v45 + 4) = 0LL;
        v45[10] = 0;
        *((_QWORD *)v45 + 7) = 0LL;
        *((_QWORD *)v45 + 6) = 0LL;
        v50 = v15[7].Count + 120;
        v51 = *(__int64 **)(v15[7].Count + 128);
        *(_QWORD *)v12 = v50;
        *(_QWORD *)(v12 + 8) = v51;
        if ( *v51 != v50 )
          __fastfail(3u);
        *v51 = v12;
        ++v44;
        *(_QWORD *)(v50 + 8) = v12;
        if ( v44 >= a2->NumAllocations )
          goto LABEL_43;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
      v42[3] = this;
      v42[4] = a2->NumAllocations;
      goto LABEL_46;
    }
LABEL_43:
    *(_DWORD *)(v15[7].Count + 116) = v35;
LABEL_159:
    v27 = 0;
    *a7 = (struct DXGRESOURCE *)v15;
    goto LABEL_160;
  }
  v24 = *(unsigned int *)(*(_QWORD *)(Count + 120) - 8LL);
  while ( 1 )
  {
    v12 = 96 * v32;
    if ( (_DWORD)v24 != a3[v32].PrivateDriverDataSize )
      break;
    v32 = (unsigned int)(v32 + 1);
    if ( (unsigned int)v32 >= (unsigned int)v31 )
      goto LABEL_25;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v31, Count, v24);
  v34[3] = this;
  v34[4] = v15[7].Count;
  v34[5] = (unsigned int)v32;
  v34[6] = a3[v32].PrivateDriverDataSize;
  v34[7] = -1073741811LL;
  WdLogEvent5_WdWarning(v34);
  v27 = -1073741811;
LABEL_160:
  if ( v15 )
    ExReleaseRundownProtection(v15 + 9);
  v139 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v140 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v140 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v140);
    v139 = DXGGLOBAL::m_pGlobal;
  }
  if ( *((_DWORD *)v139 + 231) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v142 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v142 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v142);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v146 = *ThreadWin32Thread;
          if ( v146 )
          {
            if ( *(_QWORD *)(v146 + 80) )
            {
              v147 = KeGetCurrentThread();
              if ( !v147 )
              {
                v148 = WdLogNewEntry5_WdAssertion(v145);
                *(_QWORD *)(v148 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v148);
              }
              v151 = PsGetCurrentProcessSessionId();
              if ( v151
                && (unsigned int)PsGetThreadSessionId(v147) == v151
                && (v153 = PsGetThreadWin32Thread(v147)) != 0
                && *(_QWORD *)v153 )
              {
                v154 = *(_QWORD *)(*(_QWORD *)v153 + 80LL);
              }
              else
              {
                v154 = 0LL;
              }
              if ( *(_DWORD *)(v154 + 136) )
              {
                v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v150, v149, v152);
                v155[3] = 275LL;
                v155[4] = 25LL;
                v155[5] = *(int *)(v154 + 136);
                v155[6] = 0LL;
                v155[7] = 0LL;
                WdLogEvent5_WdCriticalError(v155);
              }
            }
          }
        }
      }
    }
  }
  return v27;
}
