/*
 * XREFs of RmpCpuSetManagerAcquireCpuSetsForGameMode @ 0x180031210
 * Callers:
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031730 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSetsForGameMode(struct _RM_CPU_SET_CLIENT_CONTEXT *a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r8d
  __int64 v5; // rbx
  int v6; // edi
  const struct _TlgProvider_t *v7; // rcx
  struct _RM_CPU_SET_ALLOCATION *v8; // rdx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned __int16 v12; // [rsp+30h] [rbp-69h] BYREF
  _DWORD hProvider[3]; // [rsp+34h] [rbp-65h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v16; // [rsp+70h] [rbp-29h]
  const GUID *v17; // [rsp+78h] [rbp-21h]
  __int64 *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  _DWORD *v20; // [rsp+90h] [rbp-9h]
  const GUID *v21; // [rsp+98h] [rbp-1h]
  unsigned __int16 *v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]
  __int64 v24; // [rsp+B0h] [rbp+17h]
  int v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+BCh] [rbp+23h]

  v14 = -1LL;
  v2 = *(_QWORD *)a1;
  v3 = 512;
  v12 = 0;
  *(_QWORD *)&hProvider[1] = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( *(_DWORD *)(v2 + 952) < 0x200u )
    v3 = *(_DWORD *)(v2 + 952);
  hProvider[0] = RmpCpuSetManagerAcquireCpuSets(a1, (__int64)a2, v3, (unsigned __int8 **)&hProvider[1]);
  v7 = (const struct _TlgProvider_t *)hProvider[0];
  if ( hProvider[0] < 0 )
  {
    v8 = *(struct _RM_CPU_SET_ALLOCATION **)&hProvider[1];
  }
  else
  {
    v8 = 0LL;
    v5 = *(_QWORD *)&hProvider[1] + 112LL;
    v14 = **(_QWORD **)&hProvider[1];
    v6 = *(_DWORD *)(*(_QWORD *)&hProvider[1] + 272LL);
    *a2 = *(_QWORD *)&hProvider[1];
    v7 = 0LL;
    hProvider[0] = 0;
    v12 = 20;
  }
  if ( v8 )
  {
    RmpCpuSetManagerReleaseAllocationInternal((struct _RM_CPU_SET_MANAGER *)v2, v8, 0);
    v7 = (const struct _TlgProvider_t *)hProvider[0];
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
  {
    v17 = v9;
    v16 = hProvider;
    v18 = &v14;
    v20 = &hProvider[1];
    v22 = &v12;
    v25 = 8 * v12;
    v19 = 8LL;
    hProvider[1] = v6;
    v21 = v9;
    v23 = 2LL;
    v24 = v5;
    v26 = 0;
    TlgWrite(v7, &unk_180041142, v9, v10, 7u, &pData);
    LODWORD(v7) = hProvider[0];
  }
  return (unsigned int)v7;
}
