/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180004030 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x1800143C4 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180029E08 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000DD0C (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000E2D4 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000E2FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001376C (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z @ 0x180013AD8 (-RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z.c)
 *     ?RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FLAGS@@@Z @ 0x180013B68 (-RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FL.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013B90 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z @ 0x180013C44 (-RmpValidateAndCaptureUserSid@@YAJPEAXKKPEAT_RM_SID@@PEAPEAT1@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        wchar_t *pwsz,
        char *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        struct _RM_ACTIVATOR *a12,
        bool *a13,
        unsigned __int64 *a14)
{
  const struct _TraceLoggingMetadata_t *v15; // rdx
  char *v17; // r14
  union _RM_SID *v18; // rax
  struct ExecutionModel::ResourceSet *v19; // rsi
  ExecutionModel::ResourceSet *v20; // rdi
  int v21; // ecx
  int EmSetById; // eax
  __int64 (__fastcall *v23)(ExecutionModel::ResourceSet *); // rax
  struct _RM_PARTITION *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  bool v27; // di
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r10
  ULONGLONG v31; // r11
  ULONG v32; // edx
  __int64 (__fastcall *v34)(ExecutionModel::ResourceSet *); // rax
  __int64 v35; // rcx
  __int64 v36; // r10
  TraceLoggingHProvider v37; // rcx
  LPCGUID v38; // r8
  LPCGUID v39; // r9
  int MemoryRequirementEstimateFromRegistry; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+84h] [rbp-7Ch] BYREF
  HANDLE v42; // [rsp+88h] [rbp-78h] BYREF
  struct ExecutionModel::ResourceSet *v43; // [rsp+90h] [rbp-70h] BYREF
  union _RM_SID *v44; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v46; // [rsp+A4h] [rbp-5Ch] BYREF
  BOOL v47; // [rsp+A8h] [rbp-58h] BYREF
  int v48; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v49; // [rsp+B0h] [rbp-50h] BYREF
  int v50; // [rsp+B4h] [rbp-4Ch] BYREF
  BOOL v51; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v53; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v54; // [rsp+C4h] [rbp-3Ch] BYREF
  int v55; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v56; // [rsp+CCh] [rbp-34h] BYREF
  int v57; // [rsp+D0h] [rbp-30h] BYREF
  ExecutionModel::ResourceManager *v58; // [rsp+D8h] [rbp-28h] BYREF
  struct ExecutionModel::ResourceSet *v59; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-18h] BYREF
  struct _RM_PARTITION *v61; // [rsp+F0h] [rbp-10h] BYREF
  bool *v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v64; // [rsp+108h] [rbp+8h] BYREF
  void *v65; // [rsp+110h] [rbp+10h]
  struct ExecutionModel::IResourceSetCallback *v66; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v67; // [rsp+120h] [rbp+20h]
  __int64 Amount; // [rsp+128h] [rbp+28h] BYREF
  __int64 v69; // [rsp+130h] [rbp+30h] BYREF
  __int64 v70; // [rsp+138h] [rbp+38h] BYREF
  __int64 v71; // [rsp+140h] [rbp+40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+148h] [rbp+48h] BYREF
  EVENT_DESCRIPTOR v73; // [rsp+158h] [rbp+58h] BYREF
  EVENT_DESCRIPTOR v74; // [rsp+168h] [rbp+68h] BYREF
  union _RM_SID *v75; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v76[80]; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1D0h] [rbp+D0h] BYREF
  void *v78; // [rsp+1E0h] [rbp+E0h]
  int v79; // [rsp+1E8h] [rbp+E8h]
  int v80; // [rsp+1ECh] [rbp+ECh]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+1F0h] [rbp+F0h] BYREF
  void *v82; // [rsp+200h] [rbp+100h]
  int v83; // [rsp+208h] [rbp+108h]
  int v84; // [rsp+20Ch] [rbp+10Ch]
  int *v85; // [rsp+210h] [rbp+110h]
  __int64 v86; // [rsp+218h] [rbp+118h]
  char *v87; // [rsp+220h] [rbp+120h]
  __int64 v88; // [rsp+228h] [rbp+128h]
  char *v89; // [rsp+230h] [rbp+130h]
  int v90; // [rsp+238h] [rbp+138h]
  int v91; // [rsp+23Ch] [rbp+13Ch]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+250h] [rbp+150h] BYREF
  void *v93; // [rsp+260h] [rbp+160h]
  int v94; // [rsp+268h] [rbp+168h]
  int v95; // [rsp+26Ch] [rbp+16Ch]
  int *v96; // [rsp+270h] [rbp+170h]
  __int64 v97; // [rsp+278h] [rbp+178h]
  __int64 *v98; // [rsp+280h] [rbp+180h]
  __int64 v99; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+290h] [rbp+190h] BYREF
  unsigned int *v101; // [rsp+2A0h] [rbp+1A0h]
  __int64 v102; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v103; // [rsp+2B0h] [rbp+1B0h]
  __int64 v104; // [rsp+2B8h] [rbp+1B8h]
  BOOL *v105; // [rsp+2C0h] [rbp+1C0h]
  __int64 v106; // [rsp+2C8h] [rbp+1C8h]
  int *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v111; // [rsp+2F0h] [rbp+1F0h]
  __int64 v112; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 *v113; // [rsp+300h] [rbp+200h]
  __int64 v114; // [rsp+308h] [rbp+208h]
  unsigned int *v115; // [rsp+310h] [rbp+210h]
  __int64 v116; // [rsp+318h] [rbp+218h]
  char *v117; // [rsp+320h] [rbp+220h]
  __int64 v118; // [rsp+328h] [rbp+228h]
  char *v119; // [rsp+330h] [rbp+230h]
  __int64 v120; // [rsp+338h] [rbp+238h]
  int *v121; // [rsp+340h] [rbp+240h]
  __int64 v122; // [rsp+348h] [rbp+248h]
  ExecutionModel::ResourceManager **v123; // [rsp+350h] [rbp+250h]
  __int64 v124; // [rsp+358h] [rbp+258h]
  union _RM_SID **v125; // [rsp+360h] [rbp+260h]
  __int64 v126; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF
  int *p_MemoryRequirementEstimateFromRegistry; // [rsp+3A0h] [rbp+2A0h]
  __int64 v129; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v130; // [rsp+3B0h] [rbp+2B0h]
  __int64 v131; // [rsp+3B8h] [rbp+2B8h]
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int *v133; // [rsp+3D0h] [rbp+2D0h]
  __int64 v134; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v135; // [rsp+3E0h] [rbp+2E0h]
  __int64 v136; // [rsp+3E8h] [rbp+2E8h]
  BOOL *v137; // [rsp+3F0h] [rbp+2F0h]
  __int64 v138; // [rsp+3F8h] [rbp+2F8h]
  int *v139; // [rsp+400h] [rbp+300h]
  __int64 v140; // [rsp+408h] [rbp+308h]
  __int64 *p_Amount; // [rsp+410h] [rbp+310h]
  __int64 v142; // [rsp+418h] [rbp+318h]
  __int64 *v143; // [rsp+420h] [rbp+320h]
  __int64 v144; // [rsp+428h] [rbp+328h]
  unsigned __int64 *v145; // [rsp+430h] [rbp+330h]
  __int64 v146; // [rsp+438h] [rbp+338h]
  unsigned int *v147; // [rsp+440h] [rbp+340h]
  __int64 v148; // [rsp+448h] [rbp+348h]
  char *v149; // [rsp+450h] [rbp+350h]
  __int64 v150; // [rsp+458h] [rbp+358h]
  char *v151; // [rsp+460h] [rbp+360h]
  __int64 v152; // [rsp+468h] [rbp+368h]
  int *v153; // [rsp+470h] [rbp+370h]
  __int64 v154; // [rsp+478h] [rbp+378h]
  BOOL *v155; // [rsp+480h] [rbp+380h]
  __int64 v156; // [rsp+488h] [rbp+388h]
  unsigned int *v157; // [rsp+490h] [rbp+390h]
  __int64 v158; // [rsp+498h] [rbp+398h]

  v15 = &TraceLoggingMetadata;
  v17 = Src;
  v62 = a13;
  v67 = a14;
  v65 = a4;
  v66 = a3;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040495 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v78 = &unk_1800404A0;
    UserData.Reserved = 2;
    v79 = 23;
    v80 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v18 = 0LL;
  v41 = 0;
  v19 = 0LL;
  v59 = 0LL;
  v20 = 0LL;
  v63 = -1LL;
  v61 = 0LL;
  Handle = 0LL;
  v42 = 0LL;
  if ( a8 == 2 )
  {
LABEL_6:
    if ( !pwsz )
    {
      EmSetById = -1073741581;
      goto LABEL_99;
    }
    if ( Src )
    {
      if ( a9 == -1LL )
      {
        EmSetById = -1073741577;
        goto LABEL_99;
      }
      if ( (int)RmpValidateAndCaptureUserSid(Src, a7, a8, (union _RM_SID *)v76, &v75) >= 0 )
      {
        v18 = (union _RM_SID *)v76;
        goto LABEL_11;
      }
    }
LABEL_98:
    EmSetById = -1073741580;
    goto LABEL_99;
  }
  if ( a8 )
  {
    if ( a8 != 4 && a8 != 8 )
    {
      EmSetById = -1073741578;
      goto LABEL_99;
    }
    goto LABEL_6;
  }
  if ( Src )
    goto LABEL_98;
  if ( a7 )
  {
    EmSetById = -1073741579;
    goto LABEL_99;
  }
  if ( a9 != -1LL )
  {
    EmSetById = -1073741578;
    goto LABEL_99;
  }
LABEL_11:
  v44 = v18;
  if ( !RmpResourceSetInfoIsValid(a2) )
  {
    EmSetById = -1073741584;
    goto LABEL_99;
  }
  v21 = *((_BYTE *)a2 + 42) & 7;
  if ( !a10 )
  {
    if ( (unsigned int)(v21 - 2) <= 2 && !a8 )
    {
      EmSetById = -1073741776;
      goto LABEL_99;
    }
LABEL_14:
    if ( v21 != 4 )
      goto LABEL_15;
    goto LABEL_83;
  }
  if ( (*((_BYTE *)a2 + 42) & 7) == 0 )
    goto LABEL_14;
  if ( v21 != 4 )
  {
    EmSetById = -1073741776;
    goto LABEL_99;
  }
LABEL_83:
  if ( a11 != -1LL )
  {
    EmSetById = -1073741776;
    goto LABEL_99;
  }
  if ( !a10 )
  {
    EmSetById = -1073741776;
    goto LABEL_99;
  }
  if ( !a8 )
  {
    EmSetById = -1073741776;
    goto LABEL_99;
  }
LABEL_15:
  if ( !(unsigned int)RmpImportanceIsValidForConfiguration(*((unsigned int *)a2 + 4), *((unsigned int *)a1 + 127)) )
  {
    EmSetById = -1073741585;
    goto LABEL_99;
  }
  v58 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 191);
  MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
                                            (__int64 **)v58,
                                            a2,
                                            pwsz,
                                            a8,
                                            &v64);
  if ( MemoryRequirementEstimateFromRegistry >= 0 && v64 && v64 <= *((_QWORD *)a2 + 9) )
    ExecutionModel::_ResourceSetInfo::SetAmount((__int64)a2, 1, v64);
  EmSetById = RmpSystemQueryPackagePartitions(pwsz, a9, &Handle, &v42, &v45);
  if ( EmSetById < 0 )
  {
LABEL_99:
    MemoryRequirementEstimateFromRegistry = EmSetById | 0x10000000;
    if ( !v41 )
      goto LABEL_26;
    goto LABEL_100;
  }
  if ( (v45 & 1) != 0 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  if ( v42 )
  {
    if ( v42 == (HANDLE)-2LL )
    {
      EmSetById = -1073741733;
    }
    else
    {
      if ( (int)NtCompareObjects(*((_QWORD *)a1 + 45), v42) < 0 )
        goto LABEL_22;
      EmSetById = -1073741733;
    }
    goto LABEL_99;
  }
LABEL_22:
  EmSetById = RmpPartitionTableFindOrCreatePartition((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), Handle, &v61);
  if ( EmSetById < 0 )
    goto LABEL_99;
  v41 = 1;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v43 = 0LL;
  if ( a11 == -1LL )
  {
LABEL_24:
    MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::AcquireResourceSet(
                                              (struct _RM_SERVICE_GLOBALS **)v58,
                                              a2,
                                              v61,
                                              v42,
                                              v66,
                                              v65,
                                              pwsz,
                                              v44,
                                              a7,
                                              a8,
                                              a9,
                                              a10,
                                              a12,
                                              v62,
                                              v19,
                                              &v59);
    if ( MemoryRequirementEstimateFromRegistry >= 0 )
    {
      RtlLeaveCriticalSection(&RmpGlobalLock);
      v20 = v59;
      v63 = *((_QWORD *)v59 + 230);
      *v67 = v63;
      MemoryRequirementEstimateFromRegistry = 0;
      goto LABEL_26;
    }
    v20 = v59;
    goto LABEL_100;
  }
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), a11, &v43);
  v19 = v43;
  if ( EmSetById != -1073741275 )
  {
    if ( EmSetById < 0 )
      goto LABEL_99;
    if ( (*((_BYTE *)v43 + 1450) & 7) == 4 )
    {
      EmSetById = -1073741575;
      goto LABEL_99;
    }
    goto LABEL_24;
  }
  MemoryRequirementEstimateFromRegistry = -2147220218;
LABEL_100:
  RtlLeaveCriticalSection(&RmpGlobalLock);
LABEL_26:
  if ( v19 )
  {
    v34 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v19 + 16LL);
    if ( v34 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v19);
    else
      v34(v19);
  }
  if ( v20 )
  {
    v23 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v20 + 16LL);
    if ( v23 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v20);
    else
      v23(v20);
  }
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v42 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v42);
  v24 = v61;
  if ( v61 )
    RmpPartitionRelease(v61);
  if ( TraceLoggingProviderEnabled(v24, (UCHAR)v15, 0LL) )
  {
    if ( v62 )
      v27 = *v62;
    else
      v27 = 0;
    if ( !Src )
      v17 = (char *)a1 + 1388;
    if ( (unsigned int)dword_18004D030 > 5 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      v86 = 2LL;
      LOWORD(v41) = 48;
      v85 = &v41;
      v87 = (char *)a2 + 160;
      LOBYTE(v28) = v17[1];
      v88 = 192LL;
      if ( (unsigned __int8)v28 > 0xFu )
        v28 = 15;
      else
        v28 = (unsigned __int8)v28;
      v89 = v17;
      v90 = 4 * v28 + 8;
      v91 = 0;
      *(_DWORD *)&v73.Level = 5;
      v81.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&v73.Id = ((unsigned int)&unk_180040D1F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v73.Keyword = 1LL;
      v81.Size = *(unsigned __int16 *)off_18004D038;
      v82 = &unk_180040D2A;
      v81.Reserved = 2;
      v83 = 68;
      v84 = 1;
      EventWriteTransfer(RegHandle, &v73, v26, 0LL, 5u, &v81);
    }
    if ( a11 == -1LL && (*((_BYTE *)a2 + 40) & 0x10) != 0 )
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v25, 9uLL) )
      {
        v129 = 4LL;
        p_MemoryRequirementEstimateFromRegistry = &MemoryRequirementEstimateFromRegistry;
        v131 = 8LL;
        v130 = &v63;
        TlgCreateWsz(&v132, pwsz);
        v46 = a8;
        v133 = &v46;
        v134 = 4LL;
        v135 = &a9;
        v47 = v27;
        v137 = &v47;
        v48 = *((_DWORD *)a2 + 2);
        v139 = &v48;
        v136 = 8LL;
        v138 = 4LL;
        v140 = 4LL;
        Amount = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, 1);
        v142 = 8LL;
        p_Amount = &Amount;
        v69 = ExecutionModel::_ResourceSetInfo::GetAmount(v35, 2);
        v144 = 8LL;
        v143 = &v69;
        v145 = &a11;
        v49 = a10;
        v147 = &v49;
        v149 = (char *)a2 + 42;
        v151 = (char *)a2 + 24;
        v50 = *(_DWORD *)a2;
        v153 = &v50;
        v146 = 8LL;
        v51 = v36 != 0;
        v155 = &v51;
        v52 = a7;
        v157 = &v52;
        v148 = 4LL;
        v150 = 1LL;
        v152 = 8LL;
        v154 = 4LL;
        v156 = 4LL;
        v158 = 4LL;
        TlgWrite(v37, &unk_1800402CA, v38, v39, 0x12u, &pData);
      }
    }
    else if ( (unsigned int)dword_18004D030 > 4
           && (qword_18004D040 & 0x400000000009LL) != 0
           && (qword_18004D048 & 0x400000000009LL) == qword_18004D048 )
    {
      v97 = 4LL;
      v96 = &MemoryRequirementEstimateFromRegistry;
      v99 = 8LL;
      v98 = &v63;
      TlgCreateWsz(&pDesc, pwsz);
      v53 = a8;
      v101 = &v53;
      v102 = 4LL;
      v103 = &a9;
      v54 = v27;
      v105 = &v54;
      v55 = *((_DWORD *)a2 + 2);
      v107 = &v55;
      v104 = 8LL;
      v106 = 4LL;
      v108 = 4LL;
      v70 = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, 1);
      v110 = 8LL;
      v109 = &v70;
      v71 = ExecutionModel::_ResourceSetInfo::GetAmount(v29, 2);
      v112 = 8LL;
      v111 = &v71;
      v113 = &a11;
      v56 = a10;
      v115 = &v56;
      v117 = (char *)a2 + 42;
      v119 = (char *)a2 + 24;
      v57 = *(_DWORD *)a2;
      v121 = &v57;
      v114 = 8LL;
      LODWORD(v58) = v30 != 0;
      v123 = &v58;
      LODWORD(v44) = a7;
      v125 = &v44;
      v116 = 4LL;
      v118 = 1LL;
      v120 = 8LL;
      v122 = 4LL;
      v124 = 4LL;
      v126 = 4LL;
      *(_DWORD *)&v74.Level = 516;
      v92.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&v74.Id = ((unsigned int)&unk_18004063B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v74.Keyword = v31;
      v92.Size = *(unsigned __int16 *)off_18004D038;
      v93 = &unk_180040646;
      v92.Reserved = v32;
      v94 = 262;
      v95 = 1;
      EventWriteTransfer(RegHandle, &v74, 0LL, 0LL, 0x12u, &v92);
    }
  }
  return (unsigned int)MemoryRequirementEstimateFromRegistry;
}
