/*
 * XREFs of ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x18002C0E4
 * Callers:
 *     ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x180029D90 (-RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18001ECE0 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030250 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerCreateClientContext(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  struct _RM_CPU_SET_CLIENT_CONTEXT *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+30h] [rbp-49h] BYREF
  struct _RM_CPU_SET_CLIENT_CONTEXT *v16; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+40h] [rbp-39h] BYREF
  int *v18; // [rsp+60h] [rbp-19h]
  int v19; // [rsp+68h] [rbp-11h]
  int v20; // [rsp+6Ch] [rbp-Dh]
  struct _RM_CPU_SET_CLIENT_CONTEXT **v21; // [rsp+70h] [rbp-9h]
  int v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+17h] BYREF

  v16 = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v6, &unk_180040C02, v7, v8, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v15 = RmpCpuSetManagerCreateClientContext((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 648), a2, &v16);
  if ( v15 < 0 )
  {
    v9 = v16;
  }
  else
  {
    v9 = 0LL;
    v15 = 0;
    *a3 = v16;
  }
  if ( v9 )
    RmpCpuSetManagerReleaseClientContext(v9);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v15;
    v21 = &v16;
    v19 = 4;
    LODWORD(v16) = a2;
    v22 = 4;
    TlgWrite(v11, &unk_18004086E, v12, v13, 4u, &v17);
  }
  return (unsigned int)v15;
}
