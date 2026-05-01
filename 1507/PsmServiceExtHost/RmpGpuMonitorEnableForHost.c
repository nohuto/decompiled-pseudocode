/*
 * XREFs of RmpGpuMonitorEnableForHost @ 0x180041C80
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18004177C (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     RmpActivityHostQueryGpuInterferenceCounter @ 0x1800422E0 (RmpActivityHostQueryGpuInterferenceCounter.c)
 */

void __fastcall RmpGpuMonitorEnableForHost(struct _RM_GPU_MONITOR *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+38h] [rbp-21h] BYREF
  __int64 v11; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  int *v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]

  v4 = RmpActivityHostQueryGpuInterferenceCounter(a2, &v9);
  v5 = v9;
  if ( v4 < 0 )
    v5 = 0LL;
  *(_QWORD *)(a2 + 736) = v5;
  ++*((_DWORD *)a1 + 10);
  v9 = v5;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)*((unsigned int *)a1 + 10), 1uLL) )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v13 = &v11;
    v15 = &v9;
    v17 = &v10;
    v14 = 8LL;
    v16 = 8LL;
    v10 = (int)v6;
    v18 = 4LL;
    TlgWrite(v6, &unk_18005CAA6, v7, v8, 5u, &pData);
  }
  if ( (*((_BYTE *)a1 + 52) & 1) == 0 )
    RmpGpuMonitorEnable(a1);
}
