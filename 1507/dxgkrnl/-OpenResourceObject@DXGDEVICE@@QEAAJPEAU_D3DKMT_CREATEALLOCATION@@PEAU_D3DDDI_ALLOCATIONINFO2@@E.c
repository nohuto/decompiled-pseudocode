/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C012D0CC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0002D38 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00053F8 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0005838 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C001C498 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00904D0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0091FB0 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0094874 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _DXGDEVICE::OpenResourceObject_::_8_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C012C8D4 (_DXGDEVICE--OpenResourceObject_--_8_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct _EX_RUNDOWN_REF **a7,
        unsigned __int8 *a8,
        struct DXGAUTOMUTEX *a9,
        struct DXGAUTOPUSHLOCK *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  D3DKMT_HANDLE hResource; // ebx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // edx
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _EX_RUNDOWN_REF *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rax
  ULONG_PTR Count; // rcx
  ULONG_PTR v34; // rax
  ULONG_PTR v35; // rcx
  struct DXGAUTOPUSHLOCK *v36; // rdi
  DXGPUSHLOCK *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rdi
  ULONG_PTR v42; // rcx
  unsigned int v43; // edi
  SIZE_T v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  PVOID v49; // r12
  ULONG_PTR v50; // rax
  void *v51; // rcx
  UINT v52; // esi
  char *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 **v60; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v63; // r12d
  DXGRESOURCE *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  DXGRESOURCE *v69; // rsi
  DXGRESOURCE *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  struct _DXGSHAREDALLOCOBJECT *v81; // rbx
  _QWORD *v82; // rax
  __int64 v83; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  _QWORD *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rcx
  struct _EPROCESS *v100; // rdx
  __int64 NumAllocations; // r8
  __int64 v102; // rbx
  _QWORD *v103; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v104; // r15
  _QWORD *v105; // rax
  signed __int32 v106; // eax
  signed __int32 v107; // ett
  __int64 v108; // rcx
  bool v109; // bl
  __int64 *i; // rax
  _QWORD *v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v115; // rdx
  char *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r9
  __int64 *v120; // rcx
  __int64 v121; // rax
  __int64 **v122; // rdx
  SIZE_T v123; // rax
  PVOID v124; // rax
  __int64 v125; // r9
  __int64 v126; // rcx
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  char *v129; // rcx
  _QWORD *v130; // rdi
  _QWORD *v131; // rax
  __int64 v132; // rax
  void *v133; // r15
  _QWORD *v134; // rax
  __int64 v135; // rcx
  __int64 *v136; // rdi
  __int64 *v137; // rax
  __int64 v138; // rcx
  struct _EX_RUNDOWN_REF *v139; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v140[16]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v141; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v142[24]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v143; // [rsp+A0h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v144; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v145; // [rsp+B0h] [rbp+50h]

  v145 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 1817LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v139, 0LL);
  v141 = 0LL;
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_54;
    v63 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v64 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
      v69 = v64;
      if ( v64 )
      {
        DXGRESOURCE::DXGRESOURCE(v64, this);
        *((_QWORD *)v69 + 15) = 0LL;
        *((_DWORD *)v69 + 1) |= 4u;
        goto LABEL_67;
      }
    }
    else
    {
      v70 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v70 )
      {
        v69 = DXGRESOURCE::DXGRESOURCE(v70, this);
        goto LABEL_67;
      }
    }
    v69 = 0LL;
LABEL_67:
    if ( !v69 )
    {
      v71 = WdLogNewEntry5_WdWarning(v66, v65, v67, v68);
      *(_QWORD *)(v71 + 24) = this;
      *(_QWORD *)(v71 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v71);
      v63 = -1073741801;
LABEL_185:
      LODWORD(v31) = v63;
      goto LABEL_55;
    }
    DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), v69);
    if ( !*((_DWORD *)v69 + 4) )
      goto LABEL_70;
    *((_QWORD *)v69 + 6) = a2->hPrivateRuntimeResourceHandle;
    if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
    {
LABEL_184:
      *a8 = 1;
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v144, v69);
      DXGRESOURCEREFERENCE::MoveAssign(a7, &v144);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v144);
      goto LABEL_185;
    }
    *((_DWORD *)v69 + 1) |= 1u;
    if ( a4 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v140);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v140);
      if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
      {
        v81 = a6;
        if ( !a6 )
        {
          v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v78, v79, v80);
          v82[3] = this;
          v82[4] = -1073741811LL;
LABEL_82:
          WdLogEvent5_WdWarning(v82);
          v63 = -1073741811;
LABEL_83:
          v86 = *((_QWORD *)v69 + 7);
          if ( !v86 )
            goto LABEL_114;
          *(_DWORD *)(v86 + 12) |= 0x100u;
          v87 = *((_QWORD *)v69 + 7);
          if ( *(_DWORD *)(v87 + 116) == a2->NumAllocations )
          {
            if ( *(_DWORD *)(v87 + 112) == a2->PrivateDriverDataSize )
            {
              v90 = *((_QWORD *)v69 + 7);
              if ( *(_DWORD *)(v90 + 64) != (unsigned int)PsGetCurrentProcessSessionId(v87, v78, v79, v80)
                && (*(_DWORD *)(v90 + 12) & 8) == 0 )
              {
                v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v91, v92, v93);
                v94[3] = this;
                v94[4] = *((_QWORD *)v69 + 7);
                v95 = *((_QWORD *)v69 + 7);
                v96 = *(unsigned int *)(v95 + 64);
                v94[5] = v96;
                v94[6] = (unsigned int)PsGetCurrentProcessSessionId(v95, v96, v97, v98);
                v99 = v94;
                v94[7] = -1073741811LL;
LABEL_113:
                WdLogEvent5_WdWarning(v99);
                v63 = -1073741811;
LABEL_114:
                if ( v140[8] )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v140);
LABEL_182:
                if ( v63 < 0 )
                  goto LABEL_183;
                goto LABEL_184;
              }
              if ( *(_QWORD *)(v90 + 72) == *((_QWORD *)this + 2) )
              {
                if ( *(_QWORD *)(v90 + 80) == *((_QWORD *)this + 2338) )
                {
                  if ( (*(_DWORD *)(v90 + 12) & 1) == 0
                    || (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL), v91, v92)
                    && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
                  {
                    v102 = 0LL;
                    NumAllocations = a2->NumAllocations;
                    v103 = *(_QWORD **)(*((_QWORD *)v69 + 7) + 120LL);
                    if ( (_DWORD)NumAllocations )
                    {
                      v104 = v145;
                      while ( 1 )
                      {
                        v77 = 96 * v102;
                        if ( *((_DWORD *)v103 - 2) != v145[v102].PrivateDriverDataSize )
                          break;
                        v103 = (_QWORD *)*v103;
                        v102 = (unsigned int)(v102 + 1);
                        if ( (unsigned int)v102 >= (unsigned int)NumAllocations )
                          goto LABEL_106;
                      }
                      v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v103, NumAllocations, v93);
                      v105[3] = this;
                      v105[4] = *((_QWORD *)v69 + 7);
                      v105[5] = (unsigned int)v102;
                      v105[6] = v104[v102].PrivateDriverDataSize;
                      v105[7] = -1073741811LL;
                      WdLogEvent5_WdWarning(v105);
                      v63 = -1073741811;
                    }
LABEL_106:
                    if ( v63 >= 0 )
                    {
                      v100 = (struct _EPROCESS *)*((_QWORD *)v69 + 7);
                      _m_prefetchw((char *)v100 + 60);
                      v106 = *((_DWORD *)v100 + 15);
                      do
                      {
                        if ( !v106 )
                        {
                          *((_QWORD *)v69 + 7) = 0LL;
                          goto LABEL_111;
                        }
                        v77 = (unsigned int)(v106 + 1);
                        v107 = v106;
                        v106 = _InterlockedCompareExchange((volatile signed __int32 *)v100 + 15, v77, v106);
                      }
                      while ( v107 != v106 );
                      v77 = *(_QWORD *)(*((_QWORD *)v69 + 7) + 136LL);
                      if ( v77 )
                      {
                        if ( *(DXGDEVICE **)(v77 + 72) == this )
                          ++*(_DWORD *)(v77 + 64);
                        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v140);
                        v109 = (*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 216LL))() != 0;
                        DXGAUTOMUTEX::DXGAUTOMUTEX(
                          (DXGAUTOMUTEX *)v142,
                          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v69 + 7) + 136LL) + 8LL));
                        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
                        v100 = a5;
                        if ( !a5 )
                          v100 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 56LL);
                        v77 = *(_QWORD *)(*((_QWORD *)v69 + 7) + 136LL) + 48LL;
                        for ( i = *(__int64 **)v77; i != (__int64 *)v77; i = (__int64 *)*i )
                        {
                          if ( v109 && *((_BYTE *)i + 16) || !*((_BYTE *)i + 16) && v100 == (struct _EPROCESS *)i[3] )
                            goto LABEL_129;
                        }
                        v111 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v100, NumAllocations, v93);
                        v111[3] = this;
                        v111[4] = *((_QWORD *)v69 + 7);
                        v111[5] = -1073741811LL;
                        WdLogEvent5_WdWarning(v111);
                        v63 = -1073741811;
LABEL_129:
                        if ( v142[8] )
                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142);
                      }
                      if ( v63 >= 0 )
                      {
                        v77 = *((_QWORD *)v69 + 7);
                        v112 = *(_QWORD *)(v77 + 120);
                        if ( (*(_DWORD *)(v112 - 44) & 2) != 0 )
                        {
                          if ( *(_DWORD *)(v77 + 116) != 1 )
                          {
                            v77 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                            if ( *(_DWORD *)(v77 + 232) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v77) )
                            {
                              v113 = WdLogNewEntry5_WdAssertion(v77, v100, NumAllocations, v93);
                              *(_QWORD *)(v113 + 24) = 2344LL;
                              WdLogEvent5_WdAssertion(v113);
                            }
                          }
                          *((_QWORD *)this + ((*(_DWORD *)(v112 - 44) >> 6) & 0xF) + 51) = v69;
                        }
                      }
                    }
                    goto LABEL_114;
                  }
LABEL_111:
                  v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v100, NumAllocations, v93);
                  v88[3] = this;
                  v108 = *((_QWORD *)v69 + 7);
                  v88[5] = -1073741811LL;
                  v88[4] = v108;
                  goto LABEL_112;
                }
                v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v91, v92, v93);
                v88[3] = this;
                v88[4] = *((_QWORD *)v69 + 7);
                v88[5] = *(_QWORD *)(*((_QWORD *)v69 + 7) + 80LL);
LABEL_87:
                v88[6] = -1073741811LL;
LABEL_112:
                v99 = v88;
                goto LABEL_113;
              }
              v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v91, v92, v93);
              v88[3] = this;
              v88[4] = *((_QWORD *)v69 + 7);
              PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 7) + 72LL) + 16LL);
            }
            else
            {
              v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v87, v78, v79, v80);
              v88[3] = this;
              v88[4] = *((_QWORD *)v69 + 7);
              PrivateDriverDataSize = a2->PrivateDriverDataSize;
            }
          }
          else
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v87, v78, v79, v80);
            v88[3] = this;
            v88[4] = *((_QWORD *)v69 + 7);
            PrivateDriverDataSize = a2->NumAllocations;
          }
          v88[5] = PrivateDriverDataSize;
          goto LABEL_87;
        }
        v83 = *((_QWORD *)a6 + 2);
        *((_QWORD *)v69 + 7) = v83;
        if ( v83 )
          goto LABEL_83;
        v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v78, v79, v80);
        v82[3] = this;
        v82[4] = v81;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v77, v78, v79, v80);
        ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
        *((_QWORD *)v69 + 7) = ObjectA;
        if ( ObjectA )
          goto LABEL_83;
        v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v78, v79, v80);
        v82[3] = this;
        v82[4] = a2->hGlobalShare;
      }
      v82[5] = -1073741811LL;
      goto LABEL_82;
    }
    SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                       *((DXGADAPTER ***)this + 2),
                       *((struct DXGADAPTER **)this + 2338),
                       (*(_DWORD *)&a2->Flags & 0x800) != 0);
    v74 = 0LL;
    *((_QWORD *)v69 + 7) = SharedResource;
    if ( !SharedResource )
    {
LABEL_70:
      v76 = WdLogNewEntry5_WdWarning(v73, v72, v74, v75);
      *(_QWORD *)(v76 + 24) = this;
      *(_QWORD *)(v76 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v76);
      v63 = -1073741801;
LABEL_183:
      ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        (ADAPTER_RENDER *)v77,
        (struct _EX_RUNDOWN_REF *)v69,
        0LL);
      DXGRESOURCE::`scalar deleting destructor'(v69);
      goto LABEL_185;
    }
    v115 = a2->NumAllocations;
    LODWORD(v144) = v115;
    LODWORD(v143) = 0;
    if ( (_DWORD)v115 )
    {
      while ( 1 )
      {
        v116 = (char *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
        v74 = 0LL;
        if ( v116 )
        {
          *((_DWORD *)v116 + 1) = 0;
          *((_QWORD *)v116 + 1) = 0LL;
          *((_QWORD *)v116 + 2) = 0LL;
          *((_QWORD *)v116 + 4) = 0LL;
          *((_DWORD *)v116 + 10) = 0;
          *((_QWORD *)v116 + 7) = 0LL;
          *((_QWORD *)v116 + 6) = 0LL;
        }
        else
        {
          v116 = 0LL;
        }
        if ( !v116 )
          break;
        v120 = (__int64 *)(v116 + 48);
        v121 = *((_QWORD *)v69 + 7) + 120LL;
        v122 = *(__int64 ***)(*((_QWORD *)v69 + 7) + 128LL);
        *v120 = v121;
        v120[1] = (__int64)v122;
        if ( *v122 != (__int64 *)v121 )
          __fastfail(3u);
        *v122 = v120;
        v115 = (unsigned int)v144;
        *(_QWORD *)(v121 + 8) = v120;
        LODWORD(v143) = v143 + 1;
        if ( (unsigned int)v143 >= (unsigned int)v115 )
          goto LABEL_146;
      }
      v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v118, v117, 0LL, v119);
      v131[3] = this;
      v131[4] = a2->NumAllocations;
      v131[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v131);
      v115 = (unsigned int)v144;
      v63 = -1073741801;
    }
    else
    {
LABEL_146:
      *(_DWORD *)(*((_QWORD *)v69 + 7) + 116LL) = v115;
      *((_DWORD *)v69 + 1) |= 2u;
    }
    *(_DWORD *)(*((_QWORD *)v69 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v69 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
    if ( v63 >= 0 && (unsigned int)v115 > 1 )
    {
      v123 = 8LL * (unsigned int)v115;
      v143 = (unsigned int)v115;
      if ( !is_mul_ok((unsigned int)v115, 8uLL) )
        v123 = -1LL;
      v124 = operator new[](v123, 0x4B677844u, PagedPool);
      v126 = *((_QWORD *)v69 + 7);
      *(_QWORD *)(v126 + 152) = v124;
      if ( !*(_QWORD *)(*((_QWORD *)v69 + 7) + 152LL) )
      {
        v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v126, v115, v74, v125);
        v127[4] = v143;
        v127[3] = this;
        v127[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v127);
        v63 = -1073741801;
      }
    }
    if ( (*(_DWORD *)&a2->Flags & 4) == 0
      && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL), v115, v74)
      && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
    {
      *(_DWORD *)(*((_QWORD *)v69 + 7) + 12LL) |= 1u;
    }
    if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
      goto LABEL_180;
    if ( v63 < 0 )
    {
LABEL_181:
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v69 + 7), 0LL, 0);
      *((_QWORD *)v69 + 7) = 0LL;
      goto LABEL_182;
    }
    v128 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
    v130 = v128;
    if ( v128 )
    {
      v128[1] = 0LL;
      v129 = (char *)(v128 + 6);
      v128[2] = 0LL;
      *((_DWORD *)v128 + 8) = 0;
      v128[3] = 0LL;
      *((_DWORD *)v128 + 9) = 36;
      *((_DWORD *)v128 + 10) = 32;
      *((_DWORD *)v128 + 16) = 1;
      v128[9] = this;
      v128[7] = v128 + 6;
      v128[6] = v128 + 6;
    }
    else
    {
      v130 = 0LL;
    }
    if ( !v130 )
    {
      v132 = WdLogNewEntry5_WdLowResource(v129);
      *(_QWORD *)(v132 + 24) = this;
      *(_QWORD *)(v132 + 32) = -1073741801LL;
LABEL_166:
      WdLogEvent5_WdLowResource(v132);
      v63 = -1073741801;
      goto LABEL_181;
    }
    v133 = 0LL;
    *(_QWORD *)(*((_QWORD *)v69 + 7) + 136LL) = v130;
    if ( (*(unsigned int (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 216LL))() )
    {
      v134 = operator new[](0x28uLL, 0x4B677844u, PagedPool);
      if ( v134 )
      {
        v134[4] = 0LL;
        *((_BYTE *)v134 + 24) = 1;
LABEL_173:
        if ( !v134 )
        {
          if ( v133 )
            ObfDereferenceObject(v133);
          v132 = WdLogNewEntry5_WdLowResource(v135);
          *(_QWORD *)(v132 + 24) = -1073741801LL;
          goto LABEL_166;
        }
        v136 = v130 + 6;
        v137 = v134 + 1;
        v138 = *v136;
        *v137 = *v136;
        v137[1] = (__int64)v136;
        if ( *(__int64 **)(v138 + 8) != v136 )
          __fastfail(3u);
        *(_QWORD *)(v138 + 8) = v137;
        *v136 = (__int64)v137;
LABEL_180:
        if ( v63 >= 0 )
          goto LABEL_184;
        goto LABEL_181;
      }
    }
    else
    {
      v133 = *(void **)(*((_QWORD *)this + 5) + 56LL);
      ObfReferenceObject(v133);
      v134 = operator new[](0x28uLL, 0x4B677844u, PagedPool);
      if ( v134 )
      {
        *((_BYTE *)v134 + 24) = 0;
        v134[4] = v133;
        goto LABEL_173;
      }
    }
    v134 = 0LL;
    goto LABEL_173;
  }
  v20 = *((_QWORD *)this + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 192));
  v21 = (hResource >> 6) & 0xFFFFFF;
  if ( v21 < *(_DWORD *)(v20 + 232)
    && (v22 = *(_QWORD *)(v20 + 216),
        v23 = *(_DWORD *)(v22 + 16LL * v21 + 8),
        ((hResource >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30))
    && (v23 & 0x1000) == 0
    && (v23 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) == 4 )
  {
    v24 = *(struct DXGRESOURCE **)(v22 + 16LL * v21);
  }
  else
  {
    v24 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v143, v24);
  ExReleasePushLockSharedEx(v20 + 192, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v139, (struct _EX_RUNDOWN_REF **)&v143);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v143);
  v29 = v139;
  if ( !v139 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    v31 = -1073741816LL;
    v30[3] = this;
    v30[4] = a2->hResource;
LABEL_59:
    v30[5] = v31;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_55;
  }
  if ( (DXGDEVICE *)v139[1].Count != this )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    v32[3] = this;
    v32[4] = a2->hResource;
    Count = v29[1].Count;
LABEL_24:
    v32[5] = Count;
LABEL_35:
    v32[6] = -1073741811LL;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)&a2->Flags & 0x800) == 0 || (v34 = v139[7].Count) != 0 && (*(_DWORD *)(v34 + 12) & 0x20) != 0 )
  {
    if ( (HIDWORD(v139->Ptr) & 1) != 0 )
    {
      v35 = v139[7].Count;
      if ( !v35 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v25, v27, v28);
        v32[3] = this;
        v32[4] = v29;
LABEL_31:
        v32[5] = -1073741811LL;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v35 + 112) != a2->PrivateDriverDataSize )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v25, v27, v28);
        v32[3] = this;
        v32[4] = v29[7].Count;
        Count = a2->PrivateDriverDataSize;
        goto LABEL_24;
      }
      v36 = a10;
      v37 = (DXGPUSHLOCK *)(v35 + 32);
      *((_QWORD *)a10 + 1) = v37;
      DXGPUSHLOCK::AcquireExclusive(v37);
      *((_DWORD *)v36 + 4) = 2;
      v40 = a2->NumAllocations;
      *(_QWORD *)&v141 = v36;
      v41 = 0LL;
      if ( (_DWORD)v40 )
      {
        v38 = *(unsigned int *)(*(_QWORD *)(v29[7].Count + 120) - 8LL);
        while ( (_DWORD)v38 == a3[v41].PrivateDriverDataSize )
        {
          v41 = (unsigned int)(v41 + 1);
          if ( (unsigned int)v41 >= (unsigned int)v40 )
            goto LABEL_29;
        }
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(96 * v41, v40, v38, v39);
        v32[3] = this;
        v32[4] = v29[7].Count;
        v32[5] = (unsigned int)v41;
        v32[6] = a3[v41].PrivateDriverDataSize;
        v32[7] = -1073741811LL;
        goto LABEL_36;
      }
LABEL_29:
      v42 = v29[7].Count;
      if ( (*(_DWORD *)(v42 + 12) & 0x100) != 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v40, v38, v39);
        v32[3] = this;
        v32[4] = v29[7].Count;
        goto LABEL_31;
      }
      v43 = v40 + *(_DWORD *)(v42 + 116);
      if ( v43 > 0x20 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v40, v38, v39);
        v32[3] = this;
        v32[4] = v29[7].Count;
        v32[5] = 32LL;
        goto LABEL_35;
      }
      *(_DWORD *)&a2->Flags |= 2u;
      if ( v43 > 1 )
      {
        v44 = 8LL * v43;
        if ( !is_mul_ok(v43, 8uLL) )
          v44 = -1LL;
        v49 = operator new[](v44, 0x4B677844u, PagedPool);
        if ( !v49 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
          v30[3] = this;
          v30[4] = v43;
LABEL_58:
          v31 = -1073741801LL;
          goto LABEL_59;
        }
        v50 = v29[7].Count;
        v51 = *(void **)(v50 + 152);
        if ( v51 != (void *)(v50 + 144) )
          operator delete(v51);
        *(_QWORD *)(v29[7].Count + 152) = v49;
      }
      v52 = 0;
      if ( a2->NumAllocations )
      {
        while ( 1 )
        {
          v53 = (char *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
          if ( v53 )
          {
            *((_DWORD *)v53 + 1) = 0;
            *((_QWORD *)v53 + 1) = 0LL;
            *((_QWORD *)v53 + 2) = 0LL;
            *((_QWORD *)v53 + 4) = 0LL;
            *((_DWORD *)v53 + 10) = 0;
            *((_QWORD *)v53 + 7) = 0LL;
            *((_QWORD *)v53 + 6) = 0LL;
          }
          else
          {
            v53 = 0LL;
          }
          if ( !v53 )
            break;
          v58 = (__int64 *)(v53 + 48);
          v59 = v29[7].Count + 120;
          v60 = *(__int64 ***)(v29[7].Count + 128);
          *v58 = v59;
          v58[1] = (__int64)v60;
          if ( *v60 != (__int64 *)v59 )
            __fastfail(3u);
          *v60 = v58;
          ++v52;
          *(_QWORD *)(v59 + 8) = v58;
          if ( v52 >= a2->NumAllocations )
            goto LABEL_52;
        }
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
        v30[3] = this;
        v30[4] = a2->NumAllocations;
        goto LABEL_58;
      }
LABEL_52:
      *(_DWORD *)(v29[7].Count + 116) = v43;
    }
    DXGAUTOMUTEX::Initialize(a9, (struct DXGFASTMUTEX *const)&v29[10], 0);
    DXGAUTOMUTEX::Acquire(a9);
LABEL_54:
    DXGRESOURCEREFERENCE::MoveAssign(a7, &v139);
    v141 = 0uLL;
    LODWORD(v31) = 0;
    goto LABEL_55;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
  v32[3] = a2->hResource;
  v32[4] = -1073741811LL;
LABEL_36:
  WdLogEvent5_WdWarning(v32);
  LODWORD(v31) = -1073741811;
LABEL_55:
  DXGDEVICE::OpenResourceObject_::_8_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v141);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v139);
  return (unsigned int)v31;
}
