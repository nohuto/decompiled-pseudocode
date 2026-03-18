/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C012C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000E1A4 (-ForceHardwareProtectionNonVisible@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // r8
  unsigned int v39; // r9d
  ADAPTER_DISPLAY *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  _BYTE v43[96]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 31667LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2130);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)v4;
  v11 = *(_DWORD *)(v4 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v16 = *(_QWORD *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = Current;
    *(_QWORD *)(v17 + 32) = *(unsigned int *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    WdLogEvent5_WdError(v17);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v16 + 1976) )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = v16;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 32),
    *(struct DXGADAPTER *const *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    0LL);
  v19 = COREADAPTERACCESS::AcquireExclusive((_QWORD *)(v3 + 32));
  v24 = v19;
  if ( v19 >= 0 )
  {
    v28 = *(unsigned int *)(((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    if ( (unsigned int)v28 >= *(_DWORD *)(*(_QWORD *)(v16 + 1976) + 80LL) )
    {
      v29 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      *(_QWORD *)(v29 + 24) = v28;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      goto LABEL_14;
    }
    DXGPROCESS::GetCurrent(v21);
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 1976) + 112LL) + 1008 * v28 + 992) = v11 != 0;
      v36 = *(_QWORD *)(v16 + 1976);
      if ( v11 )
      {
        *(_BYTE *)(v36 + 256) = 1;
      }
      else
      {
        *(_BYTE *)(v36 + 256) = 0;
        v37 = 0;
        v38 = *(_QWORD *)(v16 + 1976);
        v39 = *(_DWORD *)(v38 + 80);
        if ( v39 )
        {
          while ( !*(_BYTE *)(1008LL * v37 + *(_QWORD *)(v38 + 112) + 992) )
          {
            if ( ++v37 >= v39 )
              goto LABEL_36;
          }
          *(_BYTE *)(v38 + 256) = 1;
        }
      }
LABEL_36:
      if ( !v11 )
      {
        v40 = *(ADAPTER_DISPLAY **)(v16 + 1976);
        if ( *(_BYTE *)(*((_QWORD *)v40 + 14) + 1008 * v28 + 993) )
        {
          ADAPTER_DISPLAY::ForceHardwareProtectionNonVisible(v40, v28, 0);
          _guard_dispatch_icall_fptr();
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v41, &EventProfilerExit, v42, 2130);
      return 0LL;
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v34 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v34);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v35, 2130);
      return 3221225506LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdError(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v26, &EventProfilerExit, v27, 2130);
    return (unsigned int)v24;
  }
}
