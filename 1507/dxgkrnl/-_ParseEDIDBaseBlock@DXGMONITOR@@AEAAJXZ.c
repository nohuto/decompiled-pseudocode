/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00C83D8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000B958 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000D644 (EDIDV1_ObtainSupportedMonitorFrequencyRanges.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertMonitorModeTimingType @ 0x1C00CA3EC (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00CA448 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C00CA488 (ConvertVideoSignalInfo.c)
 *     ConvertFrequencyRange @ 0x1C00DD3A0 (ConvertFrequencyRange.c)
 *     MonitorLogBadEDID @ 0x1C01827DC (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int16 *v6; // rsi
  char *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGMONITOR *v13; // rbp
  DXGMONITOR **v14; // rax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int16 v20; // bx
  unsigned __int16 *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  _DWORD *v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rbx
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r13
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  int v42; // eax
  DXGMONITOR **v43; // rbx
  DXGMONITOR **v44; // rax
  DXGMONITOR **v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int16 v50; // bx
  unsigned int v51; // r15d
  char *v52; // rax
  int v53; // eax
  int v54; // ebx
  _QWORD *v55; // rax
  _QWORD *v56; // rbp
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r12
  DXGMONITOR **v63; // rdx
  DXGMONITOR *v64; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int128 v78; // [rsp+30h] [rbp-58h]
  unsigned __int16 v79; // [rsp+90h] [rbp+8h] BYREF
  int v80; // [rsp+98h] [rbp+10h]

  LOBYTE(v4) = 0;
  v6 = 0LL;
  v80 = v4;
  v7 = 0LL;
  if ( !this[16] )
  {
    v66 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v66);
  }
  v8 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = this[16];
  WdLogEvent5_WdDmmEvent(v8);
  v13 = (DXGMONITOR *)(this + 20);
  if ( *(DXGMONITOR **)v13 != v13 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v67);
  }
  v14 = this[16];
  v79 = 0;
  v15 = EDIDV1_ObtainSupportedMonitorSourceModes(v14 + 3, *((_DWORD *)v14 + 2), &v79, 0LL, 0LL);
  v18 = v15;
  v19 = v15 + 0x80000000;
  if ( (int)v19 >= 0 && v15 != -2147483643 )
  {
    v68 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v68 + 24) = v18;
    WdLogEvent5_WdError(v68);
    return (unsigned int)v18;
  }
  v20 = v79;
  if ( v79 )
  {
    v21 = (unsigned __int16 *)operator new[](56LL * (v79 - 1) + 60, 0x4D677844u, PagedPool);
    v6 = v21;
    if ( !v21 )
    {
      v70 = WdLogNewEntry5_WdError(v22);
      WdLogEvent5_WdError(v70);
      LODWORD(v18) = -1073741801;
      return (unsigned int)v18;
    }
    *v21 = v20;
    v23 = EDIDV1_ObtainSupportedMonitorSourceModes(
            this[16] + 3,
            *((_DWORD *)this[16] + 2),
            v21,
            v21 + 1,
            (struct _VideoModeDescriptor *)(v21 + 2));
    v18 = v23;
    if ( v23 < 0 )
      goto LABEL_52;
    v25 = 0;
    *(_QWORD *)&v78 = 0x800000008LL;
    for ( *((_QWORD *)&v78 + 1) = 8LL; v25 < *v6; ++v25 )
    {
      v26 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v28 = v26;
      if ( !v26 )
        goto LABEL_55;
      *v26 = (*((_DWORD *)this + 39))++;
      v29 = 28LL * v25;
      v30 = ConvertVideoSignalInfo(&v6[v29 + 2], v26 + 2);
      v35 = v30;
      if ( v30 < 0
        || (v28[16] = 2,
            *(_OWORD *)(v28 + 17) = v78,
            v36 = ConvertMonitorCapablitiesOrigin(HIBYTE(v6[v29 + 28]), v28 + 21),
            v35 = v36,
            v36 < 0) )
      {
        v71 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
        *(_QWORD *)(v71 + 24) = this[16] + 3;
        *(_QWORD *)(v71 + 32) = v35;
        WdLogEvent5_WdWarning(v71);
        v72 = (unsigned int)v35;
      }
      else
      {
        v37 = ConvertMonitorModeTimingType(LOBYTE(v6[v29 + 29]), v28 + 28);
        v41 = v37;
        if ( v37 >= 0 )
        {
          v4 = (unsigned __int8)v80;
          v42 = v6[1];
          if ( (unsigned int)(v28[28] - 1) <= 2 )
            v4 = 1;
          v80 = v4;
          if ( v42 == v25 )
          {
            if ( this[22] )
            {
              v74 = WdLogNewEntry5_WdAssertion(0LL, v38, v39, v40);
              WdLogEvent5_WdAssertion(v74);
            }
            this[22] = (DXGMONITOR **)v28;
            v28[22] = 1;
          }
          else
          {
            v28[22] = 2;
          }
          ++*((_DWORD *)this + 38);
          v43 = (DXGMONITOR **)(v28 + 24);
          v44 = this[21];
          *v43 = v13;
          v43[1] = (DXGMONITOR *)v44;
          if ( *v44 != v13 )
            __fastfail(3u);
          *v44 = (DXGMONITOR *)v43;
          this[21] = v43;
          continue;
        }
        v73 = WdLogNewEntry5_WdWarning(0LL, v38, v39, v40);
        *(_QWORD *)(v73 + 24) = this[16] + 3;
        *(_QWORD *)(v73 + 32) = v41;
        WdLogEvent5_WdWarning(v73);
        v72 = (unsigned int)v41;
      }
      MonitorLogBadEDID(this[16] + 3, v72);
      operator delete(v28);
      LOBYTE(v4) = v80;
    }
  }
  else
  {
    v69 = WdLogNewEntry5_WdWarning(v19, 1LL, v16, v17);
    WdLogEvent5_WdWarning(v69);
  }
  v45 = this[16];
  v79 = 0;
  v46 = EDIDV1_ObtainSupportedMonitorFrequencyRanges(v45 + 3);
  v18 = v46;
  if ( v46 == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v24, v47, v48, v49);
    goto LABEL_32;
  }
  if ( ((v46 + 0x80000000) & 0x80000000) == 0 && v46 != -2147483643 )
    goto LABEL_52;
  v50 = v79;
  if ( !v79 )
  {
LABEL_32:
    if ( !(_BYTE)v4 && !*((_DWORD *)this + 50) )
      *((_DWORD *)this + 26) = 2;
    LODWORD(v18) = 0;
    goto LABEL_34;
  }
  v51 = v79;
  v52 = (char *)operator new[](52LL * (v79 - 1) + 56, 0x4D677844u, PagedPool);
  v7 = v52;
  if ( !v52 )
  {
LABEL_55:
    v77 = WdLogNewEntry5_WdError(v27);
    WdLogEvent5_WdError(v77);
    LODWORD(v18) = -1073741801;
    goto LABEL_34;
  }
  *(_WORD *)v52 = v50;
  v53 = EDIDV1_ObtainSupportedMonitorFrequencyRanges(this[16] + 3);
  v18 = v53;
  if ( v53 >= 0 )
  {
    v54 = 0;
    if ( v51 )
    {
      while ( 1 )
      {
        v55 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
        v56 = v55;
        if ( !v55 )
          goto LABEL_55;
        v57 = ConvertFrequencyRange(&v7[52 * v54 + 4], v55);
        v62 = v57;
        if ( v57 < 0 )
        {
          v76 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
          *(_QWORD *)(v76 + 24) = this[16] + 3;
          *(_QWORD *)(v76 + 32) = v62;
          WdLogEvent5_WdWarning(v76);
          MonitorLogBadEDID(this[16] + 3, (unsigned int)v62);
          operator delete(v56);
        }
        else
        {
          v63 = this[27];
          v64 = (DXGMONITOR *)(v56 + 6);
          v56[6] = this + 26;
          v56[7] = v63;
          if ( *v63 != (DXGMONITOR *)(this + 26) )
            __fastfail(3u);
          *v63 = v64;
          this[27] = (DXGMONITOR **)v64;
          ++*((_DWORD *)this + 50);
        }
        if ( ++v54 >= v51 )
          goto LABEL_32;
      }
    }
    goto LABEL_32;
  }
LABEL_52:
  v75 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v75 + 24) = v18;
  WdLogEvent5_WdError(v75);
LABEL_34:
  if ( v6 )
    operator delete(v6);
  if ( v7 )
    operator delete(v7);
  return (unsigned int)v18;
}
