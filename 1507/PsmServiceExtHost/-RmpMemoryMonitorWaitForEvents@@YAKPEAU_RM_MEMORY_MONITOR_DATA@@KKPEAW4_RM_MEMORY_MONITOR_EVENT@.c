/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18003DB08
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D5F4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D794 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18003C970 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(void **a1, int a2, DWORD a3, enum _RM_MEMORY_MONITOR_EVENT *a4)
{
  void **v4; // rbx
  __int64 v8; // rdi
  const struct _TlgProvider_t *v9; // rcx
  unsigned int v10; // edx
  _BYTE *v11; // rsi
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  DWORD v15; // eax
  const struct _TlgProvider_t *v16; // rcx
  unsigned int v17; // ebx
  const GUID *v18; // r8
  const GUID *v19; // r9
  const struct _TlgProvider_t *v20; // rcx
  DWORD v22; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v23[3]; // [rsp+34h] [rbp-85h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  DWORD *v25; // [rsp+60h] [rbp-59h]
  int v26; // [rsp+68h] [rbp-51h]
  int v27; // [rsp+6Ch] [rbp-4Dh]
  _DWORD *v28; // [rsp+70h] [rbp-49h]
  int v29; // [rsp+78h] [rbp-41h]
  int v30; // [rsp+7Ch] [rbp-3Dh]
  DWORD *v31; // [rsp+80h] [rbp-39h]
  int v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+8Ch] [rbp-2Dh]
  _DWORD v34[6]; // [rsp+90h] [rbp-29h] BYREF
  HANDLE Handles[6]; // [rsp+A8h] [rbp-11h] BYREF

  v4 = a1;
  v8 = 0LL;
  if ( !RmpMemoryMonitorCheckEvent(*a1) )
    *((_DWORD *)v4 + 24) &= ~1u;
  v10 = 0;
  v11 = v4 + 12;
  do
  {
    if ( _bittest(&a2, v10) && (v10 || (*v11 & 1) == 0) )
    {
      Handles[v8] = *v4;
      v34[v8] = v10;
      v8 = (unsigned int)(v8 + 1);
    }
    ++v10;
    ++v4;
  }
  while ( v10 < 6 );
  if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn(v9, 1uLL) )
  {
    v27 = 0;
    v30 = 0;
    v25 = v23;
    v28 = v34;
    v33 = 0;
    v29 = 4 * (unsigned __int16)v8;
    v31 = &v22;
    LOWORD(v23[0]) = v8;
    v26 = 2;
    v22 = a3;
    v32 = 4;
    TlgWrite(v12, &unk_18005BA06, v13, v14, 5u, &pData);
  }
  v15 = WaitForMultipleObjectsEx(v8, Handles, 0, a3, 0);
  if ( v15 >= 0x40 )
  {
    v17 = 258;
    if ( v15 != 258 )
    {
      v17 = 0;
      *(_DWORD *)a4 = v34[0];
    }
  }
  else
  {
    v17 = 0;
    v16 = (const struct _TlgProvider_t *)(unsigned int)v34[v15];
    *(_DWORD *)a4 = (_DWORD)v16;
    if ( !(_DWORD)v16 )
      *(_DWORD *)v11 |= 1u;
  }
  if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn(v16, 1uLL) )
  {
    v27 = 0;
    v20 = (const struct _TlgProvider_t *)*(unsigned int *)a4;
    v30 = 0;
    v25 = &v22;
    v28 = v23;
    v22 = v17;
    v26 = 4;
    v23[0] = (_DWORD)v20;
    v29 = 4;
    TlgWrite(v20, &unk_18005BD6D, v18, v19, 4u, &pData);
  }
  return v17;
}
