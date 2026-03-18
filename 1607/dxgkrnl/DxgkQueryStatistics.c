/*
 * XREFs of DxgkQueryStatistics @ 0x1C014FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00CE1D0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C014478C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C014E218 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkQueryStatistics(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v5; // edi
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  struct DXGPROCESS *Process; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 CurrentProcess; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGPROCESS *ProcessDxgProcess; // r15
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  int ProcessStatistics; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  _OWORD *v57; // rcx
  ULONG64 v58; // r8
  __int64 v59; // rax
  _OWORD *v60; // rax
  int v61; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) = 2049;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2049);
  v5 = -1073741811;
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  v7 = (_OWORD *)(v3 + 64);
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
  memset((void *)(v3 + 88), 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal(v10);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(
          Global,
          *(struct _LUID *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44),
          (unsigned __int64 *)(v3 + 56));
  if ( !v14 )
  {
    v59 = WdLogNewEntry5_WdWarning(v13, v12, v15, v16);
    *(_QWORD *)(v59 + 24) = *(unsigned int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
    *(_QWORD *)(v59 + 32) = *(int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    WdLogEvent5_WdWarning(v59);
    goto LABEL_58;
  }
  v17 = *(void **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  if ( !v17
    || (v18 = *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40), v18 > 9)
    || (v13 = 854LL, !_bittest((const int *)&v13, v18)) )
  {
    CurrentProcess = PsGetCurrentProcess(v13);
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v39);
    if ( !ProcessDxgProcess )
    {
      v56 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v56 + 24) = 3446LL;
      WdLogEvent5_WdWarning(v56);
      goto LABEL_56;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 32), v14, 1);
    v48 = *((unsigned int *)v14 + 44);
    if ( (_DWORD)v48 != 1 )
    {
      v55 = WdLogNewEntry5_WdWarning(v48, v45, v46, v47);
      *(_QWORD *)(v55 + 24) = *(unsigned int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
      *(_QWORD *)(v55 + 32) = *(int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      WdLogEvent5_WdWarning(v55);
LABEL_53:
      if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 32));
      goto LABEL_56;
    }
    v49 = *((_QWORD *)v14 + 267);
    if ( !v49 )
    {
      v50 = WdLogNewEntry5_WdError(v48);
      *(_QWORD *)(v50 + 24) = v14;
      *(_QWORD *)(v50 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v50);
      if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 32));
      v34 = (qword_1C0056840 & 2) == 0;
      goto LABEL_19;
    }
    if ( !*(_QWORD *)(v49 + 400) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v51 + 24) = 3391LL;
      WdLogEvent5_WdAssertion(v51);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v14 + 267) + 376LL) )
    {
      v52 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v52 + 24) = 3392LL;
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( v53 )
    {
      if ( v53 != 3 && v53 != 5 && v53 != 7 )
      {
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)(v3 + 64), v14, ProcessDxgProcess);
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
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 880), v17, 1024);
  v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 880), 1);
  if ( v5 < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    WdLogEvent5_WdWarning(v23);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 880), v24, v25);
LABEL_56:
    DXGADAPTER::ReleaseReference(v14);
LABEL_58:
    if ( v5 >= 0 )
    {
      v57 = (_OWORD *)(a1 + 24);
      v58 = MmUserProbeAddress;
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v57 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v60 = (_OWORD *)(v3 + 88);
      do
      {
        *v57 = *v60;
        v57[1] = v60[1];
        v57[2] = v60[2];
        v57[3] = v60[3];
        v57[4] = v60[4];
        v57[5] = v60[5];
        v57[6] = v60[6];
        v57 += 8;
        *(v57 - 1) = v60[7];
        v60 += 8;
        --v8;
      }
      while ( v8 );
      *(_QWORD *)v57 = *(_QWORD *)v60;
    }
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v57, &EventProfilerExit, v58, 2049);
    return (unsigned int)v5;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 880));
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 8), v14, 1);
  v27 = *((unsigned int *)v14 + 44);
  if ( (_DWORD)v27 != 1 )
  {
LABEL_28:
    if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 8));
    goto LABEL_30;
  }
  v28 = *((_QWORD *)v14 + 267);
  if ( v28 )
  {
    if ( !*(_QWORD *)(v28 + 400) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v36 + 24) = 3356LL;
      WdLogEvent5_WdAssertion(v36);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v14 + 267) + 376LL) )
    {
      v37 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v37 + 24) = 3357LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v5 = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)(v3 + 64), v14, Process);
    goto LABEL_28;
  }
  v29 = WdLogNewEntry5_WdError(v27);
  *(_QWORD *)(v29 + 24) = v14;
  *(_QWORD *)(v29 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v29);
  if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 8));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 880), v30, v31);
  v33 = qword_1C0056840;
  v34 = (qword_1C0056840 & 2) == 0;
LABEL_19:
  if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v33, &EventProfilerExit, v32, 2049);
  return 3221225659LL;
}
