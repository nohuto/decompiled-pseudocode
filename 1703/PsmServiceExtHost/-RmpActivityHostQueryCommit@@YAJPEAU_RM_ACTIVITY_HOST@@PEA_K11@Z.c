/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     RmpTracingControlCallback @ 0x180020320 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18002E330 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002E9A8 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180006C34 (-RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v22[268]; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+288h] [rbp+188h]
  char v24; // [rsp+290h] [rbp+190h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v26; // [rsp+2B0h] [rbp+1B0h]
  int v27; // [rsp+2B8h] [rbp+1B8h]
  int v28; // [rsp+2BCh] [rbp+1BCh]
  char *v29; // [rsp+2C0h] [rbp+1C0h]
  __int64 v30; // [rsp+2C8h] [rbp+1C8h]
  _WORD *v31; // [rsp+2D0h] [rbp+1D0h]
  int v32; // [rsp+2D8h] [rbp+1D8h]
  int v33; // [rsp+2DCh] [rbp+1DCh]
  int *v34; // [rsp+2E0h] [rbp+1E0h]
  __int64 v35; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 *v36; // [rsp+2F0h] [rbp+1F0h]
  __int64 v37; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 *v38; // [rsp+300h] [rbp+200h]
  __int64 v39; // [rsp+308h] [rbp+208h]
  unsigned __int64 *v40; // [rsp+310h] [rbp+210h]
  __int64 v41; // [rsp+318h] [rbp+218h]
  unsigned __int64 *v42; // [rsp+320h] [rbp+220h]
  __int64 v43; // [rsp+328h] [rbp+228h]

  result = RmpSystemQueryActivityHostRawCommit(a1, &v19, (const struct _TlgProvider_t **)&v18);
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 820) & 0x10) != 0 && (int)RmpActivityHostQueryCommitDebt(a1, &v16) >= 0 )
    {
      v9 = v16;
    }
    else
    {
      v9 = 0LL;
      v16 = 0LL;
    }
    v10 = v19;
    if ( v9 >= v19 )
      v9 = v19;
    v11 = v19 - v9;
    if ( v19 && v11 <= 1 )
      v11 = 1LL;
    v12 = v18;
    v13 = v11 + v18;
    v20 = v11 + v18;
    if ( dword_18004D030 )
    {
      RmpActivityHostGetTracingId(a1, (struct _RM_ACTIVITY_HOST_TRACING_ID *)v22);
      if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
      {
        v30 = 8LL;
        v29 = &v24;
        v14 = -1LL;
        while ( v22[++v14] != 0 )
          ;
        v33 = 0;
        v31 = v22;
        v17 = v23;
        v34 = &v17;
        v36 = &v20;
        v38 = &v19;
        v40 = &v18;
        v42 = &v16;
        v32 = 2 * v14 + 2;
        v35 = 4LL;
        v37 = 8LL;
        v39 = 8LL;
        v41 = 8LL;
        v43 = 8LL;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_18004D038;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041C4E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_18004D038;
        v26 = &unk_180041C59;
        UserData.Reserved = 2;
        v27 = 149;
        v28 = 1;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
      v12 = v18;
      v10 = v19;
      v13 = v20;
    }
    if ( a2 )
      *a2 = v11;
    if ( a3 )
      *a3 = v10 + v12;
    result = 0LL;
    *a4 = v13;
  }
  return result;
}
