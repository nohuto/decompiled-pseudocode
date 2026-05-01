/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180001670 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004BE8 (-RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800055F0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18000F060 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800102AC (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@PEAPEAV12@@Z @ 0x180010DF0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013CDC (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016320 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        void *a6,
        wchar_t *a7,
        union _RM_SID *a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11,
        unsigned int a12,
        struct _RM_ACTIVATOR *a13,
        bool *a14,
        struct ExecutionModel::ResourceSet *a15,
        struct ExecutionModel::ResourceSet **a16)
{
  struct _RM_SERVICE_GLOBALS **v16; // rdi
  char *v18; // rax
  _BYTE *v19; // r14
  __int64 v20; // rdi
  ExecutionModel::_ResourceInfo *v21; // rsi
  _BYTE *v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm0
  struct _RM_ACTIVITY_HOST *v25; // rsi
  ULONG v26; // eax
  struct _RM_SERVICE_GLOBALS *v27; // rbx
  int ObjectByHandleWithLock; // eax
  char *v29; // rcx
  int v30; // ebx
  struct _RM_SERVICE_GLOBALS **v31; // rdi
  unsigned __int64 v32; // rbx
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // r8d
  struct ExecutionModel::ResourceSet *v36; // rdi
  int v37; // ebx
  struct _RM_ACTIVITY_HOST *v39; // rax
  int v40; // eax
  ExecutionModel::ResourceSet *Next; // rcx
  struct _RM_ACTIVITY_HOST *v43; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_RESOURCE_SET **v44; // [rsp+90h] [rbp-70h] BYREF
  struct _RM_OBJECT_HEADER *v45[2]; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid; // [rsp+A8h] [rbp-58h]
  wchar_t *Source; // [rsp+B0h] [rbp-50h]
  struct _RM_PARTITION *v48; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  struct ExecutionModel::IResourceSetCallback *v50; // [rsp+C8h] [rbp-38h]
  void *v51; // [rsp+D0h] [rbp-30h]
  struct ExecutionModel::ResourceSet **v52; // [rsp+D8h] [rbp-28h]
  wchar_t Destination[232]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v54[68]; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v55; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v56; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 v57; // [rsp+300h] [rbp+200h]

  v16 = this;
  v50 = a5;
  Source = a7;
  Sid = a8;
  v52 = a16;
  v51 = a4;
  v48 = a3;
  v18 = (char *)operator new(0x178uLL);
  v19 = v18;
  if ( v18 )
  {
    v20 = 3LL;
    v21 = (ExecutionModel::_ResourceInfo *)(v18 + 88);
    do
    {
      ExecutionModel::_ResourceInfo::_ResourceInfo(v21);
      v21 = (ExecutionModel::_ResourceInfo *)((char *)v21 + 24);
      --v20;
    }
    while ( v20 );
    v22 = v19;
    v23 = 2LL;
    do
    {
      v22 += 128;
      v24 = *(_OWORD *)a2;
      a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
      *((_OWORD *)v22 - 8) = v24;
      *((_OWORD *)v22 - 7) = *((_OWORD *)a2 - 7);
      *((_OWORD *)v22 - 6) = *((_OWORD *)a2 - 6);
      *((_OWORD *)v22 - 5) = *((_OWORD *)a2 - 5);
      *((_OWORD *)v22 - 4) = *((_OWORD *)a2 - 4);
      *((_OWORD *)v22 - 3) = *((_OWORD *)a2 - 3);
      *((_OWORD *)v22 - 2) = *((_OWORD *)a2 - 2);
      *((_OWORD *)v22 - 1) = *((_OWORD *)a2 - 1);
      --v23;
    }
    while ( v23 );
    v16 = this;
    *(_OWORD *)v22 = *(_OWORD *)a2;
    *((_OWORD *)v22 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v22 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v22 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v22 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v22 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v22 + 6) = *((_OWORD *)a2 + 6);
    *((_QWORD *)v22 + 14) = *((_QWORD *)a2 + 14);
  }
  else
  {
    v19 = 0LL;
  }
  v25 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  if ( a10 )
  {
    memset_0(Destination, 0, 0x228uLL);
    wcscpy_s(Destination, 0xE8uLL, Source);
    memset_0(v54, 0, sizeof(v54));
    v26 = RtlLengthSid(Sid);
    memcpy_0(v54, Sid, v26);
    v27 = v16[26];
    v55 = a9;
    v56 = a10;
    v57 = a11;
    v49 = a11;
    RtlAcquireSRWLockShared((char *)v27 + 32);
    ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(
                               (struct _RM_SERVICE_GLOBALS *)((char *)v27 + 16),
                               &v49,
                               v45);
    v29 = (char *)v27 + 32;
    v30 = ObjectByHandleWithLock;
    RtlReleaseSRWLockShared(v29);
    if ( v30 >= 0 )
    {
      v25 = v45[0];
      v30 = 0;
      v43 = v45[0];
    }
    if ( a15 )
    {
      v39 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a15 + 174);
      if ( v39 )
      {
        if ( v39 != v25 )
        {
          v37 = -805306118;
          goto LABEL_24;
        }
      }
    }
    v31 = this;
    if ( v30 < 0 )
    {
      v40 = RmpActivityHostCreateHostPsm(this[26], v48, (struct _RM_PSM_HOST_INFO *)Destination, &v43);
      v25 = v43;
      if ( v40 < 0 )
      {
        v37 = v40 | 0x10000000;
        goto LABEL_24;
      }
    }
  }
  else
  {
    if ( a15 )
    {
      v25 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a15 + 174);
      if ( v25 )
      {
        v32 = *((_QWORD *)v25 + 3);
        RmpObjectAddRef(*((struct _RM_OBJECT_HEADER **)a15 + 174));
        v31 = this;
        goto LABEL_13;
      }
    }
    v31 = this;
  }
  v32 = a11;
LABEL_13:
  if ( (v19[42] & 7) != 4
    || (v45[1] = (struct _RM_OBJECT_HEADER *)3,
        v45[0] = (struct _RM_OBJECT_HEADER *)RmpActivityHostEnumerateResourceSetGetFirst((__int64)v25, 3, 0),
        (Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v45)) == 0LL) )
  {
LABEL_14:
    if ( a14 )
    {
      if ( a15 )
      {
        v33 = 13;
        goto LABEL_19;
      }
      switch ( a10 )
      {
        case 2u:
          v33 = 11;
LABEL_19:
          v34 = ExecutionModel::ResourceSet::CreateInstance(
                  v31[13],
                  v19,
                  v48,
                  v51,
                  v50,
                  a6,
                  v25,
                  Source,
                  Sid,
                  a9,
                  a10,
                  v32,
                  v33,
                  a13,
                  a15,
                  &v44);
          v36 = (struct ExecutionModel::ResourceSet *)v44;
          v37 = v34;
          if ( v34 < 0
            || (v37 = RmpResourceSetEstablishSponsorship(v44[173], a12, v35), v37 < 0)
            || (v37 = ExecutionModel::ResourceSet::AcquireInternalResources(v36, 2 - (unsigned int)(a14 != 0LL), a14),
                v37 < 0) )
          {
            if ( v36 )
            {
              (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v36 + 32LL))(v36, 0LL);
              (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
          else
          {
            if ( !a14 && v25 )
              RmpEnforcementWorkerSynchronize(v25);
            v37 = 0;
            *v52 = v36;
          }
          goto LABEL_24;
        case 0u:
          v33 = 10;
          goto LABEL_19;
        case 4u:
        case 8u:
          v33 = 12;
          goto LABEL_19;
      }
    }
    v33 = -1;
    goto LABEL_19;
  }
  while ( !ExecutionModel::ResourceSet::GetReportedMemoryCap(Next) )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v45);
    if ( !Next )
      goto LABEL_14;
  }
  v37 = -805305980;
LABEL_24:
  if ( v25 )
  {
    RmpActivityHostCheckDelete(v25);
    RmpObjectRelease(v25);
  }
  if ( v19 )
    operator delete(v19);
  return (unsigned int)v37;
}
