/*
 * XREFs of DxgkCheckOcclusion @ 0x1C00C5750
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0011020 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001102C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C0097078 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[64]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2038);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v4;
    if ( *(_QWORD *)v3 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        v14 = -1071775738;
        *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)(v3 + 8), Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)(v3 + 8), 1u);
        if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v15);
          if ( DXGGLOBAL::IsWindowVisible(Global, (const struct tagRECT *const)(v3 + 32)) )
            v14 = 0;
        }
        else
        {
          v26 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v26 + 24) = 288LL;
          WdLogEvent5_WdError(v26);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 8));
        v19 = (qword_1C00467F0 & 2) == 0;
      }
      else
      {
        v14 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = -1071775738LL;
        v17 = qword_1C00467F0;
        v19 = (qword_1C00467F0 & 2) == 0;
      }
      if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v17, &EventProfilerExit, v18, 2038);
      return v14;
    }
    v25 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    v24 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v23 = qword_1C00467F0;
    v24 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v23, &EventProfilerExit, v22, 2038);
  return 3221225485LL;
}
