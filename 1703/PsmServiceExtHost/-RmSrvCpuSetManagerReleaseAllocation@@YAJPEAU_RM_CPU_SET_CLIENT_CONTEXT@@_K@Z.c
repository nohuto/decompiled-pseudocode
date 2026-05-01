/*
 * XREFs of ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18002C3FC
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z @ 0x180029DC0 (-RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18002F53C (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800301B0 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseAllocation(struct _RM_CPU_SET_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  struct _RM_OBJECT_HEADER *v7; // rbx
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-39h] BYREF
  unsigned int *v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  int *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+27h] BYREF

  v15 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v3, &unk_180040AE8, v4, v5, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  Allocation = RmpCpuSetManagerFindAllocation(*(struct _RM_CPU_SET_MANAGER **)a1, v15);
  v7 = Allocation;
  if ( Allocation && *((struct _RM_CPU_SET_CLIENT_CONTEXT **)Allocation + 6) == a1 )
  {
    RmpCpuSetManagerReleaseAllocation(Allocation);
    v13 = 0;
  }
  else
  {
    v13 = -1073741584;
  }
  if ( v7 )
    RmpObjectRelease(v7);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v13;
    v14 = *((_DWORD *)a1 + 14);
    v20 = &v14;
    v23 = &v15;
    v18 = 4;
    v21 = 4;
    v24 = 8;
    TlgWrite(v9, &unk_1800407EA, v10, v11, 5u, &v16);
  }
  return v13;
}
