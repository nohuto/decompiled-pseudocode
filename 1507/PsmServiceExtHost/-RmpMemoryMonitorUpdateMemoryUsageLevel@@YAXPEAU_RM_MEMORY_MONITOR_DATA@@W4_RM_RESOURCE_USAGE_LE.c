/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003D9EC
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageLevel(__int64 a1, int a2)
{
  int v3; // ebx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  int v10; // [rsp+38h] [rbp-11h] BYREF
  int v11; // [rsp+3Ch] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  int *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      if ( (unsigned int)(a2 - 2) <= 1 )
        v3 = 2;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v3 != *(_DWORD *)(a1 + 100) )
  {
    v8 = v3;
    v11 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_LEVEL, 0LL, &v8, 4LL, 0LL);
    if ( (unsigned int)dword_1800690A0 > 5 )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = &v11;
        v9 = *(_DWORD *)(a1 + 100);
        v16 = &v9;
        v10 = v8;
        v19 = &v10;
        v14 = 4;
        v17 = 4;
        v20 = 4;
        TlgWrite(v5, &unk_18005BDB2, v6, v7, 5u, &pData);
      }
    }
    *(_DWORD *)(a1 + 100) = v3;
  }
}
