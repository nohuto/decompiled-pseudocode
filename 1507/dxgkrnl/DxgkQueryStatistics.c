/*
 * XREFs of DxgkQueryStatistics @ 0x1C012B490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00DB29C (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C011ECF4 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0127860 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkQueryStatistics(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v5; // edi
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  struct DXGPROCESS *Process; // r15
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct DXGPROCESS *Current; // r15
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  int ProcessStatistics; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  _OWORD *v62; // rcx
  ULONG64 v63; // r8
  __int64 v64; // rax
  _OWORD *v65; // rax
  __int64 v66; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 2049;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2049);
  v5 = -1073741811;
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  v7 = (_OWORD *)(v3 + 80);
  v8 = 6LL;
  v9 = 6LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    *(v7 - 1) = v6[7];
    v6 += 8;
    --v9;
  }
  while ( v9 );
  *v7 = *v6;
  v7[1] = v6[1];
  *((_QWORD *)v7 + 4) = *((_QWORD *)v6 + 4);
  memset((void *)(v3 + 104), 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(
          Global,
          *(struct _LUID *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54));
  if ( !v17 )
  {
    v64 = WdLogNewEntry5_WdWarning(v16, v15, v18, v19);
    *(_QWORD *)(v64 + 24) = *(unsigned int *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
    *(_QWORD *)(v64 + 32) = *(int *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    WdLogEvent5_WdWarning(v64);
    goto LABEL_58;
  }
  v20 = *(void **)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( !v20
    || (v21 = *(_DWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), v21 > 8)
    || (v16 = 342LL, !_bittest((const int *)&v16, v21)) )
  {
    Current = DXGPROCESS::GetCurrent(v16);
    if ( !Current )
    {
      v61 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      *(_QWORD *)(v61 + 24) = 9091LL;
      WdLogEvent5_WdWarning(v61);
      goto LABEL_56;
    }
    *(_QWORD *)v3 = v17;
    *(_BYTE *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL));
    v53 = *((unsigned int *)v17 + 40);
    if ( (_DWORD)v53 != 1 )
    {
      v60 = WdLogNewEntry5_WdWarning(v53, v50, v51, v52);
      *(_QWORD *)(v60 + 24) = *(unsigned int *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
      *(_QWORD *)(v60 + 32) = *(int *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      WdLogEvent5_WdWarning(v60);
LABEL_53:
      if ( *(_BYTE *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_56;
    }
    v54 = *((_QWORD *)v17 + 248);
    if ( !v54 )
    {
      v55 = WdLogNewEntry5_WdError(v53);
      *(_QWORD *)(v55 + 24) = v17;
      *(_QWORD *)(v55 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v55);
      if ( *(_BYTE *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL));
      v41 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_19;
    }
    if ( !*(_QWORD *)(v54 + 400) )
    {
      v56 = WdLogNewEntry5_WdAssertion(v53, v50, v51, v52);
      *(_QWORD *)(v56 + 24) = 9036LL;
      WdLogEvent5_WdAssertion(v56);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v17 + 248) + 376LL) )
    {
      v57 = WdLogNewEntry5_WdAssertion(0LL, v50, v51, v52);
      *(_QWORD *)(v57 + 24) = 9037LL;
      WdLogEvent5_WdAssertion(v57);
    }
    v58 = *(_DWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( v58 )
    {
      if ( v58 != 3 && v58 != 5 && v58 != 7 )
      {
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)(v3 + 80), v17, Current, v52);
LABEL_51:
        v5 = ProcessStatistics;
        goto LABEL_53;
      }
    }
    else
    {
      v5 = _guard_dispatch_icall_fptr();
      if ( v5 < 0 )
        goto LABEL_53;
    }
    ProcessStatistics = _guard_dispatch_icall_fptr();
    goto LABEL_51;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 40), v20, 1);
  v5 = DXGPROCESSMUTEXBYHANDLE::Acquire((DXGPROCESSMUTEXBYHANDLE *)(v3 + 40), v22, v23, v24);
  if ( v5 < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    *(_QWORD *)(v29 + 24) = *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    WdLogEvent5_WdWarning(v29);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 40), v30, v31);
LABEL_56:
    DXGADAPTER::ReleaseReference(v17);
LABEL_58:
    if ( v5 >= 0 )
    {
      v62 = (_OWORD *)(a1 + 24);
      v63 = MmUserProbeAddress;
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v62 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v65 = (_OWORD *)(v3 + 104);
      do
      {
        *v62 = *v65;
        v62[1] = v65[1];
        v62[2] = v65[2];
        v62[3] = v65[3];
        v62[4] = v65[4];
        v62[5] = v65[5];
        v62[6] = v65[6];
        v62 += 8;
        *(v62 - 1) = v65[7];
        v65 += 8;
        --v8;
      }
      while ( v8 );
      *(_QWORD *)v62 = *(_QWORD *)v65;
    }
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v62, &EventProfilerExit, v63, 2049);
    return (unsigned int)v5;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 40));
  *(_QWORD *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v17;
  *(_BYTE *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16));
  v34 = *((unsigned int *)v17 + 40);
  if ( (_DWORD)v34 != 1 )
  {
LABEL_28:
    if ( *(_BYTE *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16));
    goto LABEL_30;
  }
  v35 = *((_QWORD *)v17 + 248);
  if ( v35 )
  {
    if ( !*(_QWORD *)(v35 + 400) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v34, v30, v31, v33);
      *(_QWORD *)(v43 + 24) = 9001LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v17 + 248) + 376LL) )
    {
      v44 = WdLogNewEntry5_WdAssertion(0LL, v30, v31, v33);
      *(_QWORD *)(v44 + 24) = 9002LL;
      WdLogEvent5_WdAssertion(v44);
    }
    v5 = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)(v3 + 80), v17, Process, v33);
    goto LABEL_28;
  }
  v36 = WdLogNewEntry5_WdError(v34);
  *(_QWORD *)(v36 + 24) = v17;
  *(_QWORD *)(v36 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v36);
  if ( *(_BYTE *)(((unsigned __int64)&v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESS **)(v3 + 40), v37, v38);
  v40 = qword_1C00467F0;
  v41 = (qword_1C00467F0 & 2) == 0;
LABEL_19:
  if ( !v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v40, &EventProfilerExit, v39, 2049);
  return 3221225659LL;
}
