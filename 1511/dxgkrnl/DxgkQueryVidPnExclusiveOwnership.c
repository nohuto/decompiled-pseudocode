/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C0132040
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0011020 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001102C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z @ 0x1C00B2138 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXE@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C012486C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rbp
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  void *v12; // rbx
  bool v13; // r8
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGGLOBAL *Global; // rax
  _QWORD *v25; // rdx
  _DWORD *v26; // rdx
  _DWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  void *v30[2]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (void **)((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2126);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v11 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v3 = *v11;
    *(_OWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v11[1];
    memset(v3 + 7, 0, 0x28uLL);
    *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = -1;
    v12 = *v3;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 12), *v3, 1);
    v15 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 12), v13);
    if ( v15 >= 0 )
    {
      *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 12));
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)(v3 + 4), Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)(v3 + 4), 1u);
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        Global = DXGGLOBAL::GetGlobal(v22);
        v15 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)(v3 + 7),
                1);
        if ( v15 >= 0 )
        {
          v25 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v25 = (_QWORD *)MmUserProbeAddress;
          *v25 = *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
          v26 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v26 = (_DWORD *)MmUserProbeAddress;
          *v26 = *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          v27 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v27 = (_DWORD *)MmUserProbeAddress;
          *v27 = *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
        }
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v23 + 24) = 32073LL;
        WdLogEvent5_WdError(v23);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 4));
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 12), v28, v29);
      v21 = (qword_1C00467F0 & 2) == 0;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v16 + 24) = v12;
      WdLogEvent5_WdError(v16);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 12), v17, v18);
      v20 = qword_1C00467F0;
      v21 = (qword_1C00467F0 & 2) == 0;
    }
    if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v20, &EventProfilerExit, v19, 2126);
    return (unsigned int)v15;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 32037LL;
    WdLogEvent5_WdError(v7);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2126);
    return 3221225485LL;
  }
}
