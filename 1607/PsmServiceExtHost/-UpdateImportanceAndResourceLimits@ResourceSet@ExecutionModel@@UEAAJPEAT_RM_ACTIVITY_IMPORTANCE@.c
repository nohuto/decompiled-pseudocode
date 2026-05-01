/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20
 * Callers:
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180016F80 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 * Callees:
 *     RmpExecutionSpeedIsValidForHostType @ 0x180002008 (RmpExecutionSpeedIsValidForHostType.c)
 *     RmpImportanceIsValidForConfiguration @ 0x180003060 (RmpImportanceIsValidForConfiguration.c)
 *     RmpResourceLimitsAreLegal @ 0x180003104 (RmpResourceLimitsAreLegal.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800106CC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180012740 (-IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v6; // ebx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r15d
  unsigned __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *__hidden); // rax
  __int64 v10; // rax
  bool (__fastcall *v11)(ExecutionModel::ResourceSet *__hidden); // rax
  bool IsApplied; // al
  struct _RM_ACTIVITY_HOST *v13; // rcx
  unsigned int v14; // edx
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  unsigned __int64 (__fastcall *v19)(ExecutionModel::ResourceSet *__hidden); // rax
  __int64 Id; // rax
  const struct _TlgProvider_t *v21; // rcx
  const GUID *v22; // r8
  const GUID *v23; // r9
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+9Ch] [rbp-64h]
  __int64 *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  int *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  int *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int64 *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this - 168) + 224LL) + 1840LL);
  if ( a3 )
  {
    v30 = 336LL;
    if ( !RmpResourceLimitsAreLegal((__int64)a3, &v30, 0LL) )
    {
      v8 = -1073741584;
      return v8 | 0x10000000u;
    }
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = 0;
  if ( !a3
    || (*(_BYTE *)a3 & 0x10) == 0
    || (LOBYTE(v16) = RmpExecutionSpeedIsValidForHostType(
                        *((_DWORD *)a3 + 12) & 3,
                        *((_DWORD *)this - 308) == 0,
                        *((_DWORD *)this - 308)),
        v16) )
  {
    if ( a2 && !RmpImportanceIsValidForConfiguration(*(_DWORD *)a2, v6) )
    {
      v8 = -1073741585;
      goto LABEL_22;
    }
    if ( a3 )
    {
      v17 = *((_DWORD *)this + 23);
      v18 = *((_DWORD *)a3 + 12);
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
      {
        v19 = *(unsigned __int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 64LL);
        if ( v19 == ExecutionModel::ResourceSet::GetId )
          Id = ExecutionModel::ResourceSet::GetId(this);
        else
          Id = v19(this);
        v28 = Id;
        v46 = &v28;
        v48 = &v24;
        v50 = &v25;
        v31 = *((_QWORD *)this + 13);
        v52 = &v31;
        v32 = *((_QWORD *)a3 + 5);
        v54 = &v32;
        v33 = *(_QWORD *)a3;
        v56 = &v33;
        v47 = 8LL;
        v24 = v17;
        v49 = 4LL;
        v25 = v18;
        v51 = 4LL;
        v53 = 8LL;
        v55 = 8LL;
        v57 = 8LL;
        TlgWrite(v21, &unk_18004291B, v22, v23, 8u, &pData);
      }
      if ( (*(_BYTE *)a3 & 0x10) != 0 )
      {
        v7 = (const struct _TlgProvider_t *)(v18 & 3);
        if ( (v17 & 3) != (_DWORD)v7 )
        {
          *((_DWORD *)this + 23) &= 0xFFFFFFFC;
          *((_DWORD *)this + 23) |= (unsigned int)v7;
        }
      }
      if ( (*(_BYTE *)a3 & 0x40) != 0 && (((unsigned __int8)v17 ^ (unsigned __int8)v18) & 8) != 0 )
      {
        *((_DWORD *)this + 23) &= ~8u;
        *((_DWORD *)this + 23) |= v18 & 8;
      }
      if ( (*(_DWORD *)a3 & 0x100LL) != 0 )
        *((_QWORD *)this + 13) = *((_QWORD *)a3 + 5);
    }
    if ( a2 && *(_DWORD *)a2 != *((_DWORD *)this + 16) )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
      {
        v9 = *(unsigned __int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 64LL);
        if ( v9 == ExecutionModel::ResourceSet::GetId )
          v10 = ExecutionModel::ResourceSet::GetId(this);
        else
          v10 = v9(this);
        v29 = v10;
        v39 = &v29;
        v26 = *((_DWORD *)this + 16);
        v41 = &v26;
        v27 = *(_DWORD *)a2;
        v43 = &v27;
        v40 = 8LL;
        v42 = 4LL;
        v44 = 4LL;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_18004C038;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180042791 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_18004C038;
        v36 = &unk_18004279C;
        UserData.Reserved = 2;
        v37 = 77;
        v38 = 1;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
      }
      *((_DWORD *)this + 16) = *(_DWORD *)a2;
      if ( (*((_BYTE *)a2 + 1) & 1) != 0 )
        *((_DWORD *)this + 11) &= ~0x80u;
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)this
                                                                                 - 168));
      v11 = *(bool (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 88LL);
      if ( v11 == ExecutionModel::ResourceSet::IsApplied )
        IsApplied = ExecutionModel::ResourceSet::IsApplied(this);
      else
        IsApplied = v11(this);
      v13 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 4);
      if ( IsApplied )
      {
        v14 = 2;
LABEL_19:
        RmpActivityHostResourceSetsChanged(v13, v14);
        goto LABEL_20;
      }
      if ( v13 )
      {
        v14 = 1;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( *((_BYTE *)this - 1356) )
      RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 4));
    goto LABEL_22;
  }
  v8 = -1073741584;
LABEL_22:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v8 | 0x10000000u;
}
