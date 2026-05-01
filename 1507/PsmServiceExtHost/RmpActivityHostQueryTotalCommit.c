/*
 * XREFs of RmpActivityHostQueryTotalCommit @ 0x180006290
 * Callers:
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003CE40 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z @ 0x18000C130 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall RmpActivityHostQueryTotalCommit(__int64 a1, const struct _TlgProvider_t **a2)
{
  int v3; // ecx
  const unsigned __int16 *v5; // rcx
  unsigned __int64 v6; // r14
  union _RM_SID *v7; // r13
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  ModernResourceEnforcer *v10; // rdi
  int (*v11)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *); // rbx
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned __int64 v16; // [rsp+40h] [rbp-99h] BYREF
  __int64 v17; // [rsp+48h] [rbp-91h] BYREF
  _QWORD JobInformation[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v19; // [rsp+60h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-59h] BYREF
  __int64 *v21; // [rsp+A0h] [rbp-39h]
  __int64 v22; // [rsp+A8h] [rbp-31h]
  __int64 v23; // [rsp+B0h] [rbp-29h]
  __int64 v24; // [rsp+B8h] [rbp-21h]
  unsigned __int64 *v25; // [rsp+C0h] [rbp-19h]
  __int64 v26; // [rsp+C8h] [rbp-11h]
  _QWORD *v27; // [rsp+D0h] [rbp-9h]
  __int64 v28; // [rsp+D8h] [rbp-1h]
  __int64 *v29; // [rsp+E0h] [rbp+7h]
  __int64 v30; // [rsp+E8h] [rbp+Fh]

  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 )
  {
    if ( v3 == 1
      && NtQueryInformationJobObject(*(HANDLE *)(a1 + 704), MaxJobObjectInfoClass|0x10, JobInformation, 0x28u, 0LL) >= 0 )
    {
      v13 = (const struct _TlgProvider_t *)(JobInformation[0] + v19);
      v16 = JobInformation[0] + v19;
      if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v13, 1uLL) )
      {
        LODWORD(v17) = *(_DWORD *)(a1 + 48);
        v21 = &v17;
        v23 = a1 + 24;
        v25 = &v16;
        v27 = JobInformation;
        v29 = &v19;
        v22 = 4LL;
        v24 = 8LL;
        v26 = 8LL;
        v28 = 8LL;
        v30 = 8LL;
        TlgWrite(v13, &unk_18005CD8C, v14, v15, 7u, &pData);
        v13 = (const struct _TlgProvider_t *)v16;
      }
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v5 = (const unsigned __int16 *)(a1 + 48);
    v6 = *(_QWORD *)(a1 + 24);
    v7 = (union _RM_SID *)(a1 + 512);
    v8 = *(_DWORD *)(a1 + 584);
    v9 = *(_DWORD *)(a1 + 580);
    v10 = (ModernResourceEnforcer *)*((_QWORD *)RmSvcGlobals + 10);
    v17 = a1 + 48;
    v11 = *(int (**)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *))(*(_QWORD *)v10 + 48LL);
    if ( v11 == ModernResourceEnforcer::QueryCurrentMemoryUsage )
      v12 = ModernResourceEnforcer::QueryCurrentMemoryUsage(v10, v5, v7, v9, v8, v6, &v16);
    else
      v12 = ((__int64 (__fastcall *)(ModernResourceEnforcer *, __int64, union _RM_SID *, _QWORD, unsigned int, unsigned __int64, unsigned __int64 *))v11)(
              v10,
              v17,
              v7,
              v9,
              v8,
              v6,
              &v16);
    v13 = (const struct _TlgProvider_t *)v16;
    if ( v12 < 0 )
      v13 = 0LL;
  }
  *a2 = v13;
}
