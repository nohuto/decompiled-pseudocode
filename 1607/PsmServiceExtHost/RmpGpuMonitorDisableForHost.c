/*
 * XREFs of RmpGpuMonitorDisableForHost @ 0x180034EFC
 * Callers:
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180034AF4 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorDisableForHost(__int64 a1)
{
  __int64 v1; // rbx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 724) &= ~2u;
  --*(_DWORD *)(v1 + 136);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
  {
    v6 = *((_QWORD *)v3 + 3);
    v13 = 0;
    v16 = 0;
    v8 = v6;
    v11 = &v8;
    v9 = *(unsigned int *)(v1 + 136);
    v14 = &v9;
    v12 = 8;
    v15 = 8;
    TlgWrite(v3, &unk_180042400, v4, v5, 4u, &pData);
  }
  v7 = *(_DWORD *)(a1 + 816);
  if ( (v7 & 8) != 0 )
  {
    *(_DWORD *)(a1 + 816) = v7 & 0xFFFFFFF7;
    RmpActivityHostCheckQueueWork(a1);
  }
  if ( !*(_DWORD *)(v1 + 136) && (*(_BYTE *)(v1 + 148) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_GPU_MONITOR *)(v1 + 104));
}
