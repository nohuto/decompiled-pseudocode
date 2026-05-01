/*
 * XREFs of ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011F90
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180001820 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180012380 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEBU_GUID@@PEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x18003B490 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEA_ea_18003B490.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180009178 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x180012590 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetI.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSetHelper(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        union _RM_SID *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  struct ExecutionModel::IResourceSet **v14; // rsi
  bool *v16; // r14
  struct ExecutionModel::IResourceSet *v17; // rdi
  __int64 v18; // rax
  int (*v19)(ExecutionModel::ResourceManager *__hidden, struct ExecutionModel::_ResourceSetInfo *, const unsigned __int16 *, unsigned int, unsigned __int64 *); // r13
  int MemoryRequirementEstimateFromRegistry; // eax
  int v21; // r10d
  unsigned int v22; // r9d
  int v23; // eax
  union _RM_SID *v24; // r13
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // r8
  char *v28; // rdi
  bool v29; // r10
  __int64 v30; // rax
  const unsigned __int16 *v31; // rcx
  int v32; // ecx
  unsigned int v34; // [rsp+70h] [rbp-90h] BYREF
  union _RM_SID *v35; // [rsp+78h] [rbp-88h] BYREF
  struct ExecutionModel::IResourceSetCallback *v36; // [rsp+80h] [rbp-80h] BYREF
  void *v37; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v39; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  char *v41; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  unsigned int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  union _RM_SID *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  unsigned int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  unsigned int *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  struct ExecutionModel::IResourceSetCallback **v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  void **v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  char **v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  union _RM_SID **v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]

  v14 = a13;
  v16 = a11;
  v17 = a12;
  v35 = a6;
  *a13 = 0LL;
  *((_DWORD *)a2 + 2) = 1;
  v18 = *(_QWORD *)this;
  v37 = a4;
  v36 = a3;
  v19 = *(int (**)(ExecutionModel::ResourceManager *__hidden, struct ExecutionModel::_ResourceSetInfo *, const unsigned __int16 *, unsigned int, unsigned __int64 *))(v18 + 360);
  if ( v19 == ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry )
    MemoryRequirementEstimateFromRegistry = ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
                                              this,
                                              a2,
                                              a5,
                                              a8,
                                              &v40);
  else
    MemoryRequirementEstimateFromRegistry = ((__int64 (__fastcall *)(ExecutionModel::ResourceManager *, struct ExecutionModel::_ResourceSetInfo *, unsigned __int16 *, _QWORD, unsigned __int64 *))v19)(
                                              this,
                                              a2,
                                              a5,
                                              a8,
                                              &v40);
  v34 = MemoryRequirementEstimateFromRegistry;
  v21 = 1;
  if ( MemoryRequirementEstimateFromRegistry >= 0 && v40 && v40 <= *((_QWORD *)a2 + 7) )
    ExecutionModel::_ResourceSetInfo::SetAmount((__int64)a2, 1, v40);
  v22 = a8;
  v23 = 0;
  if ( !a8 )
    v23 = v21;
  if ( v23 )
  {
    if ( (*((_DWORD *)a2 + 7) & 3) == 0 )
    {
LABEL_40:
      v24 = v35;
      v26 = -805306129;
      goto LABEL_12;
    }
  }
  else if ( (*((_DWORD *)a2 + 7) & 3) == 0 && a8 != 2 )
  {
    goto LABEL_40;
  }
  if ( (*((_WORD *)a2 + 10) & 0x200) == 0 || (*((_BYTE *)RmSvcGlobals + 1580) & 0x40) != 0 )
  {
    v24 = v35;
    v25 = ExecutionModel::ResourceManager::AcquireResourceSetHelperPhase2(
            this,
            a2,
            v36,
            v37,
            a5,
            v35,
            a7,
            a8,
            a9,
            a10,
            v16,
            v17,
            v14);
    v22 = a8;
    v34 = v25;
    v26 = v25;
    if ( v25 < 0 )
      goto LABEL_13;
    v26 = 0;
  }
  else
  {
    v24 = v35;
    v26 = -805306129;
  }
LABEL_12:
  v34 = v26;
LABEL_13:
  if ( *v14 )
    v27 = (__int64)*v14 - 1368;
  else
    v27 = 0LL;
  if ( v17 )
    v28 = (char *)v17 - 1368;
  else
    v28 = 0LL;
  if ( dword_180071060 )
  {
    if ( v16 )
      v29 = *v16;
    else
      v29 = 0;
    if ( !v24 )
      v24 = (union _RM_SID *)((char *)RmSvcGlobals + 1952);
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 && (qword_180071078 & 9) == qword_180071078 )
    {
      v49 = 4LL;
      v48 = &v34;
      v50 = &v43;
      LODWORD(v30) = 0;
      v43 = v27;
      v31 = (const unsigned __int16 *)&unk_1800574EC;
      v51 = 8LL;
      if ( a5 )
      {
        v31 = a5;
        v30 = -1LL;
        do
          ++v30;
        while ( a5[v30] );
      }
      v52 = v31;
      v32 = 2 * v30 + 2;
      LOBYTE(v30) = *((_BYTE *)v24 + 1);
      v53 = v32;
      v54 = 0;
      if ( (unsigned __int8)v30 > 0xFu )
        LODWORD(v30) = 15;
      else
        LODWORD(v30) = (unsigned __int8)v30;
      v55 = v24;
      v56 = 4 * v30 + 8;
      v39 = a7;
      v58 = &v39;
      v60 = &v38;
      v62 = &a9;
      LODWORD(v36) = a10;
      v64 = &v36;
      LODWORD(v37) = *(_DWORD *)a2;
      v66 = &v37;
      v68 = &v41;
      LODWORD(v35) = v29;
      v70 = &v35;
      v57 = 0;
      v59 = 4LL;
      v38 = v22;
      v61 = 4LL;
      v63 = 8LL;
      v65 = 4LL;
      v67 = 4LL;
      v41 = v28;
      v69 = 8LL;
      v71 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180061E34 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v45 = &unk_180061E3F;
      v47 = 1;
      UserData.Reserved = 2;
      v46 = 162;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
      return v34;
    }
  }
  return v26;
}
