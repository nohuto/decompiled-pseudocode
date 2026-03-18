/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0185E2C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     GTF_GetVideoModeDescriptor @ 0x1C000BDF4 (GTF_GetVideoModeDescriptor.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C00CA488 (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rax
  unsigned __int16 *v10; // r12
  __int64 v11; // r15
  int v12; // edi
  __int64 v13; // r13
  const wchar_t *v14; // r14
  __int64 v15; // r9
  int VideoModeDescriptor; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // r14
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int16 *v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int128 v40; // [rsp+30h] [rbp-98h]
  unsigned int v41[20]; // [rsp+40h] [rbp-88h] BYREF
  int v42; // [rsp+D0h] [rbp+8h]
  const wchar_t *v43; // [rsp+D8h] [rbp+10h]

  v42 = 0;
  v2 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v2 + 24) = this;
  WdLogEvent5_WdDmmEvent(v2);
  if ( *((_DWORD *)this + 38) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (_QWORD *)((char *)this + 160);
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (unsigned __int16 *)&unk_1C0031670;
  v11 = 0LL;
  *(_QWORD *)&v40 = 0x800000008LL;
  *((_QWORD *)&v40 + 1) = 8LL;
  v12 = 1;
  while ( 2 )
  {
    v13 = 0LL;
    v43 = L"<FHKU";
    v14 = L"<FHKU";
    do
    {
      memset(v41, 0, 0x38uLL);
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(*v10, v10[1], *v14, v15, 0, (__int64)v41);
      v18 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v17);
        v34 = 2LL;
        v35 = v33;
        v36 = (unsigned __int16 *)((char *)&unk_1C0031670 + 4 * v11);
        v37 = (_QWORD *)(v33 + 24);
        do
        {
          v38 = *v36++;
          *v37++ = v38;
          --v34;
        }
        while ( v34 );
        *(_QWORD *)(v35 + 48) = v18;
        *(_QWORD *)(v35 + 40) = aFhku[v13];
        WdLogEvent5_WdError(v35);
        goto LABEL_22;
      }
      v19 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v23 = v19;
      if ( !v19 )
      {
        v32 = WdLogNewEntry5_WdError(v20);
        WdLogEvent5_WdError(v32);
        LODWORD(v18) = -1073741801;
        goto LABEL_23;
      }
      *v19 = (*((_DWORD *)this + 39))++;
      LODWORD(v18) = ConvertVideoSignalInfo(v41, (unsigned __int64)(v19 + 2), v21, v22);
      if ( (int)v18 < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      v23[16] = 2;
      *(_OWORD *)(v23 + 17) = v40;
      v23[21] = 1;
      v23[22] = 2;
      v23[28] = 5;
      v29 = v23 + 24;
      v30 = (_QWORD *)*((_QWORD *)this + 21);
      *v29 = v8;
      v29[1] = v30;
      if ( (_QWORD *)*v30 != v8 )
        __fastfail(3u);
      ++v42;
      v13 = (unsigned int)(v13 + 1);
      *v30 = v29;
      *((_QWORD *)this + 21) = v29;
      ++*((_DWORD *)this + 38);
      v14 = ++v43;
    }
    while ( (unsigned int)v13 < 5 );
    v11 = (unsigned int)(v11 + 1);
    v10 += 2;
    if ( (unsigned int)v11 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 26) != (DXGMONITOR *)((char *)this + 208) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    WdLogEvent5_WdAssertion(v31);
  }
  *((_DWORD *)this + 26) = 3;
LABEL_22:
  if ( (int)v18 >= 0 )
    goto LABEL_24;
LABEL_23:
  v12 = 0;
LABEL_24:
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (8 * v12)) & 8;
  return (unsigned int)v18;
}
