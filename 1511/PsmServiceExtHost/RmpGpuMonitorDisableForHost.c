/*
 * XREFs of RmpGpuMonitorDisableForHost @ 0x1800467C4
 * Callers:
 *     RmpActivityHostOnGpuMonitoredResourceSetCountChange @ 0x180041108 (RmpActivityHostOnGpuMonitoredResourceSetCountChange.c)
 * Callees:
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180046348 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorDisableForHost(struct _RM_GPU_MONITOR *a1, __int64 a2)
{
  unsigned int *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  --*((_DWORD *)a1 + 10);
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v7 = *(_QWORD *)(a2 + 24);
    v14 = 0;
    v17 = 0;
    v10 = v7;
    v12 = &v10;
    v9 = v4[10];
    v15 = &v9;
    v13 = 8;
    v16 = 8;
    TlgWrite((TraceLoggingHProvider)v4, &unk_1800649F7, v5, v6, 4u, &pData);
  }
  v8 = *(_DWORD *)(a2 + 776);
  if ( (v8 & 8) != 0 )
  {
    *(_DWORD *)(a2 + 776) = v8 & 0xFFFFFFF7;
    RmpActivityHostCheckQueueWork(a2);
  }
  if ( !*((_DWORD *)a1 + 10) )
    RmpGpuMonitorDisable(a1);
}
