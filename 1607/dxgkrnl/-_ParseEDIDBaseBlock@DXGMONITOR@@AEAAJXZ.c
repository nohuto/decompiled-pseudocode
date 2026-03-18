/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00EFF58
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000DBB0 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000F81C (EDIDV1_ObtainSupportedMonitorFrequencyRanges.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertFrequencyRange @ 0x1C00EEB58 (ConvertFrequencyRange.c)
 *     ConvertMonitorModeTimingType @ 0x1C00F2CA4 (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00F2D00 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C00F2D40 (ConvertVideoSignalInfo.c)
 *     MonitorLogBadEDID @ 0x1C01B07F8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this)
{
  int v1; // r13d
  unsigned __int16 *v3; // rsi
  _DWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  DXGMONITOR *v7; // rbp
  DXGMONITOR **v8; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int16 v14; // bx
  unsigned __int16 *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r15d
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rbx
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  int v36; // eax
  DXGMONITOR **v37; // rbx
  DXGMONITOR **v38; // rax
  DXGMONITOR **v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int16 v44; // bx
  unsigned int v45; // r15d
  _WORD *v46; // rax
  int v47; // eax
  int v48; // ebx
  _QWORD *v49; // rax
  _QWORD *v50; // rbp
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r12
  DXGMONITOR **v57; // rdx
  DXGMONITOR *v58; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int128 v72; // [rsp+30h] [rbp-58h]
  unsigned __int16 v73; // [rsp+90h] [rbp+8h] BYREF
  int v74; // [rsp+98h] [rbp+10h]

  LOBYTE(v1) = 0;
  v3 = 0LL;
  v74 = v1;
  v4 = 0LL;
  if ( !this[16] )
  {
    v60 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v60);
  }
  v5 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = this[16];
  WdLogEvent5_WdDmmEvent(v5);
  v7 = (DXGMONITOR *)(this + 20);
  if ( *(DXGMONITOR **)v7 != v7 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v61);
  }
  v8 = this[16];
  v73 = 0;
  v9 = EDIDV1_ObtainSupportedMonitorSourceModes(v8 + 3, *((_DWORD *)v8 + 2), &v73, 0LL, 0LL);
  v12 = v9;
  v13 = v9 + 0x80000000;
  if ( (int)v13 >= 0 && v9 != -2147483643 )
  {
    v62 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v62 + 24) = v12;
    WdLogEvent5_WdError(v62);
    return (unsigned int)v12;
  }
  v14 = v73;
  if ( v73 )
  {
    v15 = (unsigned __int16 *)operator new(56LL * (v73 - 1) + 60, 0x4D677844u, PagedPool);
    v3 = v15;
    if ( !v15 )
    {
      v64 = WdLogNewEntry5_WdError(v16);
      WdLogEvent5_WdError(v64);
      LODWORD(v12) = -1073741801;
      return (unsigned int)v12;
    }
    *v15 = v14;
    v17 = EDIDV1_ObtainSupportedMonitorSourceModes(
            this[16] + 3,
            *((_DWORD *)this[16] + 2),
            v15,
            v15 + 1,
            (struct _VideoModeDescriptor *)(v15 + 2));
    v12 = v17;
    if ( v17 < 0 )
      goto LABEL_46;
    v19 = 0;
    *(_QWORD *)&v72 = 0x800000008LL;
    for ( *((_QWORD *)&v72 + 1) = 8LL; v19 < *v3; ++v19 )
    {
      v20 = operator new(0x78uLL, 0x4D677844u, PagedPool);
      v22 = v20;
      if ( !v20 )
        goto LABEL_51;
      *v20 = (*((_DWORD *)this + 39))++;
      v23 = 28LL * v19;
      v24 = ConvertVideoSignalInfo(&v3[v23 + 2], v20 + 2);
      v29 = v24;
      if ( v24 < 0
        || (v22[16] = 2,
            *(_OWORD *)(v22 + 17) = v72,
            v30 = ConvertMonitorCapablitiesOrigin(HIBYTE(v3[v23 + 28]), v22 + 21),
            v29 = v30,
            v30 < 0) )
      {
        v66 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
        *(_QWORD *)(v66 + 24) = this[16] + 3;
        *(_QWORD *)(v66 + 32) = v29;
        WdLogEvent5_WdWarning(v66);
        v67 = (unsigned int)v29;
      }
      else
      {
        v31 = ConvertMonitorModeTimingType(LOBYTE(v3[v23 + 29]), v22 + 28);
        v35 = v31;
        if ( v31 >= 0 )
        {
          v1 = (unsigned __int8)v74;
          v36 = v3[1];
          if ( (unsigned int)(v22[28] - 1) <= 2 )
            v1 = 1;
          v74 = v1;
          if ( v36 == v19 )
          {
            if ( this[22] )
            {
              v69 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v69);
            }
            this[22] = (DXGMONITOR **)v22;
            v22[22] = 1;
          }
          else
          {
            v22[22] = 2;
          }
          ++*((_DWORD *)this + 38);
          v37 = (DXGMONITOR **)(v22 + 24);
          v38 = this[21];
          if ( *v38 != v7 )
            __fastfail(3u);
          *v37 = v7;
          v37[1] = (DXGMONITOR *)v38;
          *v38 = (DXGMONITOR *)v37;
          this[21] = v37;
          continue;
        }
        v68 = WdLogNewEntry5_WdWarning(0LL, v32, v33, v34);
        *(_QWORD *)(v68 + 24) = this[16] + 3;
        *(_QWORD *)(v68 + 32) = v35;
        WdLogEvent5_WdWarning(v68);
        v67 = (unsigned int)v35;
      }
      MonitorLogBadEDID(this[16] + 3, v67);
      operator delete(v22);
      LOBYTE(v1) = v74;
    }
  }
  else
  {
    v63 = WdLogNewEntry5_WdWarning(v13, 1LL, v10, v11);
    WdLogEvent5_WdWarning(v63);
  }
  v39 = this[16];
  v73 = 0;
  v40 = EDIDV1_ObtainSupportedMonitorFrequencyRanges(v39 + 3);
  v12 = v40;
  if ( v40 == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v18, v41, v42, v43);
    goto LABEL_32;
  }
  if ( ((v40 + 0x80000000) & 0x80000000) != 0 || v40 == -2147483643 )
  {
    v44 = v73;
    if ( !v73 )
      goto LABEL_32;
    v45 = v73;
    v46 = operator new(52LL * (v73 - 1) + 56, 0x4D677844u, PagedPool);
    v4 = v46;
    if ( !v46 )
    {
LABEL_51:
      v70 = WdLogNewEntry5_WdError(v21);
      WdLogEvent5_WdError(v70);
      LODWORD(v12) = -1073741801;
      goto LABEL_34;
    }
    *v46 = v44;
    v47 = EDIDV1_ObtainSupportedMonitorFrequencyRanges(this[16] + 3);
    v12 = v47;
    if ( v47 >= 0 )
    {
      v48 = 0;
      if ( v45 )
      {
        do
        {
          v49 = operator new(0x40uLL, 0x4D677844u, PagedPool);
          v50 = v49;
          if ( !v49 )
            goto LABEL_51;
          v51 = ConvertFrequencyRange(&v4[13 * v48 + 1], (__int64)v49);
          v56 = v51;
          if ( v51 < 0 )
          {
            v71 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
            *(_QWORD *)(v71 + 24) = this[16] + 3;
            *(_QWORD *)(v71 + 32) = v56;
            WdLogEvent5_WdWarning(v71);
            MonitorLogBadEDID(this[16] + 3, (unsigned int)v56);
            operator delete(v50);
          }
          else
          {
            v57 = this[27];
            v58 = (DXGMONITOR *)(v50 + 6);
            if ( *v57 != (DXGMONITOR *)(this + 26) )
              __fastfail(3u);
            *(_QWORD *)v58 = this + 26;
            v50[7] = v57;
            *v57 = v58;
            this[27] = (DXGMONITOR **)v58;
            ++*((_DWORD *)this + 50);
          }
        }
        while ( ++v48 < v45 );
      }
LABEL_32:
      if ( !(_BYTE)v1 && !*((_DWORD *)this + 50) )
        *((_DWORD *)this + 26) = 2;
      LODWORD(v12) = 0;
      goto LABEL_34;
    }
  }
LABEL_46:
  v65 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v65 + 24) = v12;
  WdLogEvent5_WdError(v65);
LABEL_34:
  if ( v3 )
    operator delete(v3);
  if ( v4 )
    operator delete(v4);
  return (unsigned int)v12;
}
