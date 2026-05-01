/*
 * XREFs of RmpActivityHostQueryCommit @ 0x18000AFD0
 * Callers:
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     RmpActivityHostDecommitOfferedMemory @ 0x18002EE78 (RmpActivityHostDecommitOfferedMemory.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180005C2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180007494 (RmpActivityHostQueryCommitDebt.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18000C890 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ecx
  unsigned __int64 v7; // r10
  union _RM_SID *v8; // r8
  unsigned int v9; // r11d
  const unsigned __int16 *v10; // rdx
  __int64 v11; // r9
  ModernResourceEnforcer *v12; // rcx
  __int64 (__fastcall *v13)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *); // rax
  int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  __int128 *v19; // rax
  __int64 v20; // rdx
  unsigned __int16 *v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // edx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // eax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  int v38; // eax
  __int128 v39; // xmm1
  __int64 v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 result; // rax
  const GUID *v45; // r8
  const GUID *v46; // r9
  __int64 FirstResourceSet; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  NTSTATUS InformationJobObject; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+68h] [rbp-98h] BYREF
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  const struct _TlgProvider_t *v57; // [rsp+80h] [rbp-80h] BYREF
  char *v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  _QWORD JobInformation[5]; // [rsp+A8h] [rbp-58h] BYREF
  char v62[464]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v63; // [rsp+2A0h] [rbp+1A0h]
  __int128 v64; // [rsp+2B0h] [rbp+1B0h]
  __int128 v65; // [rsp+2C0h] [rbp+1C0h]
  __int128 v66; // [rsp+2D0h] [rbp+1D0h]
  int v67; // [rsp+2E0h] [rbp+1E0h]
  int v68; // [rsp+2E4h] [rbp+1E4h]
  int v69; // [rsp+2E8h] [rbp+1E8h]
  __int64 v70; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v71; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+300h] [rbp+200h] BYREF
  void *v73; // [rsp+310h] [rbp+210h]
  int v74; // [rsp+318h] [rbp+218h]
  int v75; // [rsp+31Ch] [rbp+21Ch]
  __int64 *v76; // [rsp+320h] [rbp+220h]
  __int64 v77; // [rsp+328h] [rbp+228h]
  unsigned __int16 *v78; // [rsp+330h] [rbp+230h]
  int v79; // [rsp+338h] [rbp+238h]
  int v80; // [rsp+33Ch] [rbp+23Ch]
  int *v81; // [rsp+340h] [rbp+240h]
  __int64 v82; // [rsp+348h] [rbp+248h]
  char **v83; // [rsp+350h] [rbp+250h]
  __int64 v84; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v85; // [rsp+360h] [rbp+260h]
  __int64 v86; // [rsp+368h] [rbp+268h]
  const struct _TlgProvider_t **v87; // [rsp+370h] [rbp+270h]
  __int64 v88; // [rsp+378h] [rbp+278h]
  unsigned __int64 *v89; // [rsp+380h] [rbp+280h]
  __int64 v90; // [rsp+388h] [rbp+288h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+390h] [rbp+290h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+3B0h] [rbp+2B0h]
  __int64 v93; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v94; // [rsp+3C0h] [rbp+2C0h]
  __int64 v95; // [rsp+3C8h] [rbp+2C8h]
  int *v96; // [rsp+3D0h] [rbp+2D0h]
  __int64 v97; // [rsp+3D8h] [rbp+2D8h]

  v4 = *(_DWORD *)(a1 + 48);
  v55 = 0LL;
  v56 = 0LL;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = (union _RM_SID *)(a1 + 520);
    v9 = *(_DWORD *)(a1 + 592);
    v10 = (const unsigned __int16 *)(a1 + 56);
    v11 = *(unsigned int *)(a1 + 588);
    v12 = *(ModernResourceEnforcer **)(*(_QWORD *)(a1 + 40) + 72LL);
    v13 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v12 + 48LL);
    if ( v13 == ModernResourceEnforcer::QueryCurrentMemoryUsage )
      v14 = ModernResourceEnforcer::QueryCurrentMemoryUsage(v12, v10, v8, v11, v9, v7, &v55, &v56);
    else
      v14 = v13(v12, v10, v8, v11, v9, v7, &v55, &v56);
    LODWORD(v15) = v14;
    if ( v14 < 0 )
      return (unsigned int)v15;
    v16 = v55;
    v15 = (const struct _TlgProvider_t *)v56;
    goto LABEL_6;
  }
  if ( v4 != 1 )
    return 3221225711LL;
  InformationJobObject = NtQueryInformationJobObject(
                           *(HANDLE *)(a1 + 736),
                           MaxJobObjectInfoClass|0x10,
                           JobInformation,
                           0x28u,
                           0LL);
  LODWORD(v15) = InformationJobObject;
  if ( InformationJobObject >= 0 )
  {
    v16 = JobInformation[0];
    v15 = (const struct _TlgProvider_t *)JobInformation[2];
LABEL_6:
    v57 = v15;
    LODWORD(v15) = 0;
    v51 = v16;
    goto LABEL_7;
  }
  if ( (unsigned int)dword_18004C030 > 4
    && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
  {
    v93 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    v59 = *(_QWORD *)(a1 + 24);
    v94 = &v59;
    v53 = *(_DWORD *)(a1 + 56);
    v96 = &v53;
    v95 = 8LL;
    v97 = 4LL;
    TlgWrite(v15, &unk_1800434A1, v45, v46, 5u, &pData);
    LODWORD(v15) = InformationJobObject;
  }
LABEL_7:
  if ( (int)v15 < 0 )
    return (unsigned int)v15;
  if ( (*(_BYTE *)(a1 + 820) & 0x10) != 0 && (int)RmpActivityHostQueryCommitDebt(a1, &v52) >= 0 )
  {
    v17 = v52;
  }
  else
  {
    v17 = 0LL;
    v52 = 0LL;
  }
  if ( v17 >= v51 )
    v17 = v51;
  v18 = v51 - v17;
  if ( v51 && v18 <= 1 )
    v18 = 1LL;
  v58 = (char *)v57 + v18;
  if ( dword_18004C030 )
  {
    memset_0(v62, 0, 0x230uLL);
    if ( *(_DWORD *)(a1 + 48) )
    {
      FirstResourceSet = RmpActivityHostGetFirstResourceSet(a1, 1);
      if ( FirstResourceSet )
        StringCchCopyW(v62, v48, *(char **)(FirstResourceSet + 32));
      v49 = *(_QWORD *)(a1 + 40);
      v30 = v69;
      v63 = *(_OWORD *)(v49 + 3204);
      v64 = *(_OWORD *)(v49 + 3220);
      v65 = *(_OWORD *)(v49 + 3236);
      v66 = *(_OWORD *)(v49 + 3252);
      v67 = *(_DWORD *)(v49 + 3268);
      v70 = *(_QWORD *)(a1 + 24);
      v71 = *(_DWORD *)(a1 + 56);
    }
    else
    {
      v19 = (__int128 *)(a1 + 56);
      v20 = 3LL;
      v21 = (unsigned __int16 *)v62;
      do
      {
        v21 += 64;
        v22 = *v19;
        v23 = v19[1];
        v19 += 8;
        *((_OWORD *)v21 - 8) = v22;
        v24 = *(v19 - 6);
        *((_OWORD *)v21 - 7) = v23;
        v25 = *(v19 - 5);
        *((_OWORD *)v21 - 6) = v24;
        v26 = *(v19 - 4);
        *((_OWORD *)v21 - 5) = v25;
        v27 = *(v19 - 3);
        *((_OWORD *)v21 - 4) = v26;
        v28 = *(v19 - 2);
        *((_OWORD *)v21 - 3) = v27;
        v29 = *(v19 - 1);
        *((_OWORD *)v21 - 2) = v28;
        *((_OWORD *)v21 - 1) = v29;
        --v20;
      }
      while ( v20 );
      v30 = *(_DWORD *)(a1 + 592);
      v31 = v19[1];
      *(_OWORD *)v21 = *v19;
      v32 = v19[2];
      *((_OWORD *)v21 + 1) = v31;
      v33 = v19[3];
      *((_OWORD *)v21 + 2) = v32;
      v34 = v19[4];
      v35 = *(_DWORD *)(a1 + 584);
      *((_OWORD *)v21 + 3) = v33;
      v36 = *(_OWORD *)(a1 + 536);
      *((_OWORD *)v21 + 4) = v34;
      v67 = v35;
      v37 = *(_OWORD *)(a1 + 520);
      v38 = *(_DWORD *)(a1 + 588);
      v64 = v36;
      v39 = *(_OWORD *)(a1 + 568);
      v68 = v38;
      v40 = *(_QWORD *)(a1 + 600);
      v63 = v37;
      v41 = *(_OWORD *)(a1 + 552);
      v69 = v30;
      v66 = v39;
      v65 = v41;
      v70 = v40;
      v71 = 0;
    }
    if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
    {
      v77 = 8LL;
      v76 = &v70;
      v42 = -1LL;
      while ( *(_WORD *)&v62[2 * v42++ + 2] != 0 )
        ;
      v80 = 0;
      v78 = (unsigned __int16 *)v62;
      v79 = 2 * v42 + 2;
      v81 = &v54;
      v83 = &v58;
      v85 = &v51;
      v87 = &v57;
      v89 = &v52;
      v54 = v30;
      v82 = 4LL;
      v84 = 8LL;
      v86 = 8LL;
      v88 = 8LL;
      v90 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040F65 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      v73 = &unk_180040F70;
      UserData.Reserved = 2;
      v74 = 149;
      v75 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
  if ( a2 )
    *a2 = v18;
  result = 0LL;
  *a3 = v58;
  return result;
}
