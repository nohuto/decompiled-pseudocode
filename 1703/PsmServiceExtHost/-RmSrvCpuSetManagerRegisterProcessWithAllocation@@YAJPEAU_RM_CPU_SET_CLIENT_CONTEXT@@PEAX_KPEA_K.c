/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x18002C218
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x180029DA0 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18002F53C (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FFC8 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800302FC (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v4; // rdi
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  struct _RM_OBJECT_HEADER *v12; // rbx
  unsigned __int64 v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  int v15; // edx
  int v16; // ebx
  DWORD ProcessId; // eax
  TraceLoggingHProvider v18; // rcx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  __int64 *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  int *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  struct _RM_CPU_SET_PROCESS_REGISTRATION **v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  unsigned __int64 *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF

  v25 = -1LL;
  v4 = 0LL;
  v26 = a3;
  v23 = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v8, &unk_1800404B8, v9, v10, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  Allocation = RmpCpuSetManagerFindAllocation(*(struct _RM_CPU_SET_MANAGER **)a1, v26);
  v12 = Allocation;
  if ( Allocation && *((struct _RM_CPU_SET_CLIENT_CONTEXT **)Allocation + 6) == a1 && *((_DWORD *)Allocation + 64) )
  {
    v22 = RmpCpuSetManagerRegisterProcessWithAllocation(a1, a2, Allocation, &v23);
    if ( v22 >= 0 )
    {
      v13 = *((_QWORD *)v23 + 3);
      v22 = 0;
      v25 = v13;
      *a4 = v13;
      goto LABEL_13;
    }
    v4 = v23;
  }
  else
  {
    v22 = -1073741583;
  }
  if ( v4 )
    RmpCpuSetManagerReleaseProcessRegistrationEx(*(struct _RM_CPU_SET_MANAGER **)a1, v4, 1u);
LABEL_13:
  if ( v12 )
    RmpObjectRelease(v12);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v14, 9uLL) )
  {
    v30 = 0;
    v33 = 0;
    v16 = v15 - 1;
    v36 = 0;
    v28 = &v22;
    v31 = &v25;
    v24 = *((_DWORD *)a1 + 14);
    v34 = &v24;
    v29 = 4;
    v32 = v15 - 1;
    v35 = 4;
    ProcessId = GetProcessId(a2);
    v39 = 0;
    v42 = 0;
    LODWORD(v23) = ProcessId;
    v37 = &v23;
    v40 = &v26;
    v38 = 4;
    v41 = v16;
    TlgWrite(v18, &unk_18004051D, v19, v20, 7u, &v27);
  }
  return (unsigned int)v22;
}
