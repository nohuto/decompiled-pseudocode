/*
 * XREFs of ?RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180006C34
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001BCCC (-RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18000AE30 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemQueryActivityHostRawCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        const struct _TlgProvider_t **a3)
{
  int v5; // ecx
  const struct _TlgProvider_t *v7; // rcx
  unsigned __int64 v8; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  NTSTATUS InformationJobObject; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-59h] BYREF
  _QWORD JobInformation[5]; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-29h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+A0h] [rbp-9h]
  int v18; // [rsp+A8h] [rbp-1h]
  int v19; // [rsp+ACh] [rbp+3h]
  unsigned __int64 *v20; // [rsp+B0h] [rbp+7h]
  int v21; // [rsp+B8h] [rbp+Fh]
  int v22; // [rsp+BCh] [rbp+13h]
  unsigned __int64 *v23; // [rsp+C0h] [rbp+17h]
  int v24; // [rsp+C8h] [rbp+1Fh]
  int v25; // [rsp+CCh] [rbp+23h]

  v13 = 0LL;
  v14 = 0LL;
  v5 = *((_DWORD *)a1 + 14);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      LODWORD(v7) = -1073741585;
      return (unsigned int)v7;
    }
    InformationJobObject = NtQueryInformationJobObject(
                             *((HANDLE *)a1 + 92),
                             MaxJobObjectInfoClass|0x10,
                             JobInformation,
                             0x28u,
                             0LL);
    LODWORD(v7) = InformationJobObject;
    if ( InformationJobObject >= 0 )
    {
      v8 = JobInformation[0];
      v7 = (const struct _TlgProvider_t *)JobInformation[2];
      goto LABEL_4;
    }
    if ( (unsigned int)dword_18004D030 > 4
      && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      p_InformationJobObject = &InformationJobObject;
      v14 = *((_QWORD *)a1 + 3);
      v20 = &v14;
      LODWORD(v13) = *((_DWORD *)a1 + 16);
      v23 = &v13;
      v18 = (int)v10;
      v21 = 8;
      v24 = (int)v10;
      TlgWrite(v7, &unk_18004428B, v10, v11, 5u, &pData);
      LODWORD(v7) = InformationJobObject;
    }
  }
  else
  {
    LODWORD(v7) = ModernResourceEnforcer::QueryCurrentMemoryUsage(
                    *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 5) + 56LL),
                    (const unsigned __int16 *)a1 + 32,
                    (struct _RM_ACTIVITY_HOST *)((char *)a1 + 528),
                    *((_DWORD *)a1 + 149),
                    *((_DWORD *)a1 + 150),
                    *((_QWORD *)a1 + 3),
                    &v13,
                    &v14);
    if ( (int)v7 >= 0 )
    {
      v8 = v13;
      v7 = (const struct _TlgProvider_t *)v14;
LABEL_4:
      *a2 = v8;
      *a3 = v7;
      LODWORD(v7) = 0;
    }
  }
  return (unsigned int)v7;
}
