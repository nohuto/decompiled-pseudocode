/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180016C40 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003F4D8 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18003FFB0 (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 * Callees:
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x180001344 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180004F64 (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E3D0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x180016FFC (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int *a5,
        int a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned int a9,
        int a10,
        unsigned __int8 *a11,
        struct IUnknownVtbl *a12,
        struct IUnknown *a13,
        int a14,
        struct IUnknown **a15)
{
  __int64 v17; // rdi
  unsigned int v18; // ebx
  unsigned int v19; // edi
  char *v20; // r15
  int *v21; // r14
  __int64 v22; // r8
  _DWORD *v23; // r9
  int *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  ExecutionModel::BaseResourceSet *v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  const GUID *v33; // r8
  unsigned __int8 v34; // r13
  int v35; // eax
  int v36; // r15d
  _QWORD *v37; // r12
  struct IUnknown *v38; // rdi
  _QWORD *v39; // rbx
  ExecutionModel::BaseResourceSet *v40; // rax
  _QWORD *v41; // rax
  int *v42; // r12
  _QWORD *v43; // r15
  _QWORD *v44; // rax
  ExecutionModel::BaseResourceSet *v45; // r15
  struct IUnknown *v46; // rdi
  struct IUnknown *v47; // rax
  struct IUnknown *v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int64 v51; // rsi
  struct IUnknownVtbl *v52; // rdx
  struct IUnknown *v53; // rax
  __int64 v54; // r13
  _QWORD *v55; // rax
  _QWORD *v56; // r15
  _QWORD *v57; // rcx
  const GUID *v58; // r8
  const GUID *v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  struct IUnknown *v62; // rax
  struct IUnknown *v63; // rdi
  _DWORD *v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // rax
  bool v67; // zf
  struct IUnknown *v68; // rbx
  char *v69; // rdi
  __int64 v70; // rbx
  __int64 *v71; // r8
  _QWORD *v72; // rdi
  _QWORD *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  char v77; // [rsp+50h] [rbp-B0h] BYREF
  int v78; // [rsp+54h] [rbp-ACh] BYREF
  struct IUnknown *v79; // [rsp+58h] [rbp-A8h] BYREF
  char v80; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v81; // [rsp+64h] [rbp-9Ch]
  char v82; // [rsp+68h] [rbp-98h] BYREF
  char v83; // [rsp+69h] [rbp-97h] BYREF
  int v84; // [rsp+6Ch] [rbp-94h]
  struct IUnknown *v85; // [rsp+70h] [rbp-90h] BYREF
  ExecutionModel::BaseResourceSet *v86; // [rsp+78h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  int *v88; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int8 *v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v91; // [rsp+9Ch] [rbp-64h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-50h]
  _DWORD *v94; // [rsp+B8h] [rbp-48h]
  struct IUnknown **v95; // [rsp+C0h] [rbp-40h]
  struct IUnknown *v96; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v98[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v100; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v101; // [rsp+100h] [rbp+0h]
  unsigned __int64 v102; // [rsp+108h] [rbp+8h]
  __int64 v103; // [rsp+110h] [rbp+10h]
  unsigned __int64 v104; // [rsp+118h] [rbp+18h]
  _QWORD v105[22]; // [rsp+120h] [rbp+20h] BYREF
  char SystemInformation[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v107; // [rsp+1D8h] [rbp+D8h]
  unsigned int v108; // [rsp+1DCh] [rbp+DCh]
  char v109[48]; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v110; // [rsp+240h] [rbp+140h]
  unsigned int v111; // [rsp+244h] [rbp+144h]
  EVENT_DATA_DESCRIPTOR v112; // [rsp+370h] [rbp+270h] BYREF
  int *v113; // [rsp+390h] [rbp+290h]
  __int64 v114; // [rsp+398h] [rbp+298h]
  int *v115; // [rsp+3A0h] [rbp+2A0h]
  __int64 v116; // [rsp+3A8h] [rbp+2A8h]
  int *v117; // [rsp+3B0h] [rbp+2B0h]
  __int64 v118; // [rsp+3B8h] [rbp+2B8h]
  int **v119; // [rsp+3C0h] [rbp+2C0h]
  __int64 v120; // [rsp+3C8h] [rbp+2C8h]
  struct IUnknown **v121; // [rsp+3D0h] [rbp+2D0h]
  __int64 v122; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v123; // [rsp+3E0h] [rbp+2E0h]
  __int64 v124; // [rsp+3E8h] [rbp+2E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 *v126; // [rsp+410h] [rbp+310h]
  __int64 v127; // [rsp+418h] [rbp+318h]
  struct IUnknown **v128; // [rsp+420h] [rbp+320h]
  __int64 v129; // [rsp+428h] [rbp+328h]

  v89 = a11;
  v17 = *(_QWORD *)(a1 + 24);
  v85 = a13;
  v95 = a15;
  v86 = (ExecutionModel::BaseResourceSet *)a1;
  Block[0] = Block;
  Block[1] = Block;
  v81 = a4;
  v87 = a2;
  v88 = a5;
  v78 = 0;
  v79 = 0LL;
  v93 = 0LL;
  v84 = 0;
  v77 = 0;
  if ( v17 )
    v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v17 + 8) + 24LL))(
            v17 + 8,
            *(unsigned int *)(a1 + 16));
  v18 = 0;
  v19 = 0;
  v94 = RmSvcGlobals;
  v20 = (char *)RmSvcGlobals + 384;
  v21 = (int *)((char *)RmSvcGlobals + 1544);
  memset_0((char *)RmSvcGlobals + 384, 0, 0x4E0uLL);
  if ( v81 )
  {
    v23 = v94;
    v24 = a5;
    v22 = v81;
    do
    {
      if ( (unsigned int)*v24 <= 0x2F )
      {
        if ( (v23[415] & 4) != 0 || *v24 != 1 )
        {
          v27 = v19++;
          v28 = 3 * v27;
          *(_OWORD *)&v20[8 * v28] = *(_OWORD *)v24;
          *(_QWORD *)&v20[8 * v28 + 16] = *((_QWORD *)v24 + 2);
        }
        else
        {
          v25 = v18++;
          v26 = 3 * v25;
          *(_OWORD *)&v21[2 * v26] = *(_OWORD *)v24;
          *(_QWORD *)&v21[2 * v26 + 4] = *((_QWORD *)v24 + 2);
        }
      }
      v24 += 6;
      --v22;
    }
    while ( v22 );
  }
  *((_DWORD *)v20 + 308) = v18;
  v29 = v86;
  *((_DWORD *)v20 + 288) = v19;
  if ( *((_DWORD *)v29 + 4) == 1 && a2 && *(int *)(a2 + 20) >= 0 )
  {
    if ( (a3[24] & 2) == 0
      && ((v30 = *(int *)a3, (unsigned int)v30 > 0x28) || (v31 = 0x11000002000LL, !_bittest64(&v31, v30)))
      || a3[26] < 0 )
    {
      *((_QWORD *)v20 + 155) = 0LL;
      RmpActivityHostActOnProcesses(
        (struct _RM_ACTIVITY_HOST *)a2,
        4096,
        v22,
        (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitDebtCallback,
        (_QWORD *)v20 + 155);
    }
  }
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  NtQuerySystemInformation(SystemPerformanceInformation, v109, 0x158u, 0LL);
  NtQuerySystemInformation(SystemMemoryListInformation, v105, 0xB0u, 0LL);
  v32 = v107 * (v105[0] + v105[1] + v105[12] + v105[11] + v105[10] + v105[9] + v105[8] + v105[7] + v105[5] + v105[6]);
  v99 = v107 * (unsigned __int64)v111;
  v102 = v107 * (unsigned __int64)v108;
  v33 = (const GUID *)(v102 - v32);
  v103 = v32;
  v104 = v102 - v32;
  v100 = v107 * (v111 - (unsigned __int64)v110);
  v101 = v99 - v100;
  if ( a14 == 1 )
  {
    v34 = 1;
    v77 = 1;
  }
  else
  {
    v35 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
            v29,
            (int *)v20,
            a7,
            a6,
            a10,
            &v99,
            &v77,
            &v80,
            (__int64)Block);
    v34 = v77;
    v36 = v35;
    v78 = v35;
    if ( v35 < 0 )
      goto LABEL_82;
    if ( !v80 )
      goto LABEL_80;
    if ( !v77 )
      goto LABEL_25;
  }
  if ( !v89 )
  {
LABEL_80:
    v36 = -2147220992;
    goto LABEL_81;
  }
LABEL_25:
  if ( v85 )
  {
    v78 = ((__int64 (__fastcall *)(struct IUnknown **))v85)(&v79);
    v36 = v78;
    if ( v78 < 0 )
      goto LABEL_82;
  }
  else
  {
    v40 = (ExecutionModel::BaseResourceSet *)malloc(0x558uLL);
    if ( v40 )
      v40 = ExecutionModel::BaseResourceSet::BaseResourceSet(v40);
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(&v79, v40);
    if ( !v79 )
      goto LABEL_34;
  }
  v37 = (_QWORD *)((char *)v29 + 160);
  LODWORD(v79[170].lpVtbl) = a6;
  LODWORD(v79[1].lpVtbl) = a7;
  LODWORD(v79[2].lpVtbl) = *((_DWORD *)v29 + 4);
  v79[3].lpVtbl = a12;
  HIDWORD(v79[169].lpVtbl) ^= (HIDWORD(v79[169].lpVtbl) ^ (4 * a8)) & 4;
  v79[168].lpVtbl = *(struct IUnknownVtbl **)((char *)v29 + 1344);
  v38 = v79;
  v39 = (_QWORD *)*((_QWORD *)v29 + 20);
  v85 = v79;
  while ( v39 != v37 && *(_DWORD *)(v39[2] + 1360LL) < SLODWORD(v79[170].lpVtbl) )
    v39 = (_QWORD *)*v39;
  v41 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v42 = v88;
  v43 = v41;
  v98[1] = (__int64)v41;
  if ( !v41 )
    goto LABEL_34;
  v41[2] = v38;
  if ( v38 )
    ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->AddRef)(v85);
  if ( !v43 )
  {
LABEL_34:
    v36 = -2147024882;
LABEL_81:
    v78 = v36;
    goto LABEL_82;
  }
  v44 = (_QWORD *)v39[1];
  *v43 = v39;
  v43[1] = v44;
  *v44 = v43;
  v39[1] = v43;
  v45 = v86;
  v46 = 0LL;
  v47 = v79;
  v78 = 0;
  ++*((_QWORD *)v86 + 22);
  v47[23].lpVtbl = (struct IUnknownVtbl *)v45;
  if ( *((_DWORD *)v45 + 4) != 1 )
  {
    v51 = v87;
    goto LABEL_51;
  }
  v46 = v79;
  v32 = 2LL;
  v48 = v79 + 176;
  do
  {
    v48 += 16;
    v49 = *(_OWORD *)a3;
    a3 += 128;
    *(_OWORD *)&v48[-16].lpVtbl = v49;
    *(_OWORD *)&v48[-14].lpVtbl = *((_OWORD *)a3 - 7);
    *(_OWORD *)&v48[-12].lpVtbl = *((_OWORD *)a3 - 6);
    *(_OWORD *)&v48[-10].lpVtbl = *((_OWORD *)a3 - 5);
    *(_OWORD *)&v48[-8].lpVtbl = *((_OWORD *)a3 - 4);
    *(_OWORD *)&v48[-6].lpVtbl = *((_OWORD *)a3 - 3);
    *(_OWORD *)&v48[-4].lpVtbl = *((_OWORD *)a3 - 2);
    *(_OWORD *)&v48[-2].lpVtbl = *((_OWORD *)a3 - 1);
    --v32;
  }
  while ( v32 );
  *(_OWORD *)&v48->lpVtbl = *(_OWORD *)a3;
  *(_OWORD *)&v48[2].lpVtbl = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v48[4].lpVtbl = *((_OWORD *)a3 + 2);
  *(_OWORD *)&v48[6].lpVtbl = *((_OWORD *)a3 + 3);
  *(_OWORD *)&v48[8].lpVtbl = *((_OWORD *)a3 + 4);
  v50 = *((_OWORD *)a3 + 5);
  v51 = v87;
  *(_OWORD *)&v48[10].lpVtbl = v50;
  if ( v51 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v51 + 16));
    v32 = v51 + 608;
    v52 = *(struct IUnknownVtbl **)(v51 + 608);
    v53 = v46 + 173;
    v46[173].lpVtbl = v52;
    v46[174].lpVtbl = (struct IUnknownVtbl *)(v51 + 608);
    if ( v52->AddRef != (ULONG (__stdcall *)(IUnknown *))(v51 + 608) )
      __fastfail(3u);
    v52->AddRef = (ULONG (__stdcall *)(IUnknown *))v53;
    *(_QWORD *)v32 = v53;
    LODWORD(v46[172].lpVtbl) = 0;
    v46[175].lpVtbl = (struct IUnknownVtbl *)v51;
    if ( *(_DWORD *)(v51 + 40) )
    {
      v34 = v77;
    }
    else
    {
      v54 = *(_QWORD *)(v51 + 600);
      ((void (__fastcall *)(struct IUnknown *))v46->lpVtbl->AddRef)(v46);
      v55 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v56 = v55;
      if ( v55 )
      {
        v55[2] = v46;
        ((void (__fastcall *)(struct IUnknown *))v46->lpVtbl->AddRef)(v46);
        v57 = *(_QWORD **)(v54 + 8);
        v56[1] = v57;
        *v56 = v54;
        *v57 = v56;
        *(_QWORD *)(v54 + 8) = v56;
        ++*(_QWORD *)(v54 + 16);
      }
      ((void (__fastcall *)(struct IUnknown *))v46->lpVtbl->Release)(v46);
      QueryUnbiasedInterruptTime((PULONGLONG)&v46[175].lpVtbl[37].AddRef);
      v34 = v77;
      v45 = v86;
    }
LABEL_51:
    if ( v51 && *((_DWORD *)v45 + 4) == 1 && v89 )
    {
      if ( v34 )
      {
LABEL_62:
        LODWORD(v79[19].lpVtbl) = a9;
        LODWORD(v79[169].lpVtbl) = 1;
        if ( v81 )
        {
          v60 = v81;
          do
          {
            v61 = *v42;
            if ( (unsigned int)v61 <= 0x2F )
            {
              v32 = 3 * (v61 + 8);
              v62 = v79;
              *(_OWORD *)&v79[v32].lpVtbl = *(_OWORD *)v42;
              v62[v32 + 2] = *(struct IUnknown *)(v42 + 4);
            }
            v42 += 6;
            --v60;
          }
          while ( v60 );
        }
        ExecutionModel::BaseResourceSet::RevokeResourceList((ExecutionModel::BaseResourceSet *)v32, Block, v84, a9);
LABEL_77:
        v68 = v79;
        *v95 = v79;
        ((void (__fastcall *)(struct IUnknown *))v68->lpVtbl->AddRef)(v68);
        if ( v89 )
          *v89 = v34;
        v36 = 0;
        goto LABEL_81;
      }
      LODWORD(v46[169].lpVtbl) = 2;
      if ( (unsigned int)RmpActivityHostCheckQueueWork(v51) )
      {
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v32, 1uLL) )
        {
          v97 = *(_QWORD *)(v51 + 24);
          v126 = &v97;
          v128 = &v96;
          v127 = 8LL;
          v96 = v46;
          v129 = 8LL;
          TlgWrite((TraceLoggingHProvider)v32, &unk_18005C104, v58, v59, 4u, &pData);
        }
        LOBYTE(v46[239].lpVtbl) |= 0x10u;
        v34 = 1;
      }
      LODWORD(v46[169].lpVtbl) = 0;
    }
  }
  if ( v34 )
    goto LABEL_62;
  v63 = v79;
  v64 = v94;
  v36 = ExecutionModel::BaseResourceSet::RecursiveVisit(
          v45,
          1,
          v94[384],
          (__int64)(v94 + 96),
          (unsigned int)v79[1].lpVtbl,
          1,
          &v82,
          &v83,
          0LL,
          (__int64)v79);
  if ( v36 >= 0 )
  {
    v65 = v64[404];
    if ( v65 )
    {
      v32 = v65;
      do
      {
        v66 = 3 * (*v21 + 8LL);
        *(_OWORD *)&v63[v66].lpVtbl = *(_OWORD *)v21;
        v63[v66 + 2] = *(struct IUnknown *)(v21 + 4);
        if ( *v21 == 1 )
        {
          v100 -= *((_QWORD *)v21 + 1);
          v101 += *((_QWORD *)v21 + 1);
        }
        v21 += 6;
        --v32;
      }
      while ( v32 );
    }
    v67 = LODWORD(v63[169].lpVtbl) == 1;
    LODWORD(v63[169].lpVtbl) = 2;
    if ( v67 )
      ((void (__fastcall *)(struct IUnknown *))v63->lpVtbl[4].AddRef)(v63);
  }
  v78 = v36;
  if ( v36 >= 0 )
    goto LABEL_77;
LABEL_82:
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
  {
    v113 = &v78;
    v115 = (int *)&v91;
    v90 = a6;
    v117 = &v90;
    LODWORD(v88) = a7;
    v119 = &v88;
    LODWORD(v85) = v34;
    v121 = &v85;
    LODWORD(v87) = a10;
    v123 = &v87;
    v114 = 4LL;
    v91 = v81;
    v116 = 4LL;
    v118 = 4LL;
    v120 = 4LL;
    v122 = 4LL;
    v124 = 4LL;
    TlgWrite((TraceLoggingHProvider)v32, &unk_18005C14C, v33, (LPCGUID)v81, 8u, &v112);
    v36 = v78;
  }
  if ( v36 < 0 && v79 )
  {
    v69 = (char *)v86 + 160;
    v70 = *((_QWORD *)v86 + 20);
    while ( (char *)v70 != v69 )
    {
      if ( *(struct IUnknown **)(v70 + 16) == v79 )
      {
        v71 = (__int64 *)v70;
        v70 = *(_QWORD *)v70;
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
          (__int64)v69,
          v98,
          v71);
      }
      else
      {
        v70 = *(_QWORD *)v70;
      }
    }
    ((void (__fastcall *)(struct IUnknown *))v79->lpVtbl[1].AddRef)(v79);
    if ( v79 )
      ATL::AtlComPtrAssign(&v79, 0LL);
    v36 = v78;
  }
  while ( 1 )
  {
    v72 = Block[0];
    if ( Block[0] == Block )
      break;
    v73 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v74 = *(_QWORD *)Block[0];
    *v73 = *(_QWORD *)Block[0];
    *(_QWORD *)(v74 + 8) = v73;
    v75 = v72[2];
    if ( v75 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v75 + 16LL))(v72[2]);
    operator delete(v72);
  }
  v93 = 0LL;
  if ( v79 )
    ((void (__fastcall *)(struct IUnknown *))v79->lpVtbl->Release)(v79);
  return (unsigned int)v36;
}
