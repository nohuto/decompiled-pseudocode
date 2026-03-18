/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C0185668
 * Callers:
 *     MonitorSerializeMonitor @ 0x1C0182A30 (MonitorSerializeMonitor.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00CA448 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3,
        __int64 a4)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // r9
  __int64 v17; // r8
  char *v18; // rdx
  char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r8
  unsigned __int8 *v23; // r9
  char *v24; // rdx
  DXGMONITOR *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r12
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + 38);
  v9 = 112LL;
  if ( v8 )
    v9 = 104LL * (unsigned int)(v8 - 1) + 112;
  v10 = *((_DWORD *)this + 50);
  v11 = 56LL;
  if ( v10 )
    v11 = 48LL * (unsigned int)(v10 - 1) + 56;
  v12 = *((_DWORD *)this + 28);
  if ( v12 )
    v13 = 140LL * (unsigned int)(v12 - 1) + 144;
  else
    v13 = 144LL;
  v14 = v13 + v11 + v9 + 40;
  if ( a3 && v14 <= *a2 )
  {
    *(_DWORD *)a3 = v14;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 7);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 27);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 94) != 1;
    *((_BYTE *)a3 + 13) = (*((_BYTE *)this + 24) & 8) != 0;
    *((_DWORD *)a3 + 4) = *((_DWORD *)this + 26);
    v15 = *((_QWORD *)this + 5);
    if ( v15 )
      LODWORD(v15) = *(_DWORD *)(*(_QWORD *)(v15 + 64) + 248LL);
    *((_DWORD *)a3 + 5) = v15;
    v16 = (char *)this + 160;
    v17 = 0LL;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 94);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 38);
    v18 = (char *)*((_QWORD *)this + 20);
    if ( v18 != (char *)this + 160 )
    {
      for ( v18 -= 96; v18; v17 = (unsigned int)(v17 + 1) )
      {
        v14 = 104LL * (unsigned int)v17;
        *(_DWORD *)((char *)a3 + v14 + 144) = *((_DWORD *)v18 + 28);
        *(_OWORD *)((char *)a3 + v14 + 48) = *(_OWORD *)v18;
        *(_OWORD *)((char *)a3 + v14 + 64) = *((_OWORD *)v18 + 1);
        *(_OWORD *)((char *)a3 + v14 + 80) = *((_OWORD *)v18 + 2);
        *(_OWORD *)((char *)a3 + v14 + 96) = *((_OWORD *)v18 + 3);
        *(_OWORD *)((char *)a3 + v14 + 112) = *((_OWORD *)v18 + 4);
        *(_OWORD *)((char *)a3 + v14 + 128) = *((_OWORD *)v18 + 5);
        v19 = (char *)*((_QWORD *)v18 + 12);
        if ( v19 == v16 )
          v18 = 0LL;
        else
          v18 = v19 - 96;
      }
    }
    *((_DWORD *)a3 + 6) = 40;
    if ( (_DWORD)v17 != *((_DWORD *)a3 + 10) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v14, v18, v17, v16);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = v9 + 40;
    v22 = 0LL;
    v23 = (unsigned __int8 *)a3 + v21;
    *((_BYTE *)a3 + v21) = *((_BYTE *)this + 200);
    v24 = (char *)*((_QWORD *)this + 26);
    if ( v24 != (char *)this + 208 )
    {
      for ( v24 -= 48; v24; v22 = (unsigned int)(v22 + 1) )
      {
        v14 = 6 * v22;
        *(_OWORD *)&v23[8 * v14 + 8] = *(_OWORD *)v24;
        *(_OWORD *)&v23[8 * v14 + 24] = *((_OWORD *)v24 + 1);
        *(_OWORD *)&v23[8 * v14 + 40] = *((_OWORD *)v24 + 2);
        v25 = (DXGMONITOR *)*((_QWORD *)v24 + 6);
        if ( v25 == (DXGMONITOR *)((char *)this + 208) )
          v24 = 0LL;
        else
          v24 = (char *)v25 - 48;
      }
    }
    *((_DWORD *)a3 + 7) = v21;
    if ( (_DWORD)v22 != *v23 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v14, v24, v22, v23);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = v11 + v21;
    v28 = 0LL;
    v29 = (char *)a3 + v27;
    for ( *((_BYTE *)a3 + v27) = *((_BYTE *)this + 112);
          (unsigned int)v28 < *((_DWORD *)this + 28);
          *(_OWORD *)&v29[v31 + 128] = *(_OWORD *)(v14 + 136) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v28) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v14, v24, v22, v23);
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = 140LL * (unsigned int)v28;
      *(_DWORD *)&v29[v31 + 4] = v28;
      *(_DWORD *)&v29[v31 + 8] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v28) + 12LL);
      ConvertMonitorCapablitiesOrigin(
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8 * v28) + 8LL),
        &v29[v31 + 12]);
      v14 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v28);
      v28 = (unsigned int)(v28 + 1);
      *(_OWORD *)&v29[v31 + 16] = *(_OWORD *)(v14 + 24);
      *(_OWORD *)&v29[v31 + 32] = *(_OWORD *)(v14 + 40);
      *(_OWORD *)&v29[v31 + 48] = *(_OWORD *)(v14 + 56);
      *(_OWORD *)&v29[v31 + 64] = *(_OWORD *)(v14 + 72);
      *(_OWORD *)&v29[v31 + 80] = *(_OWORD *)(v14 + 88);
      *(_OWORD *)&v29[v31 + 96] = *(_OWORD *)(v14 + 104);
      *(_OWORD *)&v29[v31 + 112] = *(_OWORD *)(v14 + 120);
    }
    *((_DWORD *)a3 + 8) = v27;
    return 0LL;
  }
  else
  {
    *a2 = v14;
    return 3221225507LL;
  }
}
