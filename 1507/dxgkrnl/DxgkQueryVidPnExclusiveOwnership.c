/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C012BA90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00DB29C (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C011ECF4 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGPROCESS **v3; // rbp
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  void *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  _DWORD *v28; // rdx
  _QWORD *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGGLOBAL *Global; // rax
  _DWORD *v34; // rdx
  __int64 v35; // [rsp+60h] [rbp+0h] BYREF

  v3 = (DXGPROCESS **)((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2126);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v11 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *v11;
    *(_OWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v11[1];
    memset(v3 + 11, 0, 0x28uLL);
    *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = -1;
    v12 = *(void **)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 3), v12, 1);
    v17 = DXGPROCESSMUTEXBYHANDLE::Acquire((DXGPROCESSMUTEXBYHANDLE *)(v3 + 3), v13, v14, v15);
    if ( v17 >= 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 3));
      v24 = 0LL;
      *v3 = (DXGPROCESS *)*((_QWORD *)Current + 10);
      v26 = _guard_dispatch_icall_fptr();
      *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v26;
      if ( v26
        && (v24 = _guard_dispatch_icall_fptr(),
            (*(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24) != 0LL)
        && (unsigned int)_guard_dispatch_icall_fptr() )
      {
        Global = DXGGLOBAL::GetGlobal(v25, v30, v31, v32);
        v17 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)(v3 + 11),
                1LL);
        if ( v17 >= 0 )
        {
          v29 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v29 = (_QWORD *)MmUserProbeAddress;
          *v29 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74);
          v34 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v34 = (_DWORD *)MmUserProbeAddress;
          *v34 = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
          v28 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v28 = (_DWORD *)MmUserProbeAddress;
          *v28 = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C);
        }
      }
      else
      {
        v17 = -1073741811;
        v27 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v27 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v27);
      }
      if ( v24 )
        _guard_dispatch_icall_fptr();
      if ( v26 )
        _guard_dispatch_icall_fptr();
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(v3 + 3, (__int64)v28, (__int64)v29);
      v23 = (qword_1C00467F0 & 2) == 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = v12;
      WdLogEvent5_WdError(v18);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(v3 + 3, v19, v20);
      v22 = qword_1C00467F0;
      v23 = (qword_1C00467F0 & 2) == 0;
    }
    if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v22, &EventProfilerExit, v21, 2126);
    return (unsigned int)v17;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 31332LL;
    WdLogEvent5_WdError(v7);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2126);
    return 3221225485LL;
  }
}
