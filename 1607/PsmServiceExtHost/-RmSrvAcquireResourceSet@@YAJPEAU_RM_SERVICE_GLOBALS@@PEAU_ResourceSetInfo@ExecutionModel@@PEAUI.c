/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0
 * Callers:
 *     ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x180016010 (-AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@E.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x1800291BC (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800104E4 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x1800106FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     RmpResourceSetInfoIsValid @ 0x180015C08 (RmpResourceSetInfoIsValid.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     RmpValidateAndCaptureUserSid @ 0x180015F50 (RmpValidateAndCaptureUserSid.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        _BYTE *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        struct _RM_ACTIVATOR *a12,
        bool *a13,
        unsigned __int64 *a14)
{
  LPCWSTR v15; // rax
  _BYTE *v16; // rbx
  bool *v17; // r12
  struct ExecutionModel::IResourceSet *v18; // rdi
  int v19; // r13d
  ExecutionModel::ResourceSet *v20; // rsi
  int EmSetById; // eax
  ExecutionModel::ResourceManager *v22; // rcx
  struct ExecutionModel::IResourceSet *v23; // rax
  const WCHAR *v24; // r13
  int v25; // eax
  char *v26; // rcx
  ExecutionModel::ResourceSet *v27; // rcx
  __int64 (*v28)(void); // rax
  __int64 Id; // rax
  __int64 (__fastcall *v30)(ExecutionModel::ResourceSet *); // rax
  bool v31; // di
  int v32; // eax
  __int64 v33; // rcx
  ULONG v34; // edx
  struct ExecutionModel::IResourceSet *v36; // rax
  unsigned int v37; // [rsp+70h] [rbp-90h] BYREF
  __int16 v38; // [rsp+74h] [rbp-8Ch] BYREF
  LPCWSTR pwsz; // [rsp+78h] [rbp-88h]
  union _RM_SID *v40; // [rsp+80h] [rbp-80h] BYREF
  ExecutionModel::ResourceSet *v41; // [rsp+88h] [rbp-78h] BYREF
  struct ExecutionModel::IResourceSet *v42; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v43; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+9Ch] [rbp-64h] BYREF
  int v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A4h] [rbp-5Ch] BYREF
  int v47; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+ACh] [rbp-54h] BYREF
  BOOL v49; // [rsp+B0h] [rbp-50h] BYREF
  struct _RM_SERVICE_GLOBALS *v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h] BYREF
  void *v52; // [rsp+C8h] [rbp-38h]
  struct ExecutionModel::IResourceSetCallback *v53; // [rsp+D0h] [rbp-30h]
  unsigned __int64 *v54; // [rsp+D8h] [rbp-28h]
  __int64 Amount; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DESCRIPTOR v58; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR v59; // [rsp+110h] [rbp+10h] BYREF
  __int64 v60; // [rsp+120h] [rbp+20h] BYREF
  char v61; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+180h] [rbp+80h] BYREF
  void *v63; // [rsp+190h] [rbp+90h]
  int v64; // [rsp+198h] [rbp+98h]
  int v65; // [rsp+19Ch] [rbp+9Ch]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1A0h] [rbp+A0h] BYREF
  void *v67; // [rsp+1B0h] [rbp+B0h]
  int v68; // [rsp+1B8h] [rbp+B8h]
  int v69; // [rsp+1BCh] [rbp+BCh]
  __int16 *v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  char *v72; // [rsp+1D0h] [rbp+D0h]
  __int64 v73; // [rsp+1D8h] [rbp+D8h]
  _BYTE *v74; // [rsp+1E0h] [rbp+E0h]
  int v75; // [rsp+1E8h] [rbp+E8h]
  int v76; // [rsp+1ECh] [rbp+ECh]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+1F0h] [rbp+F0h] BYREF
  void *v78; // [rsp+200h] [rbp+100h]
  int v79; // [rsp+208h] [rbp+108h]
  int v80; // [rsp+20Ch] [rbp+10Ch]
  unsigned int *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]
  __int64 *v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+230h] [rbp+130h] BYREF
  unsigned int *v86; // [rsp+240h] [rbp+140h]
  __int64 v87; // [rsp+248h] [rbp+148h]
  unsigned int *v88; // [rsp+250h] [rbp+150h]
  __int64 v89; // [rsp+258h] [rbp+158h]
  unsigned __int64 *v90; // [rsp+260h] [rbp+160h]
  __int64 v91; // [rsp+268h] [rbp+168h]
  __int64 *p_Amount; // [rsp+270h] [rbp+170h]
  __int64 v93; // [rsp+278h] [rbp+178h]
  __int64 *v94; // [rsp+280h] [rbp+180h]
  __int64 v95; // [rsp+288h] [rbp+188h]
  char *v96; // [rsp+290h] [rbp+190h]
  __int64 v97; // [rsp+298h] [rbp+198h]
  int *v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  char *v100; // [rsp+2B0h] [rbp+1B0h]
  __int64 v101; // [rsp+2B8h] [rbp+1B8h]
  int *v102; // [rsp+2C0h] [rbp+1C0h]
  __int64 v103; // [rsp+2C8h] [rbp+1C8h]
  int *v104; // [rsp+2D0h] [rbp+1D0h]
  __int64 v105; // [rsp+2D8h] [rbp+1D8h]
  unsigned int *v106; // [rsp+2E0h] [rbp+1E0h]
  __int64 v107; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 *v108; // [rsp+2F0h] [rbp+1F0h]
  __int64 v109; // [rsp+2F8h] [rbp+1F8h]
  BOOL *v110; // [rsp+300h] [rbp+200h]
  __int64 v111; // [rsp+308h] [rbp+208h]
  union _RM_SID **v112; // [rsp+310h] [rbp+210h]
  __int64 v113; // [rsp+318h] [rbp+218h]

  v15 = a5;
  v16 = Src;
  v17 = a13;
  v50 = a1;
  v54 = a14;
  v52 = a4;
  v53 = a3;
  pwsz = a5;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 )
  {
    if ( (qword_18004C048 & 1) == qword_18004C048 )
    {
      *(_DWORD *)&EventDescriptor.Level = 260;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800401BA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      v63 = &unk_1800401C5;
      UserData.Reserved = 2;
      v64 = 23;
      v65 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
    }
    v15 = pwsz;
  }
  v18 = 0LL;
  v19 = 0;
  v42 = 0LL;
  v20 = 0LL;
  v51 = -1LL;
  if ( a8 != 2 )
  {
    if ( !a8 )
    {
      if ( Src )
      {
        EmSetById = -1073741580;
        goto LABEL_72;
      }
      if ( a7 )
      {
        EmSetById = -1073741579;
        goto LABEL_72;
      }
      if ( a9 != -1LL )
      {
        EmSetById = -1073741578;
        goto LABEL_72;
      }
      v40 = 0LL;
      goto LABEL_12;
    }
    if ( a8 != 4 && a8 != 8 )
    {
      EmSetById = -1073741578;
      goto LABEL_72;
    }
  }
  if ( !v15 )
  {
    EmSetById = -1073741581;
    goto LABEL_72;
  }
  if ( !Src )
  {
    EmSetById = -1073741580;
    goto LABEL_72;
  }
  if ( a9 == -1LL )
  {
    EmSetById = -1073741577;
    goto LABEL_72;
  }
  if ( (int)RmpValidateAndCaptureUserSid(Src, (__int64)&v60) < 0 )
  {
    EmSetById = -1073741580;
    goto LABEL_72;
  }
  v40 = (union _RM_SID *)&v61;
LABEL_12:
  if ( !(unsigned int)RmpResourceSetInfoIsValid(a2) )
  {
    EmSetById = -1073741584;
    goto LABEL_72;
  }
  v19 = 1;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v41 = 0LL;
  if ( a11 == -1LL )
    goto LABEL_16;
  EmSetById = RmpResourceSetTableFindEmSetById((char *)v50 + 1864, a11, &v41);
  v20 = v41;
  if ( EmSetById == -1073741275 )
  {
    v37 = -2147220218;
LABEL_58:
    RtlLeaveCriticalSection(&RmpGlobalLock);
LABEL_59:
    v24 = pwsz;
    goto LABEL_26;
  }
  if ( EmSetById < 0 )
  {
LABEL_72:
    v37 = EmSetById | 0x10000000;
    if ( !v19 )
      goto LABEL_59;
    goto LABEL_58;
  }
LABEL_16:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v22 = (ExecutionModel::ResourceManager *)*((_QWORD *)v50 + 418);
  if ( a10 )
  {
    if ( v20 )
      v36 = (ExecutionModel::ResourceSet *)((char *)v20 + 1368);
    else
      v36 = 0LL;
    v24 = pwsz;
    v25 = ExecutionModel::ResourceManager::AcquireResourceSetFromSponsorProcess(
            v22,
            a2,
            v53,
            v52,
            (unsigned __int16 *)pwsz,
            v40,
            a7,
            a8,
            a9,
            a10,
            a12,
            v17,
            v36,
            &v42);
  }
  else
  {
    if ( v20 )
      v23 = (ExecutionModel::ResourceSet *)((char *)v20 + 1368);
    else
      v23 = 0LL;
    v24 = pwsz;
    v25 = ExecutionModel::ResourceManager::AcquireResourceSetHelper(
            v22,
            a2,
            v53,
            v52,
            (unsigned __int16 *)pwsz,
            v40,
            a7,
            a8,
            a9,
            0,
            a12,
            v17,
            v23,
            &v42);
  }
  v37 = v25;
  v18 = v42;
  if ( v25 >= 0 )
  {
    if ( v42 )
      v26 = (char *)v42 - 1368;
    else
      v26 = 0LL;
    v27 = (ExecutionModel::ResourceSet *)(v26 + 1368);
    v28 = *(__int64 (**)(void))(*(_QWORD *)v27 + 64LL);
    if ( (char *)v28 == (char *)ExecutionModel::ResourceSet::GetId )
      Id = ExecutionModel::ResourceSet::GetId(v27);
    else
      Id = v28();
    v51 = Id;
    v37 = 0;
    *v54 = Id;
  }
LABEL_26:
  if ( v20 )
  {
    v30 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v20 + 16LL);
    if ( v30 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v20);
    else
      v30(v20);
  }
  if ( v18 )
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( dword_18004C030 )
  {
    if ( v17 )
      v31 = *v17;
    else
      v31 = 0;
    if ( !Src )
      v16 = (char *)v50 + 3204;
    if ( (unsigned int)dword_18004C030 > 5 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
    {
      v71 = 2LL;
      v38 = 48;
      v70 = &v38;
      v72 = (char *)a2 + 160;
      LOBYTE(v32) = v16[1];
      v73 = 192LL;
      if ( (unsigned __int8)v32 > 0xFu )
        v32 = 15;
      else
        v32 = (unsigned __int8)v32;
      v74 = v16;
      v75 = 4 * v32 + 8;
      v76 = 0;
      *(_DWORD *)&v58.Level = 5;
      v66.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&v58.Id = ((unsigned int)&unk_18004041D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v58.Keyword = 1LL;
      v66.Size = *(unsigned __int16 *)off_18004C038;
      v67 = &unk_180040428;
      v66.Reserved = 2;
      v68 = 68;
      v69 = 1;
      EventWriteTransfer(RegHandle, &v58, 0LL, 0LL, 5u, &v66);
    }
    if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
    {
      v82 = 4LL;
      v81 = &v37;
      v84 = 8LL;
      v83 = &v51;
      TlgCreateWsz(&pDesc, v24);
      v43 = a8;
      v86 = &v43;
      v44 = a7;
      v88 = &v44;
      v90 = &a9;
      v87 = 4LL;
      v89 = 4LL;
      v91 = 8LL;
      Amount = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)a2, 1);
      v93 = 8LL;
      p_Amount = &Amount;
      v56 = ExecutionModel::_ResourceSetInfo::GetAmount(v33, 2);
      v95 = 8LL;
      v94 = &v56;
      v96 = (char *)a2 + 24;
      v45 = *((_DWORD *)a2 + 2);
      v98 = &v45;
      v100 = (char *)a2 + 72;
      v46 = *((_DWORD *)a2 + 8);
      v102 = &v46;
      v47 = *(_DWORD *)a2;
      v104 = &v47;
      v48 = a10;
      v106 = &v48;
      v108 = &a11;
      v49 = v31;
      v110 = &v49;
      v97 = 8LL;
      LODWORD(v40) = v17 != 0LL;
      v112 = &v40;
      v99 = 4LL;
      v101 = 8LL;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 8LL;
      v111 = 4LL;
      v113 = 4LL;
      *(_DWORD *)&v59.Level = 516;
      v77.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&v59.Id = ((unsigned int)&unk_18004058F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v59.Keyword = 9LL;
      v77.Size = *(unsigned __int16 *)off_18004C038;
      v78 = &unk_18004059A;
      v77.Reserved = v34;
      v79 = 273;
      v80 = 1;
      EventWriteTransfer(RegHandle, &v59, 0LL, 0LL, 0x13u, &v77);
    }
  }
  return v37;
}
