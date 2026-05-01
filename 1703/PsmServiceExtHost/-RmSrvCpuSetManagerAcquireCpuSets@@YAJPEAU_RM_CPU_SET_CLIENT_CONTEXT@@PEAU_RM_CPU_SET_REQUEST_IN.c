/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002BEE4
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x180029CF0 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800301B0 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  struct _RM_CPU_SET_ALLOCATION *v10; // rcx
  UCHAR v11; // dl
  TraceLoggingHProvider v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  int v14; // r8d
  int v15; // edx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v22; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  ULONG *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  ULONG *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  struct _RM_CPU_SET_ALLOCATION **v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF

  v20 = 0LL;
  v24 = -1LL;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v7, &unk_18004013E, v8, v9, 2u, &pData);
  RtlInitializeBitMap((PRTL_BITMAP)&pData, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 2 && RtlNumberOfSetBits((PRTL_BITMAP)&pData) <= *a2 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v19 = RmpCpuSetManagerAcquireCpuSets(a1, (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2, &v20);
    if ( v19 < 0 )
    {
      v10 = v20;
    }
    else
    {
      v24 = *((_QWORD *)v20 + 3);
      *a3 = v24;
      v10 = 0LL;
      v19 = 0;
    }
    if ( v10 )
      RmpCpuSetManagerReleaseAllocation(v10);
  }
  else
  {
    v19 = -1073741584;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( TraceLoggingProviderEnabled(v12, v11, 0LL)
    && (unsigned int)dword_18004D030 > 4
    && TlgKeywordOn(v13, (unsigned int)(v14 + 9)) )
  {
    v28 &= (unsigned int)v16;
    v31 &= (unsigned int)v16;
    v34 &= (unsigned int)v16;
    v37 &= (unsigned int)v16;
    v40 &= (unsigned int)v16;
    v43 &= (unsigned int)v16;
    v26 = &v19;
    v29 = &v24;
    v21 = *((_DWORD *)a1 + 14);
    v32 = &v21;
    v22 = a2[42];
    v35 = &v22;
    v23 = a2[43];
    v38 = &v23;
    LODWORD(v20) = *a2;
    v41 = &v20;
    v27 = 4;
    v30 = v15 - 1;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    v42 = 4;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v15 - 1), &unk_180040401, v16, v17, v15 - 1, &v25);
  }
  return (unsigned int)v19;
}
