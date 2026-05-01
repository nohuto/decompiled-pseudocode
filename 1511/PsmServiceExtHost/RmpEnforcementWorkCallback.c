/*
 * XREFs of RmpEnforcementWorkCallback @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementUnoptimizeHost @ 0x1800046F8 (RmpEnforcementUnoptimizeHost.c)
 *     RmpPolicyComputeDesiredState @ 0x180009058 (RmpPolicyComputeDesiredState.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostPopulateMetricsArray @ 0x18001D5A4 (RmpActivityHostPopulateMetricsArray.c)
 *     RmpEnforcementOptimizeHost @ 0x18001DBB0 (RmpEnforcementOptimizeHost.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x1800411E4 (RmpActivityHostRemoveFromRemediationGroup.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180047338 (RmpEnforcementUpdateFreezeState.c)
 */

__int64 __fastcall RmpEnforcementWorkCallback(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  const struct _TlgProvider_t *v4; // rcx
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // rdx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned __int8 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR v14; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[40]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  char v18; // [rsp+94h] [rbp-6Ch]
  char v19; // [rsp+96h] [rbp-6Ah]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+BCh] [rbp-44h]
  __int64 *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  char *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+E0h] [rbp-20h] BYREF
  void *v29; // [rsp+F0h] [rbp-10h]
  int v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+FCh] [rbp-4h]
  __int64 *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  char *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]

  v13 = *(_QWORD *)(a2 + 24);
  v2 = (char *)(a2 + 780);
  RtlEnterCriticalSection(&RmpGlobalLock);
  *(_DWORD *)(a2 + 776) = *(_DWORD *)(a2 + 776) & 0xFFFFFFFC | 1;
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    v25 = 8LL;
    v24 = &v13;
    v26 = v2;
    v27 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180062BF0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v21 = &unk_180062BFB;
    UserData.Reserved = 2;
    v22 = 46;
    v23 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  while ( *(int *)(a2 + 20) >= 0 )
  {
    *v2 &= ~*(_BYTE *)(a2 + 782);
    *(_BYTE *)(a2 + 782) = 0;
    v12 = RmpPolicyComputeDesiredState(a2);
    v4 = (const struct _TlgProvider_t *)v12;
    if ( (v12 & 8) == 0 )
      goto LABEL_7;
    if ( *v2 >= 0 )
    {
      if ( (*v2 & 8) != 0 )
        goto LABEL_7;
      memset_0(v16, 0, 0x38uLL);
      v17 = a2;
      RmpActivityHostPopulateMetricsArray(v16, 1LL, 12LL);
      if ( (v19 & 0xC) != 0xC || (v18 & 1) == 0 )
      {
        v4 = (const struct _TlgProvider_t *)v12;
        goto LABEL_7;
      }
      v4 = (const struct _TlgProvider_t *)v12;
    }
    LOBYTE(v4) = (unsigned __int8)v4 | 0x80;
    v12 = (unsigned __int8)v4;
LABEL_7:
    if ( *v2 == (_BYTE)v4 )
      goto LABEL_8;
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v4, 1uLL) )
    {
      v38 = 8LL;
      v37 = &v13;
      v39 = &v12;
      v40 = v9;
      TlgWrite(v4, &unk_180062C2A, v10, v11, 4u, &pData);
      LOBYTE(v4) = v12;
    }
    if ( ((unsigned __int8)v4 & (unsigned __int8)*v2) == (_BYTE)v4 )
      RmpEnforcementUnoptimizeHost(
        (struct _RM_ACTIVITY_HOST *)a2,
        (struct _RM_ENFORCER_CONTEXT *)((char *)RmSvcGlobals + 48),
        *v2 & ~(_BYTE)v4);
    else
      RmpEnforcementOptimizeHost((struct _RM_ACTIVITY_HOST *)a2);
    RtlWakeAllConditionVariable(a2 + 760);
  }
  if ( !*(_DWORD *)(a2 + 40) && *(_DWORD *)(a2 + 584) == 4 && (*v2 & 0x40) != 0 )
    RmpEnforcementUpdateFreezeState((struct _RM_ACTIVITY_HOST *)a2);
LABEL_8:
  v5 = *(_QWORD *)(a2 + 896) == 0LL;
  *(_BYTE *)(a2 + 944) = 0;
  if ( !v5 )
    RmpActivityHostRemoveFromRemediationGroup((PVOID)a2);
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 && (qword_180071078 & 9) == qword_180071078 )
  {
    v33 = 8LL;
    v32 = &v13;
    v34 = v2;
    v35 = 1LL;
    *(_DWORD *)&v14.Level = 516;
    v28.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&v14.Id = ((unsigned int)&unk_1800628E9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v14.Keyword = 9LL;
    v28.Size = *(unsigned __int16 *)off_180071068;
    v29 = &unk_1800628F4;
    v28.Reserved = 2;
    v30 = 46;
    v31 = 1;
    EventWriteTransfer(RegHandle, &v14, 0LL, 0LL, 4u, &v28);
  }
  *(_DWORD *)(a2 + 776) &= ~1u;
  RtlWakeAllConditionVariable(a2 + 760);
  v6 = *((_QWORD *)RmSvcGlobals + 262);
  v7 = *(_DWORD *)(v6 + 280);
  if ( (v7 & 1) == 0 )
  {
    *(_DWORD *)(v6 + 280) = v7 | 1;
    SubmitThreadpoolWork(*(PTP_WORK *)(v6 + 264));
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return RmpObjectRelease((PVOID)a2);
}
