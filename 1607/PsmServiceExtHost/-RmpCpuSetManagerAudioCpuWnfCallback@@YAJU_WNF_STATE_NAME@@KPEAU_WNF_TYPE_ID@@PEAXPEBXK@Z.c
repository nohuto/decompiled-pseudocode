/*
 * XREFs of ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800031C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18000352C (-RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpCpuSetManagerResetValidMask @ 0x18001DA50 (RmpCpuSetManagerResetValidMask.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAudioCpuWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5,
        unsigned int a6)
{
  int v6; // esi
  int v8; // edi
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  char *v14; // rdx
  int v15; // [rsp+38h] [rbp-19h] BYREF
  int v16; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v18; // [rsp+68h] [rbp+17h]
  int v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+74h] [rbp+23h]
  int *v21; // [rsp+78h] [rbp+27h]
  int v22; // [rsp+80h] [rbp+2Fh]
  int v23; // [rsp+84h] [rbp+33h]

  v6 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 3340LL) & 2) == 0 )
  {
    v6 = *((_DWORD *)a4 + 236);
    if ( v8 == v6 )
    {
      if ( v8 != -1 )
      {
        v14 = (char *)*((_QWORD *)a4 + 31);
        if ( v14 != a4 + 248 )
          RmpCpuSetManagerMarkAllocationDirty(
            (struct _RM_CPU_SET_MANAGER *)a4,
            (struct _RM_CPU_SET_ALLOCATION *)(v14 - 56));
      }
    }
    else
    {
      *((_DWORD *)a4 + 236) = v8;
      RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)a4);
    }
    RmpCpuSetManagerMarkAllocationDirty((struct _RM_CPU_SET_MANAGER *)a4, (struct _RM_CPU_SET_ALLOCATION *)(a4 + 360));
    RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)a4);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 1uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v15;
    v21 = &v16;
    v15 = v8;
    v19 = 4;
    v16 = v6;
    v22 = 4;
    TlgWrite(v10, &unk_1800412F4, v11, v12, 4u, &pData);
  }
  return 0LL;
}
