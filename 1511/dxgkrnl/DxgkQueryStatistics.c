/*
 * XREFs of DxgkQueryStatistics @ 0x1C0131A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00B2138 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C012486C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C012DA40 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
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
  int v19; // ecx
  bool v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KTHREAD ***Process; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rcx
  bool v36; // zf
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD ***Current; // r15
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
  char v61; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 2049;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2049);
  v5 = -1073741811;
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  v7 = (_OWORD *)(v3 + 48);
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
  memset((void *)(v3 + 72), 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal(v10);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(
          Global,
          *(struct _LUID *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34));
  if ( !v14 )
  {
    v59 = WdLogNewEntry5_WdWarning(v13, v12, v15, v16);
    *(_QWORD *)(v59 + 24) = *(unsigned int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
    *(_QWORD *)(v59 + 32) = *(int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    WdLogEvent5_WdWarning(v59);
    goto LABEL_58;
  }
  v17 = *(void **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( !v17
    || (v18 = *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30), v18 > 8)
    || (v19 = 342, !_bittest(&v19, v18)) )
  {
    Current = (struct _KTHREAD ***)DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v56 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v56 + 24) = 9436LL;
      WdLogEvent5_WdWarning(v56);
      goto LABEL_56;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL),
      v14,
      1);
    v48 = *((unsigned int *)v14 + 40);
    if ( (_DWORD)v48 != 1 )
    {
      v55 = WdLogNewEntry5_WdWarning(v48, v45, v46, v47);
      *(_QWORD *)(v55 + 24) = *(unsigned int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
      *(_QWORD *)(v55 + 32) = *(int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      WdLogEvent5_WdWarning(v55);
LABEL_53:
      if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_56;
    }
    v49 = *((_QWORD *)v14 + 249);
    if ( !v49 )
    {
      v50 = WdLogNewEntry5_WdError(v48);
      *(_QWORD *)(v50 + 24) = v14;
      *(_QWORD *)(v50 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v50);
      if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL));
      v36 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_19;
    }
    if ( !*(_QWORD *)(v49 + 424) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v51 + 24) = 9381LL;
      WdLogEvent5_WdAssertion(v51);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v14 + 249) + 400LL) )
    {
      v52 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v52 + 24) = 9382LL;
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( v53 )
    {
      if ( v53 != 3 && v53 != 5 && v53 != 7 )
      {
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)(v3 + 48), v14, Current);
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
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 864), v17, 1);
  v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 864), v20);
  if ( v5 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v25 + 24) = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    WdLogEvent5_WdWarning(v25);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 864), v26, v27);
LABEL_56:
    DXGADAPTER::ReleaseReference(v14);
LABEL_58:
    if ( v5 >= 0 )
    {
      v57 = (_OWORD *)(a1 + 24);
      v58 = MmUserProbeAddress;
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v57 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v60 = (_OWORD *)(v3 + 72);
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
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v57, &EventProfilerExit, v58, 2049);
    return (unsigned int)v5;
  }
  Process = (struct _KTHREAD ***)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 864));
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16), v14, 1);
  v29 = *((unsigned int *)v14 + 40);
  if ( (_DWORD)v29 != 1 )
  {
LABEL_28:
    if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16));
    goto LABEL_30;
  }
  v30 = *((_QWORD *)v14 + 249);
  if ( v30 )
  {
    if ( !*(_QWORD *)(v30 + 424) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v38 + 24) = 9346LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v14 + 249) + 400LL) )
    {
      v39 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v39 + 24) = 9347LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v5 = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)(v3 + 48), v14, Process);
    goto LABEL_28;
  }
  v31 = WdLogNewEntry5_WdError(v29);
  *(_QWORD *)(v31 + 24) = v14;
  *(_QWORD *)(v31 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v31);
  if ( *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 16));
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 864), v32, v33);
  v35 = qword_1C00467F0;
  v36 = (qword_1C00467F0 & 2) == 0;
LABEL_19:
  if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v35, &EventProfilerExit, v34, 2049);
  return 3221225659LL;
}
