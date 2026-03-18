/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C01B38E4
 * Callers:
 *     MonitorSerializeMonitor @ 0x1C01B0A78 (MonitorSerializeMonitor.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00F2D00 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR *this,
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
  __int64 v14; // rax
  char *v15; // rdx
  unsigned int v16; // r8d
  DXGMONITOR *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int8 *v20; // r9
  char *v21; // rdx
  __int64 v22; // r8
  DXGMONITOR *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  char *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbx

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
    *((_BYTE *)a3 + 13) = (*((_BYTE *)this + 24) & 8) != 0;
    *((_DWORD *)a3 + 4) = *((_DWORD *)this + 26);
    v14 = *((_QWORD *)this + 5);
    if ( v14 )
      LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 284LL);
    *((_DWORD *)a3 + 5) = v14;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 94);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 38);
    v15 = (char *)*((_QWORD *)this + 20);
    if ( v15 == (char *)this + 160 )
    {
      v16 = 0;
    }
    else
    {
      if ( v15 )
        v15 -= 96;
      v16 = 0;
      while ( v15 )
      {
        v13 = 104LL * v16;
        *(_DWORD *)((char *)a3 + v13 + 144) = *((_DWORD *)v15 + 28);
        *(_OWORD *)((char *)a3 + v13 + 48) = *(_OWORD *)v15;
        *(_OWORD *)((char *)a3 + v13 + 64) = *((_OWORD *)v15 + 1);
        *(_OWORD *)((char *)a3 + v13 + 80) = *((_OWORD *)v15 + 2);
        *(_OWORD *)((char *)a3 + v13 + 96) = *((_OWORD *)v15 + 3);
        *(_OWORD *)((char *)a3 + v13 + 112) = *((_OWORD *)v15 + 4);
        *(_OWORD *)((char *)a3 + v13 + 128) = *((_OWORD *)v15 + 5);
        v17 = (DXGMONITOR *)*((_QWORD *)v15 + 12);
        if ( v17 == (DXGMONITOR *)((char *)this + 160) || !v17 )
          v15 = 0LL;
        else
          v15 = (char *)v17 - 96;
        ++v16;
      }
    }
    *((_DWORD *)a3 + 6) = 40;
    if ( v16 != *((_DWORD *)a3 + 10) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = v8 + 40;
    v20 = (unsigned __int8 *)a3 + v19;
    *((_BYTE *)a3 + v19) = *((_BYTE *)this + 200);
    v21 = (char *)*((_QWORD *)this + 26);
    if ( v21 == (char *)this + 208 )
    {
      LODWORD(v22) = 0;
    }
    else
    {
      if ( v21 )
        v21 -= 48;
      v22 = 0LL;
      while ( v21 )
      {
        v13 = 6 * v22;
        *(_OWORD *)&v20[8 * v13 + 8] = *(_OWORD *)v21;
        *(_OWORD *)&v20[8 * v13 + 24] = *((_OWORD *)v21 + 1);
        *(_OWORD *)&v20[8 * v13 + 40] = *((_OWORD *)v21 + 2);
        v23 = (DXGMONITOR *)*((_QWORD *)v21 + 6);
        if ( v23 == (DXGMONITOR *)((char *)this + 208) || !v23 )
          v21 = 0LL;
        else
          v21 = (char *)v23 - 48;
        v22 = (unsigned int)(v22 + 1);
      }
    }
    *((_DWORD *)a3 + 7) = v19;
    if ( (_DWORD)v22 != *v20 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v24);
    }
    v25 = v10 + v19;
    v26 = 0LL;
    v27 = (char *)a3 + v25;
    for ( *((_BYTE *)a3 + v25) = *((_BYTE *)this + 112);
          (unsigned int)v26 < *((_DWORD *)this + 28);
          *(_OWORD *)&v27[v29 + 128] = *(_OWORD *)(v13 + 136) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v26) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = 140LL * (unsigned int)v26;
      *(_DWORD *)&v27[v29 + 4] = v26;
      *(_DWORD *)&v27[v29 + 8] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v26) + 12LL);
      ConvertMonitorCapablitiesOrigin(
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v26) + 8LL),
        &v27[v29 + 12]);
      v13 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v26);
      v26 = (unsigned int)(v26 + 1);
      *(_OWORD *)&v27[v29 + 16] = *(_OWORD *)(v13 + 24);
      *(_OWORD *)&v27[v29 + 32] = *(_OWORD *)(v13 + 40);
      *(_OWORD *)&v27[v29 + 48] = *(_OWORD *)(v13 + 56);
      *(_OWORD *)&v27[v29 + 64] = *(_OWORD *)(v13 + 72);
      *(_OWORD *)&v27[v29 + 80] = *(_OWORD *)(v13 + 88);
      *(_OWORD *)&v27[v29 + 96] = *(_OWORD *)(v13 + 104);
      *(_OWORD *)&v27[v29 + 112] = *(_OWORD *)(v13 + 120);
    }
    *((_DWORD *)a3 + 8) = v25;
    return 0LL;
  }
  else
  {
    *a2 = v13;
    return 3221225507LL;
  }
}
