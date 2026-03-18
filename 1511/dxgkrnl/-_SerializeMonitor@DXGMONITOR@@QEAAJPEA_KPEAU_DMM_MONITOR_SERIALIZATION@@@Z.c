/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C0189E78
 * Callers:
 *     MonitorSerializeMonitor @ 0x1C01870E0 (MonitorSerializeMonitor.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E2184 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR **this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  DXGMONITOR *v14; // rax
  unsigned int v15; // r8d
  DXGMONITOR *v16; // rdx
  char *i; // rdx
  DXGMONITOR *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r8
  unsigned __int8 *v22; // r9
  DXGMONITOR *v23; // rdx
  char *j; // rdx
  DXGMONITOR *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r12
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_DWORD *)this + 38);
  v8 = 112LL;
  if ( v7 )
    v8 = 104LL * (unsigned int)(v7 - 1) + 112;
  v9 = *((_DWORD *)this + 50);
  v10 = 56LL;
  if ( v9 )
    v10 = 48LL * (unsigned int)(v9 - 1) + 56;
  v11 = *((_DWORD *)this + 28);
  if ( v11 )
    v12 = 140LL * (unsigned int)(v11 - 1) + 144;
  else
    v12 = 144LL;
  v13 = v12 + v10 + v8 + 40;
  if ( a3 && v13 <= *a2 )
  {
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 7);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 27);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 94) != 1;
    *((_BYTE *)a3 + 13) = ((_BYTE)this[3] & 8) != 0;
    *((_DWORD *)a3 + 4) = *((_DWORD *)this + 26);
    v14 = this[5];
    if ( v14 )
      LODWORD(v14) = *(_DWORD *)(*((_QWORD *)v14 + 8) + 284LL);
    *((_DWORD *)a3 + 5) = (_DWORD)v14;
    v15 = 0;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 94);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 38);
    v16 = this[20];
    if ( v16 != (DXGMONITOR *)(this + 20) )
    {
      for ( i = (char *)v16 - 96; i; ++v15 )
      {
        v13 = 104LL * v15;
        *(_DWORD *)((char *)a3 + v13 + 144) = *((_DWORD *)i + 28);
        *(_OWORD *)((char *)a3 + v13 + 48) = *(_OWORD *)i;
        *(_OWORD *)((char *)a3 + v13 + 64) = *((_OWORD *)i + 1);
        *(_OWORD *)((char *)a3 + v13 + 80) = *((_OWORD *)i + 2);
        *(_OWORD *)((char *)a3 + v13 + 96) = *((_OWORD *)i + 3);
        *(_OWORD *)((char *)a3 + v13 + 112) = *((_OWORD *)i + 4);
        *(_OWORD *)((char *)a3 + v13 + 128) = *((_OWORD *)i + 5);
        v18 = (DXGMONITOR *)*((_QWORD *)i + 12);
        if ( v18 == (DXGMONITOR *)(this + 20) )
          i = 0LL;
        else
          i = (char *)v18 - 96;
      }
    }
    *((_DWORD *)a3 + 6) = 40;
    if ( v15 != *((_DWORD *)a3 + 10) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = v8 + 40;
    v21 = 0LL;
    v22 = (unsigned __int8 *)a3 + v20;
    *((_BYTE *)a3 + v20) = *((_BYTE *)this + 200);
    v23 = this[26];
    if ( v23 != (DXGMONITOR *)(this + 26) )
    {
      for ( j = (char *)v23 - 48; j; v21 = (unsigned int)(v21 + 1) )
      {
        v13 = 6 * v21;
        *(_OWORD *)&v22[8 * v13 + 8] = *(_OWORD *)j;
        *(_OWORD *)&v22[8 * v13 + 24] = *((_OWORD *)j + 1);
        *(_OWORD *)&v22[8 * v13 + 40] = *((_OWORD *)j + 2);
        v25 = (DXGMONITOR *)*((_QWORD *)j + 6);
        if ( v25 == (DXGMONITOR *)(this + 26) )
          j = 0LL;
        else
          j = (char *)v25 - 48;
      }
    }
    *((_DWORD *)a3 + 7) = v20;
    if ( (_DWORD)v21 != *v22 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = v10 + v20;
    v28 = 0LL;
    v29 = (char *)a3 + v27;
    for ( *((_BYTE *)a3 + v27) = *((_BYTE *)this + 112);
          (unsigned int)v28 < *((_DWORD *)this + 28);
          *(_OWORD *)&v29[v31 + 128] = *(_OWORD *)(v13 + 136) )
    {
      if ( !*((_QWORD *)this[15] + v28) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = 140LL * (unsigned int)v28;
      *(_DWORD *)&v29[v31 + 4] = v28;
      *(_DWORD *)&v29[v31 + 8] = *(_DWORD *)(*((_QWORD *)this[15] + v28) + 12LL);
      ConvertMonitorCapablitiesOrigin(*(unsigned int *)(*((_QWORD *)this[15] + v28) + 8LL), &v29[v31 + 12]);
      v13 = *((_QWORD *)this[15] + v28);
      v28 = (unsigned int)(v28 + 1);
      *(_OWORD *)&v29[v31 + 16] = *(_OWORD *)(v13 + 24);
      *(_OWORD *)&v29[v31 + 32] = *(_OWORD *)(v13 + 40);
      *(_OWORD *)&v29[v31 + 48] = *(_OWORD *)(v13 + 56);
      *(_OWORD *)&v29[v31 + 64] = *(_OWORD *)(v13 + 72);
      *(_OWORD *)&v29[v31 + 80] = *(_OWORD *)(v13 + 88);
      *(_OWORD *)&v29[v31 + 96] = *(_OWORD *)(v13 + 104);
      *(_OWORD *)&v29[v31 + 112] = *(_OWORD *)(v13 + 120);
    }
    *((_DWORD *)a3 + 8) = v27;
    return 0LL;
  }
  else
  {
    *a2 = v13;
    return 3221225507LL;
  }
}
