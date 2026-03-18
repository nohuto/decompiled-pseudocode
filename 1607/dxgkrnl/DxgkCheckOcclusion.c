/*
 * XREFs of DxgkCheckOcclusion @ 0x1C0073C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00015FC (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00114CC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00A3AC4 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[64]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2038);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v4;
    if ( *(_QWORD *)v3 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        v16 = -1071775738;
        *(_OWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)(v3 + 8), ProcessDxgProcess);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)(v3 + 8), 1u);
        if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( DXGGLOBAL::IsWindowVisible(Global, (const struct tagRECT *const)(v3 + 32)) )
            v16 = 0;
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v28 + 24) = 312LL;
          WdLogEvent5_WdError(v28);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 8));
        v21 = (qword_1C0056840 & 2) == 0;
      }
      else
      {
        v16 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = -1071775738LL;
        v19 = qword_1C0056840;
        v21 = (qword_1C0056840 & 2) == 0;
      }
      if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v19, &EventProfilerExit, v20, 2038);
      return v16;
    }
    v27 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    v26 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    v25 = qword_1C0056840;
    v26 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v24, 2038);
  return 3221225485LL;
}
