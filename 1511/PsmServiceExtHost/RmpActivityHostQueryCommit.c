/*
 * XREFs of RmpActivityHostQueryCommit @ 0x180015DC0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostPopulateMetricsArray @ 0x18001D5A4 (RmpActivityHostPopulateMetricsArray.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180042258 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     RmpActivityHostQueryCommitDebt @ 0x180005A94 (RmpActivityHostQueryCommitDebt.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180017520 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

int __fastcall RmpActivityHostQueryCommit(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int v5; // ecx
  unsigned int v7; // ecx
  unsigned __int64 v8; // r12
  ModernResourceEnforcer *v9; // rdi
  unsigned int v10; // r13d
  __int64 (__fastcall *v11)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *); // r14
  bool v12; // zf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  const struct _TlgProvider_t *v19; // rcx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-70h] BYREF
  _QWORD JobInformation[6]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  void *v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-18h]
  int v39; // [rsp+F4h] [rbp-14h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  __int64 *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  __int64 *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]

  v5 = *(_DWORD *)(a1 + 40);
  v25 = 0LL;
  v26 = 0LL;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      LODWORD(v27) = NtQueryInformationJobObject(
                       *(HANDLE *)(a1 + 712),
                       MaxJobObjectInfoClass|0x10,
                       JobInformation,
                       0x28u,
                       0LL);
      if ( (int)v27 >= 0 )
      {
        v25 = JobInformation[0];
        v26 = JobInformation[2];
      }
      else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v19, 1uLL) )
      {
        v52 = 4LL;
        v51 = &v27;
        v33 = *(_QWORD *)(a1 + 24);
        v53 = &v33;
        LODWORD(v24) = *(_DWORD *)(a1 + 48);
        v55 = &v24;
        v54 = 8LL;
        v56 = 4LL;
        TlgWrite(v20, &unk_180064EBE, v21, v22, 5u, &pData);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 580);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = (ModernResourceEnforcer *)*((_QWORD *)RmSvcGlobals + 10);
    v10 = *(_DWORD *)(a1 + 584);
    LODWORD(v24) = v7;
    v11 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v9 + 48LL);
    if ( v11 == ModernResourceEnforcer::QueryCurrentMemoryUsage )
      ModernResourceEnforcer::QueryCurrentMemoryUsage(
        v9,
        (const unsigned __int16 *)(a1 + 48),
        (union _RM_SID *)(a1 + 512),
        v7,
        v10,
        v8,
        &v25,
        &v26);
    else
      v11(v9, (const unsigned __int16 *)(a1 + 48), (union _RM_SID *)(a1 + 512), v24, v10, v8, &v25, &v26);
  }
  v12 = (*(_BYTE *)(a1 + 780) & 0x10) == 0;
  v13 = 0LL;
  v14 = v25;
  v15 = v26;
  v30 = v25;
  v29 = v26;
  v28 = 0LL;
  if ( !v12 )
  {
    RmpActivityHostQueryCommitDebt(a1, &v28);
    v15 = v29;
    v14 = v30;
    v13 = v28;
  }
  v16 = v14;
  if ( v13 < v14 )
    v16 = v13;
  v17 = v14 - v16;
  if ( v14 && v17 <= 1 )
    v17 = 1LL;
  v18 = v17 + v15;
  v31 = v17 + v15;
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 )
  {
    v16 = qword_180071078 & 1;
    if ( v16 == qword_180071078 )
    {
      v32 = *(_QWORD *)(a1 + 24);
      v40 = &v32;
      v42 = &v31;
      v44 = &v30;
      v46 = &v29;
      v48 = &v28;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180062FFF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v37 = &unk_18006300A;
      UserData.Reserved = 2;
      v38 = 129;
      v39 = 1;
      LODWORD(v16) = EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
      v18 = v31;
    }
  }
  if ( a2 )
    *a2 = v17;
  *a3 = v18;
  return v16;
}
