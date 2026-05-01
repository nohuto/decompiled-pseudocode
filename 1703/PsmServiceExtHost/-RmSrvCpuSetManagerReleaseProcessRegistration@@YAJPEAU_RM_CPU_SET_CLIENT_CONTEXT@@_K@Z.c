/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18002C54C
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x180029DD0 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800302FC (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180033AF0 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        unsigned __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  struct _RM_OBJECT_TABLE *v6; // rcx
  struct _RM_OBJECT_HEADER *v7; // rbx
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v13; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-49h] BYREF
  struct _RM_OBJECT_HEADER *v16; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  unsigned __int64 *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  unsigned __int64 *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+27h] BYREF

  v15 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v3, &unk_1800404EC, v4, v5, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = (struct _RM_OBJECT_TABLE *)(*(_QWORD *)a1 + 48LL);
  v14 = v15;
  if ( (int)RmpObjectTableFindObjectByHandle(v6, &v14, &v16) < 0 )
  {
    v7 = 0LL;
LABEL_6:
    v13 = -1073741584;
    goto LABEL_7;
  }
  v7 = v16;
  if ( !v16 || *((struct _RM_CPU_SET_CLIENT_CONTEXT **)v16 + 5) != a1 )
    goto LABEL_6;
  RmpCpuSetManagerReleaseProcessRegistrationEx(*(struct _RM_CPU_SET_MANAGER **)a1, v16, 1u);
  v13 = 0;
LABEL_7:
  if ( v7 )
    RmpObjectRelease(v7);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v13;
    LODWORD(v14) = *((_DWORD *)a1 + 14);
    v21 = &v14;
    v24 = &v15;
    v19 = 4;
    v22 = 4;
    v25 = 8;
    TlgWrite(v9, &unk_180040DD5, v10, v11, 5u, &v17);
  }
  return v13;
}
