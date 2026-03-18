/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01B40D8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     GTF_GetVideoModeDescriptor @ 0x1C000E04C (GTF_GetVideoModeDescriptor.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C00F2D40 (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rax
  unsigned __int16 *v7; // r12
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // r13
  const wchar_t *v11; // r14
  __int64 v12; // r9
  int VideoModeDescriptor; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  _DWORD *v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int16 *v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int128 v32; // [rsp+30h] [rbp-98h]
  unsigned int v33[20]; // [rsp+40h] [rbp-88h] BYREF
  int v34; // [rsp+D0h] [rbp+8h]
  const wchar_t *v35; // [rsp+D8h] [rbp+10h]

  v34 = 0;
  v2 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v2 + 24) = this;
  WdLogEvent5_WdDmmEvent(v2);
  if ( *((_DWORD *)this + 38) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (_QWORD *)((char *)this + 160);
  if ( (_QWORD *)*v5 != v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (unsigned __int16 *)&unk_1C003FB80;
  v8 = 0LL;
  *(_QWORD *)&v32 = 0x800000008LL;
  *((_QWORD *)&v32 + 1) = 8LL;
  v9 = 1;
  while ( 2 )
  {
    v10 = 0LL;
    v35 = L"<FHKU";
    v11 = L"<FHKU";
    do
    {
      memset(v33, 0, 0x38uLL);
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(*v7, v7[1], *v11, v12, 0, (__int64)v33);
      v15 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v14);
        v26 = 2LL;
        v27 = v25;
        v28 = (unsigned __int16 *)((char *)&unk_1C003FB80 + 4 * v8);
        v29 = (_QWORD *)(v25 + 24);
        do
        {
          v30 = *v28++;
          *v29++ = v30;
          --v26;
        }
        while ( v26 );
        *(_QWORD *)(v27 + 48) = v15;
        *(_QWORD *)(v27 + 40) = aFhku[v10];
        WdLogEvent5_WdError(v27);
        goto LABEL_22;
      }
      v16 = operator new(0x78uLL, 0x4D677844u, PagedPool);
      v18 = v16;
      if ( !v16 )
      {
        v24 = WdLogNewEntry5_WdError(v17);
        WdLogEvent5_WdError(v24);
        LODWORD(v15) = -1073741801;
        goto LABEL_23;
      }
      *v16 = (*((_DWORD *)this + 39))++;
      LODWORD(v15) = ConvertVideoSignalInfo(v33, (__int64)(v16 + 2));
      if ( (int)v15 < 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      v18[16] = 2;
      *(_OWORD *)(v18 + 17) = v32;
      v18[21] = 1;
      v18[22] = 2;
      v18[28] = 5;
      v21 = v18 + 24;
      v22 = (_QWORD *)*((_QWORD *)this + 21);
      if ( (_QWORD *)*v22 != v5 )
        __fastfail(3u);
      ++v34;
      v10 = (unsigned int)(v10 + 1);
      *v21 = v5;
      v21[1] = v22;
      *v22 = v21;
      *((_QWORD *)this + 21) = v21;
      ++*((_DWORD *)this + 38);
      v11 = ++v35;
    }
    while ( (unsigned int)v10 < 5 );
    v8 = (unsigned int)(v8 + 1);
    v7 += 2;
    if ( (unsigned int)v8 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 26) != (DXGMONITOR *)((char *)this + 208) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v23);
  }
  *((_DWORD *)this + 26) = 3;
LABEL_22:
  if ( (int)v15 >= 0 )
    goto LABEL_24;
LABEL_23:
  v9 = 0;
LABEL_24:
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (8 * v9)) & 8;
  return (unsigned int)v15;
}
