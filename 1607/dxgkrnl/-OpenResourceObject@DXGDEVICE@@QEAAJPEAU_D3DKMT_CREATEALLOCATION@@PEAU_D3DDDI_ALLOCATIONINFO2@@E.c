/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0151A08
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0007B10 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00096C4 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000BE68 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0021530 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C008F6E4 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0092900 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0093F74 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C01511B4 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  D3DKMT_HANDLE hResource; // ebx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // edx
  struct DXGRESOURCE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _EX_RUNDOWN_REF *v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  ULONG_PTR Count; // rcx
  ULONG_PTR v31; // rax
  ULONG_PTR v32; // rcx
  struct DXGAUTOPUSHLOCK *v33; // rdi
  DXGPUSHLOCK *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rdi
  ULONG_PTR v39; // rcx
  unsigned int v40; // esi
  SIZE_T v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  PVOID v46; // r12
  ULONG_PTR v47; // rax
  void *v48; // rcx
  UINT v49; // edi
  char *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // rcx
  __int64 v56; // rax
  __int64 **v57; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v60; // r12d
  DXGRESOURCE *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  DXGRESOURCE *v66; // rsi
  DXGRESOURCE *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  struct _DXGSHAREDALLOCOBJECT *v78; // rbx
  _QWORD *v79; // rax
  __int64 v80; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  _QWORD *v96; // rcx
  __int64 v97; // rdx
  __int64 NumAllocations; // r8
  __int64 v99; // rbx
  _QWORD *v100; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v101; // r15
  _QWORD *v102; // rax
  signed __int32 v103; // eax
  signed __int32 v104; // ett
  __int64 v105; // rcx
  bool v106; // bl
  __int64 v107; // r8
  __int64 v108; // r9
  struct _EPROCESS *v109; // rdx
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
  __int64 v134; // rax
  char *v135; // rax
  __int64 v136; // rcx
  _QWORD *v137; // rdi
  _QWORD *v138; // rax
  __int64 v139; // rcx
  struct _EX_RUNDOWN_REF *v140; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v141[16]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v142; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v143[24]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v144; // [rsp+A0h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v145; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v146; // [rsp+B0h] [rbp+50h]

  v146 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 1888LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v140, 0LL);
  v142 = 0LL;
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_54;
    v60 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v61 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
      v66 = v61;
      if ( v61 )
      {
        DXGRESOURCE::DXGRESOURCE(v61, this);
        *((_QWORD *)v66 + 15) = 0LL;
        *((_DWORD *)v66 + 1) |= 4u;
        goto LABEL_67;
      }
    }
    else
    {
      v67 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v67 )
      {
        v66 = DXGRESOURCE::DXGRESOURCE(v67, this);
        goto LABEL_67;
      }
    }
    v66 = 0LL;
LABEL_67:
    if ( !v66 )
    {
      v68 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
      *(_QWORD *)(v68 + 24) = this;
      *(_QWORD *)(v68 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v68);
      v60 = -1073741801;
LABEL_185:
      LODWORD(v28) = v60;
      goto LABEL_55;
    }
    DXGPROCESS::CreateResourceHandleSafe(*((DXGPROCESS **)this + 5), v66);
    if ( !*((_DWORD *)v66 + 4) )
      goto LABEL_70;
    *((_QWORD *)v66 + 6) = a2->hPrivateRuntimeResourceHandle;
    if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
    {
LABEL_184:
      *a8 = 1;
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v145, v66);
      DXGRESOURCEREFERENCE::MoveAssign(a7, &v145);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v145);
      goto LABEL_185;
    }
    *((_DWORD *)v66 + 1) |= 1u;
    if ( a4 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v141);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v141);
      if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
      {
        v78 = a6;
        if ( !a6 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v75, v76, v77);
          v79[3] = this;
          v79[4] = -1073741811LL;
LABEL_82:
          WdLogEvent5_WdWarning(v79);
          v60 = -1073741811;
LABEL_83:
          v83 = *((_QWORD *)v66 + 7);
          if ( !v83 )
            goto LABEL_114;
          *(_DWORD *)(v83 + 12) |= 0x100u;
          v84 = *((_QWORD *)v66 + 7);
          if ( *(_DWORD *)(v84 + 124) == a2->NumAllocations )
          {
            if ( *(_DWORD *)(v84 + 120) == a2->PrivateDriverDataSize )
            {
              v87 = *((_QWORD *)v66 + 7);
              if ( *(_DWORD *)(v87 + 64) != (unsigned int)PsGetCurrentProcessSessionId(v84, v75, v76, v77)
                && (*(_DWORD *)(v87 + 12) & 8) == 0 )
              {
                v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v88, v89, v90);
                v91[3] = this;
                v91[4] = *((_QWORD *)v66 + 7);
                v92 = *((_QWORD *)v66 + 7);
                v93 = *(unsigned int *)(v92 + 64);
                v91[5] = v93;
                v91[6] = (unsigned int)PsGetCurrentProcessSessionId(v92, v93, v94, v95);
                v96 = v91;
                v91[7] = -1073741811LL;
LABEL_113:
                WdLogEvent5_WdWarning(v96);
                v60 = -1073741811;
LABEL_114:
                if ( v141[8] )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v141);
LABEL_182:
                if ( v60 < 0 )
                  goto LABEL_183;
                goto LABEL_184;
              }
              if ( *(_QWORD *)(v87 + 72) == *((_QWORD *)this + 2) )
              {
                if ( *(_QWORD *)(v87 + 88) == *((_QWORD *)this + 357) )
                {
                  if ( (*(_DWORD *)(v87 + 12) & 1) == 0
                    || (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL), v88, v89)
                    && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)) )
                  {
                    v99 = 0LL;
                    NumAllocations = a2->NumAllocations;
                    v100 = *(_QWORD **)(*((_QWORD *)v66 + 7) + 128LL);
                    if ( (_DWORD)NumAllocations )
                    {
                      v101 = v146;
                      while ( 1 )
                      {
                        v74 = 96 * v99;
                        if ( *((_DWORD *)v100 - 2) != v146[v99].PrivateDriverDataSize )
                          break;
                        v100 = (_QWORD *)*v100;
                        v99 = (unsigned int)(v99 + 1);
                        if ( (unsigned int)v99 >= (unsigned int)NumAllocations )
                          goto LABEL_106;
                      }
                      v102 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v100, NumAllocations, v90);
                      v102[3] = this;
                      v102[4] = *((_QWORD *)v66 + 7);
                      v102[5] = (unsigned int)v99;
                      v102[6] = v101[v99].PrivateDriverDataSize;
                      v102[7] = -1073741811LL;
                      WdLogEvent5_WdWarning(v102);
                      v60 = -1073741811;
                    }
LABEL_106:
                    if ( v60 >= 0 )
                    {
                      v97 = *((_QWORD *)v66 + 7);
                      _m_prefetchw((const void *)(v97 + 60));
                      v103 = *(_DWORD *)(v97 + 60);
                      do
                      {
                        if ( !v103 )
                        {
                          *((_QWORD *)v66 + 7) = 0LL;
                          goto LABEL_111;
                        }
                        v74 = (unsigned int)(v103 + 1);
                        v104 = v103;
                        v103 = _InterlockedCompareExchange((volatile signed __int32 *)(v97 + 60), v74, v103);
                      }
                      while ( v104 != v103 );
                      v74 = *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL);
                      if ( v74 )
                      {
                        if ( *(DXGDEVICE **)(v74 + 72) == this )
                          ++*(_DWORD *)(v74 + 64);
                        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v141);
                        v106 = *(_BYTE *)(*((_QWORD *)this + 5) + 290LL) != 0;
                        DXGAUTOMUTEX::DXGAUTOMUTEX(
                          (DXGAUTOMUTEX *)v143,
                          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) + 8LL));
                        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v143);
                        v109 = a5;
                        if ( !a5 )
                          v109 = *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 48LL);
                        v74 = *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) + 48LL;
                        for ( i = *(__int64 **)v74; i != (__int64 *)v74; i = (__int64 *)*i )
                        {
                          if ( v106 && *((_BYTE *)i + 16) || !*((_BYTE *)i + 16) && v109 == (struct _EPROCESS *)i[3] )
                            goto LABEL_129;
                        }
                        v111 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v109, v107, v108);
                        v111[3] = this;
                        v111[4] = *((_QWORD *)v66 + 7);
                        v111[5] = -1073741811LL;
                        WdLogEvent5_WdWarning(v111);
                        v60 = -1073741811;
LABEL_129:
                        if ( v143[8] )
                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v143);
                      }
                      if ( v60 >= 0 )
                      {
                        v74 = *((_QWORD *)v66 + 7);
                        v112 = *(_QWORD *)(v74 + 128);
                        if ( (*(_DWORD *)(v112 - 44) & 2) != 0 )
                        {
                          if ( *(_DWORD *)(v74 + 124) != 1 )
                          {
                            v74 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                            if ( *(_DWORD *)(v74 + 248) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v74) )
                            {
                              v113 = WdLogNewEntry5_WdAssertion(v74);
                              *(_QWORD *)(v113 + 24) = 2415LL;
                              WdLogEvent5_WdAssertion(v113);
                            }
                          }
                          *((_QWORD *)this + ((*(_DWORD *)(v112 - 44) >> 6) & 0xF) + 54) = v66;
                        }
                      }
                    }
                    goto LABEL_114;
                  }
LABEL_111:
                  v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v97, NumAllocations, v90);
                  v85[3] = this;
                  v105 = *((_QWORD *)v66 + 7);
                  v85[5] = -1073741811LL;
                  v85[4] = v105;
                  goto LABEL_112;
                }
                v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v88, v89, v90);
                v85[3] = this;
                v85[4] = *((_QWORD *)v66 + 7);
                v85[5] = *(_QWORD *)(*((_QWORD *)v66 + 7) + 88LL);
LABEL_87:
                v85[6] = -1073741811LL;
LABEL_112:
                v96 = v85;
                goto LABEL_113;
              }
              v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v88, v89, v90);
              v85[3] = this;
              v85[4] = *((_QWORD *)v66 + 7);
              PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 7) + 72LL) + 16LL);
            }
            else
            {
              v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v75, v76, v77);
              v85[3] = this;
              v85[4] = *((_QWORD *)v66 + 7);
              PrivateDriverDataSize = a2->PrivateDriverDataSize;
            }
          }
          else
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v75, v76, v77);
            v85[3] = this;
            v85[4] = *((_QWORD *)v66 + 7);
            PrivateDriverDataSize = a2->NumAllocations;
          }
          v85[5] = PrivateDriverDataSize;
          goto LABEL_87;
        }
        v80 = *((_QWORD *)a6 + 2);
        *((_QWORD *)v66 + 7) = v80;
        if ( v80 )
          goto LABEL_83;
        v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v75, v76, v77);
        v79[3] = this;
        v79[4] = v78;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal(v74);
        ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
        *((_QWORD *)v66 + 7) = ObjectA;
        if ( ObjectA )
          goto LABEL_83;
        v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v75, v76, v77);
        v79[3] = this;
        v79[4] = a2->hGlobalShare;
      }
      v79[5] = -1073741811LL;
      goto LABEL_82;
    }
    SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                       *((DXGADAPTER ***)this + 2),
                       *((struct DXGADAPTER **)this + 357),
                       (*(_DWORD *)&a2->Flags & 0x800) != 0);
    v71 = 0LL;
    *((_QWORD *)v66 + 7) = SharedResource;
    if ( !SharedResource )
    {
LABEL_70:
      v73 = WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
      *(_QWORD *)(v73 + 24) = this;
      *(_QWORD *)(v73 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v73);
      v60 = -1073741801;
LABEL_183:
      ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)v74, v66, 0LL);
      DXGRESOURCE::`scalar deleting destructor'(v66);
      goto LABEL_185;
    }
    v115 = a2->NumAllocations;
    LODWORD(v145) = v115;
    LODWORD(v144) = 0;
    if ( (_DWORD)v115 )
    {
      while ( 1 )
      {
        v116 = (char *)operator new(0x40uLL, 0x4B677844u, PagedPool);
        v71 = 0LL;
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
        v121 = *((_QWORD *)v66 + 7) + 128LL;
        v122 = *(__int64 ***)(*((_QWORD *)v66 + 7) + 136LL);
        if ( *v122 != (__int64 *)v121 )
          __fastfail(3u);
        *v120 = v121;
        v120[1] = (__int64)v122;
        *v122 = v120;
        v115 = (unsigned int)v145;
        *(_QWORD *)(v121 + 8) = v120;
        LODWORD(v144) = v144 + 1;
        if ( (unsigned int)v144 >= (unsigned int)v115 )
          goto LABEL_146;
      }
      v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v118, v117, 0LL, v119);
      v131[3] = this;
      v131[4] = a2->NumAllocations;
      v131[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v131);
      v115 = (unsigned int)v145;
      v60 = -1073741801;
    }
    else
    {
LABEL_146:
      *(_DWORD *)(*((_QWORD *)v66 + 7) + 124LL) = v115;
      *((_DWORD *)v66 + 1) |= 2u;
    }
    *(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
    if ( v60 >= 0 && (unsigned int)v115 > 1 )
    {
      v123 = 8LL * (unsigned int)v115;
      v144 = (unsigned int)v115;
      if ( !is_mul_ok((unsigned int)v115, 8uLL) )
        v123 = -1LL;
      v124 = operator new(v123, 0x4B677844u, PagedPool);
      v126 = *((_QWORD *)v66 + 7);
      *(_QWORD *)(v126 + 160) = v124;
      if ( !*(_QWORD *)(*((_QWORD *)v66 + 7) + 160LL) )
      {
        v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v126, v115, v71, v125);
        v127[4] = v144;
        v127[3] = this;
        v127[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v127);
        v60 = -1073741801;
      }
    }
    if ( (*(_DWORD *)&a2->Flags & 4) == 0
      && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL), v115, v71)
      && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)) )
    {
      *(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) |= 1u;
    }
    if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
      goto LABEL_180;
    if ( v60 < 0 )
    {
LABEL_181:
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v66 + 7), 0LL, 0);
      *((_QWORD *)v66 + 7) = 0LL;
      goto LABEL_182;
    }
    v128 = operator new(0x50uLL, 0x4B677844u, (POOL_TYPE)512);
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
      v60 = -1073741801;
      goto LABEL_181;
    }
    v133 = 0LL;
    *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) = v130;
    v134 = *((_QWORD *)this + 5);
    if ( *(_BYTE *)(v134 + 290) )
    {
      v135 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
      if ( v135 )
      {
        v135[24] = 1;
        *((_QWORD *)v135 + 4) = 0LL;
LABEL_173:
        if ( !v135 )
        {
          if ( v133 )
            ObfDereferenceObject(v133);
          v132 = WdLogNewEntry5_WdLowResource(v136);
          *(_QWORD *)(v132 + 24) = -1073741801LL;
          goto LABEL_166;
        }
        v137 = v130 + 6;
        v138 = v135 + 8;
        v139 = *v137;
        if ( *(_QWORD **)(*v137 + 8LL) != v137 )
          __fastfail(3u);
        *v138 = v139;
        v138[1] = v137;
        *(_QWORD *)(v139 + 8) = v138;
        *v137 = v138;
LABEL_180:
        if ( v60 >= 0 )
          goto LABEL_184;
        goto LABEL_181;
      }
    }
    else
    {
      v133 = *(void **)(v134 + 48);
      ObfReferenceObject(v133);
      v135 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
      if ( v135 )
      {
        v135[24] = 0;
        *((_QWORD *)v135 + 4) = v133;
        goto LABEL_173;
      }
    }
    v135 = 0LL;
    goto LABEL_173;
  }
  v17 = *((_QWORD *)this + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 184));
  v18 = (hResource >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v17 + 224)
    && (v19 = *(_QWORD *)(v17 + 208),
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
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v144, v21);
  ExReleasePushLockSharedEx(v17 + 184, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v140, (struct _EX_RUNDOWN_REF **)&v144);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v144);
  v26 = v140;
  if ( !v140 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v28 = -1073741816LL;
    v27[3] = this;
    v27[4] = a2->hResource;
LABEL_59:
    v27[5] = v28;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_55;
  }
  if ( (DXGDEVICE *)v140[1].Count != this )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v29[3] = this;
    v29[4] = a2->hResource;
    Count = v26[1].Count;
LABEL_24:
    v29[5] = Count;
LABEL_35:
    v29[6] = -1073741811LL;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)&a2->Flags & 0x800) == 0 || (v31 = v140[7].Count) != 0 && (*(_DWORD *)(v31 + 12) & 0x20) != 0 )
  {
    if ( (HIDWORD(v140->Ptr) & 1) != 0 )
    {
      v32 = v140[7].Count;
      if ( !v32 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v22, v24, v25);
        v29[3] = this;
        v29[4] = v26;
LABEL_31:
        v29[5] = -1073741811LL;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v32 + 120) != a2->PrivateDriverDataSize )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v22, v24, v25);
        v29[3] = this;
        v29[4] = v26[7].Count;
        Count = a2->PrivateDriverDataSize;
        goto LABEL_24;
      }
      v33 = a10;
      v34 = (DXGPUSHLOCK *)(v32 + 32);
      *((_QWORD *)a10 + 1) = v34;
      DXGPUSHLOCK::AcquireExclusive(v34);
      *((_DWORD *)v33 + 4) = 2;
      v37 = a2->NumAllocations;
      *(_QWORD *)&v142 = v33;
      v38 = 0LL;
      if ( (_DWORD)v37 )
      {
        v35 = *(unsigned int *)(*(_QWORD *)(v26[7].Count + 128) - 8LL);
        while ( (_DWORD)v35 == a3[v38].PrivateDriverDataSize )
        {
          v38 = (unsigned int)(v38 + 1);
          if ( (unsigned int)v38 >= (unsigned int)v37 )
            goto LABEL_29;
        }
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(96 * v38, v37, v35, v36);
        v29[3] = this;
        v29[4] = v26[7].Count;
        v29[5] = (unsigned int)v38;
        v29[6] = a3[v38].PrivateDriverDataSize;
        v29[7] = -1073741811LL;
        goto LABEL_36;
      }
LABEL_29:
      v39 = v26[7].Count;
      if ( (*(_DWORD *)(v39 + 12) & 0x100) != 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v37, v35, v36);
        v29[3] = this;
        v29[4] = v26[7].Count;
        goto LABEL_31;
      }
      v40 = v37 + *(_DWORD *)(v39 + 124);
      if ( v40 > 0x100 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v37, v35, v36);
        v29[3] = this;
        v29[4] = v26[7].Count;
        v29[5] = 256LL;
        goto LABEL_35;
      }
      *(_DWORD *)&a2->Flags |= 2u;
      if ( v40 > 1 )
      {
        v41 = 8LL * v40;
        if ( !is_mul_ok(v40, 8uLL) )
          v41 = -1LL;
        v46 = operator new(v41, 0x4B677844u, PagedPool);
        if ( !v46 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
          v27[3] = this;
          v27[4] = v40;
LABEL_58:
          v28 = -1073741801LL;
          goto LABEL_59;
        }
        v47 = v26[7].Count;
        v48 = *(void **)(v47 + 160);
        if ( v48 != (void *)(v47 + 152) )
          operator delete(v48);
        *(_QWORD *)(v26[7].Count + 160) = v46;
      }
      v49 = 0;
      if ( a2->NumAllocations )
      {
        while ( 1 )
        {
          v50 = (char *)operator new(0x40uLL, 0x4B677844u, PagedPool);
          if ( v50 )
          {
            *((_DWORD *)v50 + 1) = 0;
            *((_QWORD *)v50 + 1) = 0LL;
            *((_QWORD *)v50 + 2) = 0LL;
            *((_QWORD *)v50 + 4) = 0LL;
            *((_DWORD *)v50 + 10) = 0;
            *((_QWORD *)v50 + 7) = 0LL;
            *((_QWORD *)v50 + 6) = 0LL;
          }
          else
          {
            v50 = 0LL;
          }
          if ( !v50 )
            break;
          v55 = (__int64 *)(v50 + 48);
          v56 = v26[7].Count + 128;
          v57 = *(__int64 ***)(v26[7].Count + 136);
          if ( *v57 != (__int64 *)v56 )
            __fastfail(3u);
          *v55 = v56;
          ++v49;
          v55[1] = (__int64)v57;
          *v57 = v55;
          *(_QWORD *)(v56 + 8) = v55;
          if ( v49 >= a2->NumAllocations )
            goto LABEL_52;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
        v27[3] = this;
        v27[4] = a2->NumAllocations;
        goto LABEL_58;
      }
LABEL_52:
      *(_DWORD *)(v26[7].Count + 124) = v40;
    }
    DXGAUTOMUTEX::Initialize(a9, (struct DXGFASTMUTEX *const)&v26[10], 0);
    DXGAUTOMUTEX::Acquire(a9);
LABEL_54:
    DXGRESOURCEREFERENCE::MoveAssign(a7, &v140);
    v142 = 0uLL;
    LODWORD(v28) = 0;
    goto LABEL_55;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  v29[3] = a2->hResource;
  v29[4] = -1073741811LL;
LABEL_36:
  WdLogEvent5_WdWarning(v29);
  LODWORD(v28) = -1073741811;
LABEL_55:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v142);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v140);
  return (unsigned int)v28;
}
