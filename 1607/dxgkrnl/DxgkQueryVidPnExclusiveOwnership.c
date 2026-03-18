/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C01504E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00015FC (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00114CC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00CE1D0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C014478C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v13; // rax
  void *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGGLOBAL *Global; // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  _DWORD *v29; // rdx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  _BYTE v35[24]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2126);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v13 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v13;
    *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v13[1];
    memset((void *)(v3 + 56), 0, 0x28uLL);
    *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = -1;
    v14 = *(void **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 96), v14, 4096);
    LODWORD(v16) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 96), 1);
    if ( (_DWORD)v16 == -1073741790 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v17 + 24) = 1118LL;
        WdLogEvent5_WdAssertion(v17);
      }
      *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 1024;
      LODWORD(v16) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 96), 1);
    }
    if ( (int)v16 >= 0 )
    {
      *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 96));
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL), ProcessDxgProcess);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL), 1u);
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        Global = DXGGLOBAL::GetGlobal(v23);
        v26 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                v3 + 56,
                1);
        v16 = v26;
        if ( v26 < 0 )
        {
          v32 = *((unsigned int *)DXGGLOBAL::GetGlobal(v27) + 264);
          if ( (v32 & 2) != 0 )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31, v33);
            v34[3] = 275LL;
            v34[4] = 33LL;
            v34[5] = v16;
            v34[6] = 0LL;
            v34[7] = 0LL;
            WdLogEvent5_WdCriticalError(v34);
          }
        }
        else
        {
          v28 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v28 = (_QWORD *)MmUserProbeAddress;
          *v28 = *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
          v29 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v29 = (_DWORD *)MmUserProbeAddress;
          *v29 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          v30 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v24 + 24) = 7416LL;
        WdLogEvent5_WdError(v24);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL));
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = v14;
      WdLogEvent5_WdError(v18);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 96), v19, v20);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v21, &EventProfilerExit, v22, 2126);
    return (unsigned int)v16;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 7373LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2126);
    return 3221225485LL;
  }
}
