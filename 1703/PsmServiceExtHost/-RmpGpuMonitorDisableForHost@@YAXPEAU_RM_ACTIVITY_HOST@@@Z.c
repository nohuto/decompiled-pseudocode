/*
 * XREFs of ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035710
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800356B0 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorDisableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+6Ch] [rbp-3Ch]
  __int64 *v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]

  v1 = *((_QWORD *)a1 + 5);
  *((_BYTE *)a1 + 724) &= ~2u;
  --*(_DWORD *)(v1 + 120);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v6 = *((_QWORD *)v3 + 3);
    v13 = 0;
    v16 = 0;
    v8 = v6;
    v11 = &v8;
    v9 = *(unsigned int *)(v1 + 120);
    v14 = &v9;
    v12 = 8;
    v15 = 8;
    TlgWrite(v3, &unk_1800435C8, v4, v5, 4u, &pData);
  }
  v7 = *((_DWORD *)a1 + 204);
  if ( (v7 & 8) != 0 )
  {
    *((_DWORD *)a1 + 204) = v7 & 0xFFFFFFF7;
    RmpActivityHostCheckQueueWork(a1);
  }
  if ( !*(_DWORD *)(v1 + 120) && (*(_BYTE *)(v1 + 132) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_GPU_MONITOR *)(v1 + 88));
}
