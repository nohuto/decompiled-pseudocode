/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C00F1118
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C00F1040 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C00F10C0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C01B2844 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(DXGMONITOR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near **v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // r9d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  int v20; // [rsp+40h] [rbp-31h]
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v21; // [rsp+48h] [rbp-29h]
  unsigned int *v22; // [rsp+50h] [rbp-21h]
  int v23; // [rsp+58h] [rbp-19h]
  unsigned int *v24; // [rsp+60h] [rbp-11h]
  int v25; // [rsp+68h] [rbp-9h]
  __int64 v26; // [rsp+70h] [rbp-1h]
  int v27; // [rsp+78h] [rbp+7h]
  _BYTE v28[40]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v29; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = &DXGMONITOR::_MonitorConfigInfoTable;
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v10 = *v4;
    v19 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v21 = v10;
    v22 = &v29;
    v24 = &v29;
    v29 = v9;
    v20 = 288;
    v23 = 67108868;
    v25 = 4;
    memset(v28, 0, sizeof(v28));
    v11 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v19, 0LL, 0LL);
    v13 = v11;
    if ( v11 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v18[3] = v5;
      v18[4] = *((unsigned int *)this + 7);
      v18[5] = v13;
      goto LABEL_11;
    }
    if ( !((unsigned __int8 (__fastcall *)(DXGMONITOR *, _QWORD))v4[2])(this, v29) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v18[3] = v29;
      v18[4] = v5;
      v18[5] = *((unsigned int *)this + 7);
LABEL_11:
      WdLogEvent5_WdError(v18);
      goto LABEL_5;
    }
    v15 = *((int *)v4 + 3);
    if ( *(_DWORD *)((char *)this + v15) != v29 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15);
      v17[3] = v29;
      v17[4] = v5;
      v17[5] = *((unsigned int *)this + 7);
      WdLogEvent5_WdDmmEvent(v17);
      *(_DWORD *)((char *)this + *((int *)v4 + 3)) = v29;
      if ( a3 )
        DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
    }
LABEL_5:
    ++v3;
    ++v5;
    v4 += 3;
  }
  while ( v3 < 2 );
  return 0LL;
}
